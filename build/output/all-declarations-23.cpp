#include "Compiler.h"
#include "galgas-input-output.h"
#include "execution-mode.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GGS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapper var_fw_1497 = GGS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  UpEnumerator__5B_string_5D_ enumerator_1576 (var_fw_1497.getter_allDirectoryPaths (SOURCE_FILE ("libpmHandling.galgas4", 32))) ;
  while (enumerator_1576.hasCurrentObject ()) {
    GGS_string var_actualDirectory_1613 = constinArgument_inLIBPMPath.add_operation (enumerator_1576.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 33)) ;
    var_actualDirectory_1613.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 34)) ;
    enumerator_1576.gotoNextObject () ;
  }
  GGS_stringset var_allNeededFileSet_1735 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_1776 (var_fw_1497.getter_allTextFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 38))) ;
  while (enumerator_1776.hasCurrentObject ()) {
    GGS_string var_contents_1804 = var_fw_1497.getter_textFileContentsAtPath (enumerator_1776.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 39)) ;
    GGS_string var_actualFilePath_1857 = constinArgument_inLIBPMPath.add_operation (enumerator_1776.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 40)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_actualFilePath_1857.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas4", 41)).objectCompare (GGS_string ("py"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_bool joker_2018 ; // Joker input parameter
        var_contents_1804.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1857, joker_2018, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 42)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool joker_2096 ; // Joker input parameter
      var_contents_1804.method_writeToFileWhenDifferentContents (var_actualFilePath_1857, joker_2096, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 44)) ;
    }
    var_allNeededFileSet_1735.plusPlusAssignOperation (enumerator_1776.current (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 46)) ;
    enumerator_1776.gotoNextObject () ;
  }
  UpEnumerator__5B_string_5D_ enumerator_2189 (var_fw_1497.getter_allBinaryFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 49))) ;
  while (enumerator_2189.hasCurrentObject ()) {
    GGS_data var_contents_2219 = var_fw_1497.getter_binaryFileContentsAtPath (enumerator_2189.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 50)) ;
    GGS_string var_actualFilePath_2274 = constinArgument_inLIBPMPath.add_operation (enumerator_2189.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 51)) ;
    GGS_bool joker_2374 ; // Joker input parameter
    var_contents_2219.method_writeToFileWhenDifferentContents (var_actualFilePath_2274, joker_2374, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 52)) ;
    var_allNeededFileSet_1735.plusPlusAssignOperation (enumerator_2189.current (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 53)) ;
    enumerator_2189.gotoNextObject () ;
  }
  GGS_stringset var_allActualFileSet_2459 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_2527 (constinArgument_inLIBPMPath.getter_regularFiles (GGS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas4", 57))) ;
  while (enumerator_2527.hasCurrentObject ()) {
    var_allActualFileSet_2459.plusPlusAssignOperation (GGS_string ("/").add_operation (enumerator_2527.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58))  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58)) ;
    enumerator_2527.gotoNextObject () ;
  }
  GGS_stringset var_uselessFileSet_2581 = var_allActualFileSet_2459.subtract_operation (var_allNeededFileSet_1735, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 60)) ;
  UpEnumerator_stringset enumerator_2641 (var_uselessFileSet_2581) ;
  while (enumerator_2641.hasCurrentObject ()) {
    {
    GGS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2641.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 62)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 62)) ;
    }
    enumerator_2641.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@templateLexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_templateLexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 129)) ;
