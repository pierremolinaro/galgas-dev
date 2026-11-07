#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GGS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapper var_fw_1497 = GGS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  UpEnumerator_stringlist enumerator_1565 (var_fw_1497.getter_allDirectoryPaths (SOURCE_FILE ("libpmHandling.galgas4", 32))) ;
  while (enumerator_1565.hasCurrentObject ()) {
    GGS_string var_actualDirectory_1616 = constinArgument_inLIBPMPath.add_operation (enumerator_1565.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 33)) ;
    var_actualDirectory_1616.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 34)) ;
    enumerator_1565.gotoNextObject () ;
  }
  GGS_stringset var_allNeededFileSet_1739 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_1769 (var_fw_1497.getter_allTextFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 38))) ;
  while (enumerator_1769.hasCurrentObject ()) {
    GGS_string var_contents_1811 = var_fw_1497.getter_textFileContentsAtPath (enumerator_1769.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 39)) ;
    GGS_string var_actualFilePath_1865 = constinArgument_inLIBPMPath.add_operation (enumerator_1769.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 40)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_actualFilePath_1865.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas4", 41)).objectCompare (GGS_string ("py"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_bool joker_2027 ; // Joker input parameter
        var_contents_1811.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1865, joker_2027, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 42)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool joker_2105 ; // Joker input parameter
      var_contents_1811.method_writeToFileWhenDifferentContents (var_actualFilePath_1865, joker_2105, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 44)) ;
    }
    var_allNeededFileSet_1739.plusPlusAssignOperation (enumerator_1769.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 46)) ;
    enumerator_1769.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_2188 (var_fw_1497.getter_allBinaryFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 49))) ;
  while (enumerator_2188.hasCurrentObject ()) {
    GGS_data var_contents_2232 = var_fw_1497.getter_binaryFileContentsAtPath (enumerator_2188.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 50)) ;
    GGS_string var_actualFilePath_2288 = constinArgument_inLIBPMPath.add_operation (enumerator_2188.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 51)) ;
    GGS_bool joker_2389 ; // Joker input parameter
    var_contents_2232.method_writeToFileWhenDifferentContents (var_actualFilePath_2288, joker_2389, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 52)) ;
    var_allNeededFileSet_1739.plusPlusAssignOperation (enumerator_2188.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 53)) ;
    enumerator_2188.gotoNextObject () ;
  }
  GGS_stringset var_allActualFileSet_2475 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_2505 (constinArgument_inLIBPMPath.getter_regularFiles (GGS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas4", 57))) ;
  while (enumerator_2505.hasCurrentObject ()) {
    var_allActualFileSet_2475.plusPlusAssignOperation (GGS_string ("/").add_operation (enumerator_2505.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58))  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58)) ;
    enumerator_2505.gotoNextObject () ;
  }
  GGS_stringset var_uselessFileSet_2601 = var_allActualFileSet_2475.substract_operation (var_allNeededFileSet_1739, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 60)) ;
  UpEnumerator_stringset enumerator_2661 (var_uselessFileSet_2601) ;
  while (enumerator_2661.hasCurrentObject ()) {
    {
    GGS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2661.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 62)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 62)) ;
    }
    enumerator_2661.gotoNextObject () ;
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
  result_result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 224)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS_semanticDeclarationListAST & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_8536 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 237)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8536, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 238)) ;
  }
  const GGS_templateLexiqueComponentAST temp_3 = this ;
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  GGS_lstring var_superKey_8690 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 239)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8536, var_superKey_8690 COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 240)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                 const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                 const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                 const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                 const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_superLexiqueIsTemplate_9709 ;
  GGS_terminalMap var_terminalMap_9743 ;
  GGS_indexingListAST var_indexingListAST_9766 ;
  GGS_terminalDeclarationListAST var_terminalListAST_9793 ;
  GGS_lexicalAttributeListAST var_lexicalAttributeListAST_9820 ;
  GGS_lexicalStyleListAST var_lexicalStyleListAST_9855 ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_9886 ;
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_9709, var_terminalMap_9743, var_indexingListAST_9766, var_terminalListAST_9793, var_lexicalAttributeListAST_9820, var_lexicalStyleListAST_9855, var_lexicalListDeclarationListAST_9886, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 254)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_9709.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLexiqueComponentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GGS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 265)) ;
    }
  }
  {
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GGS_bool (true), var_terminalMap_9743, var_indexingListAST_9766, var_terminalListAST_9793, var_lexicalAttributeListAST_9820, var_lexicalStyleListAST_9855, var_lexicalListDeclarationListAST_9886, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 268)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_11112 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 291)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11112, var_nameForUsefulness_11112, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 292)) ;
  }
  GGS_terminalDeclarationListAST var_terminalListAST_11553 ;
  GGS_lexicalAttributeListAST var_lexicalAttributeListAST_11580 ;
  GGS_lexicalStyleListAST var_lexicalStyleListAST_11615 ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_11646 ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_bool joker_11450 ; // Joker input parameter
  GGS_terminalMap joker_11488 ; // Joker input parameter
  GGS_indexingListAST joker_11515 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_11450, joker_11488, joker_11515, var_terminalListAST_11553, var_lexicalAttributeListAST_11580, var_lexicalStyleListAST_11615, var_lexicalListDeclarationListAST_11646, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 294)) ;
  GGS_lexicalTypeMap var_lexicalTypeMap_11775 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 305)) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_11913 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_11913, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 307)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_12032 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_12032, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 309)) ;
  }
  GGS_stringset var_unicodeTestFunctions_12159 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_12159, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 311)) ;
  }
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_12252 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_11913, var_lexicalFunctionMap_12032, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS_terminalList::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS_templateDelimitorList::init (inCompiler COMMA_HERE), GGS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_12159, inCompiler COMMA_HERE) ;
  GGS_bigint var_styleIndex_12655 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 328)) ;
  UpEnumerator_lexicalStyleListAST enumerator_12692 (var_lexicalStyleListAST_11615) ;
  while (enumerator_12692.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_12252.mProperty_mStyleMap.setter_insertKey (enumerator_12692.current (HERE).readProperty_mName (), enumerator_12692.current (HERE).readProperty_mComment (), var_styleIndex_12655.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 330)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 330)) ;
    }
    var_styleIndex_12655.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 331)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 331)) ;
    enumerator_12692.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_11775, var_lexicalAttributeListAST_11580, var_lexiqueAnalysisContext_12252.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 334)) ;
  }
  GGS_terminalList var_terminalList_13124 = GGS_terminalList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_terminalDeclarationListAST enumerator_13161 (var_terminalListAST_11553) ;
  while (enumerator_13161.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_13194 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_13161.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 343)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_lstring joker_13329 ; // Joker input parameter
        var_lexiqueAnalysisContext_12252.readProperty_mStyleMap ().method_searchKey (enumerator_13161.current (HERE).readProperty_mStyle (), joker_13329, var_terminalStyleIndex_13194, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 344)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_13370 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_13444 (enumerator_13161.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_13444.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_13558 ;
      var_lexiqueAnalysisContext_12252.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_13444.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_13558, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 348)) ;
      var_argumentTypeList_13370.plusPlusAssignOperation (GGS_lexicalSentValueList_2E_element::init_21__21__21_ (enumerator_13444.current (HERE).readProperty_mFormalSelector (), enumerator_13444.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_13558, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 349)) ;
      enumerator_13444.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_12252.mProperty_mTerminalMap.setter_insertKey (enumerator_13161.current (HERE).readProperty_mName (), var_argumentTypeList_13370, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 351)) ;
    }
    var_terminalList_13124.plusPlusAssignOperation (GGS_terminalList_2E_element::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_13161.current (HERE).readProperty_mName (), var_argumentTypeList_13370, enumerator_13161.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string (), enumerator_13161.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_13161.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 357)), var_terminalStyleIndex_13194, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 352)) ;
    enumerator_13161.gotoNextObject () ;
  }
  UpEnumerator_lexicalListDeclarationListAST enumerator_14067 (var_lexicalListDeclarationListAST_11646) ;
  while (enumerator_14067.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_14114 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_14067.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 362)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_14255 ; // Joker input parameter
        var_lexiqueAnalysisContext_12252.readProperty_mStyleMap ().method_searchKey (enumerator_14067.current (HERE).readProperty_mStyle (), joker_14255, var_terminalStyleIndex_14114, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 363)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_14296 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_14373 (enumerator_14067.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_14373.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_14487 ;
      var_lexiqueAnalysisContext_12252.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_14373.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_14487, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 367)) ;
      var_argumentTypeList_14296.plusPlusAssignOperation (GGS_lexicalSentValueList_2E_element::init_21__21__21_ (enumerator_14373.current (HERE).readProperty_mFormalSelector (), enumerator_14373.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_14487, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 368)) ;
      enumerator_14373.gotoNextObject () ;
    }
    UpEnumerator_lexicalListEntryListAST enumerator_14657 (enumerator_14067.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_14657.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_14681 = enumerator_14067.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_14657.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 371)) ;
      var_terminalList_13124.plusPlusAssignOperation (GGS_terminalList_2E_element::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_14657.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_14296, var_syntaxErrorMessage_14681, enumerator_14657.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_14657.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 377)), var_terminalStyleIndex_14114, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 372)) ;
      enumerator_14657.gotoNextObject () ;
    }
    enumerator_14067.gotoNextObject () ;
  }
  GGS_stringset var_unicodeStringToGenerate_15141 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_templateDelimitorList var_templateDelimitorList_15200 = GGS_templateDelimitorList::init (inCompiler COMMA_HERE) ;
  const GGS_templateLexiqueComponentAST temp_5 = this ;
  UpEnumerator_templateDelimitorListAST enumerator_15260 (temp_5.readProperty_mTemplateDelimitorList ()) ;
  while (enumerator_15260.hasCurrentObject ()) {
    var_unicodeStringToGenerate_15141.plusPlusAssignOperation (enumerator_15260.current (HERE).readProperty_mStartString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 385)) ;
    var_unicodeStringToGenerate_15141.plusPlusAssignOperation (enumerator_15260.current (HERE).readProperty_mEndString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 386)) ;
    var_templateDelimitorList_15200.plusPlusAssignOperation (GGS_templateDelimitorList_2E_element::init_21__21__21_ (enumerator_15260.current (HERE).readProperty_mStartString (), enumerator_15260.current (HERE).readProperty_mEndString (), enumerator_15260.current (HERE).readProperty_mPreserved (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 387)) ;
    enumerator_15260.gotoNextObject () ;
  }
  const GGS_templateLexiqueComponentAST temp_6 = this ;
  UpEnumerator_templateReplacementListAST enumerator_15648 (temp_6.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_15648.hasCurrentObject ()) {
    var_unicodeStringToGenerate_15141.plusPlusAssignOperation (enumerator_15648.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 391)) ;
    var_unicodeStringToGenerate_15141.plusPlusAssignOperation (enumerator_15648.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 392)) ;
    enumerator_15648.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas4", 396)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateLexiqueComponentAST temp_8 = this ;
      const GGS_templateLexiqueComponentAST temp_9 = this ;
      GGS_string var_headerContents_15998 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (inCompiler, temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 399)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 400)) COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 398))) ;
      const GGS_templateLexiqueComponentAST temp_10 = this ;
      const GGS_templateLexiqueComponentAST temp_11 = this ;
      const GGS_templateLexiqueComponentAST temp_12 = this ;
      const GGS_templateLexiqueComponentAST temp_13 = this ;
      GGS_string var_cppContents_16239 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (inCompiler, temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 404)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 405)), var_lexiqueAnalysisContext_12252.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_15141, var_templateDelimitorList_15200, var_terminalList_13124, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 403))) ;
      const GGS_templateLexiqueComponentAST temp_14 = this ;
      const GGS_templateLexiqueComponentAST temp_15 = this ;
      const GGS_templateLexiqueComponentAST temp_16 = this ;
      const GGS_templateLexiqueComponentAST temp_17 = this ;
      GGS_string var_swiftuiImplementation_16711 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_swiftuiImplementationZone (inCompiler, GGS_string ("lexique-").add_operation (temp_14.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 415)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 415)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 415)), temp_15.readProperty_mLexiqueComponentName ().readProperty_string (), temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_13124, var_templateDelimitorList_15200, temp_17.readProperty_mTemplateReplacementList (), var_lexicalStyleListAST_11615 COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 414))) ;
      const GGS_templateLexiqueComponentAST temp_18 = this ;
      const GGS_templateLexiqueComponentAST temp_19 = this ;
      const GGS_templateLexiqueComponentAST temp_20 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_lexiqueDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("lexique-").add_operation (temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 427)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 427)), temp_19.readProperty_mLexiqueComponentName ().readProperty_string (), temp_20.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_15998, var_cppContents_16239, var_swiftuiImplementation_16711, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 424)) ;
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
  result.appendString (" : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mUnused = false\n\n  @AppStorage(\"FontFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n\n  @AppStorage(\"LineHeightFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mLineHeight : Int = 12\n\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mDefaultColor : Color = .black\n\n") ;
  GGS_uint index_2922_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_2922 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_2922.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(\"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2922.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mColorFor_") ;
      result.appendString (enumerator_2922.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Color = .black\n\n  @AppStorage(\"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2922.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mBoldFor_") ;
      result.appendString (enumerator_2922.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2922.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mItalicFor_") ;
      result.appendString (enumerator_2922.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n") ;
      enumerator_2922.gotoNextObject () ;
      index_2922_.increment () ;
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
  result.appendString ("_template\")\n  private var mItalicFor_template : Bool = false\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var body : some View {\n    Form {\n      LabeledContent (\"Font\") { CustomFontPicker (fontBinding: self.$mFont) }\n      Picker(\"Line Height\", selection: self.$mLineHeight) {\n        Text(\"1.0\").tag(10)\n        Text(\"1.1\").tag(11)\n        Text(\"1.2\").tag(12)\n        Text(\"1.5\").tag(15)\n        Text(\"1.7\").tag(17)\n        Text(\"2.0\").tag(20)\n      }.pickerStyle(.automatic)\n      LabeledContent (\"Default Color\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mDefaultColor).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mUnused).hidden () // Hidden, unused\n          Toggle (\"Italic\", isOn: self.$mUnused).hidden () // Hidden, unused\n        }\n      }\n") ;
  GGS_uint index_4818_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_4818 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_4818.hasCurrentObject ()) {
      result.appendString ("      LabeledContent (") ;
      result.appendString (enumerator_4818.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 123)).stringValue ()) ;
      result.appendString (") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_") ;
      result.appendString (enumerator_4818.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (").labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_") ;
      result.appendString (enumerator_4818.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n          Toggle (\"Italic\", isOn: self.$mItalicFor_") ;
      result.appendString (enumerator_4818.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n        }\n      }\n") ;
      enumerator_4818.gotoNextObject () ;
      index_4818_.increment () ;
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
  GGS_uint index_7231_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_7231 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_7231.hasCurrentObject ()) {
      result.appendString ("    if let s = ud.string (forKey: \"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"), let v = Color (rawValue: s) {\n      if self.mColorFor_") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mColorFor_") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mBoldFor_") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mBoldFor_") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mItalicFor_") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mItalicFor_") ;
      result.appendString (enumerator_7231.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n") ;
      enumerator_7231.gotoNextObject () ;
      index_7231_.increment () ;
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
  GGS_uint index_10304_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_10304 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_10304.hasCurrentObject ()) {
      result.appendString ("    //--- Attributes for ") ;
      result.appendString (enumerator_10304.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n      if self.mColorFor_") ;
      result.appendString (enumerator_10304.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_") ;
      result.appendString (enumerator_10304.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n      }\n      if self.mBoldFor_") ;
      result.appendString (enumerator_10304.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" && self.mItalicFor_") ;
      result.appendString (enumerator_10304.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_") ;
      result.appendString (enumerator_10304.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_") ;
      result.appendString (enumerator_10304.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n") ;
      enumerator_10304.gotoNextObject () ;
      index_10304_.increment () ;
    }
  }
  result.appendString ("    //--- Lexical error\n      if self.mColorFor_lexical_error != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)\n      }\n      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_lexical_error {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_lexical_error {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n    //--- Template\n      if self.mColorFor_template != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_template)\n      }\n      if self.mBoldFor_template && self.mItalicFor_template {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_template {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_template {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func parseLexicalTokenForLexicalColoring () -> LexicalToken {\n    let startLocation = self.currentLocation\n    if let idx = self.mEndTemplateDelimiterIndex,\n       self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {\n      self.mEndTemplateDelimiterIndex = nil\n    }\n    if self.mEndTemplateDelimiterIndex != nil {\n      return super.parseLexicalTokenForLexicalColoring ()\n    }else{ // In template string, find code start string\n      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {\n        var idx = 0\n        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {\n          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {\n            self.mEndTemplateDelimiterIndex = idx\n          }\n          idx += 1\n        }\n        if self.mEndTemplateDelimiterIndex == nil {\n          self.advance ()\n        }\n      }\n      return LexicalToken (\n        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n        tokenCode: ") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE,\n        templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n      )\n    }\n  }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
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
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 31)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 31)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this proc declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 32)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 32)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)).add_operation (GGS_string (" formal parameter(s), but overriden proc declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 33)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 33)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 33)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 34)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    UpEnumerator_formalParameterSignature enumerator_2120 (constinArgument_inReferenceSignature) ;
    UpEnumerator_formalParameterListForGeneration enumerator_2152 (constinArgument_inTestedSignature) ;
    while (enumerator_2120.hasCurrentObject () && enumerator_2152.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_2120.current (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (enumerator_2152.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2152.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_2152.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (GGS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2152.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (GGS_string (", but overriden proc declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2120.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 40)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 42)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_2152.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_2120.current (HERE).readProperty_mFormalSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string var_s_2729 ;
          switch (enumerator_2120.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
            {
              var_s_2729 = GGS_string ("\?") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
            {
              var_s_2729 = GGS_string ("\?!") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
            {
              var_s_2729 = GGS_string ("!") ;
            }
            break ;
          }
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_2120.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_2120.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 54)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          var_s_2729.plusAssignOperation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 54)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_2729) ;
          inCompiler->emitSemanticError (enumerator_2152.current (HERE).readProperty_mFormalSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_2729, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_2152.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 57)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_2120.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 57)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2152.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_2152.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (extensionGetter_definition (enumerator_2152.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (GGS_string ("' type, but overriden proc declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).add_operation (extensionGetter_definition (enumerator_2120.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 60)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 60)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 61)) ;
        }
      }
      enumerator_2120.gotoNextObject () ;
      enumerator_2152.gotoNextObject () ;
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
    test_0 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 79)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 79)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the return type is '@").add_operation (extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 80)).add_operation (GGS_string ("', but overriden func names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).add_operation (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 82)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).add_operation (GGS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 82)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 80)) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 83)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 85)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 85)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this func declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 86)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 86)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)).add_operation (GGS_string (" formal parameter(s), but overriden func declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 87)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 87)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 88)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    UpEnumerator_functionSignature enumerator_5084 (constinArgument_inReferenceSignature) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_5116 (constinArgument_inTestedSignature) ;
    while (enumerator_5084.hasCurrentObject () && enumerator_5116.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_5116.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5084.current (HERE).readProperty_mFormalSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_5084.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_5084.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 92)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5231 = GGS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 92)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_5231) ;
          inCompiler->emitSemanticError (enumerator_5116.current (HERE).readProperty_mFormalSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5231, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_5116.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 95)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5084.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 95)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5116.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_5116.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (extensionGetter_definition (enumerator_5116.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (GGS_string ("' type, but overriden func declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).add_operation (extensionGetter_definition (enumerator_5084.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 98)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 98)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 99)) ;
        }
      }
      enumerator_5084.gotoNextObject () ;
      enumerator_5116.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalParameterListAST enumerator_7016 (constinArgument_inRoutineSignatureAST) ;
  while (enumerator_7016.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_7049 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7016.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 124)) ;
    GGS_string var_formalArgumentCppName_7143 ;
    switch (enumerator_7016.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_formalArgumentCppName_7143 = GGS_string ("inArgument_").add_operation (enumerator_7016.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 128)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = enumerator_7016.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7016.current (HERE).readProperty_mFormalArgumentName (), var_type_7049, var_formalArgumentCppName_7143, var_formalArgumentCppName_7143, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 131)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_7016.current (HERE).readProperty_mFormalArgumentName (), var_type_7049, var_formalArgumentCppName_7143, var_formalArgumentCppName_7143, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 138)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_formalArgumentCppName_7143 = GGS_string ("outArgument_").add_operation (enumerator_7016.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 146)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7016.current (HERE).readProperty_mFormalArgumentName (), var_type_7049, var_formalArgumentCppName_7143, var_formalArgumentCppName_7143, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 148)) ;
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_formalArgumentCppName_7143 = GGS_string ("ioArgument_").add_operation (enumerator_7016.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 156)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 155)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_7016.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7016.current (HERE).readProperty_mFormalArgumentName (), var_type_7049, var_formalArgumentCppName_7143, var_formalArgumentCppName_7143, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 158)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7016.current (HERE).readProperty_mFormalArgumentName (), var_type_7049, var_formalArgumentCppName_7143, var_formalArgumentCppName_7143, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 165)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        var_formalArgumentCppName_7143 = GGS_string ("constinArgument_").add_operation (enumerator_7016.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 173)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_7016.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7016.current (HERE).readProperty_mFormalArgumentName (), var_type_7049, var_formalArgumentCppName_7143, var_formalArgumentCppName_7143, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 176)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_7016.current (HERE).readProperty_mFormalArgumentName (), var_type_7049, var_formalArgumentCppName_7143, var_formalArgumentCppName_7143, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 183)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.plusPlusAssignOperation (GGS_formalParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_7016.current (HERE).readProperty_mFormalSelector (), enumerator_7016.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_7049, enumerator_7016.current (HERE).readProperty_mFormalArgumentName (), var_formalArgumentCppName_7143, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 191)) ;
    enumerator_7016.gotoNextObject () ;
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
                                                                     const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                     const GGS_location constinArgument_inEndOfMethodLocation,
                                                                     GGS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                     GGS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_10328 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10432 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 208)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 208)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_typedPropertyList enumerator_10551 (extensionGetter_definition (var_selfAvailable_10432.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 209)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_10551.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_10432.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas4", 210)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_10551.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 211)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_10585 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_10328, enumerator_10551.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_10551.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_10551.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 219)), var_initialized_10585, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 214)) ;
        }
        enumerator_10551.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_10328, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 225)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_11310 (constinArgument_inInstructionList) ;
  while (enumerator_11310.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_11310.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10328, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 235)) ;
    enumerator_11310.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_10328, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 245)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_12422 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12422, var_nameForUsefulness_12422, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 259)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_nameForUsefulness_12422, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 261)) ;
    }
  }
  GGS_formalInputParameterListForGeneration var_formalArgumentList_12670 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_3 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_12754 (temp_3.readProperty_mFormalArgumentList ()) ;
  while (enumerator_12754.hasCurrentObject ()) {
    var_formalArgumentList_12670.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_12754.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12754.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 268)), enumerator_12754.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_12754.current (HERE).readProperty_mFormalArgumentName (), enumerator_12754.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 266)) ;
    enumerator_12754.gotoNextObject () ;
  }
  const GGS_externFunctionDeclarationAST temp_4 = this ;
  const GGS_externFunctionDeclarationAST temp_5 = this ;
  const GGS_externFunctionDeclarationAST temp_6 = this ;
  const GGS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionPrototypeDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 274)), GGS_bool (true), GGS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 276)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_12670, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 273)) ;
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
                                                                                      const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
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
  GGS_localVarManager var_variableMap_14147 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  outArgument_outSignatureForGeneration = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalInputParameterListAST enumerator_14302 (constinArgument_inFunctionSignature) ;
  while (enumerator_14302.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_14333 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14302.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 304)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_14302.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_cppName_14467 = GGS_string ("constinArgument_").add_operation (enumerator_14302.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 306)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 306)) ;
        outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_14302.current (HERE).readProperty_mFormalSelector (), var_parameterType_14333, var_cppName_14467, enumerator_14302.current (HERE).readProperty_mFormalArgumentName (), enumerator_14302.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 307)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_14302.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_14147, enumerator_14302.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14333, var_cppName_14467, var_cppName_14467, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 314)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_14147, enumerator_14302.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14333, var_cppName_14467, var_cppName_14467, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 316)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_cppName_15084 = GGS_string ("inArgument_").add_operation (enumerator_14302.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 319)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 319)) ;
      outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_14302.current (HERE).readProperty_mFormalSelector (), var_parameterType_14333, var_cppName_15084, enumerator_14302.current (HERE).readProperty_mFormalArgumentName (), enumerator_14302.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 320)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = enumerator_14302.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_14147, enumerator_14302.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14333, var_cppName_15084, var_cppName_15084, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 327)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_14147, enumerator_14302.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14333, var_cppName_15084, var_cppName_15084, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 329)) ;
        }
      }
    }
    enumerator_14302.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 334)) ;
  outArgument_outResultVariableCppName = GGS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 335)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_14147, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 336)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_selfAvailability_2E_available var_selfAvailable_16063 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 338)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 338)).isValuated ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator_typedPropertyList enumerator_16182 (extensionGetter_definition (var_selfAvailable_16063.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 339)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_16182.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_14147, enumerator_16182.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_16182.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_16182.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 345)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 340)) ;
        }
        enumerator_16182.gotoNextObject () ;
      }
    }
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_16592 (constinArgument_inInstructionList) ;
  while (enumerator_16592.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_16592.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_14147, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 353)) ;
    enumerator_16592.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_14147, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 363)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                           const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                           GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17467 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 378)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17467, var_nameForUsefulness_17467, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 379)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_nameForUsefulness_17467, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 381)) ;
    }
  }
  GGS_analysisContext var_analysisContext_17737 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 388)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalInputParameterList_18215 ;
  GGS_unifiedTypeMapEntry var_returnType_18250 ;
  GGS_string var_resultVariableCppName_18271 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_18303 ;
  {
  const GGS_functionDeclarationAST temp_3 = this ;
  const GGS_functionDeclarationAST temp_4 = this ;
  const GGS_functionDeclarationAST temp_5 = this ;
  const GGS_functionDeclarationAST temp_6 = this ;
  const GGS_functionDeclarationAST temp_7 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_17467, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_17737, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultVariableName (), temp_6.readProperty_mResultTypeName (), temp_7.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_18215, var_returnType_18250, var_resultVariableCppName_18271, var_semanticInstructionListForGeneration_18303, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 391)) ;
  }
  const GGS_functionDeclarationAST temp_8 = this ;
  const GGS_functionDeclarationAST temp_9 = this ;
  const GGS_functionDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("function ").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 408)), GGS_bool (true), GGS_string ("func-").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 410)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 410)), temp_10.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_18215, var_returnType_18250, var_resultVariableCppName_18271, var_semanticInstructionListForGeneration_18303, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 407)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_19307 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 431)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_19307, var_nameForUsefulness_19307, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 432)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_nameForUsefulness_19307, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 434)) ;
    }
  }
  GGS_analysisContext var_analysisContext_19576 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 441)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_returnType_20069 ;
  GGS_string var_resultVariableCppName_20090 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_20122 ;
  {
  const GGS_onceFunctionDeclarationAST temp_3 = this ;
  const GGS_onceFunctionDeclarationAST temp_4 = this ;
  const GGS_onceFunctionDeclarationAST temp_5 = this ;
  const GGS_onceFunctionDeclarationAST temp_6 = this ;
  GGS_formalInputParameterListForGeneration joker_20056 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_19307, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_19576, ioArgument_ioTypeMap, GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultVariableName (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), joker_20056, var_returnType_20069, var_resultVariableCppName_20090, var_semanticInstructionListForGeneration_20122, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 444)) ;
  }
  const GGS_onceFunctionDeclarationAST temp_7 = this ;
  const GGS_onceFunctionDeclarationAST temp_8 = this ;
  const GGS_onceFunctionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_onceFunctionDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_string ("once function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 461)), GGS_bool (true), GGS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 463)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 463)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_returnType_20069, var_resultVariableCppName_20090, var_semanticInstructionListForGeneration_20122, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 460)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                              GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  GGS_lstring var_filewrapperNameForUsefulness_21257 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 487)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_21257, var_filewrapperNameForUsefulness_21257, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 488)) ;
  }
  GGS_wrapperFileMap var_wrapperFileMap_21591 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_21637 ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  GGS_lstring joker_21554 ; // Joker input parameter
  GGS_lstringlist joker_21562 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_21662_2 ; // Joker input parameter
  GGS_bool joker_21662_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_21554, joker_21562, var_wrapperFileMap_21591, var_wrapperDirectoryMap_21637, joker_21662_2, joker_21662_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 490)) ;
  GGS_string var_absoluteSourcePath_21710 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas4", 500)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_21710 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_filewrapperDeclarationAST temp_5 = this ;
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_21710 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 503)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 503)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 503)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_absoluteSourcePath_21710.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas4", 505)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 505)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_filewrapperDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_21710, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 506)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 506)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 506)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GGS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_22214 = GGS_filewrapperTemplateListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_10 = this ;
    UpEnumerator_filewrapperTemplateListAST enumerator_22293 (temp_10.readProperty_mFilewrapperTemplateList ()) ;
    while (enumerator_22293.hasCurrentObject ()) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      GGS_lstring var_filewrapperTemplateNameForUsefulness_22331 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_22293.current (HERE).readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 511)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_22331, var_filewrapperTemplateNameForUsefulness_22331, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 515)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_22331, var_filewrapperNameForUsefulness_21257 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 516)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::equal, enumerator_22293.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas4", 517)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_22293.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_21710, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 519)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 519)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 518)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_23033 = var_absoluteSourcePath_21710.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 521)).add_operation (enumerator_22293.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 521)) ;
      GGS_templateInstructionListAST var_resultingInstructionList_23217 ;
      var_resultingInstructionList_23217.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_23033, enumerator_22293.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_23217  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 523)) ;
      GGS_templateVariableMap var_templateVariableMap_23411 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_23486 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalTemplateInputParameterListAST enumerator_23573 (enumerator_22293.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_23573.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_23630 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_23573.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 529)) ;
        GGS_string var_cppVarName_23720 = GGS_string ("in_").add_operation (enumerator_23573.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 530)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 530)) ;
        {
        var_templateVariableMap_23411.setter_insertKey (enumerator_23573.current (HERE).readProperty_mFormalArgumentName (), var_type_23630, var_cppVarName_23720, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 531)) ;
        }
        var_filewrapperTemplateFormalInputParameters_23486.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_23573.current (HERE).readProperty_mFormalTemplateSelector (), var_type_23630, var_cppVarName_23720, enumerator_23573.current (HERE).readProperty_mFormalArgumentName (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 532)) ;
        enumerator_23573.gotoNextObject () ;
      }
      GGS_templateInstructionListForGeneration var_templateInstructionListForGeneration_24073 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_24163 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_23411, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_21257, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_24163, ioArgument_ioTypeMap, var_resultingInstructionList_23217, var_templateInstructionListForGeneration_24073, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 541)) ;
      }
      var_filewrapperTemplateListForGeneration_22214.plusPlusAssignOperation (GGS_filewrapperTemplateListForGeneration_2E_element::init_21__21__21_ (enumerator_22293.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_23486, var_templateInstructionListForGeneration_24073, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 550)) ;
      enumerator_22293.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_14 = this ;
    const GGS_filewrapperDeclarationAST temp_15 = this ;
    const GGS_filewrapperDeclarationAST temp_16 = this ;
    const GGS_filewrapperDeclarationAST temp_17 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_filewrapperDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 557)), GGS_bool (true), GGS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 559)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_21591, var_wrapperDirectoryMap_21637, var_filewrapperTemplateListForGeneration_22214, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 556)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_25832 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 581)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_25832, var_nameForUsefulness_25832, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 582)) ;
  }
  GGS_terminalMap var_terminalMap_26170 ;
  GGS_indexingListAST var_indexingListAST_26209 ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_bool joker_26144 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_26230_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_26230_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_26230_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_26230_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_26144, var_terminalMap_26170, var_indexingListAST_26209, joker_26230_4, joker_26230_3, joker_26230_2, joker_26230_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 584)) ;
  GGS_stringset var_indexNameSet_26317 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_indexingListAST enumerator_26351 (var_indexingListAST_26209) ;
  while (enumerator_26351.hasCurrentObject ()) {
    var_indexNameSet_26317.plusPlusAssignOperation (enumerator_26351.current (HERE).readProperty_mIndexName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 594)) ;
    enumerator_26351.gotoNextObject () ;
  }
  GGS_bool var_hasIndexing_26433 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas4", 598)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GGS_string var_lexiqueName_26606 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GGS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_27065 ;
      {
      const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_25832, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_26606, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_26170, var_indexNameSet_26317, var_hasIndexing_26433, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_27065, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 600)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (var_syntaxDeclarationForGeneration_27065  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 616)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas4", 633)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GGS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 634)).add_operation (GGS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 634)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 634)) ;
      }
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  GGS_lstring var_grammarNameForUsefulness_28111 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 637)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_28111, var_grammarNameForUsefulness_28111, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 638)) ;
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_28416 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_28498 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_28552 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas4", 642)) ;
  GGS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_28662 = GGS_syntaxComponentListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalToAddList var_nonTerminalToAddList_28734 = GGS_nonTerminalToAddList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_addedNonTerminalCount_28773 = GGS_uint (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator_lstringlist enumerator_28833 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_28833.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_28862 = function_syntaxNameForUsefulEntitiesGraph (enumerator_28833.current (HERE).readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 647)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_28111, var_syntaxNameForUsefulness_28862 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 648)) ;
    }
    GGS_uint var_addedNonTerminalCountRef_29064 = var_addedNonTerminalCount_28773 ;
    GGS_lstring var_lexiqueName_29239 ;
    GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_29294 ;
    GGS_syntaxRuleListAST var_ruleList_29352 ;
    GGS_bool var_hasTranslateFeature_29379 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_28833.current (HERE).readProperty_mValue (), var_lexiqueName_29239, var_nonterminalDeclarationList_29294, var_ruleList_29352, var_hasTranslateFeature_29379, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 650)) ;
    GGS_lstring var_lexiqueNameForUsefulness_29413 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_29239, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 657)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_28111, var_lexiqueNameForUsefulness_29413 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 658)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_galgas_33_GrammarComponentAST temp_5 = this ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_29379.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 660)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 660)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_galgas_33_GrammarComponentAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_28833.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 661)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 661)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 661)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_galgas_33_GrammarComponentAST temp_9 = this ;
        test_8 = var_hasTranslateFeature_29379.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 662)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 662)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_galgas_33_GrammarComponentAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_28833.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 663)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 663)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 663)) ;
        }
      }
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_28552.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_lexiqueComponentName_28552 = var_lexiqueName_29239 ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_29239.readProperty_string ().objectCompare (var_lexiqueComponentName_28552.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_28833.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_29239.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 669)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 670)).add_operation (var_lexiqueComponentName_28552.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 670)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 671)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 669)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_28498, var_nonterminalDeclarationList_29294, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 674)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_28498, var_ruleList_29352, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 679)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_28498, enumerator_28833.current (HERE).readProperty_mValue (), var_ruleList_29352, var_actuallyUsedTerminalSymbolMap_28416, var_syntaxComponentListForGrammarAnalysis_28662, var_addedNonTerminalCount_28773, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 684)) ;
    }
    GGS_uint var_i_31109 = GGS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_28773.isValid ()) {
      uint32_t variant_31119 = var_addedNonTerminalCount_28773.uintValue () ;
      bool loop_31119 = true ;
      while (loop_31119) {
        loop_31119 = GGS_bool (ComparisonKind::lowerThan, var_i_31109.objectCompare (var_addedNonTerminalCount_28773.substract_operation (var_addedNonTerminalCountRef_29064, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 693)))).isValid () ;
        if (loop_31119) {
          loop_31119 = GGS_bool (ComparisonKind::lowerThan, var_i_31109.objectCompare (var_addedNonTerminalCount_28773.substract_operation (var_addedNonTerminalCountRef_29064, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 693)))).boolValue () ;
        }
        if (loop_31119 && (0 == variant_31119)) {
          loop_31119 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas4", 693)) ;
        }
        if (loop_31119) {
          variant_31119 -= 1 ;
          var_nonTerminalToAddList_28734.plusPlusAssignOperation (GGS_nonTerminalToAddList_2E_element::init_21__21_ (enumerator_28833.current (HERE).readProperty_mValue ().readProperty_string (), var_i_31109, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 694)) ;
          var_i_31109.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 695)) ;
        }
      }
    }
    enumerator_28833.gotoNextObject () ;
  }
  GGS_uint var_startSymbolIndex_31510 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_31582 ;
  const GGS_galgas_33_GrammarComponentAST temp_15 = this ;
  var_nonTerminalMapForGrammarAnalysis_28498.method_searchKey (temp_15.readProperty_mStartSymbolName (), var_startSymbolIndex_31510, var_startSymbolAltMap_31582, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 700)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_18 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_16.readProperty_mStartSymbolName ().readProperty_location (), temp_17.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_28498.getter_locationForKey (temp_18.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 709)), var_startSymbolAltMap_31582, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 706)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_31963 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_19 = this ;
  UpEnumerator_lstringlist enumerator_32011 (temp_19.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_32011.hasCurrentObject ()) {
    GGS_uint var_nonterminalIndex_32120 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_32138 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_28498.method_searchKey (enumerator_32011.current_mValue (HERE), var_nonterminalIndex_32120, joker_32138, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 715)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_31963.setter_insertKey (enumerator_32011.current_mValue (HERE), var_nonterminalIndex_32120, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 716)) ;
    }
    enumerator_32011.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_32377 = GGS_nonTerminalSymbolSortedListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_32450 (var_nonTerminalMapForGrammarAnalysis_28498) ;
  while (enumerator_32450.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_32377.plusPlusAssignOperation (GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::init_21__21__21_ (enumerator_32450.current (HERE).readProperty_lkey (), enumerator_32450.current (HERE).readProperty_mNonTerminalIndex (), enumerator_32450.current (HERE).readProperty_mNonterminalSymbolParametersMap (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 721)) ;
    enumerator_32450.gotoNextObject () ;
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = GGS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_21 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_22 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_21.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_28498, var_syntaxComponentListForGrammarAnalysis_28662, temp_22.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 725)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_33108 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 734)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_bool (gOption_galgas_5F_cli_5F_options_emitClassGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_33108, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 736)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_23) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_33108, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 741)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_33680 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_33732 (var_nonTerminalMapForGrammarAnalysis_28498) ;
  while (enumerator_33732.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_33805 (enumerator_33732.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_33805.hasCurrentObject ()) {
      UpEnumerator_signatureForGrammarAnalysis enumerator_33874 (enumerator_33805.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_33874.hasCurrentObject ()) {
        switch (enumerator_33874.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_34029 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_33874.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 752)) ;
            extensionMethod_addHeaderFileName (var_t_34029, var_implementationFileHeader_33680, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 753)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_33874.gotoNextObject () ;
      }
      enumerator_33805.gotoNextObject () ;
    }
    enumerator_33732.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_implementationFileHeader_33680 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
  GGS_string var_HTMLFilePath_34428 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)).add_operation (temp_25.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)) ;
  GGS_string var_grammarCppFile_34959 ;
  GGS_string var_grammarHTMLHelperContents_34992 ;
  GGS_string var_swiftGrammarDescription_35036 ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_26 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_27 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_28 = this ;
  GGS_string temp_29 ;
  const GalgasBool test_30 = temp_28.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_30) {
    temp_29 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 774)) ;
  }else if (GalgasBool::boolFalse == test_30) {
    temp_29 = GGS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (temp_26.readProperty_mGrammarComponentName (), temp_27.readProperty_mGrammarClass (), var_startSymbolIndex_31510, var_lexiqueComponentName_28552.readProperty_string (), var_actuallyUsedTerminalSymbolMap_28416, var_syntaxComponentListForGrammarAnalysis_28662, var_unusedNonTerminalSymbolsForGrammar_31963, var_HTMLFilePath_34428, var_nonTerminalSymbolSortedListForGrammarAnalysis_32377, temp_29, var_grammarCppFile_34959, var_grammarHTMLHelperContents_34992, var_swiftGrammarDescription_35036, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 764)) ;
  }
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    test_31 = GGS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      var_HTMLFilePath_34428.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 781)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 781)) ;
      GGS_bool joker_35362 ; // Joker input parameter
      var_grammarHTMLHelperContents_34992.method_writeToFileWhenDifferentContents (var_HTMLFilePath_34428, joker_35362, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 782)) ;
    }
  }
  if (GalgasBool::boolFalse == test_31) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_34428, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 784)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_32 = this ;
  GGS_string var_swiftFilePath_35523 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 787)).add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 787)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 787)) ;
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (gOption_galgas_5F_cli_5F_options_outputGrammarSwiftDescriptionFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      var_swiftFilePath_35523.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 789)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 789)) ;
      GGS_bool joker_35831 ; // Joker input parameter
      var_swiftGrammarDescription_35036.method_writeToFileWhenDifferentContents (var_swiftFilePath_35523, joker_35831, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 790)) ;
    }
  }
  if (GalgasBool::boolFalse == test_33) {
    {
    GGS_string::class_method_deleteFileIfExists (var_swiftFilePath_35523, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 792)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_36 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_37 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_38 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_grammarForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("grammar-").add_operation (temp_34.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 799)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 799)), temp_35.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_28552.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_28498, var_nonTerminalToAddList_28734, temp_36.readProperty_mSyntaxComponents (), temp_37.readProperty_mStartSymbolName ().readProperty_string (), temp_38.readProperty_mHasTranslateFeature (), var_grammarCppFile_34959, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 796)) ;
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
  result_result = GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 820)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 820)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("bool"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 821)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 821)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("char"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 822)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 822)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 823)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 823)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 824)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 824)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("sint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 825)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 825)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("uint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 826)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 826)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("sint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 827)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 827)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("double"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 828)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 828)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lbool"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 829)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 829)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lchar"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 830)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 830)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 831)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 831)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("luint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 832)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 832)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lsint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 833)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 833)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("luint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 834)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 834)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lsint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 835)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 835)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("ldouble"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 836)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 836)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("stringlist"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 837)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 837)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lbigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 838)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 838)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 839)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 839)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("stringset"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 840)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 840)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lstringlist"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 841)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 841)), inCompiler COMMA_HERE) ;
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
    const GGS_nonterminalMap_2E_element var_entry_40911 = ioArgument_ioNonterminalDeclarationMap.readSubscript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioNonterminalDeclarationMap.readSubscript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset var_firstDeclarationLabelSet_40998 = var_entry_40911.readProperty_mLabelMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 920)) ;
      GGS_stringset var_reDeclarationLabelSet_41067 = constinArgument_inNonterminalLabelMap.getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 921)) ;
      GGS_stringset var_missingLabelSet_41139 = var_firstDeclarationLabelSet_40998.substract_operation (var_reDeclarationLabelSet_41067, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 922)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::greaterThan, var_missingLabelSet_41139.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 923)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_s_41262 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_41280 (var_missingLabelSet_41139) ;
          while (enumerator_41280.hasCurrentObject ()) {
            var_s_41262.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_41280.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)) ;
            enumerator_41280.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 929)).add_operation (GGS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 929)).add_operation (var_s_41262, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 929)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 928)) ;
        }
      }
      GGS_stringset var_newLabelSet_41507 = var_reDeclarationLabelSet_41067.substract_operation (var_firstDeclarationLabelSet_40998, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 931)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_newLabelSet_41507.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 932)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_string var_s_41614 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_41632 (var_newLabelSet_41507) ;
          while (enumerator_41632.hasCurrentObject ()) {
            var_s_41614.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_41632.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 935)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 935)) ;
            enumerator_41632.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 938)).add_operation (GGS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 938)).add_operation (var_s_41614, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 938)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 937)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_missingLabelSet_41139.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 940)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_newLabelSet_41507.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 940)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 940)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          UpEnumerator_nonterminalLabelMap enumerator_41921 (var_entry_40911.readProperty_mLabelMap ()) ;
          UpEnumerator_nonterminalLabelMap enumerator_41944 (constinArgument_inNonterminalLabelMap) ;
          while (enumerator_41921.hasCurrentObject () && enumerator_41944.hasCurrentObject ()) {
            GGS_formalParameterSignature var_newSignature_42007 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
            UpEnumerator_formalParameterSignature enumerator_42057 (enumerator_41944.current (HERE).readProperty_mSignature ()) ;
            while (enumerator_42057.hasCurrentObject ()) {
              var_newSignature_42007.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_42057.current (HERE).readProperty_mFormalSelector (), enumerator_42057.current (HERE).readProperty_mFormalArgumentType (), enumerator_42057.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_42057.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 944)) ;
              enumerator_42057.gotoNextObject () ;
            }
            {
            routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_41921.current (HERE).readProperty_mSignatureForGeneration (), enumerator_41921.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_42007, enumerator_41944.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 946)) ;
            }
            enumerator_41921.gotoNextObject () ;
            enumerator_41944.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 955)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                              const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GGS_nonterminalMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonterminalDeclarationListAST enumerator_43010 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_43010.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_43050 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_nonTerminalLabelListAST enumerator_43126 (enumerator_43010.current (HERE).readProperty_mLabels ()) ;
    while (enumerator_43126.hasCurrentObject ()) {
      GGS_formalParameterListForGeneration var_signatureForGeneration_43147 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_formalParameterSignature var_signature_43219 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalParameterListAST enumerator_43287 (enumerator_43126.current (HERE).readProperty_mFormalArgumentList ()) ;
      while (enumerator_43287.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_t_43322 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_43287.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 974)) ;
        var_signatureForGeneration_43147.plusPlusAssignOperation (GGS_formalParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_43287.current (HERE).readProperty_mFormalSelector (), enumerator_43287.current (HERE).readProperty_mFormalArgumentPassingMode (), var_t_43322, enumerator_43287.current (HERE).readProperty_mFormalArgumentName (), enumerator_43287.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 975)) ;
        var_signature_43219.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_43287.current (HERE).readProperty_mFormalSelector (), var_t_43322, enumerator_43287.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_43287.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 976)) ;
        enumerator_43287.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_43050.setter_insertKey (enumerator_43126.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_43147, var_signature_43219, enumerator_43126.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 978)) ;
      }
      enumerator_43126.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_43010.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_43050, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 980)) ;
    }
    enumerator_43010.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@semanticInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_bool /* constinArgument__5F_inHasTranslateFeature */,
                                                                   const GGS_terminalMap /* constinArgument__5F_inTerminalMap */,
                                                                   const GGS_string /* constinArgument__5F_inLexiqueName */,
                                                                   const GGS_nonterminalMap /* constinArgument__5F_inNonterminalMap */,
                                                                   const GGS_string /* constinArgument__5F_inComponentName */,
                                                                   const GGS_stringset /* constinArgument__5F_inIndexNameSet */,
                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_uint & /* ioArgument__5F_ioSelectMethodCount */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_semanticInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1022)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterAnonymousVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::method_analyzeInputParameter (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         const GGS_lexicalTypeEnum /* constinArgument__5F_inRequiredLexicalType */,
                                                                         const GGS_string /* constinArgument__5F_inLexicalAttributeName */,
                                                                         GGS__5B_terminalCheckAssignement_5D_ & /* ioArgument__5F_ioTerminalCheckAssignementList */,
                                                                         GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                const GGS_string constinArgument_inLexicalAttributeName,
                                                                GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_47093 ;
  GGS_string var_cppName_47112 ;
  {
  const GGS_inputParameterVariable temp_0 = this ;
  GGS_string joker_47121 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_47093, var_cppName_47112, joker_47121, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1062)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_47152 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_47152 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_47152 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_47152 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_47152 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_47152 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_47152 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_47152 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_47152 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expectedType_47152.objectCompare (var_type_47093)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_inputParameterVariable temp_2 = this ;
      const GGS_inputParameterVariable temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)).add_operation (extensionGetter_identifierRepresentation (var_type_47093, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_47152, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1077)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1077)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1077)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1075)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (GGS_string::makeEmptyString (), var_cppName_47112, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1079)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterDeclaredVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_48776 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_48776 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_48776 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_48776 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_48776 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_48776 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_48776 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_48776 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_48776 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredVariable temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_49639 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1108)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_48776.objectCompare (var_type_49639)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredVariable temp_4 = this ;
          const GGS_inputParameterDeclaredVariable temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).add_operation (extensionGetter_definition (var_type_49639, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).add_operation (extensionGetter_definition (var_expectedType_48776, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1112)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1112)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1112)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1110)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredVariable temp_7 = this ;
  const GGS_inputParameterDeclaredVariable temp_8 = this ;
  GGS_string var_cppName_50037 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1116)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1116)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1116)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1116)) ;
  {
  const GGS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GGS_bool (true), var_expectedType_48776, var_cppName_50037, var_cppName_50037, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1117)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_48776, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)).readProperty_typeName ().readProperty_string (), var_cppName_50037, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1124)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterDeclaredConstant analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_50971 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_50971 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_50971 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_50971 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_50971 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_50971 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_50971 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_50971 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_50971 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredConstant temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_51834 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1153)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_50971.objectCompare (var_type_51834)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredConstant temp_4 = this ;
          const GGS_inputParameterDeclaredConstant temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).add_operation (extensionGetter_definition (var_type_51834, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).add_operation (extensionGetter_definition (var_expectedType_50971, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1157)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1157)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1157)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1155)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredConstant temp_7 = this ;
  const GGS_inputParameterDeclaredConstant temp_8 = this ;
  GGS_string var_cppName_52232 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1161)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1161)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)) ;
  {
  const GGS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_50971, var_cppName_52232, var_cppName_52232, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1162)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_50971, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1165)).readProperty_typeName ().readProperty_string (), var_cppName_52232, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                    const GGS_bool /* constinArgument__5F_inHasTranslateFeature */,
                                                                                    GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                    const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                    GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1194)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1195)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                     const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1206)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1207)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_54471 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_54477 ; // Joker input parameter
  GGS_string joker_54481 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_54471, joker_54477, joker_54481, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1209)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_54491 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_54491.objectCompare (var_type_54471)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (extensionGetter_identifierRepresentation (var_type_54471, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_54491, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1214)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1214)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1214)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1212)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1225)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1226)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_55372 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1228)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1228)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1228)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1228)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_55517 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1229)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_55517, var_cppName_55372, var_cppName_55372, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1230)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_55742 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_55742.objectCompare (var_type_55517)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)).add_operation (extensionGetter_identifierRepresentation (var_type_55517, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_55742, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1241)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1241)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1241)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1239)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1252)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1253)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_56616 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1255)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1255)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_56761 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1256)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_56761, var_cppName_56616, var_cppName_56616, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1257)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_56937 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_56937.objectCompare (var_type_56761)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)).add_operation (extensionGetter_identifierRepresentation (var_type_56761, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_56937, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1262)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1262)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1262)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1260)) ;
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
      ioArgument_ioGeneratedCode.plusAssignOperation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1282)).add_operation (GGS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1282)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1282)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1282)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1282)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1283)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1283)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                      const GGS_string /* constinArgument__5F_inAccessMethodName */,
                                                                                      GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                      GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                       const GGS_string constinArgument_inAccessMethodName,
                                                                                       GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
  GGS_string var_cppName_58947 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1303)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1303)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1303)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1303)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_cppName_58947.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1304)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1304)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1304)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1304)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GGS_string constinArgument_inAccessMethodName,
                                                                                               GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
  GGS_string var_cppName_59535 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1314)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1314)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1314)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1314)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_string ").add_operation (var_cppName_59535, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GGS_string constinArgument_inAccessMethodName,
                                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                                 GGS_string & ioArgument_ioGeneratedCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
  GGS_string var_cppName_60128 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1325)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1325)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1325)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1325)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1325)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1325)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_string ").add_operation (var_cppName_60128, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)) ;
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
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1349)) ;
  }
  UpEnumerator_syntaxInstructionList enumerator_61293 (constinArgument_inSyntaxInstructionListAST) ;
  while (enumerator_61293.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_61293.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1352)) ;
    enumerator_61293.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1369)) ;
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
  GGS_localVarManager var_variableMap_62857 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_62857, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1398)) ;
  }
  outArgument_outSignature = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalParameterListForGeneration enumerator_63130 (outArgument_outSignatureForGeneration) ;
  while (enumerator_63130.hasCurrentObject ()) {
    outArgument_outSignature.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_63130.current (HERE).readProperty_mFormalSelector (), enumerator_63130.current (HERE).readProperty_mFormalArgumentType (), enumerator_63130.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_63130.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1408)) ;
    enumerator_63130.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_syntaxInstructionList enumerator_63438 (constinArgument_inSyntaxInstructionList) ;
  while (enumerator_63438.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_63438.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_62857, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1413)) ;
    enumerator_63438.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_62857, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1430)) ;
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
  GGS_nonterminalMap var_nonterminalMap_65036 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_65036, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1456)) ;
  }
  UpEnumerator_syntaxRuleListAST enumerator_65124 (constinArgument_inRuleList) ;
  while (enumerator_65124.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_65167 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_65217 (enumerator_65124.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_65217.hasCurrentObject ()) {
      GGS_formalParameterListForGeneration var_signatureForGeneration_65275 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_formalParameterSignature var_signature_65340 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalParameterListAST enumerator_65383 (enumerator_65217.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_65383.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_65415 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_65383.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1469)) ;
        var_signatureForGeneration_65275.plusPlusAssignOperation (GGS_formalParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_65383.current (HERE).readProperty_mFormalSelector (), enumerator_65383.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_65415, enumerator_65383.current (HERE).readProperty_mFormalArgumentName (), GGS_string ("argument_").add_operation (enumerator_65383.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1475)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1470)) ;
        var_signature_65340.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_65383.current (HERE).readProperty_mFormalSelector (), var_type_65415, enumerator_65383.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_65383.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1476)) ;
        enumerator_65383.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_65167.setter_insertKey (enumerator_65217.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_65275, var_signature_65340, enumerator_65217.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1478)) ;
      }
      enumerator_65217.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_65124.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_65167, var_nonterminalMap_65036, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1480)) ;
    }
    enumerator_65124.gotoNextObject () ;
  }
  GGS_analysisContext var_analysisContext_66119 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 1487)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_uint var_selectMethodCount_66341 = GGS_uint (uint32_t (0U)) ;
  GGS_ruleDeclarationList var_ruleDeclarationList_66390 = GGS_ruleDeclarationList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_newRuleIndex_66428 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_syntaxRuleListAST enumerator_66460 (constinArgument_inRuleList) ;
  while (enumerator_66460.hasCurrentObject ()) {
    GGS_ruleLabelImplementationList var_ruleLabelImplementationList_66519 = GGS_ruleLabelImplementationList::init (inCompiler COMMA_HERE) ;
    GGS_uint var_localSelectMethodCount_66567 = var_selectMethodCount_66341 ;
    GGS_nonterminalLabelMap joker_66664 ; // Joker input parameter
    var_nonterminalMap_65036.method_searchKey (enumerator_66460.current (HERE).readProperty_mNonterminalName (), joker_66664, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1498)) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_66692 (enumerator_66460.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_66692.hasCurrentObject ()) {
      var_localSelectMethodCount_66567 = var_selectMethodCount_66341 ;
      GGS_formalParameterListForGeneration var_signatureForGeneration_67249 ;
      GGS_formalParameterSignature var_signature_67286 ;
      GGS_semanticInstructionListForGeneration var_instructionListForGeneration_67310 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_66692.current (HERE).readProperty_mFormalArguments (), enumerator_66692.current (HERE).readProperty_mSyntaxInstructionList (), var_analysisContext_66119, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1510)), var_nonterminalMap_65036, constinArgument_inSyntaxComponentName, enumerator_66692.current (HERE).readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, var_localSelectMethodCount_66567, var_signatureForGeneration_67249, var_signature_67286, var_instructionListForGeneration_67310, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1501)) ;
      }
      var_ruleLabelImplementationList_66519.plusPlusAssignOperation (GGS_ruleLabelImplementationList_2E_element::init_21__21__21__21__21_ (enumerator_66692.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_67249, var_signature_67286, enumerator_66692.current (HERE).readProperty_mEndOfArgumentLocation (), var_instructionListForGeneration_67310, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1520)) ;
      enumerator_66692.gotoNextObject () ;
    }
    var_selectMethodCount_66341 = var_localSelectMethodCount_66567 ;
    GGS_nonterminalLabelMap joker_67652 ; // Joker input parameter
    var_nonterminalMap_65036.method_searchKey (enumerator_66460.current (HERE).readProperty_mNonterminalName (), joker_67652, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1528)) ;
    var_ruleDeclarationList_66390.plusPlusAssignOperation (GGS_ruleDeclarationList_2E_element::init_21__21__21_ (enumerator_66460.current (HERE).readProperty_mNonterminalName ().readProperty_string (), var_newRuleIndex_66428, var_ruleLabelImplementationList_66519, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1529)) ;
    var_newRuleIndex_66428.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1533)) ;
    enumerator_66460.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GGS_syntaxDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_65036, var_ruleDeclarationList_66390, var_selectMethodCount_66341, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
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
  constinArgument_inDotDocumentFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 1552)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1552)) ;
  GGS_string var_document_68382 = GGS_string ("digraph G {\n") ;
  var_document_68382.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1554)) ;
  var_document_68382.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1555)) ;
  UpEnumerator_unifiedTypeMap enumerator_68531 (constinArgument_inTypeMap) ;
  while (enumerator_68531.hasCurrentObject ()) {
    switch (enumerator_68531.current (HERE).readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_68641_definition_0 ;
        enumerator_68531.current (HERE).readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_68641_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_68641_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas4", 1560)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_68641_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_68382.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_68641_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1563)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1563)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1563)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass_2E_weak extractedValue_68842_superType_0 ;
                extractedValue_68641_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_68842_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_unifiedTypeMapElementClass var_t_68872 = extractedValue_68842_superType_0.unwrappedValue () ;
                  if (!extractedValue_68842_superType_0.isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    const GGS_typeDefinition_2E_solved var_solvedType_68891 = var_t_68872.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1565)).unwrappedValue () ;
                    if (!var_t_68872.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1565)).isValuated ()) {
                      test_1 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_1) {
                      var_document_68382.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_68641_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1566)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1566)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1566)) ;
                      var_document_68382.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_68641_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1567)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1567)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1567)) ;
                      var_document_68382.plusAssignOperation(var_solvedType_68891.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1568)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1568)) ;
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
    enumerator_68531.gotoNextObject () ;
  }
  var_document_68382.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1574)) ;
  GGS_bool joker_69277 ; // Joker input parameter
  var_document_68382.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_69277, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1575)) ;
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
  GGS_unifiedTypeMapEntryList var_descendantClasses_7442 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 181)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_7519 (var_descendantClasses_7442) ;
  while (enumerator_7519.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_7568 = extensionGetter_definition (enumerator_7519.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 183)).readProperty_typeName () ;
    GGS_lstringlist var_overridingMethods_7638 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_7568.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 184)) ;
    GGS_bool var_found_7747 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_7770 (var_overridingMethods_7638) ;
    bool bool_0 = var_found_7747.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).isValidAndTrue () ;
    if (enumerator_7770.hasCurrentObject () && bool_0) {
      while (enumerator_7770.hasCurrentObject () && bool_0) {
        var_found_7747 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionSetterName.readProperty_string ().objectCompare (enumerator_7770.current_mValue (HERE).readProperty_string ())) ;
        enumerator_7770.gotoNextObject () ;
        if (enumerator_7770.hasCurrentObject ()) {
          bool_0 = var_found_7747.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_7747.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 189)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_7519.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 190)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 190)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_7568.readProperty_string (), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 191)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 200)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 200)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 200)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 201)).add_operation (var_descendantClassName_7568.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 202)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 202)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 200)) ;
        }
      }
    }
    enumerator_7519.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntryList var_descendantClasses_9048 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 218)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_9125 (var_descendantClasses_9048) ;
  while (enumerator_9125.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_9174 = extensionGetter_definition (enumerator_9125.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 220)).readProperty_typeName () ;
    GGS_lstringlist var_overridingMethods_9244 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_9174.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 221)) ;
    GGS_bool var_found_9353 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_9376 (var_overridingMethods_9244) ;
    bool bool_0 = var_found_9353.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).isValidAndTrue () ;
    if (enumerator_9376.hasCurrentObject () && bool_0) {
      while (enumerator_9376.hasCurrentObject () && bool_0) {
        var_found_9353 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionMethodName.readProperty_string ().objectCompare (enumerator_9376.current_mValue (HERE).readProperty_string ())) ;
        enumerator_9376.gotoNextObject () ;
        if (enumerator_9376.hasCurrentObject ()) {
          bool_0 = var_found_9353.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_9353.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 226)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_9125.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 227)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 227)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_9174.readProperty_string (), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 228)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 237)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 237)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 237)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 238)).add_operation (var_descendantClassName_9174.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 239)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 239)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 237)) ;
        }
      }
    }
    enumerator_9125.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntryList var_descendantClasses_10654 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 255)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_10731 (var_descendantClasses_10654) ;
  while (enumerator_10731.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_10780 = extensionGetter_definition (enumerator_10731.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 257)).readProperty_typeName () ;
    GGS_lstringlist var_overridingReaders_10850 = extensionGetter_listForKey (constinArgument_inOverridingExtensionGetterListMap, var_descendantClassName_10780.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 258)) ;
    GGS_bool var_found_10959 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_10982 (var_overridingReaders_10850) ;
    bool bool_0 = var_found_10959.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).isValidAndTrue () ;
    if (enumerator_10982.hasCurrentObject () && bool_0) {
      while (enumerator_10982.hasCurrentObject () && bool_0) {
        var_found_10959 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionGetterName.readProperty_string ().objectCompare (enumerator_10982.current_mValue (HERE).readProperty_string ())) ;
        enumerator_10982.gotoNextObject () ;
        if (enumerator_10982.hasCurrentObject ()) {
          bool_0 = var_found_10959.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_10959.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 263)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_10731.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 264)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 264)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_10780.readProperty_string (), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 265)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.readProperty_location (), GGS_string ("an abstract extension func '").add_operation (constinArgument_inAbstractExtensionGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 274)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 274)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 274)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 275)).add_operation (var_descendantClassName_10780.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 276)).add_operation (GGS_string ("' does not implement this func"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 276)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 274)) ;
        }
      }
    }
    enumerator_10731.gotoNextObject () ;
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
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("projectGlobalCheckings.galgas4", 288)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Perform global checkings"), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 289)) ;
      }
    }
  }
  GGS_descendantClassListMap var_descendantClassListMap_12258 = GGS_descendantClassListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_unifiedTypeMap enumerator_12301 (ioArgument_ioTypeMap) ;
  while (enumerator_12301.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_superType_12323 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_12301.current (HERE).readProperty_mElement ().ptr (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 295)).readProperty_superType () ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_superType_12323.getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas4", 296)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 296)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        extensionSetter_insertKey (var_descendantClassListMap_12258, extensionGetter_definition (var_superType_12323, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 298)).readProperty_typeName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12301.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 299)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 297)) ;
        }
      }
    }
    enumerator_12301.gotoNextObject () ;
  }
  GGS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_12643 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionMethodListMap_12717 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_12783 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_12859 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_12943 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionReaderListMap_13017 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_13083 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_13159 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_13243 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionSetterListMap_13317 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_13383 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_13459 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListAST enumerator_13513 (constinArgument_inSemanticDeclarationList) ;
  while (enumerator_13513.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((cPtr_semanticDeclarationAST *) enumerator_13513.current_mSemanticDeclaration (HERE).ptr (), var_abstractExtensionSetterListMap_13243, var_extensionSetterListMap_13317, var_overridingExtensionSetterListMap_13383, var_overridingAbstractExtensionSetterListMap_13459, var_abstractExtensionMethodListMap_12643, var_extensionMethodListMap_12717, var_overridingExtensionMethodListMap_12783, var_overridingAbstractExtensionMethodListMap_12859, var_abstractExtensionGetterListMap_12943, var_extensionReaderListMap_13017, var_overridingExtensionGetterListMap_13083, var_overridingAbstractExtensionGetterListMap_13159, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 317)) ;
    enumerator_13513.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas4", 333)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14305 (var_abstractExtensionSetterListMap_13243.readProperty_dictionary ()) ;
      while (enumerator_14305.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14367 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_14403 (enumerator_14305.current (HERE).readProperty_mList ()) ;
        while (enumerator_14403.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14367.setter_insertKey (enumerator_14403.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 338)) ;
          }
          enumerator_14403.gotoNextObject () ;
        }
        enumerator_14305.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14613 (var_extensionSetterListMap_13317.readProperty_dictionary ()) ;
      while (enumerator_14613.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14675 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_14711 (enumerator_14613.current (HERE).readProperty_mList ()) ;
        while (enumerator_14711.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14675.setter_insertKey (enumerator_14711.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 345)) ;
          }
          enumerator_14711.gotoNextObject () ;
        }
        enumerator_14613.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14937 (var_overridingExtensionSetterListMap_13383.readProperty_dictionary ()) ;
      while (enumerator_14937.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14999 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_15035 (enumerator_14937.current (HERE).readProperty_mList ()) ;
        while (enumerator_15035.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14999.setter_insertKey (enumerator_15035.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 352)) ;
          }
          enumerator_15035.gotoNextObject () ;
        }
        enumerator_14937.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15278 (var_overridingAbstractExtensionMethodListMap_12859.readProperty_dictionary ()) ;
      while (enumerator_15278.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_15340 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_15376 (enumerator_15278.current (HERE).readProperty_mList ()) ;
        while (enumerator_15376.hasCurrentObject ()) {
          {
          var_extensionSetterMap_15340.setter_insertKey (enumerator_15376.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 359)) ;
          }
          enumerator_15376.gotoNextObject () ;
        }
        enumerator_15278.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15651 (var_abstractExtensionSetterListMap_13243.readProperty_dictionary ()) ;
      while (enumerator_15651.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_15676 (enumerator_15651.current (HERE).readProperty_mList ()) ;
        while (enumerator_15676.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15651.current (HERE).readProperty_key (), enumerator_15651.current (HERE).readProperty_key (), enumerator_15676.current_mValue (HERE), var_descendantClassListMap_12258, var_overridingExtensionSetterListMap_13383, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 365)) ;
          }
          enumerator_15676.gotoNextObject () ;
        }
        enumerator_15651.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16141 (var_overridingAbstractExtensionSetterListMap_13459.readProperty_dictionary ()) ;
      while (enumerator_16141.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_16166 (enumerator_16141.current (HERE).readProperty_mList ()) ;
        while (enumerator_16166.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_16141.current (HERE).readProperty_key (), enumerator_16141.current (HERE).readProperty_key (), enumerator_16166.current_mValue (HERE), var_descendantClassListMap_12258, var_overridingExtensionSetterListMap_13383, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 378)) ;
          }
          enumerator_16166.gotoNextObject () ;
        }
        enumerator_16141.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16548 (var_abstractExtensionMethodListMap_12643.readProperty_dictionary ()) ;
      while (enumerator_16548.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16610 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_16646 (enumerator_16548.current (HERE).readProperty_mList ()) ;
        while (enumerator_16646.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16610.setter_insertKey (enumerator_16646.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 392)) ;
          }
          enumerator_16646.gotoNextObject () ;
        }
        enumerator_16548.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16847 (var_extensionMethodListMap_12717.readProperty_dictionary ()) ;
      while (enumerator_16847.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16909 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_16945 (enumerator_16847.current (HERE).readProperty_mList ()) ;
        while (enumerator_16945.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16909.setter_insertKey (enumerator_16945.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 399)) ;
          }
          enumerator_16945.gotoNextObject () ;
        }
        enumerator_16847.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17162 (var_overridingExtensionMethodListMap_12783.readProperty_dictionary ()) ;
      while (enumerator_17162.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17224 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_17260 (enumerator_17162.current (HERE).readProperty_mList ()) ;
        while (enumerator_17260.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17224.setter_insertKey (enumerator_17260.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 406)) ;
          }
          enumerator_17260.gotoNextObject () ;
        }
        enumerator_17162.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17494 (var_overridingAbstractExtensionMethodListMap_12859.readProperty_dictionary ()) ;
      while (enumerator_17494.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17556 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_17592 (enumerator_17494.current (HERE).readProperty_mList ()) ;
        while (enumerator_17592.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17556.setter_insertKey (enumerator_17592.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 413)) ;
          }
          enumerator_17592.gotoNextObject () ;
        }
        enumerator_17494.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17849 (var_abstractExtensionMethodListMap_12643.readProperty_dictionary ()) ;
      while (enumerator_17849.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_17874 (enumerator_17849.current (HERE).readProperty_mList ()) ;
        while (enumerator_17874.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17849.current (HERE).readProperty_key (), enumerator_17849.current (HERE).readProperty_key (), enumerator_17874.current_mValue (HERE), var_descendantClassListMap_12258, var_overridingExtensionMethodListMap_12783, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 419)) ;
          }
          enumerator_17874.gotoNextObject () ;
        }
        enumerator_17849.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18310 (var_overridingAbstractExtensionMethodListMap_12859.readProperty_dictionary ()) ;
      while (enumerator_18310.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_18335 (enumerator_18310.current (HERE).readProperty_mList ()) ;
        while (enumerator_18335.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_18310.current (HERE).readProperty_key (), enumerator_18310.current (HERE).readProperty_key (), enumerator_18335.current_mValue (HERE), var_descendantClassListMap_12258, var_overridingExtensionMethodListMap_12783, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 432)) ;
          }
          enumerator_18335.gotoNextObject () ;
        }
        enumerator_18310.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18866 (var_abstractExtensionGetterListMap_12943.readProperty_dictionary ()) ;
      while (enumerator_18866.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18928 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_18964 (enumerator_18866.current (HERE).readProperty_mList ()) ;
        while (enumerator_18964.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18928.setter_insertKey (enumerator_18964.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 448)) ;
          }
          enumerator_18964.gotoNextObject () ;
        }
        enumerator_18866.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19165 (var_extensionReaderListMap_13017.readProperty_dictionary ()) ;
      while (enumerator_19165.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19227 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_19263 (enumerator_19165.current (HERE).readProperty_mList ()) ;
        while (enumerator_19263.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19227.setter_insertKey (enumerator_19263.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 455)) ;
          }
          enumerator_19263.gotoNextObject () ;
        }
        enumerator_19165.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19480 (var_overridingExtensionGetterListMap_13083.readProperty_dictionary ()) ;
      while (enumerator_19480.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19542 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_19578 (enumerator_19480.current (HERE).readProperty_mList ()) ;
        while (enumerator_19578.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19542.setter_insertKey (enumerator_19578.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 462)) ;
          }
          enumerator_19578.gotoNextObject () ;
        }
        enumerator_19480.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19810 (var_abstractExtensionGetterListMap_12943.readProperty_dictionary ()) ;
      while (enumerator_19810.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_19835 (enumerator_19810.current (HERE).readProperty_mList ()) ;
        while (enumerator_19835.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19810.current (HERE).readProperty_key (), enumerator_19810.current (HERE).readProperty_key (), enumerator_19835.current_mValue (HERE), var_descendantClassListMap_12258, var_overridingExtensionGetterListMap_13083, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 468)) ;
          }
          enumerator_19835.gotoNextObject () ;
        }
        enumerator_19810.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_20246 (var_overridingAbstractExtensionGetterListMap_13159.readProperty_dictionary ()) ;
      while (enumerator_20246.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_20271 (enumerator_20246.current (HERE).readProperty_mList ()) ;
        while (enumerator_20271.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_20246.current (HERE).readProperty_key (), enumerator_20246.current (HERE).readProperty_key (), enumerator_20271.current_mValue (HERE), var_descendantClassListMap_12258, var_overridingExtensionGetterListMap_13083, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 481)) ;
          }
          enumerator_20271.gotoNextObject () ;
        }
        enumerator_20246.gotoNextObject () ;
      }
    }
  }
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
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 35)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_1853 (constinArgument_inInstructionList) ;
  while (enumerator_1853.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_1853.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 37)) ;
    enumerator_1853.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 45)) ;
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
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 257)).readProperty_headerFileName () ;
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
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 269)).readProperty_isPredefined () ;
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
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 275)).readProperty_headerKind () ;
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
  result_result = GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 304)) ;
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
//Overriding extension func '@arrayTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  result_result = GGS_string ("array [@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 29)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 29)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                   GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                   GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                   GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                   GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                   GGS_semanticDeclarationListAST & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2312 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 42)), temp_1.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2312, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 43)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 44)), temp_4.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 44)) ;
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
  GGS_unifiedTypeMapEntry var_uintType_3261 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_3261, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_3352 ;
  {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_3352, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 60)) ;
  }
  GGS_formalParameterSignature temp_1 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 63)) ;
  temp_1.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 63)), var_elementType_3352, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 63)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 63)) ;
  GGS_formalParameterSignature var_setterInputFormalArgumentList_3428 = temp_1 ;
  GGS_formalParameterSignature temp_2 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 66)) ;
  temp_2.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 66)), var_elementType_3352, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 66)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 66)) ;
  GGS_formalParameterSignature var_setterOutputFormalArgumentList_3569 = temp_2 ;
  GGS_getterMap var_getterMap_3748 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_3748, inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 69)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_3748, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 70)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_5066 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_5066.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("first"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 113)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 114)), var_setterOutputFormalArgumentList_3569, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 116)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 118)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 112)) ;
  }
  {
  var_instanceMethodMap_5066.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("last"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 122)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 123)), var_setterOutputFormalArgumentList_3569, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 125)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 127)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 121)) ;
  }
  GGS_setterMap var_setterMap_5623 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS_formalParameterSignature temp_3 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 135)) ;
  var_setterMap_5623.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeAll"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 133)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 134)), temp_3, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 137)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 132)) ;
  }
  {
  GGS_formalParameterSignature temp_4 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 143)) ;
  temp_4.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 143)), var_elementType_3352, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 143)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 143)) ;
  var_setterMap_5623.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("append"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 141)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 142)), temp_4, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 145)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 140)) ;
  }
  {
  var_setterMap_5623.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("popFirst"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 149)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 150)), var_setterOutputFormalArgumentList_3569, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 153)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 148)) ;
  }
  {
  var_setterMap_5623.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("popLast"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 157)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 158)), var_setterOutputFormalArgumentList_3569, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 161)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 156)) ;
  }
  var_setterOutputFormalArgumentList_3569.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 164)), var_uintType_3261, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 164)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 164)) ;
  {
  var_setterMap_5623.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 166)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 167)), var_setterOutputFormalArgumentList_3569, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 170)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 165)) ;
  }
  var_setterInputFormalArgumentList_3428.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 174)), var_uintType_3261, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 174)), GGS_string ("inInsertionIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 174)) ;
  {
  var_setterMap_5623.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("insertAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 176)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 177)), var_setterInputFormalArgumentList_3428, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 180)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 175)) ;
  }
  GGS_initializerMap var_initializerMap_7109 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_7157 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  var_initializerMap_7109.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_7157, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 187)), temp_5.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_7157, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 186)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_7358 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_6 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 192)) ;
  temp_6.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 192)), var_uintType_3261, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 192)) ;
  GGS_functionSignature var_argumentTypeList_7408 = temp_6 ;
  {
  var_readSubscriptMap_7358.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_7408, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 194)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 194)), inCompiler COMMA_HERE), var_argumentTypeList_7408, var_elementType_3352, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 193)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_arrayTypeName (), GGS_bool (false), var_initializerMap_7109, var_getterMap_3748, var_setterMap_5623, var_instanceMethodMap_5066, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 199)) ;
  }
  GGS_typeFeatures var_features_8081 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas4", 215)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas4", 215)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 215)) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_arrayTypeDeclarationAST temp_9 = this ;
    test_8 = temp_9.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_features_8081.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas4", 217)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 217)) ;
    }
  }
  {
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_arrayTypeName (), var_features_8081, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 219)) ;
  }
  const GGS_arrayTypeDeclarationAST temp_11 = this ;
  const GGS_arrayTypeDeclarationAST temp_12 = this ;
  const GGS_arrayTypeDeclarationAST temp_13 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8442 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_arrayTypeName (), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 232)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-array.galgas4", 233)), GGS_bool (true), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_7109, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_3748, var_setterMap_5623, var_instanceMethodMap_5066, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 244)), var_readSubscriptMap_7358, GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_8081, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_elementType_3352, GGS_string ("array-").add_operation (temp_13.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas4", 251)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 251)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas4", 252)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8442.readProperty_typeName (), var_typeDefinition_8442, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 254)) ;
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