//---
  return result ;
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
                                                                       GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_5434 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 142)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5434, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 143)) ;
  }
  const GGS_templateLexiqueComponentAST temp_3 = this ;
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  GGS_lstring var_superKey_5588 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 144)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5434, var_superKey_5588 COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 145)) ;
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
  GGS_bool var_superLexiqueIsTemplate_6607 ;
  GGS_terminalMap var_terminalMap_6641 ;
  GGS__5B_indexingAST_5D_ var_indexingListAST_6664 ;
  GGS__5B_terminalDeclarationAST_5D_ var_terminalListAST_6691 ;
  GGS__5B_lexicalAttributeAST_5D_ var_lexicalAttributeListAST_6718 ;
  GGS__5B_lexicalListDeclarationAST_5D_ var_lexicalListDeclarationListAST_6786 ;
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_6607, var_terminalMap_6641, var_indexingListAST_6664, var_terminalListAST_6691, var_lexicalAttributeListAST_6718, var_lexicalListDeclarationListAST_6786, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 159)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_6607.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLexiqueComponentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GGS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 170)) ;
    }
  }
  {
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GGS_bool (true), var_terminalMap_6641, var_indexingListAST_6664, var_terminalListAST_6691, var_lexicalAttributeListAST_6718, var_lexicalListDeclarationListAST_6786, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 173)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_8011 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 196)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8011, var_nameForUsefulness_8011, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 197)) ;
  }
  GGS__5B_terminalDeclarationAST_5D_ var_terminalListAST_8453 ;
  GGS__5B_lexicalAttributeAST_5D_ var_lexicalAttributeListAST_8480 ;
  GGS__5B_lexicalListDeclarationAST_5D_ var_lexicalListDeclarationListAST_8548 ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_bool joker_8350 ; // Joker input parameter
  GGS_terminalMap joker_8388 ; // Joker input parameter
  GGS__5B_indexingAST_5D_ joker_8415 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_8350, joker_8388, joker_8415, var_terminalListAST_8453, var_lexicalAttributeListAST_8480, var_lexicalListDeclarationListAST_8548, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 199)) ;
  GGS_lexicalTypeMap var_lexicalTypeMap_8677 = function_gLexicalTypeMap (inCompiler COMMA_HERE) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_8808 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_8808, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 212)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_8927 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_8927, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 214)) ;
  }
  GGS_stringset var_unicodeTestFunctions_9054 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_9054, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 216)) ;
  }
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_9147 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_8808, var_lexicalFunctionMap_8927, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_9054, inCompiler COMMA_HERE) ;
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_8677, var_lexicalAttributeListAST_8480, var_lexiqueAnalysisContext_9147.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 232)) ;
  }
  GGS__5B_terminalAST_5D_ var_terminalList_9750 = GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_terminalDeclarationAST_5D_ enumerator_9787 (var_terminalListAST_8453) ;
  while (enumerator_9787.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_9820 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_9787.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 241)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_lstring joker_9969 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_9787.current (HERE).readProperty_mStyle (), joker_9969, var_terminalStyleIndex_9820, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 242)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_10010 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_10082 (enumerator_9787.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_10082.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_10196 ;
      var_lexiqueAnalysisContext_9147.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_10082.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_10196, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 246)) ;
      var_argumentTypeList_10010.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_10082.current (HERE).readProperty_mFormalSelector (), enumerator_10082.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_10196, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 247)) ;
      enumerator_10082.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_9147.mProperty_mTerminalMap.setter_insertKey (enumerator_9787.current (HERE).readProperty_mName (), var_argumentTypeList_10010, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 249)) ;
    }
    var_terminalList_9750.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_9787.current (HERE).readProperty_mName (), var_argumentTypeList_10010, enumerator_9787.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string (), enumerator_9787.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_9787.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 255)), var_terminalStyleIndex_9820, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 250)) ;
    enumerator_9787.gotoNextObject () ;
  }
  UpEnumerator__5B_lexicalListDeclarationAST_5D_ enumerator_10705 (var_lexicalListDeclarationListAST_8548) ;
  while (enumerator_10705.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_10752 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_10705.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 260)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_10907 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_10705.current (HERE).readProperty_mStyle (), joker_10907, var_terminalStyleIndex_10752, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 261)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_10948 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_11023 (enumerator_10705.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_11023.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_11137 ;
      var_lexiqueAnalysisContext_9147.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_11023.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_11137, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 265)) ;
      var_argumentTypeList_10948.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_11023.current (HERE).readProperty_mFormalSelector (), enumerator_11023.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_11137, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 266)) ;
      enumerator_11023.gotoNextObject () ;
    }
    UpEnumerator__5B_lexicalListEntryAST_5D_ enumerator_11307 (enumerator_10705.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_11307.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_11331 = enumerator_10705.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_11307.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 269)) ;
      var_terminalList_9750.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_11307.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_10948, var_syntaxErrorMessage_11331, enumerator_11307.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_11307.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 275)), var_terminalStyleIndex_10752, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 270)) ;
      enumerator_11307.gotoNextObject () ;
    }
    enumerator_10705.gotoNextObject () ;
  }
  GGS_stringset var_unicodeStringToGenerate_11791 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS__5B_templateDelimitorAST_5D_ var_templateDelimitorList_11851 = GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_templateLexiqueComponentAST temp_5 = this ;
  UpEnumerator__5B_templateDelimitor_32_AST_5D_ enumerator_11911 (temp_5.readProperty_mTemplateDelimitorList ()) ;
  while (enumerator_11911.hasCurrentObject ()) {
    var_unicodeStringToGenerate_11791.plusPlusAssignOperation (enumerator_11911.current (HERE).readProperty_mStartString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 283)) ;
    var_unicodeStringToGenerate_11791.plusPlusAssignOperation (enumerator_11911.current (HERE).readProperty_mEndString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 284)) ;
    var_templateDelimitorList_11851.plusPlusAssignOperation (GGS_templateDelimitorAST::init_21__21__21_ (enumerator_11911.current (HERE).readProperty_mStartString (), enumerator_11911.current (HERE).readProperty_mEndString (), enumerator_11911.current (HERE).readProperty_mPreserved (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 285)) ;
    enumerator_11911.gotoNextObject () ;
  }
  const GGS_templateLexiqueComponentAST temp_6 = this ;
  UpEnumerator__5B_templateReplacementAST_5D_ enumerator_12299 (temp_6.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_12299.hasCurrentObject ()) {
    var_unicodeStringToGenerate_11791.plusPlusAssignOperation (enumerator_12299.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 289)) ;
    var_unicodeStringToGenerate_11791.plusPlusAssignOperation (enumerator_12299.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 290)) ;
    enumerator_12299.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas4", 294)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateLexiqueComponentAST temp_8 = this ;
      const GGS_templateLexiqueComponentAST temp_9 = this ;
      GGS_string var_headerContents_12656 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (inCompiler, temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 297)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 298)) COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 296))) ;
      const GGS_templateLexiqueComponentAST temp_10 = this ;
      const GGS_templateLexiqueComponentAST temp_11 = this ;
      const GGS_templateLexiqueComponentAST temp_12 = this ;
      const GGS_templateLexiqueComponentAST temp_13 = this ;
      GGS_string var_cppContents_12897 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (inCompiler, temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 302)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 303)), var_lexiqueAnalysisContext_9147.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_11791, var_templateDelimitorList_11851, var_terminalList_9750, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 301))) ;
      const GGS_templateLexiqueComponentAST temp_14 = this ;
      const GGS_templateLexiqueComponentAST temp_15 = this ;
      const GGS_templateLexiqueComponentAST temp_16 = this ;
      const GGS_templateLexiqueComponentAST temp_17 = this ;
      GGS_string var_swiftuiImplementation_13369 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_swiftuiImplementationZone (inCompiler, GGS_string ("lexique-").add_operation (temp_14.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 313)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 313)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 313)), temp_15.readProperty_mLexiqueComponentName ().readProperty_string (), temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_9750, var_templateDelimitorList_11851, temp_17.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 312))) ;
      const GGS_templateLexiqueComponentAST temp_18 = this ;
      const GGS_templateLexiqueComponentAST temp_19 = this ;
      const GGS_templateLexiqueComponentAST temp_20 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_lexiqueDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("lexique-").add_operation (temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 324)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 324)), temp_19.readProperty_mLexiqueComponentName ().readProperty_string (), temp_20.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_12656, var_cppContents_12897, var_swiftuiImplementation_13369, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 321)) ;
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
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GGS__5B_string_5D_ symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static proc\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
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
                                                                                     const GGS__5B_templateDelimitorAST_5D_ & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                     const GGS__5B_terminalAST_5D_ & in_TERMINAL_5F_LIST,
                                                                                     const GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                     const GGS__5B_templateReplacementAST_5D_ & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//     L E X I Q U E\n//--------------------------------------------------------------------------------------------------\n\n#include \"utf32.h\"\n#include \"scanner_actions.h\"\n#include \"LexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
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
  GGS_uint index_1512_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    UpEnumerator_stringset enumerator_1512 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES) ;
    while (enumerator_1512.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_1512.current_key (HERE).getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 33)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_1512.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 34)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_1512.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_1512.current_key (HERE).getter_utf_33__32_Representation (GGS_bool (false) COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1512.gotoNextObject () ;
      index_1512_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2266_ (0) ;
  if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_templateDelimitorAST_5D_ enumerator_2266 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
    const bool nonEmpty_enumerator_2266 = enumerator_2266.hasCurrentObject () ;
    if (nonEmpty_enumerator_2266) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 44)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 44)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_2266.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2266.current_entry (HERE).readProperty_mStartString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_2266.current_entry (HERE).readProperty_mStartString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 45)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_2266.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2266.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_2266.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 49)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_2266.current_entry (HERE).readProperty_mPreservesStartDelimiter ().operator_not (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 52)).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_2266.gotoNextObject () ;
      if (enumerator_2266.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_2266_.increment () ;
    }
    if (nonEmpty_enumerator_2266) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_3231_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_templateReplacementAST_5D_ enumerator_3231 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
    const bool nonEmpty_enumerator_3231 = enumerator_3231.hasCurrentObject () ;
    if (nonEmpty_enumerator_3231) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 63)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 63)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_3231.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3231.current_entry (HERE).readProperty_mMatchString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3231.current_entry (HERE).readProperty_mMatchString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3231.current_entry (HERE).readProperty_mReplacementString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3231.current_entry (HERE).readProperty_mReplacementString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 66)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_3231.current_entry (HERE).readProperty_mReplacementFunction ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_3231.current_entry (HERE).readProperty_mReplacementFunction ().readProperty_string ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", true)") ;
      enumerator_3231.gotoNextObject () ;
      if (enumerator_3231.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_3231_.increment () ;
    }
    if (nonEmpty_enumerator_3231) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_4172_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_4172 (in_TERMINAL_5F_LIST) ;
    const bool nonEmpty_enumerator_4172 = enumerator_4172.hasCurrentObject () ;
    if (nonEmpty_enumerator_4172) {
      result.appendString ("static const bool ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kEndOfScriptInTemplateArray [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 82)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_4172.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4172.current_entry (HERE).readProperty_isEndOfTemplateMark ().getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 83)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_4172.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      enumerator_4172.gotoNextObject () ;
      if (enumerator_4172.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_4172_.increment () ;
    }
    if (nonEmpty_enumerator_4172) {
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
  result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 108)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue ()) ;
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
  result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 123)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 123)).stringValue ()) ;
  result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mCurrentChar.u32 () != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  }\n  if (mCurrentChar.u32 () == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N\n//--------------------------------------------------------------------------------------------------\n\nGGS__5B_string_5D_ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GGS__5B_string_5D_ result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;\n") ;
  GGS_uint index_7617_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_7617 (in_TERMINAL_5F_LIST) ;
    while (enumerator_7617.hasCurrentObject ()) {
      result.appendString ("  result.plusPlusAssignOperation (GGS_string (") ;
      result.appendString (enumerator_7617.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 150)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      enumerator_7617.gotoNextObject () ;
      index_7617_.increment () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GenericUniqueArray <String> & ") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 158)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
  GGS_uint index_8144_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_8144 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_8144.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 162)).add_operation (enumerator_8144.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 162)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 162)).stringValue ()) ;
      result.appendString (") ;\n") ;
      enumerator_8144.gotoNextObject () ;
      index_8144_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 168)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
  const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 169)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
  const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 170)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
  GGS_uint index_8857_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_8857 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_8857.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 174)).add_operation (enumerator_8857.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 174)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GGS_uint index_9032_ (0) ;
      if (enumerator_8857.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_sortedTokenArray enumerator_9032 (enumerator_8857.current_mTokenSortedList (HERE)) ;
        while (enumerator_9032.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_9032.current_entry (HERE).readProperty_mName ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 177)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_9032.gotoNextObject () ;
          index_9032_.increment () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      enumerator_8857.gotoNextObject () ;
      index_8857_.increment () ;
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
                                                                                             const GGS__5B_terminalAST_5D_ & in_TERMINAL_5F_LIST,
                                                                                             const GGS__5B_templateDelimitorAST_5D_ & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                             const GGS__5B_templateReplacementAST_5D_ & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 8)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GGS_uint index_468_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator__5B_templateReplacementAST_5D_ enumerator_468 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_468.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_468.current_entry (HERE).readProperty_mMatchString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 12)).stringValue ()) ;
        enumerator_468.gotoNextObject () ;
        if (enumerator_468.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_468_.increment () ;
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
    GGS_uint index_1024_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      UpEnumerator__5B_templateDelimitorAST_5D_ enumerator_1024 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
      while (enumerator_1024.hasCurrentObject ()) {
        result.appendString ("  TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_1024.current_entry (HERE).readProperty_mStartString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 25)).stringValue ()) ;
        result.appendString (", endString: ") ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1024.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 26)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString ("nil") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString (enumerator_1024.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 29)).stringValue ()) ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_1024.current_entry (HERE).readProperty_mPreservesStartDelimiter ().operator_not (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 32)).getter_cString (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (")") ;
        enumerator_1024.gotoNextObject () ;
        if (enumerator_1024.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_1024_.increment () ;
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
  GGS_uint index_1851_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_1851 (in_TERMINAL_5F_LIST) ;
    const bool nonEmpty_enumerator_1851 = enumerator_1851.hasCurrentObject () ;
    if (nonEmpty_enumerator_1851) {
      result.appendString ("fileprivate let kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 43)).stringValue ()) ;
      result.appendString (" : [Bool] = [\n") ;
    }
    while (enumerator_1851.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1851.current_entry (HERE).readProperty_isEndOfTemplateMark ().getter_cString (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1851.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      enumerator_1851.gotoNextObject () ;
      if (enumerator_1851.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_1851_.increment () ;
    }
    if (nonEmpty_enumerator_1851) {
      result.appendString ("\n]\n") ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n/* func ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n} */\n\n//--------------------------------------------------------------------------------------------------\n//   Template Scanner Class\n//--------------------------------------------------------------------------------------------------\n\nclass ScannerFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ScannerFor_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func isTemplateLexique () -> Bool { true }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func parseLexicalTokenForLexicalColoring () -> LexicalToken {\n    let startLocation = self.currentLocation\n    if let idx = self.mEndTemplateDelimiterIndex,\n       self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {\n      self.mEndTemplateDelimiterIndex = nil\n    }\n    if self.mEndTemplateDelimiterIndex != nil {\n      return super.parseLexicalTokenForLexicalColoring ()\n    }else{ // In template string, find code start string\n      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {\n        var idx = 0\n        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {\n          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {\n            self.mEndTemplateDelimiterIndex = idx\n          }\n          idx += 1\n        }\n        if self.mEndTemplateDelimiterIndex == nil {\n          self.advance ()\n        }\n      }\n      return LexicalToken (\n        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n        tokenCode: ") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE,\n        templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n      )\n    }\n  }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const GGS__5B_formalParameterForGeneration_5D_ constinArgument_inTestedSignature,
                                                    const GGS_location constinArgument_inErrorLocation,
                                                    const GGS__5B_formalParameterSignatureElement_5D_ constinArgument_inReferenceSignature,
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
    UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_2123 (constinArgument_inReferenceSignature) ;
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_2155 (constinArgument_inTestedSignature) ;
    while (enumerator_2123.hasCurrentObject () && enumerator_2155.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (enumerator_2155.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (GGS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2155.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (GGS_string (", but overriden proc declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 40)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 42)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_2155.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string var_s_2728 ;
          switch (enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
            {
              var_s_2728 = GGS_string ("\?") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
            {
              var_s_2728 = GGS_string ("\?!") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
            {
              var_s_2728 = GGS_string ("!") ;
            }
            break ;
          }
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 54)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          var_s_2728.plusAssignOperation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 54)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_2728) ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_2728, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_2155.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 57)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_2123.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 57)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (extensionGetter_definition (enumerator_2155.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (GGS_string ("' type, but overriden proc declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).add_operation (extensionGetter_definition (enumerator_2123.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 60)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 60)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 61)) ;
        }
      }
      enumerator_2123.gotoNextObject () ;
      enumerator_2155.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const GGS__5B_formalInputParameterForGeneration_5D_ constinArgument_inTestedSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inReturnType,
                                                            const GGS_location constinArgument_inErrorLocation,
                                                            const GGS__5B_functionSignatureElement_5D_ constinArgument_inReferenceSignature,
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
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_5076 (constinArgument_inReferenceSignature) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_5108 (constinArgument_inTestedSignature) ;
    while (enumerator_5076.hasCurrentObject () && enumerator_5108.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_5108.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 92)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5223 = GGS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 92)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_5223) ;
          inCompiler->emitSemanticError (enumerator_5108.current (HERE).readProperty_mFormalSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5223, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_5108.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 95)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5076.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 95)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5108.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_5108.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (extensionGetter_definition (enumerator_5108.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (GGS_string ("' type, but overriden func declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).add_operation (extensionGetter_definition (enumerator_5076.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 98)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 98)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 99)) ;
        }
      }
      enumerator_5076.gotoNextObject () ;
      enumerator_5108.gotoNextObject () ;
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
                                                                    const GGS__5B_formalParameterAST_5D_ constinArgument_inRoutineSignatureAST,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS__5B_formalParameterForGeneration_5D_ & outArgument_outRoutineSignature,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_6996 (constinArgument_inRoutineSignatureAST) ;
  while (enumerator_6996.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_7029 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 124)) ;
    GGS_string var_formalArgumentCppName_7123 ;
    switch (enumerator_6996.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_formalArgumentCppName_7123 = GGS_string ("inArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 128)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 131)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 138)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_formalArgumentCppName_7123 = GGS_string ("outArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 146)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 148)) ;
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_formalArgumentCppName_7123 = GGS_string ("ioArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 156)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 155)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 158)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 165)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        var_formalArgumentCppName_7123 = GGS_string ("constinArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 173)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 176)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 183)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_6996.current (HERE).readProperty_mFormalSelector (), enumerator_6996.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_7029, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_formalArgumentCppName_7123, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 191)) ;
    enumerator_6996.gotoNextObject () ;
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
                                                                     const GGS__5B_formalParameterAST_5D_ constinArgument_inRoutineSignatureAST,
                                                                     const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                     const GGS_location constinArgument_inEndOfMethodLocation,
                                                                     GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outSemanticInstructionListForGeneration,
                                                                     GGS__5B_formalParameterForGeneration_5D_ & outArgument_outRoutineSignature,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_10302 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10458 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 208)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 208)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_10577 (extensionGetter_definition (var_selfAvailable_10458.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 209)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_10577.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_10458.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas4", 210)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_10577.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 211)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_10611 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_10302, enumerator_10577.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_10577.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_10577.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 219)), var_initialized_10611, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 214)) ;
        }
        enumerator_10577.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_10302, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 225)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_11334 (constinArgument_inInstructionList) ;
  while (enumerator_11334.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_11334.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10302, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 235)) ;
    enumerator_11334.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_10302, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 245)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_12444 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12444, var_nameForUsefulness_12444, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 259)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_12444  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 261)) ;
    }
  }
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalArgumentList_12689 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_3 = this ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_12771 (temp_3.readProperty_mFormalArgumentList ()) ;
  while (enumerator_12771.hasCurrentObject ()) {
    var_formalArgumentList_12689.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_12771.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12771.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 268)), enumerator_12771.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_12771.current (HERE).readProperty_mFormalArgumentName (), enumerator_12771.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 266)) ;
    enumerator_12771.gotoNextObject () ;
  }
  const GGS_externFunctionDeclarationAST temp_4 = this ;
  const GGS_externFunctionDeclarationAST temp_5 = this ;
  const GGS_externFunctionDeclarationAST temp_6 = this ;
  const GGS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionPrototypeDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 274)), GGS_bool (true), GGS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 276)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_12689, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 273)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&????!signatureIR!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             const GGS__5B_formalInputParameterAST_5D_ constinArgument_inFunctionSignature,
                                                                                             const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                                             const GGS_lstring constinArgument_inResultTypeName,
                                                                                             const GGS_location constinArgument_inEndOfFunctionLocation,
                                                                                             GGS__5B_formalInputParameterForGeneration_5D_ & outArgument_outSignatureForGeneration,
                                                                                             GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                             GGS_string & outArgument_outResultVariableCppName,
                                                                                             GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outSemanticInstructionListForGeneration,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_14395 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  outArgument_outSignatureForGeneration = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_14600 (constinArgument_inFunctionSignature) ;
  while (enumerator_14600.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_14631 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14600.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 301)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_14600.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_cppName_14765 = GGS_string ("constinArgument_").add_operation (enumerator_14600.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 303)) ;
        outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_14600.current (HERE).readProperty_mFormalSelector (), var_parameterType_14631, var_cppName_14765, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), enumerator_14600.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 304)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_14600.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_14765, var_cppName_14765, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 311)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_14765, var_cppName_14765, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 313)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_cppName_15382 = GGS_string ("inArgument_").add_operation (enumerator_14600.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 316)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 316)) ;
      outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_14600.current (HERE).readProperty_mFormalSelector (), var_parameterType_14631, var_cppName_15382, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), enumerator_14600.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 317)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = enumerator_14600.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_15382, var_cppName_15382, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 324)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_15382, var_cppName_15382, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 326)) ;
        }
      }
    }
    enumerator_14600.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 331)) ;
  outArgument_outResultVariableCppName = GGS_string ("result") ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_14395, GGS_string ("result").getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas4", 333)), outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 333)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_selfAvailability_2E_available var_selfAvailable_16301 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 335)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 335)).isValuated ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_16420 (extensionGetter_definition (var_selfAvailable_16301.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 336)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_16420.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_14395, enumerator_16420.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_16420.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_16420.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 342)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 337)) ;
        }
        enumerator_16420.gotoNextObject () ;
      }
    }
  }
  outArgument_outSemanticInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_16828 (constinArgument_inInstructionList) ;
  while (enumerator_16828.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_16828.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_14395, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 350)) ;
    enumerator_16828.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_14395, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 360)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                           const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                           GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17701 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 375)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17701, var_nameForUsefulness_17701, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 376)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17701  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 378)) ;
    }
  }
  GGS_analysisContext var_analysisContext_17968 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 385)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalInputParameterList_18429 ;
  GGS_unifiedTypeMapEntry var_returnType_18464 ;
  GGS_string var_resultVariableCppName_18485 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_18517 ;
  {
  const GGS_functionDeclarationAST temp_3 = this ;
  const GGS_functionDeclarationAST temp_4 = this ;
  const GGS_functionDeclarationAST temp_5 = this ;
  const GGS_functionDeclarationAST temp_6 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_17701, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_17968, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_18429, var_returnType_18464, var_resultVariableCppName_18485, var_semanticInstructionListForGeneration_18517, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 388)) ;
  }
  const GGS_functionDeclarationAST temp_7 = this ;
  const GGS_functionDeclarationAST temp_8 = this ;
  const GGS_functionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 404)), GGS_bool (true), GGS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 406)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 406)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_18429, var_returnType_18464, var_resultVariableCppName_18485, var_semanticInstructionListForGeneration_18517, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 403)) ;
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
  GGS_lstring var_filewrapperNameForUsefulness_19674 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 431)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_19674, var_filewrapperNameForUsefulness_19674, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 432)) ;
  }
  GGS_wrapperFileMap var_wrapperFileMap_20008 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_20054 ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  GGS_lstring joker_19971 ; // Joker input parameter
  GGS__5B_lstring_5D_ joker_19979 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_20079_2 ; // Joker input parameter
  GGS_bool joker_20079_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_19971, joker_19979, var_wrapperFileMap_20008, var_wrapperDirectoryMap_20054, joker_20079_2, joker_20079_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 434)) ;
  GGS_string var_absoluteSourcePath_20127 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas4", 444)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_20127 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_filewrapperDeclarationAST temp_5 = this ;
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_20127 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 447)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 447)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 447)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_absoluteSourcePath_20127.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas4", 449)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 449)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_filewrapperDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_20127, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 450)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 450)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 450)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GGS__5B_filewrapperTemplateForGeneration_5D_ var_filewrapperTemplateListForGeneration_20627 = GGS__5B_filewrapperTemplateForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_10 = this ;
    UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_20706 (temp_10.readProperty_mFilewrapperTemplateList ()) ;
    while (enumerator_20706.hasCurrentObject ()) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      GGS_lstring var_filewrapperTemplateNameForUsefulness_20744 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_20706.current (HERE).readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 455)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_20744, var_filewrapperTemplateNameForUsefulness_20744, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 459)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_20744, var_filewrapperNameForUsefulness_19674 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 460)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::equal, enumerator_20706.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas4", 461)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_20706.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_20127, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 463)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 463)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 462)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_21444 = var_absoluteSourcePath_20127.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 465)).add_operation (enumerator_20706.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 465)) ;
      GGS__5B_templateInstructionAST_5D_ var_resultingInstructionList_21626 ;
      var_resultingInstructionList_21626.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_21444, enumerator_20706.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_21626  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 467)) ;
      GGS_templateVariableMap var_templateVariableMap_21820 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalInputParameterForGeneration_5D_ var_filewrapperTemplateFormalInputParameters_21893 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_21980 (enumerator_20706.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_21980.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_22037 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_21980.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 473)) ;
        GGS_string var_cppVarName_22127 = GGS_string ("in_").add_operation (enumerator_21980.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 474)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 474)) ;
        {
        var_templateVariableMap_21820.setter_insertKey (enumerator_21980.current (HERE).readProperty_mFormalArgumentName (), var_type_22037, var_cppVarName_22127, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 475)) ;
        }
        var_filewrapperTemplateFormalInputParameters_21893.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_21980.current (HERE).readProperty_mFormalTemplateSelector (), var_type_22037, var_cppVarName_22127, enumerator_21980.current (HERE).readProperty_mFormalArgumentName (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 476)) ;
        enumerator_21980.gotoNextObject () ;
      }
      GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionListForGeneration_22480 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_22568 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_21820, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_19674, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_22568, ioArgument_ioTypeMap, var_resultingInstructionList_21626, var_templateInstructionListForGeneration_22480, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 485)) ;
      }
      var_filewrapperTemplateListForGeneration_20627.plusPlusAssignOperation (GGS_filewrapperTemplateForGeneration::init_21__21__21_ (enumerator_20706.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_21893, var_templateInstructionListForGeneration_22480, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 494)) ;
      enumerator_20706.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_14 = this ;
    const GGS_filewrapperDeclarationAST temp_15 = this ;
    const GGS_filewrapperDeclarationAST temp_16 = this ;
    const GGS_filewrapperDeclarationAST temp_17 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_filewrapperDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 502)), GGS_bool (true), GGS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 504)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_20008, var_wrapperDirectoryMap_20054, var_filewrapperTemplateListForGeneration_20627, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 501)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_24242 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 526)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_24242, var_nameForUsefulness_24242, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 527)) ;
  }
  GGS_terminalMap var_terminalMap_24581 ;
  GGS__5B_indexingAST_5D_ var_indexingListAST_24618 ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_bool joker_24555 ; // Joker input parameter
  GGS__5B_terminalDeclarationAST_5D_ joker_24639_3 ; // Joker input parameter
  GGS__5B_lexicalAttributeAST_5D_ joker_24639_2 ; // Joker input parameter
  GGS__5B_lexicalListDeclarationAST_5D_ joker_24639_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_24555, var_terminalMap_24581, var_indexingListAST_24618, joker_24639_3, joker_24639_2, joker_24639_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 529)) ;
  GGS_stringset var_indexNameSet_24726 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_indexingAST_5D_ enumerator_24760 (var_indexingListAST_24618) ;
  while (enumerator_24760.hasCurrentObject ()) {
    var_indexNameSet_24726.plusPlusAssignOperation (enumerator_24760.current (HERE).readProperty_mIndexName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 539)) ;
    enumerator_24760.gotoNextObject () ;
  }
  GGS_bool var_hasIndexing_24842 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas4", 543)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GGS_string var_lexiqueName_25021 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GGS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_25480 ;
      {
      const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_24242, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_25021, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_24581, var_indexNameSet_24726, var_hasIndexing_24842, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_25480, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 545)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (var_syntaxDeclarationForGeneration_25480  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 561)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  routine_println_3F_ (GGS_string ("*** Analyzing '").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 578)).add_operation (GGS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 578)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 578)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  GGS_lstring var_grammarNameForUsefulness_26479 = function_grammarNameForUsefulEntitiesGraph (temp_1.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 580)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_26479, var_grammarNameForUsefulness_26479, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 581)) ;
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_26784 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_26866 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_26920 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas4", 585)) ;
  GGS__5B_syntaxComponentForGrammarAnalysis_5D_ var_syntaxComponentListForGrammarAnalysis_27028 = GGS__5B_syntaxComponentForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_nonTerminalToAdd_5D_ var_nonTerminalToAddList_27098 = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_HERE) ;
  GGS_uint var_addedNonTerminalCount_27137 = GGS_uint (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_27197 (temp_2.readProperty_mSyntaxComponents ()) ;
  while (enumerator_27197.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_27226 = function_syntaxNameForUsefulEntitiesGraph (enumerator_27197.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 590)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_26479, var_syntaxNameForUsefulness_27226 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 591)) ;
    }
    GGS_uint var_addedNonTerminalCountRef_27421 = var_addedNonTerminalCount_27137 ;
    GGS_lstring var_lexiqueName_27589 ;
    GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_27642 ;
    GGS__5B_syntaxRuleAST_5D_ var_ruleList_27698 ;
    GGS_bool var_hasTranslateFeature_27725 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_27197.current (HERE), var_lexiqueName_27589, var_nonterminalDeclarationList_27642, var_ruleList_27698, var_hasTranslateFeature_27725, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 593)) ;
    GGS_lstring var_lexiqueNameForUsefulness_27759 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_27589, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 600)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_26479, var_lexiqueNameForUsefulness_27759 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 601)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_galgas_33_GrammarComponentAST temp_4 = this ;
      test_3 = temp_4.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_27725.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 603)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 603)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_galgas_33_GrammarComponentAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_27197.current (HERE).readProperty_location (), GGS_string ("as '").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 604)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 604)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 604)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_galgas_33_GrammarComponentAST temp_8 = this ;
        test_7 = var_hasTranslateFeature_27725.operator_and (temp_8.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 605)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 605)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_galgas_33_GrammarComponentAST temp_9 = this ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_27197.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 606)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 606)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 606)) ;
        }
      }
    }
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_26920.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        var_lexiqueComponentName_26920 = var_lexiqueName_27589 ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_27589.readProperty_string ().objectCompare (var_lexiqueComponentName_26920.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_27197.current (HERE).readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_27589.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 612)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 613)).add_operation (var_lexiqueComponentName_26920.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 613)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 614)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 612)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_26866, var_nonterminalDeclarationList_27642, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 617)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_26866, var_ruleList_27698, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 622)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_26866, enumerator_27197.current (HERE), var_ruleList_27698, var_actuallyUsedTerminalSymbolMap_26784, var_syntaxComponentListForGrammarAnalysis_27028, var_addedNonTerminalCount_27137, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 627)) ;
    }
    GGS_uint var_i_29421 = GGS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_27137.isValid ()) {
      uint32_t variant_29431 = var_addedNonTerminalCount_27137.uintValue () ;
      bool loop_29431 = true ;
      while (loop_29431) {
        loop_29431 = GGS_bool (ComparisonKind::lowerThan, var_i_29421.objectCompare (var_addedNonTerminalCount_27137.subtract_operation (var_addedNonTerminalCountRef_27421, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 636)))).isValid () ;
        if (loop_29431) {
          loop_29431 = GGS_bool (ComparisonKind::lowerThan, var_i_29421.objectCompare (var_addedNonTerminalCount_27137.subtract_operation (var_addedNonTerminalCountRef_27421, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 636)))).boolValue () ;
        }
        if (loop_29431 && (0 == variant_29431)) {
          loop_29431 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas4", 636)) ;
        }
        if (loop_29431) {
          variant_29431 -= 1 ;
          var_nonTerminalToAddList_27098.plusPlusAssignOperation (GGS_nonTerminalToAdd::init_21__21_ (enumerator_27197.current (HERE).readProperty_string (), var_i_29421, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 637)) ;
          var_i_29421.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 638)) ;
        }
      }
    }
    enumerator_27197.gotoNextObject () ;
  }
  GGS_uint var_startSymbolIndex_29815 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_29887 ;
  const GGS_galgas_33_GrammarComponentAST temp_14 = this ;
  var_nonTerminalMapForGrammarAnalysis_26866.method_searchKey (temp_14.readProperty_mStartSymbolName (), var_startSymbolIndex_29815, var_startSymbolAltMap_29887, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 643)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_15 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_15.readProperty_mStartSymbolName ().readProperty_location (), temp_16.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_26866.getter_locationForKey (temp_17.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 652)), var_startSymbolAltMap_29887, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 649)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_30268 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_18 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_30341 (temp_18.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_30341.hasCurrentObject ()) {
    GGS_uint var_nonterminalIndex_30445 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_30463 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_26866.method_searchKey (enumerator_30341.current (HERE), var_nonterminalIndex_30445, joker_30463, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 658)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_30268.setter_insertKey (enumerator_30341.current (HERE), var_nonterminalIndex_30445, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 659)) ;
    }
    enumerator_30341.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_30714 = GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_30787 (var_nonTerminalMapForGrammarAnalysis_26866) ;
  while (enumerator_30787.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_30714.plusPlusAssignOperation (GGS_sortedNonTerminalSymbolForGrammarAnalysis::init_21__21__21_ (enumerator_30787.current (HERE).readProperty_lkey (), enumerator_30787.current (HERE).readProperty_mNonTerminalIndex (), enumerator_30787.current (HERE).readProperty_mNonterminalSymbolParametersMap (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 664)) ;
    enumerator_30787.gotoNextObject () ;
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_buildOptionValue::class_func_emitSyntaxDiagrams (SOURCE_FILE ("semanticAnalysis.galgas4", 667)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_20 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_21 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_20.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_26866, var_syntaxComponentListForGrammarAnalysis_27028, temp_21.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 668)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_31429 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 677)) ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = GGS_buildOptionValue::class_func_emitClassGraph (SOURCE_FILE ("semanticAnalysis.galgas4", 678)).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_31429, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 679)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_31429, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 684)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_31985 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_32037 (var_nonTerminalMapForGrammarAnalysis_26866) ;
  while (enumerator_32037.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_32110 (enumerator_32037.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_32110.hasCurrentObject ()) {
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_32179 (enumerator_32110.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_32179.hasCurrentObject ()) {
        switch (enumerator_32179.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_32334 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_32179.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 695)) ;
            extensionMethod_addHeaderFileName (var_t_32334, var_implementationFileHeader_31985, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 696)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_32179.gotoNextObject () ;
      }
      enumerator_32110.gotoNextObject () ;
    }
    enumerator_32037.gotoNextObject () ;
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("semanticAnalysis.galgas4", 702)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      var_implementationFileHeader_31985 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_24 = this ;
  GGS_string var_HTMLFilePath_32717 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 706)).add_operation (temp_24.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 706)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 706)) ;
  GGS_string var_grammarCppFile_33246 ;
  GGS_string var_grammarHTMLHelperContents_33279 ;
  GGS_string var_swiftGrammarDescription_33323 ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_26 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_27 = this ;
  GGS_string temp_28 ;
  const GalgasBool test_29 = temp_27.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_29) {
    temp_28 = function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) ;
  }else if (GalgasBool::boolFalse == test_29) {
    temp_28 = GGS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (temp_25.readProperty_mGrammarComponentName (), temp_26.readProperty_mGrammarClass (), var_startSymbolIndex_29815, var_lexiqueComponentName_26920.readProperty_string (), var_actuallyUsedTerminalSymbolMap_26784, var_syntaxComponentListForGrammarAnalysis_27028, var_unusedNonTerminalSymbolsForGrammar_30268, var_HTMLFilePath_32717, var_nonTerminalSymbolSortedListForGrammarAnalysis_30714, temp_28, var_grammarCppFile_33246, var_grammarHTMLHelperContents_33279, var_swiftGrammarDescription_33323, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 707)) ;
  }
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    test_30 = GGS_buildOptionValue::class_func_outputHTMLgrammarFile (SOURCE_FILE ("semanticAnalysis.galgas4", 723)).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      var_HTMLFilePath_32717.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 724)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 724)) ;
      GGS_bool joker_33633 ; // Joker input parameter
      var_grammarHTMLHelperContents_33279.method_writeToFileWhenDifferentContents (var_HTMLFilePath_32717, joker_33633, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 725)) ;
    }
  }
  if (GalgasBool::boolFalse == test_30) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_32717, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 727)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_31 = this ;
  GGS_string var_swiftFilePath_33794 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 730)).add_operation (temp_31.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 730)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 730)) ;
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    test_32 = GGS_buildOptionValue::class_func_outputGrammarSwiftDescriptionFile (SOURCE_FILE ("semanticAnalysis.galgas4", 731)).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      var_swiftFilePath_33794.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 732)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 732)) ;
      GGS_bool joker_34086 ; // Joker input parameter
      var_swiftGrammarDescription_33323.method_writeToFileWhenDifferentContents (var_swiftFilePath_33794, joker_34086, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 733)) ;
    }
  }
  if (GalgasBool::boolFalse == test_32) {
    {
    GGS_string::class_method_deleteFileIfExists (var_swiftFilePath_33794, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 735)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_33 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_36 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_37 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_grammarForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("grammar-").add_operation (temp_33.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 742)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 742)), temp_34.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_26920.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_26866, var_nonTerminalToAddList_27098, temp_35.readProperty_mSyntaxComponents (), temp_36.readProperty_mStartSymbolName ().readProperty_string (), temp_37.readProperty_mHasTranslateFeature (), var_grammarCppFile_33246, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 739)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes function_buildPredefinedTypes (const GGS_unifiedTypeMap & constinArgument_inTypeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result ; // Returned variable
  result = GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("location").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 761)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 761)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("bool").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 762)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 762)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("char").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 764)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 764)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("uint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 765)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 765)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("sint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 766)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 766)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("u64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 767)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 767)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("s64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 768)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 768)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("f64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 769)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 769)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lbool").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 770)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 770)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lchar").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 771)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 771)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lstring").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 772)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 772)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("luint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 773)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 773)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lsint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 774)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 774)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lu64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 775)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 775)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("ls64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 776)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 776)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lf64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 777)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 777)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lbigint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 778)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 778)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("bigint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 779)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 779)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("stringset").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 780)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 780)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("[string]").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 781)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 781)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("[lstring]").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 782)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 782)), inCompiler COMMA_HERE) ;
//---
  return result ;
}


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
                                                                                            const GGS__5B_ruleDeclarationAST_5D_ & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                            const GGS__5B_uint_5D_ & in_SELECT_5F_METHOD_5F_LIST,
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
          GGS_uint index_726_IDX (0) ;
          if (enumerator_566.current_mSignature (HERE).isValid ()) {
            UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_726 (enumerator_566.current_mSignature (HERE)) ;
            while (enumerator_726.hasCurrentObject ()) {
              const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_726.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              switch (test_0) {
              case GalgasBool::boolTrue : {
                result.appendString ("const class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_726.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_726_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_726.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                switch (test_1) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_726.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_726_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_726.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  switch (test_2) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_726.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_726_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_726.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_726_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
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
              enumerator_726.gotoNextObject () ;
              index_726_IDX.increment () ;
            }
          }
          const GalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_3) {
          case GalgasBool::boolTrue : {
            result.appendString ("class String & ") ;
            result.appendString (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE).stringValue ()) ;
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
  GGS_uint index_1951_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    UpEnumerator__5B_ruleDeclarationAST_5D_ enumerator_1951 (in_RULE_5F_DECLARATION_5F_LIST) ;
    while (enumerator_1951.hasCurrentObject ()) {
      GGS_uint index_2003_ (0) ;
      if (enumerator_1951.current_entry (HERE).readProperty_mLabelImplementationList ().isValid ()) {
        UpEnumerator__5B_ruleLabelImplementationAST_5D_ enumerator_2003 (enumerator_1951.current_entry (HERE).readProperty_mLabelImplementationList ()) ;
        while (enumerator_2003.hasCurrentObject ()) {
          result.appendString ("  protected: void rule_") ;
          result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1951.current_entry (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_i") ;
          result.appendString (enumerator_1951.current_entry (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2003.current_entry (HERE).readProperty_mLabelName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_2260_IDX (0) ;
          if (enumerator_2003.current_entry (HERE).readProperty_mSignature ().isValid ()) {
            UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_2260 (enumerator_2003.current_entry (HERE).readProperty_mSignature ()) ;
            while (enumerator_2260.hasCurrentObject ()) {
              const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2260.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 42)))).boolEnum () ;
              switch (test_5) {
              case GalgasBool::boolTrue : {
                result.appendString ("const GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_2260.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 43)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_2260_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 43)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2260.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 44)))).boolEnum () ;
                switch (test_6) {
                case GalgasBool::boolTrue : {
                  result.appendString ("GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_2260.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 45)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_2260_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 45)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_2260.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)))).boolEnum () ;
                  switch (test_7) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2260.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 47)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_2260_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 47)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2260.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_2260_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
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
              enumerator_2260.gotoNextObject () ;
              index_2260_IDX.increment () ;
            }
          }
          const GalgasBool test_8 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_8) {
          case GalgasBool::boolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE).stringValue ()) ;
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
          enumerator_2003.gotoNextObject () ;
          index_2003_.increment () ;
        }
      }
      result.appendString ("/*  protected: void rule_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1951.current_entry (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
      result.appendString ("_i") ;
      result.appendString (enumerator_1951.current_entry (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_9) {
      case GalgasBool::boolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE).stringValue ()) ;
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
        result.appendString (enumerator_1951.current_entry (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
        result.appendString ("_i") ;
        result.appendString (enumerator_1951.current_entry (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
        result.appendString ("_indexing (Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) ;\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1951.gotoNextObject () ;
      index_1951_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Select methods\n") ;
  GGS_uint index_3835_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    UpEnumerator__5B_uint_5D_ enumerator_3835 (in_SELECT_5F_METHOD_5F_LIST) ;
    while (enumerator_3835.hasCurrentObject ()) {
      result.appendString ("  protected: virtual int32_t select_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3835.current_entry (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" *) = 0 ;\n\n") ;
      enumerator_3835.gotoNextObject () ;
      index_3835_.increment () ;
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
    const GGS_nonterminalMap_2E_element var_entry_39042 = ioArgument_ioNonterminalDeclarationMap.readSubcript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioNonterminalDeclarationMap.readSubcript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset var_firstDeclarationLabelSet_39129 = var_entry_39042.readProperty_mLabelMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 861)) ;
      GGS_stringset var_reDeclarationLabelSet_39198 = constinArgument_inNonterminalLabelMap.getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 862)) ;
      GGS_stringset var_missingLabelSet_39270 = var_firstDeclarationLabelSet_39129.subtract_operation (var_reDeclarationLabelSet_39198, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 863)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::greaterThan, var_missingLabelSet_39270.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 864)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_s_39393 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_39411 (var_missingLabelSet_39270) ;
          while (enumerator_39411.hasCurrentObject ()) {
            var_s_39393.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_39411.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 867)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 867)) ;
            enumerator_39411.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 870)).add_operation (GGS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 870)).add_operation (var_s_39393, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 870)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 869)) ;
        }
      }
      GGS_stringset var_newLabelSet_39636 = var_reDeclarationLabelSet_39198.subtract_operation (var_firstDeclarationLabelSet_39129, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 872)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_newLabelSet_39636.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 873)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_string var_s_39743 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_39761 (var_newLabelSet_39636) ;
          while (enumerator_39761.hasCurrentObject ()) {
            var_s_39743.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_39761.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 876)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 876)) ;
            enumerator_39761.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 879)).add_operation (GGS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 879)).add_operation (var_s_39743, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 879)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 878)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_missingLabelSet_39270.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 881)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_newLabelSet_39636.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 881)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 881)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          UpEnumerator_nonterminalLabelMap enumerator_40048 (var_entry_39042.readProperty_mLabelMap ()) ;
          UpEnumerator_nonterminalLabelMap enumerator_40071 (constinArgument_inNonterminalLabelMap) ;
          while (enumerator_40048.hasCurrentObject () && enumerator_40071.hasCurrentObject ()) {
            GGS__5B_formalParameterSignatureElement_5D_ var_newSignature_40143 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
            UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_40193 (enumerator_40071.current (HERE).readProperty_mSignature ()) ;
            while (enumerator_40193.hasCurrentObject ()) {
              var_newSignature_40143.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_40193.current (HERE).readProperty_mFormalSelector (), enumerator_40193.current (HERE).readProperty_mFormalArgumentType (), enumerator_40193.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_40193.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 885)) ;
              enumerator_40193.gotoNextObject () ;
            }
            {
            routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_40048.current (HERE).readProperty_mSignatureForGeneration (), enumerator_40048.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_40143, enumerator_40071.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 887)) ;
            }
            enumerator_40048.gotoNextObject () ;
            enumerator_40071.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 896)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                              const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GGS_nonterminalMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonterminalDeclarationAST_5D_ enumerator_41144 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_41144.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_41184 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_41260 (enumerator_41144.current (HERE).readProperty_mLabels ()) ;
    while (enumerator_41260.hasCurrentObject ()) {
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_41281 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_41351 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_41428 (enumerator_41260.current (HERE).readProperty_mFormalArgumentList ()) ;
      while (enumerator_41428.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_t_41463 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_41428.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 915)) ;
        var_signatureForGeneration_41281.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_41428.current (HERE).readProperty_mFormalSelector (), enumerator_41428.current (HERE).readProperty_mFormalArgumentPassingMode (), var_t_41463, enumerator_41428.current (HERE).readProperty_mFormalArgumentName (), enumerator_41428.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 916)) ;
        var_signature_41351.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_41428.current (HERE).readProperty_mFormalSelector (), var_t_41463, enumerator_41428.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_41428.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 917)) ;
        enumerator_41428.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_41184.setter_insertKey (enumerator_41260.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_41281, var_signature_41351, enumerator_41260.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 919)) ;
      }
      enumerator_41260.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_41144.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_41184, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 921)) ;
    }
    enumerator_41144.gotoNextObject () ;
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
                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_uint & /* ioArgument__5F_ioSelectMethodCount */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_semanticInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 946)) ;
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
  GGS_unifiedTypeMapEntry var_type_44107 ;
  GGS_string var_cppName_44126 ;
  {
  const GGS_inputParameterVariable temp_0 = this ;
  GGS_string joker_44135 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_44107, var_cppName_44126, joker_44135, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 976)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_44166 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_44166 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_44166 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_44166 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_44166 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_44166 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_44166 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_44166 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_44166 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expectedType_44166.objectCompare (var_type_44107)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_inputParameterVariable temp_2 = this ;
      const GGS_inputParameterVariable temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 990)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 990)).add_operation (extensionGetter_identifierRepresentation (var_type_44107, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 990)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 990)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 990)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_44166, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 991)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 991)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 991)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 989)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (GGS_string::makeEmptyString (), var_cppName_44126, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 993)) ;
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
  GGS_unifiedTypeMapEntry var_expectedType_45788 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_45788 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_45788 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_45788 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_45788 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_45788 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_45788 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_45788 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_45788 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredVariable temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_46651 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1022)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_45788.objectCompare (var_type_46651)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredVariable temp_4 = this ;
          const GGS_inputParameterDeclaredVariable temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1025)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1025)).add_operation (extensionGetter_definition (var_type_46651, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1025)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1025)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1025)).add_operation (extensionGetter_definition (var_expectedType_45788, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1026)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1026)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1026)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1024)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredVariable temp_7 = this ;
  const GGS_inputParameterDeclaredVariable temp_8 = this ;
  GGS_string var_cppName_47047 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1030)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1030)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1030)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1030)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1030)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1030)) ;
  {
  const GGS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GGS_bool (true), var_expectedType_45788, var_cppName_47047, var_cppName_47047, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1031)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_45788, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1039)).readProperty_typeName ().readProperty_string (), var_cppName_47047, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1038)) ;
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
  GGS_unifiedTypeMapEntry var_expectedType_47981 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_47981 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_47981 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_47981 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_47981 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_47981 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_47981 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_47981 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_47981 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredConstant temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_48844 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1067)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_47981.objectCompare (var_type_48844)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredConstant temp_4 = this ;
          const GGS_inputParameterDeclaredConstant temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1070)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1070)).add_operation (extensionGetter_definition (var_type_48844, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1070)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1070)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1070)).add_operation (extensionGetter_definition (var_expectedType_47981, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1071)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1071)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1071)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredConstant temp_7 = this ;
  const GGS_inputParameterDeclaredConstant temp_8 = this ;
  GGS_string var_cppName_49240 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1075)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1075)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1075)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1075)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1075)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1075)) ;
  {
  const GGS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_47981, var_cppName_49240, var_cppName_49240, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_47981, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1079)).readProperty_typeName ().readProperty_string (), var_cppName_49240, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1078)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1100)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1101)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1112)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1113)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_51142 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_51148 ; // Joker input parameter
  GGS_string joker_51152 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_51142, joker_51148, joker_51152, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1115)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_51162 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_51162.objectCompare (var_type_51142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1119)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1119)).add_operation (extensionGetter_identifierRepresentation (var_type_51142, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1119)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1119)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_51162, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1120)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1120)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1118)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1131)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1132)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_52039 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1134)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1134)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1134)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1134)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1134)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1134)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_52184 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1135)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_52184, var_cppName_52039, var_cppName_52039, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1136)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_52409 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_52409.objectCompare (var_type_52184)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1146)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1146)).add_operation (extensionGetter_identifierRepresentation (var_type_52184, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1146)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1146)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1146)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_52409, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1147)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1147)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1147)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1145)) ;
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1158)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1159)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_53279 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1161)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1161)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_53424 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1162)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_53424, var_cppName_53279, var_cppName_53279, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1163)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_53600 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_53600.objectCompare (var_type_53424)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1167)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1167)).add_operation (extensionGetter_identifierRepresentation (var_type_53424, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1167)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1167)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1167)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_53600, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1168)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1168)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1168)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1166)) ;
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
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE).add_operation (GGS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1180)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1180)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1180)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1180)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1181)) ;
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
  GGS_string var_cppName_55254 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1201)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1201)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1201)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1201)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1201)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1201)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_cppName_55254.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1202)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1202)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1202)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1202)) ;
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
  GGS_string var_cppName_55842 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1212)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1212)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1212)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1212)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1212)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1212)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_string ").add_operation (var_cppName_55842, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)) ;
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
  GGS_string var_cppName_56435 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1223)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1223)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1223)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1223)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1223)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1223)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_string ").add_operation (var_cppName_56435, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1224)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1224)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1224)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1224)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1224)) ;
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
                                                                                                       const GGS__5B_syntaxInstructionAST_5D_ constinArgument_inSyntaxInstructionListAST,
                                                                                                       const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                       const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       GGS_uint & ioArgument_ioSelectMethodCount,
                                                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1247)) ;
  }
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_57611 (constinArgument_inSyntaxInstructionListAST) ;
  while (enumerator_57611.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_57611.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1250)) ;
    enumerator_57611.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1267)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                              const GGS__5B_formalParameterAST_5D_ constinArgument_inFormalArguments,
                                                                                                              const GGS__5B_syntaxInstructionAST_5D_ constinArgument_inSyntaxInstructionList,
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
                                                                                                              GGS__5B_formalParameterForGeneration_5D_ & outArgument_outSignatureForGeneration,
                                                                                                              GGS__5B_formalParameterSignatureElement_5D_ & outArgument_outSignature,
                                                                                                              GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_59161 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_59161, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1296)) ;
  }
  outArgument_outSignature = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_59495 (outArgument_outSignatureForGeneration) ;
  while (enumerator_59495.hasCurrentObject ()) {
    outArgument_outSignature.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_59495.current (HERE).readProperty_mFormalSelector (), enumerator_59495.current (HERE).readProperty_mFormalArgumentType (), enumerator_59495.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_59495.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1306)) ;
    enumerator_59495.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_59815 (constinArgument_inSyntaxInstructionList) ;
  while (enumerator_59815.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_59815.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_59161, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1311)) ;
    enumerator_59815.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_59161, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1328)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const GGS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                        const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                                                                        const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
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
  GGS_nonterminalMap var_nonterminalMap_61392 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_61392, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1354)) ;
  }
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_61480 (constinArgument_inRuleList) ;
  while (enumerator_61480.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_61523 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_61573 (enumerator_61480.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_61573.hasCurrentObject ()) {
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_61629 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_61703 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_61746 (enumerator_61573.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_61746.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_61778 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_61746.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1367)) ;
        var_signatureForGeneration_61629.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_61746.current (HERE).readProperty_mFormalSelector (), enumerator_61746.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_61778, enumerator_61746.current (HERE).readProperty_mFormalArgumentName (), GGS_string ("argument_").add_operation (enumerator_61746.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1373)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1368)) ;
        var_signature_61703.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_61746.current (HERE).readProperty_mFormalSelector (), var_type_61778, enumerator_61746.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_61746.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1374)) ;
        enumerator_61746.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_61523.setter_insertKey (enumerator_61573.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_61629, var_signature_61703, enumerator_61573.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1376)) ;
      }
      enumerator_61573.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_61480.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_61523, var_nonterminalMap_61392, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1378)) ;
    }
    enumerator_61480.gotoNextObject () ;
  }
  GGS_analysisContext var_analysisContext_62482 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 1385)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_uint var_selectMethodCount_62704 = GGS_uint (uint32_t (0U)) ;
  GGS__5B_ruleDeclarationAST_5D_ var_ruleDeclarationList_62754 = GGS__5B_ruleDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS_uint var_newRuleIndex_62792 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_62824 (constinArgument_inRuleList) ;
  while (enumerator_62824.hasCurrentObject ()) {
    GGS__5B_ruleLabelImplementationAST_5D_ var_ruleLabelImplementationList_62884 = GGS__5B_ruleLabelImplementationAST_5D_::init (inCompiler COMMA_HERE) ;
    GGS_uint var_localSelectMethodCount_62932 = var_selectMethodCount_62704 ;
    GGS_nonterminalLabelMap joker_63029 ; // Joker input parameter
    var_nonterminalMap_61392.method_searchKey (enumerator_62824.current (HERE).readProperty_mNonterminalName (), joker_63029, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1396)) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_63057 (enumerator_62824.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_63057.hasCurrentObject ()) {
      var_localSelectMethodCount_62932 = var_selectMethodCount_62704 ;
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_63614 ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_63651 ;
      GGS__5B_semanticInstructionForGeneration_5D_ var_instructionListForGeneration_63675 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_63057.current (HERE).readProperty_mFormalArguments (), enumerator_63057.current (HERE).readProperty_mSyntaxInstructionList (), var_analysisContext_62482, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1408)), var_nonterminalMap_61392, constinArgument_inSyntaxComponentName, enumerator_63057.current (HERE).readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, var_localSelectMethodCount_62932, var_signatureForGeneration_63614, var_signature_63651, var_instructionListForGeneration_63675, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1399)) ;
      }
      var_ruleLabelImplementationList_62884.plusPlusAssignOperation (GGS_ruleLabelImplementationAST::init_21__21__21__21__21_ (enumerator_63057.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_63614, var_signature_63651, enumerator_63057.current (HERE).readProperty_mEndOfArgumentLocation (), var_instructionListForGeneration_63675, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1418)) ;
      enumerator_63057.gotoNextObject () ;
    }
    var_selectMethodCount_62704 = var_localSelectMethodCount_62932 ;
    GGS_nonterminalLabelMap joker_64017 ; // Joker input parameter
    var_nonterminalMap_61392.method_searchKey (enumerator_62824.current (HERE).readProperty_mNonterminalName (), joker_64017, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1426)) ;
    var_ruleDeclarationList_62754.plusPlusAssignOperation (GGS_ruleDeclarationAST::init_21__21__21_ (enumerator_62824.current (HERE).readProperty_mNonterminalName ().readProperty_string (), var_newRuleIndex_62792, var_ruleLabelImplementationList_62884, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1427)) ;
    var_newRuleIndex_62792.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1431)) ;
    enumerator_62824.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GGS_syntaxDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_61392, var_ruleDeclarationList_62754, var_selectMethodCount_62704, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
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
  constinArgument_inDotDocumentFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 1450)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1450)) ;
  GGS_string var_document_64747 = GGS_string ("digraph G {\n") ;
  var_document_64747.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1452)) ;
  var_document_64747.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1453)) ;
  UpEnumerator_unifiedTypeMap enumerator_64896 (constinArgument_inTypeMap) ;
  while (enumerator_64896.hasCurrentObject ()) {
    switch (enumerator_64896.current (HERE).readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_65006_definition_0 ;
        enumerator_64896.current (HERE).readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_65006_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_65006_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas4", 1458)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_65006_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_64747.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_65006_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1461)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1461)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1461)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass_2E_weak extractedValue_65207_superType_0 ;
                extractedValue_65006_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_65207_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_unifiedTypeMapElementClass var_t_65237 = extractedValue_65207_superType_0.unwrappedValue () ;
                  if (!extractedValue_65207_superType_0.isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    const GGS_typeDefinition_2E_solved var_solvedType_65256 = var_t_65237.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1463)).unwrappedValue () ;
                    if (!var_t_65237.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1463)).isValuated ()) {
                      test_1 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_1) {
                      var_document_64747.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_65006_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1464)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1464)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1464)) ;
                      var_document_64747.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_65006_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1465)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1465)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1465)) ;
                      var_document_64747.plusAssignOperation(var_solvedType_65256.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1466)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1466)) ;
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
    enumerator_64896.gotoNextObject () ;
  }
  var_document_64747.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1472)) ;
  GGS_bool joker_65642 ; // Joker input parameter
  var_document_64747.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_65642, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1473)) ;
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
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_7063 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 167)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_7148 (var_descendantClasses_7063) ;
  while (enumerator_7148.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_7186 = extensionGetter_definition (enumerator_7148.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 169)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_7253 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_7186.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 170)) ;
    GGS_bool var_found_7362 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_7393 (var_overridingMethods_7253) ;
    bool bool_0 = var_found_7362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 172)).isValidAndTrue () ;
    if (enumerator_7393.hasCurrentObject () && bool_0) {
      while (enumerator_7393.hasCurrentObject () && bool_0) {
        var_found_7362 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionSetterName.readProperty_string ().objectCompare (enumerator_7393.current (HERE).readProperty_string ())) ;
        enumerator_7393.gotoNextObject () ;
        if (enumerator_7393.hasCurrentObject ()) {
          bool_0 = var_found_7362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 172)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_7362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 175)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_7148.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 176)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 176)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_7186.readProperty_string (), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 177)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 187)).add_operation (var_descendantClassName_7186.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 188)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 188)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)) ;
        }
      }
    }
    enumerator_7148.gotoNextObject () ;
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
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_8654 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 204)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_8739 (var_descendantClasses_8654) ;
  while (enumerator_8739.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_8777 = extensionGetter_definition (enumerator_8739.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 206)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_8844 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_8777.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 207)) ;
    GGS_bool var_found_8953 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_8986 (var_overridingMethods_8844) ;
    bool bool_0 = var_found_8953.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 209)).isValidAndTrue () ;
    if (enumerator_8986.hasCurrentObject () && bool_0) {
      while (enumerator_8986.hasCurrentObject () && bool_0) {
        var_found_8953 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionMethodName.readProperty_string ().objectCompare (enumerator_8986.current (HERE).readProperty_string ())) ;
        enumerator_8986.gotoNextObject () ;
        if (enumerator_8986.hasCurrentObject ()) {
          bool_0 = var_found_8953.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 209)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_8953.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 212)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_8739.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 213)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 213)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_8777.readProperty_string (), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 214)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 224)).add_operation (var_descendantClassName_8777.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 225)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 225)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)) ;
        }
      }
    }
    enumerator_8739.gotoNextObject () ;
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
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_10249 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 241)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_10338 (var_descendantClasses_10249) ;
  while (enumerator_10338.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_10376 = extensionGetter_definition (enumerator_10338.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 243)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingReaders_10447 = extensionGetter_listForKey (constinArgument_inOverridingExtensionGetterListMap, var_descendantClassName_10376.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 244)) ;
    GGS_bool var_found_10556 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_10592 (var_overridingReaders_10447) ;
    bool bool_0 = var_found_10556.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 246)).isValidAndTrue () ;
    if (enumerator_10592.hasCurrentObject () && bool_0) {
      while (enumerator_10592.hasCurrentObject () && bool_0) {
        var_found_10556 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionGetterName.readProperty_string ().objectCompare (enumerator_10592.current (HERE).readProperty_string ())) ;
        enumerator_10592.gotoNextObject () ;
        if (enumerator_10592.hasCurrentObject ()) {
          bool_0 = var_found_10556.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 246)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_10556.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 249)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_10338.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 250)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 250)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_10376.readProperty_string (), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 251)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.readProperty_location (), GGS_string ("an abstract extension func '").add_operation (constinArgument_inAbstractExtensionGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 261)).add_operation (var_descendantClassName_10376.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 262)).add_operation (GGS_string ("' does not implement this func"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 262)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)) ;
        }
      }
    }
    enumerator_10338.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS__5B_semanticDeclarationAST_5D_ constinArgument_inSemanticDeclarationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*** Perform global checkings"), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 272)) ;
  }
  GGS_descendantClassListMap var_descendantClassListMap_11853 = GGS_descendantClassListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_unifiedTypeMap enumerator_11896 (ioArgument_ioTypeMap) ;
  while (enumerator_11896.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_superType_11918 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_11896.current (HERE).readProperty_mElement ().ptr (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 277)).readProperty_superType () ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_superType_11918.getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas4", 278)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 278)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        extensionSetter_insertKey (var_descendantClassListMap_11853, extensionGetter_definition (var_superType_11918, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 280)).readProperty_typeName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11896.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 281)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 279)) ;
        }
      }
    }
    enumerator_11896.gotoNextObject () ;
  }
  GGS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_12238 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionMethodListMap_12312 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_12378 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_12454 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_12538 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionReaderListMap_12612 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_12678 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_12754 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_12838 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionSetterListMap_12912 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_12978 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_13054 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_13122 (constinArgument_inSemanticDeclarationList) ;
  while (enumerator_13122.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((cPtr_semanticDeclarationAST *) enumerator_13122.current (HERE).ptr (), var_abstractExtensionSetterListMap_12838, var_extensionSetterListMap_12912, var_overridingExtensionSetterListMap_12978, var_overridingAbstractExtensionSetterListMap_13054, var_abstractExtensionMethodListMap_12238, var_extensionMethodListMap_12312, var_overridingExtensionMethodListMap_12378, var_overridingAbstractExtensionMethodListMap_12454, var_abstractExtensionGetterListMap_12538, var_extensionReaderListMap_12612, var_overridingExtensionGetterListMap_12678, var_overridingAbstractExtensionGetterListMap_12754, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 299)) ;
    enumerator_13122.gotoNextObject () ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas4", 315)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_13852 (var_abstractExtensionSetterListMap_12838.readProperty_dictionary ()) ;
      while (enumerator_13852.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_13960 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14004 (enumerator_13852.current_value (HERE)) ;
        while (enumerator_14004.hasCurrentObject ()) {
          {
          var_extensionSetterMap_13960.setter_insertKey (enumerator_14004.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 320)) ;
          }
          enumerator_14004.gotoNextObject () ;
        }
        enumerator_13852.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14173 (var_extensionSetterListMap_12912.readProperty_dictionary ()) ;
      while (enumerator_14173.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14273 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14317 (enumerator_14173.current_value (HERE)) ;
        while (enumerator_14317.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14273.setter_insertKey (enumerator_14317.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 327)) ;
          }
          enumerator_14317.gotoNextObject () ;
        }
        enumerator_14173.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14492 (var_overridingExtensionSetterListMap_12978.readProperty_dictionary ()) ;
      while (enumerator_14492.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14602 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14646 (enumerator_14492.current_value (HERE)) ;
        while (enumerator_14646.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14602.setter_insertKey (enumerator_14646.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 334)) ;
          }
          enumerator_14646.gotoNextObject () ;
        }
        enumerator_14492.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14830 (var_overridingAbstractExtensionMethodListMap_12454.readProperty_dictionary ()) ;
      while (enumerator_14830.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14948 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14992 (enumerator_14830.current_value (HERE)) ;
        while (enumerator_14992.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14948.setter_insertKey (enumerator_14992.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 341)) ;
          }
          enumerator_14992.gotoNextObject () ;
        }
        enumerator_14830.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_15220 (var_abstractExtensionSetterListMap_12838.readProperty_dictionary ()) ;
      while (enumerator_15220.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_15297 (enumerator_15220.current_value (HERE)) ;
        while (enumerator_15297.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15220.current_key (HERE), enumerator_15220.current_key (HERE), enumerator_15297.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionSetterListMap_12978, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 347)) ;
          }
          enumerator_15297.gotoNextObject () ;
        }
        enumerator_15220.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_15691 (var_overridingAbstractExtensionSetterListMap_13054.readProperty_dictionary ()) ;
      while (enumerator_15691.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_15780 (enumerator_15691.current_value (HERE)) ;
        while (enumerator_15780.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15691.current_key (HERE), enumerator_15691.current_key (HERE), enumerator_15780.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionSetterListMap_12978, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 360)) ;
          }
          enumerator_15780.gotoNextObject () ;
        }
        enumerator_15691.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16101 (var_abstractExtensionMethodListMap_12238.readProperty_dictionary ()) ;
      while (enumerator_16101.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16207 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16251 (enumerator_16101.current_value (HERE)) ;
        while (enumerator_16251.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16207.setter_insertKey (enumerator_16251.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 374)) ;
          }
          enumerator_16251.gotoNextObject () ;
        }
        enumerator_16101.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16409 (var_extensionMethodListMap_12312.readProperty_dictionary ()) ;
      while (enumerator_16409.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16507 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16551 (enumerator_16409.current_value (HERE)) ;
        while (enumerator_16551.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16507.setter_insertKey (enumerator_16551.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 381)) ;
          }
          enumerator_16551.gotoNextObject () ;
        }
        enumerator_16409.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16715 (var_overridingExtensionMethodListMap_12378.readProperty_dictionary ()) ;
      while (enumerator_16715.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16823 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16867 (enumerator_16715.current_value (HERE)) ;
        while (enumerator_16867.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16823.setter_insertKey (enumerator_16867.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 388)) ;
          }
          enumerator_16867.gotoNextObject () ;
        }
        enumerator_16715.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17040 (var_overridingAbstractExtensionMethodListMap_12454.readProperty_dictionary ()) ;
      while (enumerator_17040.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17156 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_17200 (enumerator_17040.current_value (HERE)) ;
        while (enumerator_17200.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17156.setter_insertKey (enumerator_17200.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 395)) ;
          }
          enumerator_17200.gotoNextObject () ;
        }
        enumerator_17040.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17408 (var_abstractExtensionMethodListMap_12238.readProperty_dictionary ()) ;
      while (enumerator_17408.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17485 (enumerator_17408.current_value (HERE)) ;
        while (enumerator_17485.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17408.current_key (HERE), enumerator_17408.current_key (HERE), enumerator_17485.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionMethodListMap_12378, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 401)) ;
          }
          enumerator_17485.gotoNextObject () ;
        }
        enumerator_17408.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17850 (var_overridingAbstractExtensionMethodListMap_12454.readProperty_dictionary ()) ;
      while (enumerator_17850.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17937 (enumerator_17850.current_value (HERE)) ;
        while (enumerator_17937.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17850.current_key (HERE), enumerator_17850.current_key (HERE), enumerator_17937.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionMethodListMap_12378, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 414)) ;
          }
          enumerator_17937.gotoNextObject () ;
        }
        enumerator_17850.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18405 (var_abstractExtensionGetterListMap_12538.readProperty_dictionary ()) ;
      while (enumerator_18405.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18513 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18557 (enumerator_18405.current_value (HERE)) ;
        while (enumerator_18557.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18513.setter_insertKey (enumerator_18557.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 430)) ;
          }
          enumerator_18557.gotoNextObject () ;
        }
        enumerator_18405.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18717 (var_extensionReaderListMap_12612.readProperty_dictionary ()) ;
      while (enumerator_18717.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18817 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18861 (enumerator_18717.current_value (HERE)) ;
        while (enumerator_18861.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18817.setter_insertKey (enumerator_18861.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 437)) ;
          }
          enumerator_18861.gotoNextObject () ;
        }
        enumerator_18717.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19027 (var_overridingExtensionGetterListMap_12678.readProperty_dictionary ()) ;
      while (enumerator_19027.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19137 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_19181 (enumerator_19027.current_value (HERE)) ;
        while (enumerator_19181.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19137.setter_insertKey (enumerator_19181.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 444)) ;
          }
          enumerator_19181.gotoNextObject () ;
        }
        enumerator_19027.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19366 (var_abstractExtensionGetterListMap_12538.readProperty_dictionary ()) ;
      while (enumerator_19366.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19445 (enumerator_19366.current_value (HERE)) ;
        while (enumerator_19445.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19366.current_key (HERE), enumerator_19366.current_key (HERE), enumerator_19445.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionGetterListMap_12678, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 450)) ;
          }
          enumerator_19445.gotoNextObject () ;
        }
        enumerator_19366.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19787 (var_overridingAbstractExtensionGetterListMap_12754.readProperty_dictionary ()) ;
      while (enumerator_19787.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19876 (enumerator_19787.current_value (HERE)) ;
        while (enumerator_19876.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19787.current_key (HERE), enumerator_19787.current_key (HERE), enumerator_19876.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionGetterListMap_12678, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 463)) ;
          }
          enumerator_19876.gotoNextObject () ;
        }
        enumerator_19787.gotoNextObject () ;
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
                                                              const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                              const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 35)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_1855 (constinArgument_inInstructionList) ;
  while (enumerator_1855.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_1855.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 37)) ;
    enumerator_1855.gotoNextObject () ;
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
  GGS_string result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 217)).readProperty_headerFileName () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_isPredefined (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 229)).readProperty_isPredefined () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticTypeForGeneration::getter_headerKind (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 235)).readProperty_headerKind () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_getImplementationCppFileName (Compiler */* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result = temp_0.readProperty_implementationCppFileName () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result = temp_0.readProperty_generateHeader () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticDeclarationWithHeaderForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 264)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "execution-mode.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "galgas4",
  "galgasTemplate",
  "galgas4project",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS 4 source file",
  "a GALGAS Template source file",
  "a GALGAS4 project source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "4.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GGS_string var_creationProjectName_1418 = GGS_buildOptionValue::class_func_create_5F_project (SOURCE_FILE ("galgasProgram.galgas4", 26)) ;
    {
    routine_projectCreation_3F_ (var_creationProjectName_1418, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 27)) ;
    }
  }
  {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_buildOptionValue::class_func_printPredefinedLexicalActions (SOURCE_FILE ("galgasProgram.galgas4", 33)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 34)) ;
        }
      }
    }
  }
  {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, GGS_buildOptionValue::class_func_extractLIBPMOption (SOURCE_FILE ("galgasProgram.galgas4", 41)).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        routine_updateLIBPMatPath_3F_ (GGS_buildOptionValue::class_func_extractLIBPMOption (SOURCE_FILE ("galgasProgram.galgas4", 42)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 42)) ;
        }
      }
    }
  }
  {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_buildOptionValue::class_func_check_5F_big_5F_int (SOURCE_FILE ("galgasProgram.galgas4", 51)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        routine_checkBigInteger (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 52)) ;
        }
      }
    }
  }
  {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_buildOptionValue::class_func_displayUnicodeLexicalTestFunctions (SOURCE_FILE ("galgasProgram.galgas4", 61)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        routine_displayUnicodeLexicalTestFunctions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 62)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_parentDirectory_2943 = constinArgument_inSourceFile.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 76)).getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 76)) ;
  GGS__5B_string_5D_ temp_0 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("galgas4project")  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  GGS__5B_string_5D_ var_candidateProjectFiles_3039 = var_parentDirectory_2943.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_3039.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 78)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3039.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 80)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_3320 = GGS_string ("several project files in source file parent directory:") ;
        UpEnumerator__5B_string_5D_ enumerator_3398 (var_candidateProjectFiles_3039) ;
        while (enumerator_3398.hasCurrentObject ()) {
          var_s_3320.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_3398.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 83)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 83)) ;
          enumerator_3398.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3320, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 85)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_projectFilePath_3501 = var_parentDirectory_2943.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)).add_operation (var_candidateProjectFiles_3039.getter_first (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_3501, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 88)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_templateInstructionAST_5D_ joker_4063 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_4063  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 102)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_ (constinArgument_inProjectSourceFile, GGS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 115)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = true ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "galgas4") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_34_Grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasTemplate") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_templateGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_templateGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgas4project") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_projectComponentGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_projectComponentGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_projectComponentGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_projectComponentGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gBuildOption_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gBuildOption_emit_5F_issue_5F_json_5F_file.readProperty_value () != "") {
        commonCompiler->writeIssueJSONFile (gBuildOption_emit_5F_issue_5F_json_5F_file.readProperty_value ()) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