void cPtr_arrayTypeDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                            const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                            GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_10192 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 274)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10192, var_nameForUsefulness_10192, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 275)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_nameForUsefulness_10192, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 277)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10459 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 279)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10192, var_elementTypeNameForUsefulness_10459 COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 280)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_elementTypeNameForUsefulness_10459, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 282)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_10840 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_arrayTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 285)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10840, var_initializerNameForUsefulness_10840, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 289)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_initializerNameForUsefulness_10840, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 291)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11238 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 294)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_arrayTypeForGeneration::init_21_infoMessage_21__21_ (GGS_string ("array type ").add_operation (temp_16.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 296)), var_selfType_11238, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 298)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 295)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_12195 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 317)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_12195.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 320)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_12195.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 321)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 318))) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_12195.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 325)), var_selfTypeDefinition_12195.readProperty_isConcrete (), var_selfTypeDefinition_12195.readProperty_initializerMap (), var_selfTypeDefinition_12195.readProperty_classFunctionMap (), var_selfTypeDefinition_12195.readProperty_getterMap (), var_selfTypeDefinition_12195.readProperty_setterMap (), var_selfTypeDefinition_12195.readProperty_instanceMethodMap (), var_selfTypeDefinition_12195.readProperty_classMethodMap (), var_selfTypeDefinition_12195.readProperty_readSubscriptMap (), var_selfTypeDefinition_12195.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_12195.readProperty_features (), var_selfTypeDefinition_12195.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_12195.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_12195.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 323))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 323)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 347)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 348)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13694 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 349)) ;
  const GGS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_13694.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 352)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13694.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 353)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_13694.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 354)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 350))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayTypeGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayTypeGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_arrayTypeGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_arrayTypeGenerationTemplate_2,
  0,
  gWrapperAllDirectories_arrayTypeGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayTypeGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayTypeGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_arrayTypeGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_arrayTypeGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_arrayTypeGenerationTemplate_1,
  1,
  gWrapperAllDirectories_arrayTypeGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayTypeGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_arrayTypeGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayTypeGenerationTemplate_0,
  1,
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
  result.appendString (" & inSource) ;\n\n//--------------------------------- Remove All\n  public: VIRTUAL_IN_DEBUG void removeAll (void) ;\n\n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override ;\n  \n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--------------------------------- Friend\n  friend class UpEnumerator_") ;
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
  result.appendString ("::removeAll (void) {\n  mSharedArray.removeAll () ;\n  mSharedArray.setCapacity (16) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
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
  result.appendString ("::setter_removeAll (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * /* inCompiler */\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
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
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 30)) ;
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
  result_result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) ;
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
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 44))) ;
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
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithBit"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 61)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fullBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 68)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithPredicateString"), GGS_string ("string"), GGS_string ("inPredicateString"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 75)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 84)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 97)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 110)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 123)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 136)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 149)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 162)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 175)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerThanConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 188)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterThanConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 201)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 214)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 227)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isFull"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 247)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nodeCount"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 255)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isEmpty"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 263)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantVariableCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 271)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ITE"), GGS_string ("binaryset"), GGS_string ("inTHENoperand"), GGS_string ("binaryset"), GGS_string ("inELSEoperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 279)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("print"), GGS_string ("stringlist"), GGS_string ("inVariableList"), GGS_string ("uintlist"), GGS_string ("inBDDCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 288)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphvizDump"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 297)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphviz"), GGS_string ("stringlist"), GGS_string ("inBitNameList"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 305)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transformedBy"), GGS_string ("uintlist"), GGS_string ("inTransformationArray"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 313)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 321)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndexAndBeyond"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 329)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 336)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndexAndBeyond"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 343)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueCount"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 350)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigValueCount"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 359)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedValueCount"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 368)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64ValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 376)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 383)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueListWithNameList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_string ("inNameList"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 390)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("predicateStringValue"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 397)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedStringValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 405)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap10"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 412)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap021"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 419)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap102"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 426)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap120"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 433)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap201"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 440)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap210"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 447)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transposedBy"), GGS_string ("uintlist"), GGS_string ("inTransposeVector"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 454)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transitiveClosure"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 461)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("accessibleStates"), GGS_string ("binaryset"), GGS_string ("inInitialStateSet"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 468)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("implies"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 475)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("equalTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 482)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("notEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 489)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowerOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 496)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("greaterOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 503)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictGreaterThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 510)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictLowerThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 517)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetByTranslatingFromIndex"), GGS_string ("uint"), GGS_string ("inFirstIndexToTranslate"), GGS_string ("uint"), GGS_string ("inTranslation"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 524)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsValue"), GGS_string ("uint64"), GGS_string ("inValue"), GGS_string ("uint"), GGS_string ("inFirstBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 531)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existsOnBitRange"), GGS_string ("uint"), GGS_string ("inFirstBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 538)) ;
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
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setNodeTableSize"), GGS_string ("uint"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 552)) ;
  }
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setAndTableSize"), GGS_string ("uint"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 560)) ;
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
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 30)) ;
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
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                       GGS_setterMap & outArgument_outSetterMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("stop"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 44)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("resume"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 49)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("msFromStart"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 61)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isRunning"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 77)) ;
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
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("start"), GGS_string ("timer"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 92)) ;
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
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 104))) ;
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
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 63)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 63)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 63)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("dynamicType")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 63)) ;
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
                                                                GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                GGS_semanticDeclarationListAST & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3829 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 94)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3829, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 95)) ;
  }
  const GGS_structDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_3983 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_3983.hasCurrentObject ()) {
    GGS_lstring var_propertyKey_4022 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_3983.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 97)), enumerator_3983.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3829, var_propertyKey_4022 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 98)) ;
    }
    enumerator_3983.gotoNextObject () ;
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
  result_result = GGS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 105)) ;
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
  GGS_unifiedTypeMapEntry var_structTypeIndex_5114 ;
  {
  const GGS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_5114, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 119)) ;
  }
  GGS_propertyMap var_propertyMap_5193 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorPropertyTypeList_5238 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_5299 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_5356 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_1 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_5421 (temp_1.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_5421.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_5503 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5421.current (HERE).readProperty_typeName (), var_propertyTypeEntry_5503, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 126)) ;
    }
    GGS_string temp_2 ;
    const GalgasBool test_3 = enumerator_5421.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = enumerator_5421.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_5532 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas4", 127)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = enumerator_5421.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas4", 128)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_constructorPropertyTypeList_5238.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (var_selector_5532, var_propertyTypeEntry_5503, enumerator_5421.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 129)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_5356.plusPlusAssignOperation (GGS_unifiedTypeMapEntryList_2E_element::init_21_ (var_propertyTypeEntry_5503, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 131)) ;
    var_typedPropertyList_5299.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_propertyTypeEntry_5503, enumerator_5421.current (HERE).readProperty_name (), enumerator_5421.current (HERE).readProperty_initialization (), enumerator_5421.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 136)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 136)), enumerator_5421.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 132)) ;
    {
    var_propertyMap_5193.setter_insertKey (enumerator_5421.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_5421.current (HERE).readProperty_accessControl (), var_structTypeIndex_5114, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 141)), enumerator_5421.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 142)), var_propertyTypeEntry_5503, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 139)) ;
    }
    enumerator_5421.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_6368 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6368, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 147)) ;
  }
  GGS_setterMap var_setterMap_6421 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_6461 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6509 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_6461, var_getterMap_6368, var_setterMap_6421, var_instanceMethodMap_6509, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 152)) ;
  }
  GGS_typeFeatures var_features_6968 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas4", 167)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_6461.getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 169)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_6968.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 170)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 170)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_6461.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_5238, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 172)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_5238, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 171)) ;
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
      var_features_6968.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 180)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_6968.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 182)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 182)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 182)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_6968, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 184)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_7794 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      var_enumeratedType_7794 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 194)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_7794, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 196)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8025 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 204)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas4", 205)), GGS_bool (false), var_typedPropertyList_5299, var_propertyMap_5193, var_typedPropertyList_5299, var_initializerMap_6461, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6368, var_setterMap_6421, var_instanceMethodMap_6509, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 216)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_6968, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_enumeratedType_7794, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 223)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas4", 224)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8025.readProperty_typeName (), var_typeDefinition_8025, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 226)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_structType_9624 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 239)) ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_structNameForUsefulness_9697 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 240)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_structDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 242)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_structDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_structTypeName ().readProperty_location (), GGS_string ("a structure cannot be empty: it must have at least one property"), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 243)) ;
    }
  }
  GGS_typedPropertyList var_typedPropertyList_9974 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_constructorArgumentList_10025 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_10081 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_6 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_10124 (temp_6.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_10124.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_10163 = function_typeNameForUsefulEntitiesGraph (enumerator_10124.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 249)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9697, var_propertyTypeNameForUsefulness_10163 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 250)) ;
    }
    GGS_unifiedTypeMapEntry var_t_10363 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10124.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 251)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 252)).getter_hasKey (enumerator_10124.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 252)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_m_10507 = GGS_string ("an property cannot be named:") ;
        UpEnumerator_stringset enumerator_10583 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 254))) ;
        while (enumerator_10583.hasCurrentObject ()) {
          var_m_10507.plusAssignOperation(GGS_string (" ").add_operation (enumerator_10583.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 255)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 255)) ;
          enumerator_10583.gotoNextObject () ;
        }
        var_m_10507.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 257)) ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_10124.current (HERE).readProperty_name ().readProperty_location (), var_m_10507, fixItArray8  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 258)) ;
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = enumerator_10124.current (HERE).readProperty_mutability ().getter_isWeakProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 260)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        switch (extensionGetter_definition (var_t_10363, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 261)).readProperty_unwrappedType ().enumValue ()) {
        case GGS_unifiedTypeMapEntry::Enumeration::invalid:
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
          {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_10124.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 263)) ;
          }
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
          {
            GGS_unifiedTypeMapElementClass_2E_weak extractedValue_10930_aWeakType_0 ;
            extensionGetter_definition (var_t_10363, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 261)).readProperty_unwrappedType ().getAssociatedValuesFor_element (extractedValue_10930_aWeakType_0) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_unifiedTypeMapElementClass var_aType_10960 = extractedValue_10930_aWeakType_0.unwrappedValue () ;
              if (!extractedValue_10930_aWeakType_0.isValuated ()) {
                test_11 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) var_aType_10960.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 265)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("declaration-type-struct.galgas4", 265)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_10124.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 267)) ;
            }
          }
          break ;
        }
      }
    }
    {
    var_propertyMap_10081.setter_insertKey (enumerator_10124.current (HERE).readProperty_name (), var_t_10363, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 271)) ;
    }
    switch (enumerator_10124.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_10025.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10363, enumerator_10124.current (HERE).readProperty_name (), enumerator_10124.current (HERE).readProperty_initialization (), enumerator_10124.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 278)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 278)), enumerator_10124.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 274)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_9974.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10363, enumerator_10124.current (HERE).readProperty_name (), enumerator_10124.current (HERE).readProperty_initialization (), enumerator_10124.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 286)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 286)), enumerator_10124.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 282)) ;
    const GGS_structDeclarationAST temp_13 = this ;
    switch (temp_13.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_11846 = extensionGetter_definition (var_t_10363, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)).readProperty_features () ;
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = var_propertyFeatures_11846.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 294)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 294)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 294)).operator_and (var_propertyFeatures_11846.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 295)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 295)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 295)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 294)).operator_and (var_propertyFeatures_11846.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas4", 296)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 296)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 296)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 295)).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_10124.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_10124.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 297)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = extensionGetter_definition (var_t_10363, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 301)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 301)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 301)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 301)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GenericArray <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_10124.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_10124.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 303)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 303)), fixItArray17  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 302)) ;
          }
        }
      }
      break ;
    }
    enumerator_10124.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_12689 ;
  GGS_string var_initializationCode_12726 ;
  const GGS_structDeclarationAST temp_18 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_18.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_9697, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_12689, var_initializationCode_12726, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 308)) ;
  GGS_bool var_constructorNeedsCompilerVar_12767 = var_unusedVariableCppNameSet_12689.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 318)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 318)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 318)) ;
  const GGS_structDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_structTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("struct ").add_operation (temp_19.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 320)), var_structType_9624, var_typedPropertyList_9974, var_constructorArgumentList_10025, var_initializationCode_12726, var_constructorNeedsCompilerVar_12767, extensionGetter_definition (var_structType_9624, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 326)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 326)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 326)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 319)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9697, var_structNameForUsefulness_9697, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 329)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_structNameForUsefulness_9697, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 331)) ;
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = extensionGetter_definition (var_structType_9624, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 334)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 334)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 334)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_structDeclarationAST temp_25 = this ;
      GGS_lstring var_initializerForUsefulness_13577 = function_initializerNameForUsefulEntitiesGraph (temp_25.readProperty_structTypeName (), extensionGetter_initializerSignature (var_constructorArgumentList_10025, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 335)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_13577, var_initializerForUsefulness_13577, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 339)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_13577, var_structNameForUsefulness_9697 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 340)) ;
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
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_initializerForUsefulness_13577, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 342)) ;
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
  UpEnumerator_typedPropertyList enumerator_14940 (temp_0.readProperty_mTypedPropertyList ()) ;
  while (enumerator_14940.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14940.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 366)) ;
    enumerator_14940.gotoNextObject () ;
  }
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_15041 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 368)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypeDefinition_15041.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 371)), temp_3.readProperty_mTypedPropertyList () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 369))) ;
  const GGS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_15041.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 376)), var_selfTypeDefinition_15041.readProperty_isConcrete (), var_selfTypeDefinition_15041.readProperty_initializerMap (), var_selfTypeDefinition_15041.readProperty_classFunctionMap (), var_selfTypeDefinition_15041.readProperty_getterMap (), var_selfTypeDefinition_15041.readProperty_setterMap (), var_selfTypeDefinition_15041.readProperty_instanceMethodMap (), var_selfTypeDefinition_15041.readProperty_classMethodMap (), var_selfTypeDefinition_15041.readProperty_readSubscriptMap (), var_selfTypeDefinition_15041.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_15041.readProperty_features (), var_selfTypeDefinition_15041.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_15041.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_15041.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 374))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 374)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 400)) ;
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_16367 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 401)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  const GGS_structTypeForGeneration temp_4 = this ;
  const GGS_structTypeForGeneration temp_5 = this ;
  const GGS_structTypeForGeneration temp_6 = this ;
  const GGS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_16367.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 404)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_16367.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 410)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 402))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structureGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_structureGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structureGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_structureGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_structureGenerationTemplate_2,
  0,
  gWrapperAllDirectories_structureGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_structureGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structureGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_structureGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_structureGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_structureGenerationTemplate_1,
  1,
  gWrapperAllDirectories_structureGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structureGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_structureGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structureGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structureGenerationTemplate_0,
  1,
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
//Overriding extension proc '@typePredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("typeList"), GGS_string ("typelist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas4", 32)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas4", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("name"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas4", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuperclass"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas4", 54)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("superclass"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas4", 62)) ;
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
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-type.galgas4", 75)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-type.galgas4", 75)) COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas4", 75)) ;
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
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas4", 81))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_lstring joker_1661 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_1661, GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 30)), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 30)) ;
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
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("homeDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("newWithStdIn"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("retrieveAndResetTemplateString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separatorString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 59)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSymbolicLinkContents"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 66)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSourceFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 75)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 89)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDateTime"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 98)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariable"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 105)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariableOrEmpty"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 114)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppLineComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 123)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppSpaceComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 130)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppTitleComment"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 137)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 146)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppChar"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 155)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsJoinedByString"), GGS_string ("stringlist"), GGS_string ("inComponents"), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 164)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByRepeatingString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("uint"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 175)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSequenceOfCharacters"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 186)) ;
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
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFile"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 204)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFileIfExists"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 211)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeEmptyDirectory"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 218)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeDirectoryRecursively"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 225)) ;
  }
  GGS_unifiedTypeMapEntry var_stringType_7375 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_7375, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 232)) ;
  }
  GGS_unifiedTypeMapEntry var_boolType_7465 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_boolType_7465, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 233)) ;
  }
  GGS_formalParameterSignature var_argList_7531 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)), GGS_string ("inStartPath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)), GGS_string ("inFileName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)), GGS_string ("inContents"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFile"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 240)), inCompiler COMMA_HERE), var_argList_7531, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 239)) ;
  }
  var_argList_7531 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("startPath").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)), GGS_string ("inStartPath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("fileName").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)), GGS_string ("inFileName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("lineComment").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)), GGS_string ("inLineCommentPrefix"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("header").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)), GGS_string ("inHeader"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)), GGS_string ("inDefaultUserZone1"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)), GGS_string ("inGeneratedZone2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)), GGS_string ("inDefaultUserZone2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)), var_stringType_7375, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)), GGS_string ("inGeneratedZone3"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)) ;
  var_argList_7531.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)), var_boolType_7465, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)), GGS_string ("inMakeExecutable"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFileWithPattern"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 256)), inCompiler COMMA_HERE), var_argList_7531, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 255)) ;
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
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 267)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 275)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 283)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 291)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeSymbolicLinkWithPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 299)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GGS_string ("makeDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 307)) ;
  }
  GGS_formalParameterSignature var_argList_10687 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10777 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_10777, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 314)) ;
  }
  var_argList_10687.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)), var_t_10777, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)), GGS_string ("inFilePath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_10777, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 316)) ;
  }
  var_argList_10687.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)), var_t_10777, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)), GGS_string ("outFileModified"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 319)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 320)), var_argList_10687, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 322)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 324)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 318)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToExecutableFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 328)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 329)), var_argList_10687, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 331)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 333)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 327)) ;
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
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inCapacity"), GGS_string ("setCapacity"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 343)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inAmount"), GGS_string ("incIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 351)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inAmount"), GGS_string ("decIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 359)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inColumnIndex"), GGS_string ("appendSpacesUntilColumn"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 367)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("setCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 375)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("insertCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 385)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("outChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("removeCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 395)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 411)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 412)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 420)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string::makeEmptyString (), GGS_string ("lstring"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string::makeEmptyString (), GGS_string ("lstring"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 436)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doesEnvironmentVariableExist"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 444)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 452)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("range"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 460)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithUnicodeEscaping"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 468)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("assemblerRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 476)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileNameRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nameRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 492)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 500)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("identifierRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 508)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decodedStringFromRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 516)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("HTMLRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 524)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEscapingQuestionMark"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 532)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Representation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithoutDelimiters"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 548)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 556)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32Representation"), GGS_string ("withZeroTerminator"), GGS_string ("bool"), GGS_string ("inAppendZeroTerminator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 564)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("trimmingSpaces"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 574)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasPrefix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPrefix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 582)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuffix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSuffix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 591)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("md5"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 600)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sha256"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 608)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsignedNumber"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 616)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsignedNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 624)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsigned64Number"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 632)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsigned64Number"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 640)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedNumber"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 648)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 656)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSigned64Number"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 664)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSigned64Number"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 672)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedBigInt"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 680)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint\?"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 688)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedBigInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 696)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDoubleNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 704)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleNumber"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 712)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capacity"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 720)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isSymbolicLink"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 728)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExists"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 736)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExists"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 744)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pathExtension"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 752)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nativePathWithUnixPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 760)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unixPathWithNativePath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 768)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastPathComponent"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 776)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingPathExtension"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 784)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capitalizingFirstCharacter"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 792)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("firstCharacterOrNul"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 800)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingLastPathComponent"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 808)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("standardizedPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 816)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowercased"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 824)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uppercased"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 832)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("reversed"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 840)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentColumn"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 848)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 856)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("popen"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 864)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEnclosedWithin"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 872)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inArguments"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 881)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenCommandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inArguments"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 890)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("characterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 899)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 908)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacterInRange"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inFirstCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inLastCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 917)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingCharacterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 930)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subStringFromIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 939)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightSubString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 948)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftSubString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 957)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inStart"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 966)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 975)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("relativePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 984)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsSeparatedByString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 992)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1000)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1009)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftAndRightPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1018)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("replacing"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSearchedString"), GGS_string ("by"), GGS_string ("string"), GGS_string ("inReplacementString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1027)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1036)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1046)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directories"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1055)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesWithExtensions"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inExtensionList"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1064)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFilesWithExtensions"), GGS_string ("recursive"), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inExtensionList"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1073)) ;
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
  result_result = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1087)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1087)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1087)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1087)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1088)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1088)) ;
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
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1094))) ;
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
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 30))) ;
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
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("zero"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 39)) ;
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
  GGS_unifiedTypeMapEntry var_bigIntType_2432 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), var_bigIntType_2432, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 55)) ;
  }
  GGS_formalParameterSignature var_argList_2478 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2478.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)), var_bigIntType_2432, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)), GGS_string ("inDivisor"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)) ;
  var_argList_2478.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("quotient").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)), var_bigIntType_2432, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)), GGS_string ("outQuotient"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)) ;
  var_argList_2478.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("remainder").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)), var_bigIntType_2432, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)), GGS_string ("outRemainder"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("divideBy"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 61)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 62)), var_argList_2478, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 64)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 66)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 60)) ;
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
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), GGS_string ("inBit"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("setBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 78)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("complementBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 88)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt64"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt64"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("spacedString"), GGS_string ("uint"), GGS_string ("inSeparation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 160)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 187)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 195)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 203)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 211)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 219)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("abs"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 227)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitAtIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 235)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isZero"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 243)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sign"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 251)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 259)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 267)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 275)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 283)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 291)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)) ;
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
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 312)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 312)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 312)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 312)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 312)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 312)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 313)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 313)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 313)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 314)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 313)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 314)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 314)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 314)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 315)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 315)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 315)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 315)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 316)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 316)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 317)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 316)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 317)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 317)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 318)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 317)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 318)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 318)) ;
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
  result_result = GGS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 134)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listDeclarationAST temp_0 = this ;
  const GGS_listDeclarationAST temp_1 = this ;
  GGS_lstring var_key_5584 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 147)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5584, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 148)) ;
  }
  const GGS_listDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_5732 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_5732.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5732.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 150)), enumerator_5732.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 150)) ;
    }
    enumerator_5732.gotoNextObject () ;
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
  GGS_typedPropertyList var_typedAttributeList_6673 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6721 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_6721.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_6721.current (HERE).readProperty_initialization ().getter_isSome (SOURCE_FILE ("declaration-type-list.galgas4", 170)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6721.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 171)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_6922 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6721.current (HERE).readProperty_typeName (), var_attributeTypeIndex_6922, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 173)) ;
    }
    var_typedAttributeList_6673.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_6922, enumerator_6721.current (HERE).readProperty_name (), enumerator_6721.current (HERE).readProperty_initialization (), GGS_bool (true), enumerator_6721.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 174)) ;
    enumerator_6721.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_uintType_7161 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_7161, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 177)) ;
  }
  GGS_unifiedTypeMapEntry var_listTypeIndex_7243 ;
  {
  const GGS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_7243, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 179)) ;
  }
  GGS_unifiedTypeMapEntry var_listElementType_7393 ;
  {
  const GGS_listDeclarationAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_4.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 182)), var_listElementType_7393, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 181)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_7473 = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorAttributeTypeList_7526 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterOutputFormalArgumentList_7593 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterInputFormalArgumentList_7662 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_typedPropertyList enumerator_7716 (var_typedAttributeList_6673) ;
  while (enumerator_7716.hasCurrentObject ()) {
    GGS_string temp_5 ;
    const GalgasBool test_6 = enumerator_7716.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      temp_5 = enumerator_7716.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_6) {
      temp_5 = GGS_string::makeEmptyString () ;
    }
    GGS_string var_selector_7746 = temp_5 ;
    var_enumerationDescriptor_7473.plusPlusAssignOperation (GGS_enumerationDescriptorList_2E_element::init_21__21_ (enumerator_7716.current (HERE).readProperty_typeEntry (), enumerator_7716.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 192)) ;
    var_constructorAttributeTypeList_7526.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (var_selector_7746.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 194)), enumerator_7716.current (HERE).readProperty_typeEntry (), enumerator_7716.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 193)) ;
    var_setterOutputFormalArgumentList_7593.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (var_selector_7746.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 200)), enumerator_7716.current (HERE).readProperty_typeEntry (), GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-list.galgas4", 202)), enumerator_7716.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 199)) ;
    var_setterInputFormalArgumentList_7662.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (var_selector_7746.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 206)), enumerator_7716.current (HERE).readProperty_typeEntry (), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 208)), enumerator_7716.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 205)) ;
    enumerator_7716.gotoNextObject () ;
  }
  GGS_classFunctionMap var_classFunctionMap_8376 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  var_classFunctionMap_8376.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("listWithValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 215)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_7526, GGS_bool (false), var_listTypeIndex_7243, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 214)) ;
  }
  GGS_getterMap var_getterMap_8619 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8619, inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 221)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8619, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 222)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8619, ioArgument_ioTypeMap, GGS_string ("range"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 230)) ;
  }
  {
  const GGS_listDeclarationAST temp_7 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8619, ioArgument_ioTypeMap, GGS_string ("subListFromIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_7.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 238)) ;
  }
  {
  const GGS_listDeclarationAST temp_8 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8619, ioArgument_ioTypeMap, GGS_string ("subListToIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_8.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 246)) ;
  }
  {
  const GGS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8619, ioArgument_ioTypeMap, GGS_string ("subListWithRange"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_string ("inRange"), temp_9.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 254)) ;
  }
  UpEnumerator_typedPropertyList enumerator_9754 (var_typedAttributeList_6673) ;
  while (enumerator_9754.hasCurrentObject ()) {
    {
    GGS_functionSignature temp_10 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 266)) ;
    temp_10.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 266)), var_uintType_7161, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 266)) ;
    var_getterMap_8619.setter_insertOrReplace (GGS_lstring::init_21__21_ (enumerator_9754.current (HERE).readProperty_name ().readProperty_string ().add_operation (GGS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 264)), enumerator_9754.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 265)), temp_10, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 267)), GGS_bool (true), enumerator_9754.current (HERE).readProperty_typeEntry (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 270)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 263)) ;
    }
    enumerator_9754.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_10221 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10221.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("first"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 277)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 278)), var_setterOutputFormalArgumentList_7593, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 280)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 282)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 276)) ;
  }
  {
  var_instanceMethodMap_10221.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("last"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 286)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 287)), var_setterOutputFormalArgumentList_7593, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 289)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 291)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 285)) ;
  }
  GGS_setterMap var_setterMap_10740 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_10740.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("append"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 297)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 298)), var_setterInputFormalArgumentList_7662, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 301)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 296)) ;
  }
  {
  var_setterMap_10740.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popFirst"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 305)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 306)), var_setterOutputFormalArgumentList_7593, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 309)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 304)) ;
  }
  {
  var_setterMap_10740.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popLast"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 313)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 314)), var_setterOutputFormalArgumentList_7593, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 317)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 312)) ;
  }
  var_setterOutputFormalArgumentList_7593.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 320)), var_uintType_7161, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 320)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 320)) ;
  {
  var_setterMap_10740.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("removeAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 322)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 323)), var_setterOutputFormalArgumentList_7593, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 326)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 321)) ;
  }
  UpEnumerator_typedPropertyList enumerator_11644 (var_typedAttributeList_6673) ;
  while (enumerator_11644.hasCurrentObject ()) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = enumerator_11644.current (HERE).readProperty_hasSetter ().boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_formalParameterSignature var_setterFormalArgumentList_11707 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        var_setterFormalArgumentList_11707.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 332)), enumerator_11644.current (HERE).readProperty_typeEntry (), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 332)), enumerator_11644.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 332)) ;
        var_setterFormalArgumentList_11707.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 333)), var_uintType_7161, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 333)), enumerator_11644.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 333)) ;
        {
        var_setterMap_10740.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_11644.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-list.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 335)).add_operation (GGS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 335)), enumerator_11644.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 336)), var_setterFormalArgumentList_11707, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 339)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 334)) ;
        }
      }
    }
    enumerator_11644.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_7662.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 345)), var_uintType_7161, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 345)), GGS_string ("inInsertionIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 345)) ;
  {
  var_setterMap_10740.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 347)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 348)), var_setterInputFormalArgumentList_7662, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 351)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 346)) ;
  }
  GGS_initializerMap var_initializerMap_12742 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_12788 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_12 = this ;
  var_initializerMap_12742.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12788, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 358)), temp_12.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12788, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 357)) ;
  }
  {
  const GGS_listDeclarationAST temp_13 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_13.readProperty_mListTypeName (), GGS_bool (false), var_initializerMap_12742, var_getterMap_8619, var_setterMap_10740, var_instanceMethodMap_10221, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 362)) ;
  }
  GGS_typeFeatures var_features_13373 = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-list.galgas4", 378)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-list.galgas4", 378)) COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 378)) ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_listDeclarationAST temp_15 = this ;
    test_14 = temp_15.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      var_features_13373.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas4", 380)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 380)) ;
    }
  }
  {
  const GGS_listDeclarationAST temp_16 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_16.readProperty_mListTypeName (), var_features_13373, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 382)) ;
  }
  const GGS_listDeclarationAST temp_17 = this ;
  const GGS_listDeclarationAST temp_18 = this ;
  const GGS_listDeclarationAST temp_19 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_13710 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_17.readProperty_mListTypeName (), temp_18.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas4", 395)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-list.galgas4", 396)), GGS_bool (true), var_typedAttributeList_6673, GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_12742, var_classFunctionMap_8376, var_getterMap_8619, var_setterMap_10740, var_instanceMethodMap_10221, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas4", 407)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_7473, var_features_13373, var_constructorAttributeTypeList_7526, GGS_bool (false), var_listElementType_7393, GGS_string ("list-").add_operation (temp_19.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-list.galgas4", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 414)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-list.galgas4", 415)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_13710.readProperty_typeName (), var_typeDefinition_13710, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 417)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_14968 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_15017 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_15017.hasCurrentObject ()) {
    var_structAttributeList_14968.plusPlusAssignOperation (GGS_propertyInCollectionListAST_2E_element::init_21_mutability_21__21__21__21_hasSelector_21_initialization (enumerator_15017.current (HERE).readProperty_mutability (), enumerator_15017.current (HERE).readProperty_typeName (), enumerator_15017.current (HERE).readProperty_name (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-list.galgas4", 430)), enumerator_15017.current (HERE).readProperty_hasSelector (), enumerator_15017.current (HERE).readProperty_initialization (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 426)) ;
    enumerator_15017.gotoNextObject () ;
  }
  const GGS_listDeclarationAST temp_1 = this ;
  const GGS_listDeclarationAST temp_2 = this ;
  const GGS_listDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas4", 440)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-list.galgas4", 440)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 437)), var_structAttributeList_14968, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 435)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_16296 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 460)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16296, var_nameForUsefulness_16296, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 461)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_nameForUsefulness_16296, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 463)) ;
    }
  }
  const GGS_listDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_16556 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_5.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 466)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 465)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16296, var_elementTypeNameForUsefulness_16556 COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 468)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_elementTypeNameForUsefulness_16556, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 470)) ;
    }
  }
  const GGS_listDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_16965 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_mListTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 475)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 473)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_16965, var_initializerNameForUsefulness_16965, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 477)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_16965, var_nameForUsefulness_16296 COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 478)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_initializerNameForUsefulness_16965, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 480)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_17462 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_17511 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_15 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_17553 (temp_15.readProperty_mPropertyList ()) ;
  while (enumerator_17553.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = enumerator_17553.current (HERE).readProperty_initialization ().getter_isSome (SOURCE_FILE ("declaration-type-list.galgas4", 486)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_17553.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("property initialization is not handled for a list"), fixItArray17  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 487)) ;
      }
    }
    GGS_lstring var_propertyTypeNameForUsefulness_17711 = function_typeNameForUsefulEntitiesGraph (enumerator_17553.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 489)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16296, var_propertyTypeNameForUsefulness_17711 COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 490)) ;
    }
    GGS_unifiedTypeMapEntry var_t_17901 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_17553.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 491)) ;
    var_typedAttributeList_17462.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_t_17901, enumerator_17553.current (HERE).readProperty_name (), enumerator_17553.current (HERE).readProperty_initialization (), GGS_bool (true), enumerator_17553.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 492)) ;
    {
    var_attributeMap_17511.setter_insertKey (enumerator_17553.current (HERE).readProperty_name (), var_t_17901, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 499)) ;
    }
    enumerator_17553.gotoNextObject () ;
  }
  const GGS_listDeclarationAST temp_18 = this ;
  GGS_unifiedTypeMapEntry var_selfType_18183 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_18.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 502)) ;
  const GGS_listDeclarationAST temp_19 = this ;
  const GGS_listDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_listTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("list type ").add_operation (temp_19.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 504)), var_selfType_18183, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_20.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 506)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 506)), var_typedAttributeList_17462, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 503)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_19124 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 526)) ;
  const GGS_listTypeForGeneration temp_1 = this ;
  const GGS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypeDefinition_19124.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 529)), temp_2.readProperty_mTypedAttributeList (), var_selfTypeDefinition_19124.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19124.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_19124.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 533)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_19124.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 534)) COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 527))) ;
  const GGS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_19124.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 538)), var_selfTypeDefinition_19124.readProperty_isConcrete (), var_selfTypeDefinition_19124.readProperty_initializerMap (), var_selfTypeDefinition_19124.readProperty_classFunctionMap (), var_selfTypeDefinition_19124.readProperty_getterMap (), var_selfTypeDefinition_19124.readProperty_setterMap (), var_selfTypeDefinition_19124.readProperty_instanceMethodMap (), var_selfTypeDefinition_19124.readProperty_classMethodMap (), var_selfTypeDefinition_19124.readProperty_readSubscriptMap (), var_selfTypeDefinition_19124.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19124.readProperty_features (), var_selfTypeDefinition_19124.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_19124.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_19124.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 536))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 536)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listTypeForGeneration temp_0 = this ;
  UpEnumerator_typedPropertyList enumerator_20713 (temp_0.readProperty_mTypedAttributeList ()) ;
  while (enumerator_20713.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_20713.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 562)) ;
    enumerator_20713.gotoNextObject () ;
  }
  const GGS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 564)) ;
  const GGS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 565)) ;
  const GGS_listTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20933 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 566)) ;
  const GGS_listTypeForGeneration temp_4 = this ;
  const GGS_listTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_20933.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 569)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_20933.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 571)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_20933.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 572)) COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 567))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_listGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_listGenerationTemplate_2,
  0,
  gWrapperAllDirectories_listGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_listGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_listGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_listGenerationTemplate_1,
  1,
  gWrapperAllDirectories_listGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_listGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_listGenerationTemplate_0,
  1,
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
//Overriding extension func '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_locationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)) ;
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
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string ("location"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("next"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separator"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 59)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 72)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 73)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationString"), GGS_string ("locationString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 81)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 89)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationIndex"), GGS_string ("locationIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 97)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("file"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 105)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLine"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 113)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLine"), GGS_string ("line"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 121)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startColumn"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 129)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endColumn"), GGS_string ("column"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 137)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isNowhere"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 145)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("union"), GGS_string::makeEmptyString (), GGS_string ("location"), GGS_string ("inOtherLocation"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 153)) ;
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
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 166))) ;
//---
  return result_result ;
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
  result_result = GGS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 34)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS_semanticDeclarationListAST & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  const GGS_weakReferenceDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2638 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 48)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2638, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 49)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_weakReferenceDeclarationAST temp_5 = this ;
      const GGS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2638, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 53)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 51)) ;
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
  GGS_unifiedTypeMapEntry var_superClassIndex_3891 ;
  GGS_bool var_generateHeaderInSeparateFile_3919 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassIndex_3891 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 74)) ;
      const GGS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_3919 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_3891, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 77)) ;
    }
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_4210 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 78)) ;
    var_generateHeaderInSeparateFile_3919 = var_superTypeDefinition_4210.readProperty_generateHeaderInSeparateFile () ;
  }
  GGS_unifiedTypeMapEntry var_weakReferenceIndex_4498 ;
  {
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4498, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 82)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_4567 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_6 = this ;
  var_classFunctionMap_4567.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nil"), temp_6.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_weakReferenceIndex_4498, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 88)) ;
  }
  GGS_getterMap var_getterMap_4767 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_4800 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4841 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4887 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mWeakReferenceTypeName (), GGS_bool (false), var_initializerMap_4887, var_getterMap_4767, var_setterMap_4800, var_instanceMethodMap_4841, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 99)) ;
  }
  UpEnumerator_getterMap enumerator_5330 (var_getterMap_4767) ;
  while (enumerator_5330.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (enumerator_5330.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 115)) ;
    enumerator_5330.gotoNextObject () ;
  }
  UpEnumerator_setterMap enumerator_5439 (var_setterMap_4800) ;
  while (enumerator_5439.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (enumerator_5439.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 118)) ;
    enumerator_5439.gotoNextObject () ;
  }
  UpEnumerator_instanceMethodMap enumerator_5548 (var_instanceMethodMap_4841) ;
  while (enumerator_5548.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (enumerator_5548.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 121)) ;
    enumerator_5548.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_5654 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 123)) ;
  {
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mWeakReferenceTypeName (), var_features_5654, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 124)) ;
  }
  GGS_unifiedTypeMapEntry var_classIndex_5954 ;
  {
  const GGS_weakReferenceDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_12.readProperty_mClassTypeName (), var_classIndex_5954, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 132)) ;
  }
  const GGS_weakReferenceDeclarationAST temp_13 = this ;
  const GGS_weakReferenceDeclarationAST temp_14 = this ;
  const GGS_weakReferenceDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_5972 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_mWeakReferenceTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), var_superClassIndex_3891, GGS_typeKindEnum::class_func_weakReferenceType (var_classIndex_5954  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 139)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_4887, var_classFunctionMap_4567, GGS_getterMap::init (inCompiler COMMA_HERE), GGS_setterMap::init (inCompiler COMMA_HERE), GGS_instanceMethodMap::init (inCompiler COMMA_HERE), GGS_classMethodMap::init (inCompiler COMMA_HERE), var_classIndex_5954, GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_5654, GGS_functionSignature::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_3919, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 156)), GGS_string ("weak-reference-").add_operation (temp_15.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 157)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 157)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 158)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5972.readProperty_typeName (), var_typeDefinition_5972, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 160)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  GGS_lstring var_weakRefTypeNameForUsefulness_7681 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 177)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_7681, var_weakRefTypeNameForUsefulness_7681, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 178)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_weakReferenceDeclarationAST temp_3 = this ;
      GGS_lstring var_superWeakRefNameForUsefulness_7932 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_7681, var_superWeakRefNameForUsefulness_7932 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 181)) ;
      }
    }
  }
  const GGS_weakReferenceDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8191 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 184)) ;
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry temp_6 ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 187)) ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 188)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_8312 = temp_6 ;
  const GGS_weakReferenceDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_referenceClassType_8538 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 191)) ;
  const GGS_weakReferenceDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_optionalClassTypeOrNull_8672 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, function_makeOptionalTypeLName (temp_10.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 195)) ;
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_weakReferenceTypeForGeneration::init_21_infoMessage_21__21__21__21__21_ (GGS_string ("weak reference ").add_operation (temp_11.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 199)), var_selfType_8191, var_referenceClassType_8538, var_superClassEntry_8312, extensionGetter_definition (var_selfType_8191, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 203)).readProperty_generateHeaderInSeparateFile (), var_optionalClassTypeOrNull_8672, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 198)) ;
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
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 223)).operator_not (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 223)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 224)) ;
    }
  }
  const GGS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 226)) ;
  const GGS_weakReferenceTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_10126 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 227)) ;
  GGS_string var_optionalClassTypeNameRepresentation_10188 ;
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  switch (temp_5.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_10188 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_10337__0 ;
      temp_5.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_10337__0) ;
      const GGS_weakReferenceTypeForGeneration temp_6 = this ;
      var_optionalClassTypeNameRepresentation_10188 = extensionGetter_identifierRepresentation (temp_6.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 233)) ;
    }
    break ;
  }
  const GGS_weakReferenceTypeForGeneration temp_7 = this ;
  const GGS_weakReferenceTypeForGeneration temp_8 = this ;
  const GGS_weakReferenceTypeForGeneration temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 238)).boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    temp_10 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_11) {
    const GGS_weakReferenceTypeForGeneration temp_12 = this ;
    temp_10 = extensionGetter_identifierRepresentation (temp_12.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 238)) ;
  }
  outArgument_outHeader = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_7.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 236)), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 237)), temp_10, var_optionalClassTypeNameRepresentation_10188 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 235))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_10126.readProperty_typeName ().readProperty_string (), var_typeDefinition_10126.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 243)), var_typeDefinition_10126.readProperty_isConcrete (), var_typeDefinition_10126.readProperty_initializerMap (), var_typeDefinition_10126.readProperty_classFunctionMap (), var_typeDefinition_10126.readProperty_getterMap (), var_typeDefinition_10126.readProperty_setterMap (), var_typeDefinition_10126.readProperty_instanceMethodMap (), var_typeDefinition_10126.readProperty_classMethodMap (), var_typeDefinition_10126.readProperty_readSubscriptMap (), var_typeDefinition_10126.readProperty_enumerationDescriptorList (), var_typeDefinition_10126.readProperty_features (), var_typeDefinition_10126.readProperty_addAssignOperatorArguments (), var_typeDefinition_10126.readProperty_typeForEnumeratedElement (), var_typeDefinition_10126.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 241))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 241)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 267)) ;
  const GGS_weakReferenceTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_11776 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 268)) ;
  GGS_string var_optionalClassTypeNameRepresentation_11838 ;
  const GGS_weakReferenceTypeForGeneration temp_2 = this ;
  switch (temp_2.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_11838 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_11987__0 ;
      temp_2.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_11987__0) ;
      const GGS_weakReferenceTypeForGeneration temp_3 = this ;
      var_optionalClassTypeNameRepresentation_11838 = extensionGetter_identifierRepresentation (temp_3.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 274)) ;
      const GGS_weakReferenceTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_optionalClassTypeOrNull (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 275)) ;
    }
    break ;
  }
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  const GGS_weakReferenceTypeForGeneration temp_6 = this ;
  GGS_string temp_7 ;
  const GalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 280)).boolEnum () ;
  if (GalgasBool::boolTrue == test_8) {
    temp_7 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_8) {
    const GGS_weakReferenceTypeForGeneration temp_9 = this ;
    temp_7 = extensionGetter_identifierRepresentation (temp_9.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 280)) ;
  }
  outArgument_outImplementation = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 278)), var_typeDefinition_11776.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 279)), temp_7, var_optionalClassTypeNameRepresentation_11838 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 277))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'weakClassGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_weakClassGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_weakClassGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_weakClassGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_weakClassGenerationTemplate_2,
  0,
  gWrapperAllDirectories_weakClassGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_weakClassGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_weakClassGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_weakClassGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_weakClassGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_weakClassGenerationTemplate_1,
  1,
  gWrapperAllDirectories_weakClassGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_weakClassGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_weakClassGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_weakClassGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_weakClassGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_weakClassGenerationTemplate_0,
  1,
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
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 28))) ;
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
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 40)) ;
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
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 48)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64MaskWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 55)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64BaseValueWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 64)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64WithBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 73)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintSlice"), GGS_string ("uint"), GGS_string ("inStartBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("alphaString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 145)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 153)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 161)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 172)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 180)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 187)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 194)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas4", 201)) ;
  }
}

