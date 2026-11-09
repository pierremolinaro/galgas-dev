#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
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
  UpEnumerator__5B_string_5D_ enumerator_1565 (var_fw_1497.getter_allDirectoryPaths (SOURCE_FILE ("libpmHandling.galgas4", 32))) ;
  while (enumerator_1565.hasCurrentObject ()) {
    GGS_string var_actualDirectory_1616 = constinArgument_inLIBPMPath.add_operation (enumerator_1565.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 33)) ;
    var_actualDirectory_1616.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 34)) ;
    enumerator_1565.gotoNextObject () ;
  }
  GGS_stringset var_allNeededFileSet_1739 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_1769 (var_fw_1497.getter_allTextFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 38))) ;
  while (enumerator_1769.hasCurrentObject ()) {
    GGS_string var_contents_1811 = var_fw_1497.getter_textFileContentsAtPath (enumerator_1769.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 39)) ;
    GGS_string var_actualFilePath_1865 = constinArgument_inLIBPMPath.add_operation (enumerator_1769.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 40)) ;
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
    var_allNeededFileSet_1739.plusPlusAssignOperation (enumerator_1769.current_entry (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 46)) ;
    enumerator_1769.gotoNextObject () ;
  }
  UpEnumerator__5B_string_5D_ enumerator_2188 (var_fw_1497.getter_allBinaryFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 49))) ;
  while (enumerator_2188.hasCurrentObject ()) {
    GGS_data var_contents_2232 = var_fw_1497.getter_binaryFileContentsAtPath (enumerator_2188.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 50)) ;
    GGS_string var_actualFilePath_2288 = constinArgument_inLIBPMPath.add_operation (enumerator_2188.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 51)) ;
    GGS_bool joker_2389 ; // Joker input parameter
    var_contents_2232.method_writeToFileWhenDifferentContents (var_actualFilePath_2288, joker_2389, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 52)) ;
    var_allNeededFileSet_1739.plusPlusAssignOperation (enumerator_2188.current_entry (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 53)) ;
    enumerator_2188.gotoNextObject () ;
  }
  GGS_stringset var_allActualFileSet_2475 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_2505 (constinArgument_inLIBPMPath.getter_regularFiles (GGS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas4", 57))) ;
  while (enumerator_2505.hasCurrentObject ()) {
    var_allActualFileSet_2475.plusPlusAssignOperation (GGS_string ("/").add_operation (enumerator_2505.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58))  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58)) ;
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
  result_result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 129)) ;
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
                                                                       GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_5443 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 142)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5443, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 143)) ;
  }
  const GGS_templateLexiqueComponentAST temp_3 = this ;
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  GGS_lstring var_superKey_5597 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 144)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5443, var_superKey_5597 COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 145)) ;
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
  GGS_bool var_superLexiqueIsTemplate_6616 ;
  GGS_terminalMap var_terminalMap_6650 ;
  GGS_indexingListAST var_indexingListAST_6673 ;
  GGS_terminalDeclarationListAST var_terminalListAST_6700 ;
  GGS_lexicalAttributeListAST var_lexicalAttributeListAST_6727 ;
  GGS_lexicalStyleListAST var_lexicalStyleListAST_6762 ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_6793 ;
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_6616, var_terminalMap_6650, var_indexingListAST_6673, var_terminalListAST_6700, var_lexicalAttributeListAST_6727, var_lexicalStyleListAST_6762, var_lexicalListDeclarationListAST_6793, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 159)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_6616.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLexiqueComponentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GGS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 170)) ;
    }
  }
  {
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GGS_bool (true), var_terminalMap_6650, var_indexingListAST_6673, var_terminalListAST_6700, var_lexicalAttributeListAST_6727, var_lexicalStyleListAST_6762, var_lexicalListDeclarationListAST_6793, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 173)) ;
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
  GGS_lstring var_nameForUsefulness_8017 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 196)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8017, var_nameForUsefulness_8017, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 197)) ;
  }
  GGS_terminalDeclarationListAST var_terminalListAST_8458 ;
  GGS_lexicalAttributeListAST var_lexicalAttributeListAST_8485 ;
  GGS_lexicalStyleListAST var_lexicalStyleListAST_8520 ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_8551 ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_bool joker_8355 ; // Joker input parameter
  GGS_terminalMap joker_8393 ; // Joker input parameter
  GGS_indexingListAST joker_8420 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_8355, joker_8393, joker_8420, var_terminalListAST_8458, var_lexicalAttributeListAST_8485, var_lexicalStyleListAST_8520, var_lexicalListDeclarationListAST_8551, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 199)) ;
  GGS_lexicalTypeMap var_lexicalTypeMap_8680 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 210)) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_8818 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_8818, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 212)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_8937 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_8937, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 214)) ;
  }
  GGS_stringset var_unicodeTestFunctions_9064 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_9064, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 216)) ;
  }
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_9157 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_8818, var_lexicalFunctionMap_8937, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE), GGS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_9064, inCompiler COMMA_HERE) ;
  GGS_bigint var_styleIndex_9562 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 233)) ;
  UpEnumerator_lexicalStyleListAST enumerator_9599 (var_lexicalStyleListAST_8520) ;
  while (enumerator_9599.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_9157.mProperty_mStyleMap.setter_insertKey (enumerator_9599.current (HERE).readProperty_mName (), enumerator_9599.current (HERE).readProperty_mComment (), var_styleIndex_9562.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 235)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 235)) ;
    }
    var_styleIndex_9562.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 236)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 236)) ;
    enumerator_9599.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_8680, var_lexicalAttributeListAST_8485, var_lexiqueAnalysisContext_9157.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 239)) ;
  }
  GGS__5B_terminalAST_5D_ var_terminalList_10032 = GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator_terminalDeclarationListAST enumerator_10069 (var_terminalListAST_8458) ;
  while (enumerator_10069.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_10102 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_10069.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 248)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_lstring joker_10237 ; // Joker input parameter
        var_lexiqueAnalysisContext_9157.readProperty_mStyleMap ().method_searchKey (enumerator_10069.current (HERE).readProperty_mStyle (), joker_10237, var_terminalStyleIndex_10102, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 249)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_10278 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_10352 (enumerator_10069.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_10352.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_10466 ;
      var_lexiqueAnalysisContext_9157.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_10352.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_10466, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 253)) ;
      var_argumentTypeList_10278.plusPlusAssignOperation (GGS_lexicalSentValueList_2E_element::init_21__21__21_ (enumerator_10352.current (HERE).readProperty_mFormalSelector (), enumerator_10352.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_10466, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 254)) ;
      enumerator_10352.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_9157.mProperty_mTerminalMap.setter_insertKey (enumerator_10069.current (HERE).readProperty_mName (), var_argumentTypeList_10278, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 256)) ;
    }
    var_terminalList_10032.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_10069.current (HERE).readProperty_mName (), var_argumentTypeList_10278, enumerator_10069.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string (), enumerator_10069.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_10069.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 262)), var_terminalStyleIndex_10102, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 257)) ;
    enumerator_10069.gotoNextObject () ;
  }
  UpEnumerator_lexicalListDeclarationListAST enumerator_10975 (var_lexicalListDeclarationListAST_8551) ;
  while (enumerator_10975.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_11022 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_10975.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 267)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_11163 ; // Joker input parameter
        var_lexiqueAnalysisContext_9157.readProperty_mStyleMap ().method_searchKey (enumerator_10975.current (HERE).readProperty_mStyle (), joker_11163, var_terminalStyleIndex_11022, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 268)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_11204 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_11281 (enumerator_10975.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_11281.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_11395 ;
      var_lexiqueAnalysisContext_9157.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_11281.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_11395, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 272)) ;
      var_argumentTypeList_11204.plusPlusAssignOperation (GGS_lexicalSentValueList_2E_element::init_21__21__21_ (enumerator_11281.current (HERE).readProperty_mFormalSelector (), enumerator_11281.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_11395, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 273)) ;
      enumerator_11281.gotoNextObject () ;
    }
    UpEnumerator__5B_lexicalListEntryAST_5D_ enumerator_11565 (enumerator_10975.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_11565.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_11589 = enumerator_10975.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_11565.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 276)) ;
      var_terminalList_10032.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_11565.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_11204, var_syntaxErrorMessage_11589, enumerator_11565.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_11565.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 282)), var_terminalStyleIndex_11022, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 277)) ;
      enumerator_11565.gotoNextObject () ;
    }
    enumerator_10975.gotoNextObject () ;
  }
  GGS_stringset var_unicodeStringToGenerate_12049 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS__5B_templateDelimitorAST_5D_ var_templateDelimitorList_12109 = GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_templateLexiqueComponentAST temp_5 = this ;
  UpEnumerator_templateDelimitorListAST enumerator_12169 (temp_5.readProperty_mTemplateDelimitorList ()) ;
  while (enumerator_12169.hasCurrentObject ()) {
    var_unicodeStringToGenerate_12049.plusPlusAssignOperation (enumerator_12169.current (HERE).readProperty_mStartString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 290)) ;
    var_unicodeStringToGenerate_12049.plusPlusAssignOperation (enumerator_12169.current (HERE).readProperty_mEndString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 291)) ;
    var_templateDelimitorList_12109.plusPlusAssignOperation (GGS_templateDelimitorAST::init_21__21__21_ (enumerator_12169.current (HERE).readProperty_mStartString (), enumerator_12169.current (HERE).readProperty_mEndString (), enumerator_12169.current (HERE).readProperty_mPreserved (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 292)) ;
    enumerator_12169.gotoNextObject () ;
  }
  const GGS_templateLexiqueComponentAST temp_6 = this ;
  UpEnumerator__5B_templateReplacementAST_5D_ enumerator_12557 (temp_6.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_12557.hasCurrentObject ()) {
    var_unicodeStringToGenerate_12049.plusPlusAssignOperation (enumerator_12557.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 296)) ;
    var_unicodeStringToGenerate_12049.plusPlusAssignOperation (enumerator_12557.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 297)) ;
    enumerator_12557.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas4", 301)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateLexiqueComponentAST temp_8 = this ;
      const GGS_templateLexiqueComponentAST temp_9 = this ;
      GGS_string var_headerContents_12907 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (inCompiler, temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 304)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 305)) COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 303))) ;
      const GGS_templateLexiqueComponentAST temp_10 = this ;
      const GGS_templateLexiqueComponentAST temp_11 = this ;
      const GGS_templateLexiqueComponentAST temp_12 = this ;
      const GGS_templateLexiqueComponentAST temp_13 = this ;
      GGS_string var_cppContents_13148 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (inCompiler, temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 309)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 310)), var_lexiqueAnalysisContext_9157.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_12049, var_templateDelimitorList_12109, var_terminalList_10032, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 308))) ;
      const GGS_templateLexiqueComponentAST temp_14 = this ;
      const GGS_templateLexiqueComponentAST temp_15 = this ;
      const GGS_templateLexiqueComponentAST temp_16 = this ;
      const GGS_templateLexiqueComponentAST temp_17 = this ;
      GGS_string var_swiftuiImplementation_13620 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_swiftuiImplementationZone (inCompiler, GGS_string ("lexique-").add_operation (temp_14.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 320)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 320)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 320)), temp_15.readProperty_mLexiqueComponentName ().readProperty_string (), temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_10032, var_templateDelimitorList_12109, temp_17.readProperty_mTemplateReplacementList (), var_lexicalStyleListAST_8520 COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 319))) ;
      const GGS_templateLexiqueComponentAST temp_18 = this ;
      const GGS_templateLexiqueComponentAST temp_19 = this ;
      const GGS_templateLexiqueComponentAST temp_20 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_lexiqueDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("lexique-").add_operation (temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 332)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 332)), temp_19.readProperty_mLexiqueComponentName ().readProperty_string (), temp_20.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_12907, var_cppContents_13148, var_swiftuiImplementation_13620, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 329)) ;
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
  GGS_uint index_2272_ (0) ;
  if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_templateDelimitorAST_5D_ enumerator_2272 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
    const bool nonEmpty_enumerator_2272 = enumerator_2272.hasCurrentObject () ;
    if (nonEmpty_enumerator_2272) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_2272.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2272.current_entry (HERE).readProperty_mStartString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_2272.current_entry (HERE).readProperty_mStartString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_2272.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2272.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_2272.current_entry (HERE).readProperty_mEndString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_2272.current_entry (HERE).readProperty_mPreservesStartDelimiter ().operator_not (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_2272.gotoNextObject () ;
      if (enumerator_2272.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_2272_.increment () ;
    }
    if (nonEmpty_enumerator_2272) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_3237_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_templateReplacementAST_5D_ enumerator_3237 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
    const bool nonEmpty_enumerator_3237 = enumerator_3237.hasCurrentObject () ;
    if (nonEmpty_enumerator_3237) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_3237.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3237.current_entry (HERE).readProperty_mMatchString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3237.current_entry (HERE).readProperty_mMatchString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3237.current_entry (HERE).readProperty_mReplacementString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3237.current_entry (HERE).readProperty_mReplacementString ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_3237.current_entry (HERE).readProperty_mReplacementFunction ().readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 69)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_3237.current_entry (HERE).readProperty_mReplacementFunction ().readProperty_string ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", true)") ;
      enumerator_3237.gotoNextObject () ;
      if (enumerator_3237.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_3237_.increment () ;
    }
    if (nonEmpty_enumerator_3237) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_4178_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_4178 (in_TERMINAL_5F_LIST) ;
    const bool nonEmpty_enumerator_4178 = enumerator_4178.hasCurrentObject () ;
    if (nonEmpty_enumerator_4178) {
      result.appendString ("static const bool ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kEndOfScriptInTemplateArray [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_4178.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4178.current_entry (HERE).readProperty_isEndOfTemplateMark ().getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_4178.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      enumerator_4178.gotoNextObject () ;
      if (enumerator_4178.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_4178_.increment () ;
    }
    if (nonEmpty_enumerator_4178) {
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
  result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  }\n  if (mCurrentChar.u32 () == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N\n//--------------------------------------------------------------------------------------------------\n\nGGS__5B_string_5D_ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GGS__5B_string_5D_ result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;\n") ;
  GGS_uint index_7623_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator__5B_terminalAST_5D_ enumerator_7623 (in_TERMINAL_5F_LIST) ;
    while (enumerator_7623.hasCurrentObject ()) {
      result.appendString ("  result.plusPlusAssignOperation (GGS_string (") ;
      result.appendString (enumerator_7623.current_entry (HERE).readProperty_mTerminalName ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 152)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      enumerator_7623.gotoNextObject () ;
      index_7623_.increment () ;
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
  GGS_uint index_8150_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_8150 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_8150.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).add_operation (enumerator_8150.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).stringValue ()) ;
      result.appendString (") ;\n") ;
      enumerator_8150.gotoNextObject () ;
      index_8150_.increment () ;
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
  GGS_uint index_8863_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_8863 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_8863.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).add_operation (enumerator_8863.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GGS_uint index_9060_ (0) ;
      if (enumerator_8863.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_9060 (enumerator_8863.current_mTokenSortedList (HERE)) ;
        while (enumerator_9060.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_9060.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 179)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_9060.gotoNextObject () ;
          index_9060_.increment () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      enumerator_8863.gotoNextObject () ;
      index_8863_.increment () ;
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
                                                                                             const GGS__5B_templateReplacementAST_5D_ & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
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
  result.appendString ("\"\n} */\n\n//--------------------------------------------------------------------------------------------------\n\nstruct SettingViewFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mUnused = false\n\n  @AppStorage(\"FontFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n\n  @AppStorage(\"LineHeightFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mLineHeight : Int = 12\n\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mDefaultColor : Color = .black\n\n") ;
  GGS_uint index_2863_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_2863 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_2863.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(\"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2863.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mColorFor_") ;
      result.appendString (enumerator_2863.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Color = .black\n\n  @AppStorage(\"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2863.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mBoldFor_") ;
      result.appendString (enumerator_2863.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2863.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mItalicFor_") ;
      result.appendString (enumerator_2863.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n") ;
      enumerator_2863.gotoNextObject () ;
      index_2863_.increment () ;
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
  GGS_uint index_4759_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_4759 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_4759.hasCurrentObject ()) {
      result.appendString ("      LabeledContent (") ;
      result.appendString (enumerator_4759.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 123)).stringValue ()) ;
      result.appendString (") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_") ;
      result.appendString (enumerator_4759.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (").labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_") ;
      result.appendString (enumerator_4759.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n          Toggle (\"Italic\", isOn: self.$mItalicFor_") ;
      result.appendString (enumerator_4759.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n        }\n      }\n") ;
      enumerator_4759.gotoNextObject () ;
      index_4759_.increment () ;
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
  GGS_uint index_7172_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_7172 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_7172.hasCurrentObject ()) {
      result.appendString ("    if let s = ud.string (forKey: \"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"), let v = Color (rawValue: s) {\n      if self.mColorFor_") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mColorFor_") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mBoldFor_") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mBoldFor_") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mItalicFor_") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mItalicFor_") ;
      result.appendString (enumerator_7172.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n") ;
      enumerator_7172.gotoNextObject () ;
      index_7172_.increment () ;
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
  GGS_uint index_10245_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_10245 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_10245.hasCurrentObject ()) {
      result.appendString ("    //--- Attributes for ") ;
      result.appendString (enumerator_10245.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n      if self.mColorFor_") ;
      result.appendString (enumerator_10245.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_") ;
      result.appendString (enumerator_10245.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n      }\n      if self.mBoldFor_") ;
      result.appendString (enumerator_10245.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" && self.mItalicFor_") ;
      result.appendString (enumerator_10245.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_") ;
      result.appendString (enumerator_10245.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_") ;
      result.appendString (enumerator_10245.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n") ;
      enumerator_10245.gotoNextObject () ;
      index_10245_.increment () ;
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
  GGS_lstring var_nameForUsefulness_12420 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12420, var_nameForUsefulness_12420, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 259)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_12420  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 261)) ;
    }
  }
  GGS_formalInputParameterListForGeneration var_formalArgumentList_12665 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_3 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_12749 (temp_3.readProperty_mFormalArgumentList ()) ;
  while (enumerator_12749.hasCurrentObject ()) {
    var_formalArgumentList_12665.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_12749.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12749.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 268)), enumerator_12749.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_12749.current (HERE).readProperty_mFormalArgumentName (), enumerator_12749.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 266)) ;
    enumerator_12749.gotoNextObject () ;
  }
  const GGS_externFunctionDeclarationAST temp_4 = this ;
  const GGS_externFunctionDeclarationAST temp_5 = this ;
  const GGS_externFunctionDeclarationAST temp_6 = this ;
  const GGS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionPrototypeDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 274)), GGS_bool (true), GGS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 276)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_12665, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 273)) ;
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
  GGS_localVarManager var_variableMap_14142 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  outArgument_outSignatureForGeneration = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalInputParameterListAST enumerator_14297 (constinArgument_inFunctionSignature) ;
  while (enumerator_14297.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_14328 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14297.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 304)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_14297.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_cppName_14462 = GGS_string ("constinArgument_").add_operation (enumerator_14297.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 306)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 306)) ;
        outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_14297.current (HERE).readProperty_mFormalSelector (), var_parameterType_14328, var_cppName_14462, enumerator_14297.current (HERE).readProperty_mFormalArgumentName (), enumerator_14297.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 307)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_14297.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_14142, enumerator_14297.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14328, var_cppName_14462, var_cppName_14462, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 314)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_14142, enumerator_14297.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14328, var_cppName_14462, var_cppName_14462, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 316)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_cppName_15079 = GGS_string ("inArgument_").add_operation (enumerator_14297.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 319)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 319)) ;
      outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_14297.current (HERE).readProperty_mFormalSelector (), var_parameterType_14328, var_cppName_15079, enumerator_14297.current (HERE).readProperty_mFormalArgumentName (), enumerator_14297.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 320)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = enumerator_14297.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_14142, enumerator_14297.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14328, var_cppName_15079, var_cppName_15079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 327)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_14142, enumerator_14297.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14328, var_cppName_15079, var_cppName_15079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 329)) ;
        }
      }
    }
    enumerator_14297.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 334)) ;
  outArgument_outResultVariableCppName = GGS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 335)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_14142, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 336)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_selfAvailability_2E_available var_selfAvailable_16058 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 338)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 338)).isValuated ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator_typedPropertyList enumerator_16177 (extensionGetter_definition (var_selfAvailable_16058.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 339)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_16177.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_14142, enumerator_16177.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_16177.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_16177.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 345)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 340)) ;
        }
        enumerator_16177.gotoNextObject () ;
      }
    }
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_16587 (constinArgument_inInstructionList) ;
  while (enumerator_16587.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_16587.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_14142, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 353)) ;
    enumerator_16587.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_14142, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 363)) ;
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
  GGS_lstring var_nameForUsefulness_17460 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 378)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17460, var_nameForUsefulness_17460, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 379)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17460  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 381)) ;
    }
  }
  GGS_analysisContext var_analysisContext_17727 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 388)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalInputParameterList_18205 ;
  GGS_unifiedTypeMapEntry var_returnType_18240 ;
  GGS_string var_resultVariableCppName_18261 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_18293 ;
  {
  const GGS_functionDeclarationAST temp_3 = this ;
  const GGS_functionDeclarationAST temp_4 = this ;
  const GGS_functionDeclarationAST temp_5 = this ;
  const GGS_functionDeclarationAST temp_6 = this ;
  const GGS_functionDeclarationAST temp_7 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_17460, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_17727, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultVariableName (), temp_6.readProperty_mResultTypeName (), temp_7.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_18205, var_returnType_18240, var_resultVariableCppName_18261, var_semanticInstructionListForGeneration_18293, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 391)) ;
  }
  const GGS_functionDeclarationAST temp_8 = this ;
  const GGS_functionDeclarationAST temp_9 = this ;
  const GGS_functionDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("function ").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 408)), GGS_bool (true), GGS_string ("func-").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 410)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 410)), temp_10.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_18205, var_returnType_18240, var_resultVariableCppName_18261, var_semanticInstructionListForGeneration_18293, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 407)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_19295 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 431)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_19295, var_nameForUsefulness_19295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 432)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_19295  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 434)) ;
    }
  }
  GGS_analysisContext var_analysisContext_19561 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 441)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_returnType_20054 ;
  GGS_string var_resultVariableCppName_20075 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_20107 ;
  {
  const GGS_onceFunctionDeclarationAST temp_3 = this ;
  const GGS_onceFunctionDeclarationAST temp_4 = this ;
  const GGS_onceFunctionDeclarationAST temp_5 = this ;
  const GGS_onceFunctionDeclarationAST temp_6 = this ;
  GGS_formalInputParameterListForGeneration joker_20041 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_19295, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_19561, ioArgument_ioTypeMap, GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultVariableName (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), joker_20041, var_returnType_20054, var_resultVariableCppName_20075, var_semanticInstructionListForGeneration_20107, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 444)) ;
  }
  const GGS_onceFunctionDeclarationAST temp_7 = this ;
  const GGS_onceFunctionDeclarationAST temp_8 = this ;
  const GGS_onceFunctionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_onceFunctionDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_string ("once function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 461)), GGS_bool (true), GGS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 463)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 463)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_returnType_20054, var_resultVariableCppName_20075, var_semanticInstructionListForGeneration_20107, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 460)) ;
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
  GGS_lstring var_filewrapperNameForUsefulness_21240 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 487)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_21240, var_filewrapperNameForUsefulness_21240, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 488)) ;
  }
  GGS_wrapperFileMap var_wrapperFileMap_21574 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_21620 ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  GGS_lstring joker_21537 ; // Joker input parameter
  GGS__5B_lstring_5D_ joker_21545 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_21645_2 ; // Joker input parameter
  GGS_bool joker_21645_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_21537, joker_21545, var_wrapperFileMap_21574, var_wrapperDirectoryMap_21620, joker_21645_2, joker_21645_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 490)) ;
  GGS_string var_absoluteSourcePath_21693 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas4", 500)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_21693 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_filewrapperDeclarationAST temp_5 = this ;
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_21693 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 503)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 503)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 503)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_absoluteSourcePath_21693.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas4", 505)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 505)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_filewrapperDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_21693, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 506)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 506)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 506)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GGS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_22197 = GGS_filewrapperTemplateListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_10 = this ;
    UpEnumerator_filewrapperTemplateListAST enumerator_22276 (temp_10.readProperty_mFilewrapperTemplateList ()) ;
    while (enumerator_22276.hasCurrentObject ()) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      GGS_lstring var_filewrapperTemplateNameForUsefulness_22314 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_22276.current (HERE).readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 511)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_22314, var_filewrapperTemplateNameForUsefulness_22314, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 515)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_22314, var_filewrapperNameForUsefulness_21240 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 516)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::equal, enumerator_22276.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas4", 517)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_22276.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_21693, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 519)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 519)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 518)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_23016 = var_absoluteSourcePath_21693.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 521)).add_operation (enumerator_22276.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 521)) ;
      GGS__5B_templateInstructionAST_5D_ var_resultingInstructionList_23198 ;
      var_resultingInstructionList_23198.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_23016, enumerator_22276.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_23198  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 523)) ;
      GGS_templateVariableMap var_templateVariableMap_23392 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_23467 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalTemplateInputParameterListAST enumerator_23554 (enumerator_22276.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_23554.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_23611 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_23554.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 529)) ;
        GGS_string var_cppVarName_23701 = GGS_string ("in_").add_operation (enumerator_23554.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 530)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 530)) ;
        {
        var_templateVariableMap_23392.setter_insertKey (enumerator_23554.current (HERE).readProperty_mFormalArgumentName (), var_type_23611, var_cppVarName_23701, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 531)) ;
        }
        var_filewrapperTemplateFormalInputParameters_23467.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_23554.current (HERE).readProperty_mFormalTemplateSelector (), var_type_23611, var_cppVarName_23701, enumerator_23554.current (HERE).readProperty_mFormalArgumentName (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 532)) ;
        enumerator_23554.gotoNextObject () ;
      }
      GGS_templateInstructionListForGeneration var_templateInstructionListForGeneration_24054 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_24144 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_23392, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_21240, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_24144, ioArgument_ioTypeMap, var_resultingInstructionList_23198, var_templateInstructionListForGeneration_24054, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 541)) ;
      }
      var_filewrapperTemplateListForGeneration_22197.plusPlusAssignOperation (GGS_filewrapperTemplateListForGeneration_2E_element::init_21__21__21_ (enumerator_22276.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_23467, var_templateInstructionListForGeneration_24054, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 550)) ;
      enumerator_22276.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_14 = this ;
    const GGS_filewrapperDeclarationAST temp_15 = this ;
    const GGS_filewrapperDeclarationAST temp_16 = this ;
    const GGS_filewrapperDeclarationAST temp_17 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_filewrapperDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 557)), GGS_bool (true), GGS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 559)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_21574, var_wrapperDirectoryMap_21620, var_filewrapperTemplateListForGeneration_22197, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 556)) ;
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
  GGS_lstring var_nameForUsefulness_25811 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 581)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_25811, var_nameForUsefulness_25811, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 582)) ;
  }
  GGS_terminalMap var_terminalMap_26149 ;
  GGS_indexingListAST var_indexingListAST_26188 ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_bool joker_26123 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_26209_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_26209_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_26209_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_26209_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_26123, var_terminalMap_26149, var_indexingListAST_26188, joker_26209_4, joker_26209_3, joker_26209_2, joker_26209_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 584)) ;
  GGS_stringset var_indexNameSet_26296 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_indexingListAST enumerator_26330 (var_indexingListAST_26188) ;
  while (enumerator_26330.hasCurrentObject ()) {
    var_indexNameSet_26296.plusPlusAssignOperation (enumerator_26330.current (HERE).readProperty_mIndexName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 594)) ;
    enumerator_26330.gotoNextObject () ;
  }
  GGS_bool var_hasIndexing_26412 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas4", 598)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GGS_string var_lexiqueName_26585 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GGS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_27044 ;
      {
      const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_25811, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_26585, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_26149, var_indexNameSet_26296, var_hasIndexing_26412, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_27044, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 600)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (var_syntaxDeclarationForGeneration_27044  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 616)) ;
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
  GGS_lstring var_grammarNameForUsefulness_28088 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 637)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_28088, var_grammarNameForUsefulness_28088, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 638)) ;
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_28393 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_28475 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_28529 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas4", 642)) ;
  GGS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_28639 = GGS_syntaxComponentListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalToAddList var_nonTerminalToAddList_28711 = GGS_nonTerminalToAddList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_addedNonTerminalCount_28750 = GGS_uint (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_28810 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_28810.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_28839 = function_syntaxNameForUsefulEntitiesGraph (enumerator_28810.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 647)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_28088, var_syntaxNameForUsefulness_28839 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 648)) ;
    }
    GGS_uint var_addedNonTerminalCountRef_29034 = var_addedNonTerminalCount_28750 ;
    GGS_lstring var_lexiqueName_29202 ;
    GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_29257 ;
    GGS_syntaxRuleListAST var_ruleList_29315 ;
    GGS_bool var_hasTranslateFeature_29342 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_28810.current (HERE), var_lexiqueName_29202, var_nonterminalDeclarationList_29257, var_ruleList_29315, var_hasTranslateFeature_29342, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 650)) ;
    GGS_lstring var_lexiqueNameForUsefulness_29376 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_29202, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 657)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_28088, var_lexiqueNameForUsefulness_29376 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 658)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_galgas_33_GrammarComponentAST temp_5 = this ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_29342.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 660)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 660)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_galgas_33_GrammarComponentAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_28810.current (HERE).readProperty_location (), GGS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 661)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 661)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 661)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_galgas_33_GrammarComponentAST temp_9 = this ;
        test_8 = var_hasTranslateFeature_29342.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 662)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 662)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_galgas_33_GrammarComponentAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_28810.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 663)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 663)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 663)) ;
        }
      }
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_28529.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_lexiqueComponentName_28529 = var_lexiqueName_29202 ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_29202.readProperty_string ().objectCompare (var_lexiqueComponentName_28529.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_28810.current (HERE).readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_29202.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 669)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 670)).add_operation (var_lexiqueComponentName_28529.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 670)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 671)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 669)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_28475, var_nonterminalDeclarationList_29257, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 674)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_28475, var_ruleList_29315, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 679)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_28475, enumerator_28810.current (HERE), var_ruleList_29315, var_actuallyUsedTerminalSymbolMap_28393, var_syntaxComponentListForGrammarAnalysis_28639, var_addedNonTerminalCount_28750, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 684)) ;
    }
    GGS_uint var_i_31044 = GGS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_28750.isValid ()) {
      uint32_t variant_31054 = var_addedNonTerminalCount_28750.uintValue () ;
      bool loop_31054 = true ;
      while (loop_31054) {
        loop_31054 = GGS_bool (ComparisonKind::lowerThan, var_i_31044.objectCompare (var_addedNonTerminalCount_28750.substract_operation (var_addedNonTerminalCountRef_29034, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 693)))).isValid () ;
        if (loop_31054) {
          loop_31054 = GGS_bool (ComparisonKind::lowerThan, var_i_31044.objectCompare (var_addedNonTerminalCount_28750.substract_operation (var_addedNonTerminalCountRef_29034, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 693)))).boolValue () ;
        }
        if (loop_31054 && (0 == variant_31054)) {
          loop_31054 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas4", 693)) ;
        }
        if (loop_31054) {
          variant_31054 -= 1 ;
          var_nonTerminalToAddList_28711.plusPlusAssignOperation (GGS_nonTerminalToAddList_2E_element::init_21__21_ (enumerator_28810.current (HERE).readProperty_string (), var_i_31044, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 694)) ;
          var_i_31044.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 695)) ;
        }
      }
    }
    enumerator_28810.gotoNextObject () ;
  }
  GGS_uint var_startSymbolIndex_31438 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_31510 ;
  const GGS_galgas_33_GrammarComponentAST temp_15 = this ;
  var_nonTerminalMapForGrammarAnalysis_28475.method_searchKey (temp_15.readProperty_mStartSymbolName (), var_startSymbolIndex_31438, var_startSymbolAltMap_31510, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 700)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_18 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_16.readProperty_mStartSymbolName ().readProperty_location (), temp_17.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_28475.getter_locationForKey (temp_18.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 709)), var_startSymbolAltMap_31510, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 706)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_31891 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_19 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_31939 (temp_19.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_31939.hasCurrentObject ()) {
    GGS_uint var_nonterminalIndex_32048 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_32066 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_28475.method_searchKey (enumerator_31939.current_entry (HERE), var_nonterminalIndex_32048, joker_32066, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 715)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_31891.setter_insertKey (enumerator_31939.current_entry (HERE), var_nonterminalIndex_32048, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 716)) ;
    }
    enumerator_31939.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_32305 = GGS_nonTerminalSymbolSortedListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_32378 (var_nonTerminalMapForGrammarAnalysis_28475) ;
  while (enumerator_32378.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_32305.plusPlusAssignOperation (GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::init_21__21__21_ (enumerator_32378.current (HERE).readProperty_lkey (), enumerator_32378.current (HERE).readProperty_mNonTerminalIndex (), enumerator_32378.current (HERE).readProperty_mNonterminalSymbolParametersMap (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 721)) ;
    enumerator_32378.gotoNextObject () ;
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = GGS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_21 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_22 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_21.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_28475, var_syntaxComponentListForGrammarAnalysis_28639, temp_22.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 725)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_33036 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 734)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_bool (gOption_galgas_5F_cli_5F_options_emitClassGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_33036, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 736)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_23) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_33036, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 741)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_33608 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_33660 (var_nonTerminalMapForGrammarAnalysis_28475) ;
  while (enumerator_33660.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_33733 (enumerator_33660.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_33733.hasCurrentObject ()) {
      UpEnumerator_signatureForGrammarAnalysis enumerator_33802 (enumerator_33733.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_33802.hasCurrentObject ()) {
        switch (enumerator_33802.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_33957 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_33802.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 752)) ;
            extensionMethod_addHeaderFileName (var_t_33957, var_implementationFileHeader_33608, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 753)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_33802.gotoNextObject () ;
      }
      enumerator_33733.gotoNextObject () ;
    }
    enumerator_33660.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_implementationFileHeader_33608 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
  GGS_string var_HTMLFilePath_34356 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)).add_operation (temp_25.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)) ;
  GGS_string var_grammarCppFile_34887 ;
  GGS_string var_grammarHTMLHelperContents_34920 ;
  GGS_string var_swiftGrammarDescription_34964 ;
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
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (temp_26.readProperty_mGrammarComponentName (), temp_27.readProperty_mGrammarClass (), var_startSymbolIndex_31438, var_lexiqueComponentName_28529.readProperty_string (), var_actuallyUsedTerminalSymbolMap_28393, var_syntaxComponentListForGrammarAnalysis_28639, var_unusedNonTerminalSymbolsForGrammar_31891, var_HTMLFilePath_34356, var_nonTerminalSymbolSortedListForGrammarAnalysis_32305, temp_29, var_grammarCppFile_34887, var_grammarHTMLHelperContents_34920, var_swiftGrammarDescription_34964, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 764)) ;
  }
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    test_31 = GGS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      var_HTMLFilePath_34356.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 781)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 781)) ;
      GGS_bool joker_35290 ; // Joker input parameter
      var_grammarHTMLHelperContents_34920.method_writeToFileWhenDifferentContents (var_HTMLFilePath_34356, joker_35290, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 782)) ;
    }
  }
  if (GalgasBool::boolFalse == test_31) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_34356, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 784)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_32 = this ;
  GGS_string var_swiftFilePath_35451 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 787)).add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 787)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 787)) ;
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (gOption_galgas_5F_cli_5F_options_outputGrammarSwiftDescriptionFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      var_swiftFilePath_35451.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 789)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 789)) ;
      GGS_bool joker_35759 ; // Joker input parameter
      var_swiftGrammarDescription_34964.method_writeToFileWhenDifferentContents (var_swiftFilePath_35451, joker_35759, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 790)) ;
    }
  }
  if (GalgasBool::boolFalse == test_33) {
    {
    GGS_string::class_method_deleteFileIfExists (var_swiftFilePath_35451, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 792)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_36 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_37 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_38 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_grammarForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("grammar-").add_operation (temp_34.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 799)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 799)), temp_35.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_28529.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_28475, var_nonTerminalToAddList_28711, temp_36.readProperty_mSyntaxComponents (), temp_37.readProperty_mStartSymbolName ().readProperty_string (), temp_38.readProperty_mHasTranslateFeature (), var_grammarCppFile_34887, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 796)) ;
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
  result_result = GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("location").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 820)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 820)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("bool").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 821)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 821)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("char").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 822)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 822)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 823)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 823)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("uint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 824)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 824)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("sint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 825)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 825)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("uint64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 826)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 826)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("sint64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 827)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 827)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("double").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 828)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 828)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lbool").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 829)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 829)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lchar").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 830)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 830)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lstring").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 831)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 831)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("luint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 832)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 832)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lsint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 833)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 833)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("luint64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 834)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 834)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lsint64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 835)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 835)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("ldouble").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 836)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 836)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lbigint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 837)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 837)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("bigint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 838)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 838)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("stringset").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 839)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 839)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("[string]").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 840)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 840)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("[lstring]").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 841)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 841)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
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
  GGS_uint index_1956_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    UpEnumerator__5B_ruleDeclarationAST_5D_ enumerator_1956 (in_RULE_5F_DECLARATION_5F_LIST) ;
    while (enumerator_1956.hasCurrentObject ()) {
      GGS_uint index_2008_ (0) ;
      if (enumerator_1956.current_entry (HERE).readProperty_mLabelImplementationList ().isValid ()) {
        UpEnumerator__5B_ruleLabelImplementationAST_5D_ enumerator_2008 (enumerator_1956.current_entry (HERE).readProperty_mLabelImplementationList ()) ;
        while (enumerator_2008.hasCurrentObject ()) {
          result.appendString ("  protected: void rule_") ;
          result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1956.current_entry (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_i") ;
          result.appendString (enumerator_1956.current_entry (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2008.current_entry (HERE).readProperty_mLabelName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_2338_IDX (0) ;
          if (enumerator_2008.current_entry (HERE).readProperty_mSignature ().isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_2338 (enumerator_2008.current_entry (HERE).readProperty_mSignature ()) ;
            while (enumerator_2338.hasCurrentObject ()) {
              const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2338.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 42)))).boolEnum () ;
              switch (test_5) {
              case GalgasBool::boolTrue : {
                result.appendString ("const GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_2338.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 43)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_2338_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 43)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2338.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 44)))).boolEnum () ;
                switch (test_6) {
                case GalgasBool::boolTrue : {
                  result.appendString ("GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_2338.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 45)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_2338_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 45)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_2338.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)))).boolEnum () ;
                  switch (test_7) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2338.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 47)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_2338_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 47)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2338.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_2338_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
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
              enumerator_2338.gotoNextObject () ;
              index_2338_IDX.increment () ;
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
          enumerator_2008.gotoNextObject () ;
          index_2008_.increment () ;
        }
      }
      result.appendString ("/*  protected: void rule_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1956.current_entry (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
      result.appendString ("_i") ;
      result.appendString (enumerator_1956.current_entry (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
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
        result.appendString (enumerator_1956.current_entry (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
        result.appendString ("_i") ;
        result.appendString (enumerator_1956.current_entry (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
        result.appendString ("_indexing (Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) ;\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1956.gotoNextObject () ;
      index_1956_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Select methods\n") ;
  GGS_uint index_3847_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    UpEnumerator__5B_uint_5D_ enumerator_3847 (in_SELECT_5F_METHOD_5F_LIST) ;
    while (enumerator_3847.hasCurrentObject ()) {
      result.appendString ("  protected: virtual int32_t select_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3847.current_entry (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" *) = 0 ;\n\n") ;
      enumerator_3847.gotoNextObject () ;
      index_3847_.increment () ;
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
    const GGS_nonterminalMap_2E_element var_entry_40727 = ioArgument_ioNonterminalDeclarationMap.readSubscript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioNonterminalDeclarationMap.readSubscript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset var_firstDeclarationLabelSet_40814 = var_entry_40727.readProperty_mLabelMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 920)) ;
      GGS_stringset var_reDeclarationLabelSet_40883 = constinArgument_inNonterminalLabelMap.getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 921)) ;
      GGS_stringset var_missingLabelSet_40955 = var_firstDeclarationLabelSet_40814.substract_operation (var_reDeclarationLabelSet_40883, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 922)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::greaterThan, var_missingLabelSet_40955.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 923)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_s_41078 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_41096 (var_missingLabelSet_40955) ;
          while (enumerator_41096.hasCurrentObject ()) {
            var_s_41078.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_41096.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)) ;
            enumerator_41096.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 929)).add_operation (GGS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 929)).add_operation (var_s_41078, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 929)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 928)) ;
        }
      }
      GGS_stringset var_newLabelSet_41323 = var_reDeclarationLabelSet_40883.substract_operation (var_firstDeclarationLabelSet_40814, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 931)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_newLabelSet_41323.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 932)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_string var_s_41430 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_41448 (var_newLabelSet_41323) ;
          while (enumerator_41448.hasCurrentObject ()) {
            var_s_41430.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_41448.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 935)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 935)) ;
            enumerator_41448.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 938)).add_operation (GGS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 938)).add_operation (var_s_41430, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 938)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 937)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_missingLabelSet_40955.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 940)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_newLabelSet_41323.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 940)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 940)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          UpEnumerator_nonterminalLabelMap enumerator_41737 (var_entry_40727.readProperty_mLabelMap ()) ;
          UpEnumerator_nonterminalLabelMap enumerator_41760 (constinArgument_inNonterminalLabelMap) ;
          while (enumerator_41737.hasCurrentObject () && enumerator_41760.hasCurrentObject ()) {
            GGS_formalParameterSignature var_newSignature_41823 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
            UpEnumerator_formalParameterSignature enumerator_41873 (enumerator_41760.current (HERE).readProperty_mSignature ()) ;
            while (enumerator_41873.hasCurrentObject ()) {
              var_newSignature_41823.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_41873.current (HERE).readProperty_mFormalSelector (), enumerator_41873.current (HERE).readProperty_mFormalArgumentType (), enumerator_41873.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_41873.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 944)) ;
              enumerator_41873.gotoNextObject () ;
            }
            {
            routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_41737.current (HERE).readProperty_mSignatureForGeneration (), enumerator_41737.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_41823, enumerator_41760.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 946)) ;
            }
            enumerator_41737.gotoNextObject () ;
            enumerator_41760.gotoNextObject () ;
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
  UpEnumerator_nonterminalDeclarationListAST enumerator_42826 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_42826.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_42866 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_nonTerminalLabelListAST enumerator_42942 (enumerator_42826.current (HERE).readProperty_mLabels ()) ;
    while (enumerator_42942.hasCurrentObject ()) {
      GGS_formalParameterListForGeneration var_signatureForGeneration_42963 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_formalParameterSignature var_signature_43035 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalParameterListAST enumerator_43103 (enumerator_42942.current (HERE).readProperty_mFormalArgumentList ()) ;
      while (enumerator_43103.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_t_43138 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_43103.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 974)) ;
        var_signatureForGeneration_42963.plusPlusAssignOperation (GGS_formalParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_43103.current (HERE).readProperty_mFormalSelector (), enumerator_43103.current (HERE).readProperty_mFormalArgumentPassingMode (), var_t_43138, enumerator_43103.current (HERE).readProperty_mFormalArgumentName (), enumerator_43103.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 975)) ;
        var_signature_43035.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_43103.current (HERE).readProperty_mFormalSelector (), var_t_43138, enumerator_43103.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_43103.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 976)) ;
        enumerator_43103.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_42866.setter_insertKey (enumerator_42942.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_42963, var_signature_43035, enumerator_42942.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 978)) ;
      }
      enumerator_42942.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_42826.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_42866, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 980)) ;
    }
    enumerator_42826.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntry var_type_46909 ;
  GGS_string var_cppName_46928 ;
  {
  const GGS_inputParameterVariable temp_0 = this ;
  GGS_string joker_46937 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_46909, var_cppName_46928, joker_46937, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1062)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_46968 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_46968 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_46968 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_46968 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_46968 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_46968 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_46968 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_46968 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_46968 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expectedType_46968.objectCompare (var_type_46909)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_inputParameterVariable temp_2 = this ;
      const GGS_inputParameterVariable temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)).add_operation (extensionGetter_identifierRepresentation (var_type_46909, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1076)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_46968, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1077)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1077)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1077)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1075)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (GGS_string::makeEmptyString (), var_cppName_46928, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1079)) ;
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
  GGS_unifiedTypeMapEntry var_expectedType_48592 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_48592 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_48592 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_48592 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_48592 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_48592 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_48592 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_48592 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_48592 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredVariable temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_49455 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1108)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_48592.objectCompare (var_type_49455)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredVariable temp_4 = this ;
          const GGS_inputParameterDeclaredVariable temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).add_operation (extensionGetter_definition (var_type_49455, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1111)).add_operation (extensionGetter_definition (var_expectedType_48592, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1112)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1112)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1112)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1110)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredVariable temp_7 = this ;
  const GGS_inputParameterDeclaredVariable temp_8 = this ;
  GGS_string var_cppName_49853 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1116)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1116)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1116)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1116)) ;
  {
  const GGS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GGS_bool (true), var_expectedType_48592, var_cppName_49853, var_cppName_49853, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1117)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_48592, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)).readProperty_typeName ().readProperty_string (), var_cppName_49853, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1124)) ;
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
  GGS_unifiedTypeMapEntry var_expectedType_50787 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_50787 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_50787 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_50787 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_50787 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_50787 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_50787 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_50787 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_50787 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredConstant temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_51650 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1153)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_50787.objectCompare (var_type_51650)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredConstant temp_4 = this ;
          const GGS_inputParameterDeclaredConstant temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).add_operation (extensionGetter_definition (var_type_51650, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1156)).add_operation (extensionGetter_definition (var_expectedType_50787, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1157)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1157)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1157)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1155)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredConstant temp_7 = this ;
  const GGS_inputParameterDeclaredConstant temp_8 = this ;
  GGS_string var_cppName_52048 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1161)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1161)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1161)) ;
  {
  const GGS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_50787, var_cppName_52048, var_cppName_52048, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1162)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_50787, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1165)).readProperty_typeName ().readProperty_string (), var_cppName_52048, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1164)) ;
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
  GGS_unifiedTypeMapEntry var_type_54287 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_54293 ; // Joker input parameter
  GGS_string joker_54297 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_54287, joker_54293, joker_54297, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1209)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_54307 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_54307.objectCompare (var_type_54287)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (extensionGetter_identifierRepresentation (var_type_54287, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_54307, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1214)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1214)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1214)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1212)) ;
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
  GGS_string var_cppName_55188 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1228)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1228)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1228)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1228)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_55333 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1229)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_55333, var_cppName_55188, var_cppName_55188, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1230)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_55558 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_55558.objectCompare (var_type_55333)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)).add_operation (extensionGetter_identifierRepresentation (var_type_55333, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1240)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_55558, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1241)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1241)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1241)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1239)) ;
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
  GGS_string var_cppName_56432 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1255)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1255)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_56577 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1256)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_56577, var_cppName_56432, var_cppName_56432, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1257)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_56753 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_56753.objectCompare (var_type_56577)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)).add_operation (extensionGetter_identifierRepresentation (var_type_56577, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1261)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_56753, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1262)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1262)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1262)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1260)) ;
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
  GGS_string var_cppName_58763 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1303)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1303)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1303)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1303)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_cppName_58763.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1304)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1304)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1304)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1304)) ;
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
  GGS_string var_cppName_59351 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1314)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1314)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1314)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1314)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_string ").add_operation (var_cppName_59351, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1315)) ;
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
  GGS_string var_cppName_59944 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1325)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1325)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1325)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1325)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1325)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1325)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_string ").add_operation (var_cppName_59944, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1326)) ;
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
  UpEnumerator_syntaxInstructionList enumerator_61109 (constinArgument_inSyntaxInstructionListAST) ;
  while (enumerator_61109.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_61109.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1352)) ;
    enumerator_61109.gotoNextObject () ;
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
  GGS_localVarManager var_variableMap_62673 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_62673, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1398)) ;
  }
  outArgument_outSignature = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalParameterListForGeneration enumerator_62946 (outArgument_outSignatureForGeneration) ;
  while (enumerator_62946.hasCurrentObject ()) {
    outArgument_outSignature.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_62946.current (HERE).readProperty_mFormalSelector (), enumerator_62946.current (HERE).readProperty_mFormalArgumentType (), enumerator_62946.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_62946.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1408)) ;
    enumerator_62946.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_syntaxInstructionList enumerator_63254 (constinArgument_inSyntaxInstructionList) ;
  while (enumerator_63254.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_63254.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_62673, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1413)) ;
    enumerator_63254.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_62673, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1430)) ;
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
  GGS_nonterminalMap var_nonterminalMap_64852 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_64852, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1456)) ;
  }
  UpEnumerator_syntaxRuleListAST enumerator_64940 (constinArgument_inRuleList) ;
  while (enumerator_64940.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_64983 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_65033 (enumerator_64940.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_65033.hasCurrentObject ()) {
      GGS_formalParameterListForGeneration var_signatureForGeneration_65091 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_formalParameterSignature var_signature_65156 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalParameterListAST enumerator_65199 (enumerator_65033.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_65199.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_65231 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_65199.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1469)) ;
        var_signatureForGeneration_65091.plusPlusAssignOperation (GGS_formalParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_65199.current (HERE).readProperty_mFormalSelector (), enumerator_65199.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_65231, enumerator_65199.current (HERE).readProperty_mFormalArgumentName (), GGS_string ("argument_").add_operation (enumerator_65199.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1475)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1470)) ;
        var_signature_65156.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_65199.current (HERE).readProperty_mFormalSelector (), var_type_65231, enumerator_65199.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_65199.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1476)) ;
        enumerator_65199.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_64983.setter_insertKey (enumerator_65033.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_65091, var_signature_65156, enumerator_65033.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1478)) ;
      }
      enumerator_65033.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_64940.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_64983, var_nonterminalMap_64852, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1480)) ;
    }
    enumerator_64940.gotoNextObject () ;
  }
  GGS_analysisContext var_analysisContext_65935 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 1487)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_uint var_selectMethodCount_66157 = GGS_uint (uint32_t (0U)) ;
  GGS__5B_ruleDeclarationAST_5D_ var_ruleDeclarationList_66207 = GGS__5B_ruleDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS_uint var_newRuleIndex_66245 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_syntaxRuleListAST enumerator_66277 (constinArgument_inRuleList) ;
  while (enumerator_66277.hasCurrentObject ()) {
    GGS__5B_ruleLabelImplementationAST_5D_ var_ruleLabelImplementationList_66337 = GGS__5B_ruleLabelImplementationAST_5D_::init (inCompiler COMMA_HERE) ;
    GGS_uint var_localSelectMethodCount_66385 = var_selectMethodCount_66157 ;
    GGS_nonterminalLabelMap joker_66482 ; // Joker input parameter
    var_nonterminalMap_64852.method_searchKey (enumerator_66277.current (HERE).readProperty_mNonterminalName (), joker_66482, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1498)) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_66510 (enumerator_66277.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_66510.hasCurrentObject ()) {
      var_localSelectMethodCount_66385 = var_selectMethodCount_66157 ;
      GGS_formalParameterListForGeneration var_signatureForGeneration_67067 ;
      GGS_formalParameterSignature var_signature_67104 ;
      GGS_semanticInstructionListForGeneration var_instructionListForGeneration_67128 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_66510.current (HERE).readProperty_mFormalArguments (), enumerator_66510.current (HERE).readProperty_mSyntaxInstructionList (), var_analysisContext_65935, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1510)), var_nonterminalMap_64852, constinArgument_inSyntaxComponentName, enumerator_66510.current (HERE).readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, var_localSelectMethodCount_66385, var_signatureForGeneration_67067, var_signature_67104, var_instructionListForGeneration_67128, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1501)) ;
      }
      var_ruleLabelImplementationList_66337.plusPlusAssignOperation (GGS_ruleLabelImplementationAST::init_21__21__21__21__21_ (enumerator_66510.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_67067, var_signature_67104, enumerator_66510.current (HERE).readProperty_mEndOfArgumentLocation (), var_instructionListForGeneration_67128, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1520)) ;
      enumerator_66510.gotoNextObject () ;
    }
    var_selectMethodCount_66157 = var_localSelectMethodCount_66385 ;
    GGS_nonterminalLabelMap joker_67470 ; // Joker input parameter
    var_nonterminalMap_64852.method_searchKey (enumerator_66277.current (HERE).readProperty_mNonterminalName (), joker_67470, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1528)) ;
    var_ruleDeclarationList_66207.plusPlusAssignOperation (GGS_ruleDeclarationAST::init_21__21__21_ (enumerator_66277.current (HERE).readProperty_mNonterminalName ().readProperty_string (), var_newRuleIndex_66245, var_ruleLabelImplementationList_66337, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1529)) ;
    var_newRuleIndex_66245.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1533)) ;
    enumerator_66277.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GGS_syntaxDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_64852, var_ruleDeclarationList_66207, var_selectMethodCount_66157, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
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
  GGS_string var_document_68200 = GGS_string ("digraph G {\n") ;
  var_document_68200.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1554)) ;
  var_document_68200.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1555)) ;
  UpEnumerator_unifiedTypeMap enumerator_68349 (constinArgument_inTypeMap) ;
  while (enumerator_68349.hasCurrentObject ()) {
    switch (enumerator_68349.current (HERE).readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_68459_definition_0 ;
        enumerator_68349.current (HERE).readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_68459_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_68459_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas4", 1560)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_68459_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_68200.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_68459_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1563)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1563)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1563)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass_2E_weak extractedValue_68660_superType_0 ;
                extractedValue_68459_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_68660_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_unifiedTypeMapElementClass var_t_68690 = extractedValue_68660_superType_0.unwrappedValue () ;
                  if (!extractedValue_68660_superType_0.isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    const GGS_typeDefinition_2E_solved var_solvedType_68709 = var_t_68690.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1565)).unwrappedValue () ;
                    if (!var_t_68690.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1565)).isValuated ()) {
                      test_1 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_1) {
                      var_document_68200.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_68459_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1566)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1566)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1566)) ;
                      var_document_68200.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_68459_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1567)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1567)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1567)) ;
                      var_document_68200.plusAssignOperation(var_solvedType_68709.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1568)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1568)) ;
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
    enumerator_68349.gotoNextObject () ;
  }
  var_document_68200.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1574)) ;
  GGS_bool joker_69095 ; // Joker input parameter
  var_document_68200.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_69095, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1575)) ;
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
  GGS_unifiedTypeMapEntryList var_descendantClasses_7290 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 177)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_7367 (var_descendantClasses_7290) ;
  while (enumerator_7367.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_7416 = extensionGetter_definition (enumerator_7367.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 179)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_7484 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_7416.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 180)) ;
    GGS_bool var_found_7593 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_7616 (var_overridingMethods_7484) ;
    bool bool_0 = var_found_7593.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 182)).isValidAndTrue () ;
    if (enumerator_7616.hasCurrentObject () && bool_0) {
      while (enumerator_7616.hasCurrentObject () && bool_0) {
        var_found_7593 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionSetterName.readProperty_string ().objectCompare (enumerator_7616.current_entry (HERE).readProperty_string ())) ;
        enumerator_7616.gotoNextObject () ;
        if (enumerator_7616.hasCurrentObject ()) {
          bool_0 = var_found_7593.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 182)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_7593.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 185)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_7367.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_7416.readProperty_string (), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 187)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 196)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 196)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 196)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 197)).add_operation (var_descendantClassName_7416.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 198)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 198)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 196)) ;
        }
      }
    }
    enumerator_7367.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntryList var_descendantClasses_8894 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 214)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_8971 (var_descendantClasses_8894) ;
  while (enumerator_8971.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_9020 = extensionGetter_definition (enumerator_8971.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 216)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_9088 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_9020.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 217)) ;
    GGS_bool var_found_9197 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_9220 (var_overridingMethods_9088) ;
    bool bool_0 = var_found_9197.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 219)).isValidAndTrue () ;
    if (enumerator_9220.hasCurrentObject () && bool_0) {
      while (enumerator_9220.hasCurrentObject () && bool_0) {
        var_found_9197 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionMethodName.readProperty_string ().objectCompare (enumerator_9220.current_entry (HERE).readProperty_string ())) ;
        enumerator_9220.gotoNextObject () ;
        if (enumerator_9220.hasCurrentObject ()) {
          bool_0 = var_found_9197.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 219)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_9197.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 222)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_8971.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_9020.readProperty_string (), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 224)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 233)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 233)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 233)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 234)).add_operation (var_descendantClassName_9020.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 235)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 235)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 233)) ;
        }
      }
    }
    enumerator_8971.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntryList var_descendantClasses_10498 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 251)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_10575 (var_descendantClasses_10498) ;
  while (enumerator_10575.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_10624 = extensionGetter_definition (enumerator_10575.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 253)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingReaders_10692 = extensionGetter_listForKey (constinArgument_inOverridingExtensionGetterListMap, var_descendantClassName_10624.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 254)) ;
    GGS_bool var_found_10801 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_10824 (var_overridingReaders_10692) ;
    bool bool_0 = var_found_10801.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 256)).isValidAndTrue () ;
    if (enumerator_10824.hasCurrentObject () && bool_0) {
      while (enumerator_10824.hasCurrentObject () && bool_0) {
        var_found_10801 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionGetterName.readProperty_string ().objectCompare (enumerator_10824.current_entry (HERE).readProperty_string ())) ;
        enumerator_10824.gotoNextObject () ;
        if (enumerator_10824.hasCurrentObject ()) {
          bool_0 = var_found_10801.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 256)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_10801.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 259)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_10575.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_10624.readProperty_string (), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 261)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.readProperty_location (), GGS_string ("an abstract extension func '").add_operation (constinArgument_inAbstractExtensionGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 270)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 270)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 270)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 271)).add_operation (var_descendantClassName_10624.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 272)).add_operation (GGS_string ("' does not implement this func"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 272)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 270)) ;
        }
      }
    }
    enumerator_10575.gotoNextObject () ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("projectGlobalCheckings.galgas4", 284)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Perform global checkings"), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 285)) ;
      }
    }
  }
  GGS_descendantClassListMap var_descendantClassListMap_12098 = GGS_descendantClassListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_unifiedTypeMap enumerator_12141 (ioArgument_ioTypeMap) ;
  while (enumerator_12141.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_superType_12163 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_12141.current (HERE).readProperty_mElement ().ptr (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 291)).readProperty_superType () ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_superType_12163.getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas4", 292)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 292)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        extensionSetter_insertKey (var_descendantClassListMap_12098, extensionGetter_definition (var_superType_12163, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 294)).readProperty_typeName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12141.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 295)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 293)) ;
        }
      }
    }
    enumerator_12141.gotoNextObject () ;
  }
  GGS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_12483 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionMethodListMap_12557 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_12623 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_12699 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_12783 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionReaderListMap_12857 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_12923 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_12999 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_13083 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionSetterListMap_13157 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_13223 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_13299 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_13367 (constinArgument_inSemanticDeclarationList) ;
  while (enumerator_13367.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((cPtr_semanticDeclarationAST *) enumerator_13367.current (HERE).ptr (), var_abstractExtensionSetterListMap_13083, var_extensionSetterListMap_13157, var_overridingExtensionSetterListMap_13223, var_overridingAbstractExtensionSetterListMap_13299, var_abstractExtensionMethodListMap_12483, var_extensionMethodListMap_12557, var_overridingExtensionMethodListMap_12623, var_overridingAbstractExtensionMethodListMap_12699, var_abstractExtensionGetterListMap_12783, var_extensionReaderListMap_12857, var_overridingExtensionGetterListMap_12923, var_overridingAbstractExtensionGetterListMap_12999, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 313)) ;
    enumerator_13367.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas4", 329)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14126 (var_abstractExtensionSetterListMap_13083.readProperty_dictionary ()) ;
      while (enumerator_14126.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14188 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14224 (enumerator_14126.current (HERE).readProperty_mList ()) ;
        while (enumerator_14224.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14188.setter_insertKey (enumerator_14224.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 334)) ;
          }
          enumerator_14224.gotoNextObject () ;
        }
        enumerator_14126.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14434 (var_extensionSetterListMap_13157.readProperty_dictionary ()) ;
      while (enumerator_14434.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14496 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14532 (enumerator_14434.current (HERE).readProperty_mList ()) ;
        while (enumerator_14532.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14496.setter_insertKey (enumerator_14532.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 341)) ;
          }
          enumerator_14532.gotoNextObject () ;
        }
        enumerator_14434.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14758 (var_overridingExtensionSetterListMap_13223.readProperty_dictionary ()) ;
      while (enumerator_14758.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14820 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14856 (enumerator_14758.current (HERE).readProperty_mList ()) ;
        while (enumerator_14856.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14820.setter_insertKey (enumerator_14856.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 348)) ;
          }
          enumerator_14856.gotoNextObject () ;
        }
        enumerator_14758.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15099 (var_overridingAbstractExtensionMethodListMap_12699.readProperty_dictionary ()) ;
      while (enumerator_15099.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_15161 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_15197 (enumerator_15099.current (HERE).readProperty_mList ()) ;
        while (enumerator_15197.hasCurrentObject ()) {
          {
          var_extensionSetterMap_15161.setter_insertKey (enumerator_15197.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 355)) ;
          }
          enumerator_15197.gotoNextObject () ;
        }
        enumerator_15099.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15472 (var_abstractExtensionSetterListMap_13083.readProperty_dictionary ()) ;
      while (enumerator_15472.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_15497 (enumerator_15472.current (HERE).readProperty_mList ()) ;
        while (enumerator_15497.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15472.current (HERE).readProperty_key (), enumerator_15472.current (HERE).readProperty_key (), enumerator_15497.current_entry (HERE), var_descendantClassListMap_12098, var_overridingExtensionSetterListMap_13223, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 361)) ;
          }
          enumerator_15497.gotoNextObject () ;
        }
        enumerator_15472.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15962 (var_overridingAbstractExtensionSetterListMap_13299.readProperty_dictionary ()) ;
      while (enumerator_15962.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_15987 (enumerator_15962.current (HERE).readProperty_mList ()) ;
        while (enumerator_15987.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15962.current (HERE).readProperty_key (), enumerator_15962.current (HERE).readProperty_key (), enumerator_15987.current_entry (HERE), var_descendantClassListMap_12098, var_overridingExtensionSetterListMap_13223, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 374)) ;
          }
          enumerator_15987.gotoNextObject () ;
        }
        enumerator_15962.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16369 (var_abstractExtensionMethodListMap_12483.readProperty_dictionary ()) ;
      while (enumerator_16369.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16431 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16467 (enumerator_16369.current (HERE).readProperty_mList ()) ;
        while (enumerator_16467.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16431.setter_insertKey (enumerator_16467.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 388)) ;
          }
          enumerator_16467.gotoNextObject () ;
        }
        enumerator_16369.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16668 (var_extensionMethodListMap_12557.readProperty_dictionary ()) ;
      while (enumerator_16668.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16730 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16766 (enumerator_16668.current (HERE).readProperty_mList ()) ;
        while (enumerator_16766.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16730.setter_insertKey (enumerator_16766.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 395)) ;
          }
          enumerator_16766.gotoNextObject () ;
        }
        enumerator_16668.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16983 (var_overridingExtensionMethodListMap_12623.readProperty_dictionary ()) ;
      while (enumerator_16983.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17045 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_17081 (enumerator_16983.current (HERE).readProperty_mList ()) ;
        while (enumerator_17081.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17045.setter_insertKey (enumerator_17081.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 402)) ;
          }
          enumerator_17081.gotoNextObject () ;
        }
        enumerator_16983.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17315 (var_overridingAbstractExtensionMethodListMap_12699.readProperty_dictionary ()) ;
      while (enumerator_17315.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17377 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_17413 (enumerator_17315.current (HERE).readProperty_mList ()) ;
        while (enumerator_17413.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17377.setter_insertKey (enumerator_17413.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 409)) ;
          }
          enumerator_17413.gotoNextObject () ;
        }
        enumerator_17315.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17670 (var_abstractExtensionMethodListMap_12483.readProperty_dictionary ()) ;
      while (enumerator_17670.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17695 (enumerator_17670.current (HERE).readProperty_mList ()) ;
        while (enumerator_17695.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17670.current (HERE).readProperty_key (), enumerator_17670.current (HERE).readProperty_key (), enumerator_17695.current_entry (HERE), var_descendantClassListMap_12098, var_overridingExtensionMethodListMap_12623, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 415)) ;
          }
          enumerator_17695.gotoNextObject () ;
        }
        enumerator_17670.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18131 (var_overridingAbstractExtensionMethodListMap_12699.readProperty_dictionary ()) ;
      while (enumerator_18131.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_18156 (enumerator_18131.current (HERE).readProperty_mList ()) ;
        while (enumerator_18156.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_18131.current (HERE).readProperty_key (), enumerator_18131.current (HERE).readProperty_key (), enumerator_18156.current_entry (HERE), var_descendantClassListMap_12098, var_overridingExtensionMethodListMap_12623, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 428)) ;
          }
          enumerator_18156.gotoNextObject () ;
        }
        enumerator_18131.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18687 (var_abstractExtensionGetterListMap_12783.readProperty_dictionary ()) ;
      while (enumerator_18687.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18749 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18785 (enumerator_18687.current (HERE).readProperty_mList ()) ;
        while (enumerator_18785.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18749.setter_insertKey (enumerator_18785.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 444)) ;
          }
          enumerator_18785.gotoNextObject () ;
        }
        enumerator_18687.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18986 (var_extensionReaderListMap_12857.readProperty_dictionary ()) ;
      while (enumerator_18986.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19048 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_19084 (enumerator_18986.current (HERE).readProperty_mList ()) ;
        while (enumerator_19084.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19048.setter_insertKey (enumerator_19084.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 451)) ;
          }
          enumerator_19084.gotoNextObject () ;
        }
        enumerator_18986.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19301 (var_overridingExtensionGetterListMap_12923.readProperty_dictionary ()) ;
      while (enumerator_19301.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19363 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_19399 (enumerator_19301.current (HERE).readProperty_mList ()) ;
        while (enumerator_19399.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19363.setter_insertKey (enumerator_19399.current_entry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 458)) ;
          }
          enumerator_19399.gotoNextObject () ;
        }
        enumerator_19301.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19631 (var_abstractExtensionGetterListMap_12783.readProperty_dictionary ()) ;
      while (enumerator_19631.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19656 (enumerator_19631.current (HERE).readProperty_mList ()) ;
        while (enumerator_19656.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19631.current (HERE).readProperty_key (), enumerator_19631.current (HERE).readProperty_key (), enumerator_19656.current_entry (HERE), var_descendantClassListMap_12098, var_overridingExtensionGetterListMap_12923, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 464)) ;
          }
          enumerator_19656.gotoNextObject () ;
        }
        enumerator_19631.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_20067 (var_overridingAbstractExtensionGetterListMap_12999.readProperty_dictionary ()) ;
      while (enumerator_20067.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_20092 (enumerator_20067.current (HERE).readProperty_mList ()) ;
        while (enumerator_20092.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_20067.current (HERE).readProperty_key (), enumerator_20067.current (HERE).readProperty_key (), enumerator_20092.current_entry (HERE), var_descendantClassListMap_12098, var_overridingExtensionGetterListMap_12923, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 477)) ;
          }
          enumerator_20092.gotoNextObject () ;
        }
        enumerator_20067.gotoNextObject () ;
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
                                                                   GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2450 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 42)), temp_1.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2450, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 43)) ;
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
  GGS_unifiedTypeMapEntry var_uintType_3398 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_3398, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_3489 ;
  {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_3489, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 60)) ;
  }
  GGS_formalParameterSignature temp_1 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 63)) ;
  temp_1.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 63)), var_elementType_3489, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 63)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 63)) ;
  GGS_formalParameterSignature var_setterInputFormalArgumentList_3565 = temp_1 ;
  GGS_formalParameterSignature temp_2 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 66)) ;
  temp_2.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 66)), var_elementType_3489, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 66)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 66)) ;
  GGS_formalParameterSignature var_setterOutputFormalArgumentList_3706 = temp_2 ;
  GGS_getterMap var_getterMap_3885 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_3885, inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 69)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_3885, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 70)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_3885, ioArgument_ioTypeMap, GGS_string ("first"), GGS_string::makeEmptyString (), temp_3.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 78)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_3885, ioArgument_ioTypeMap, GGS_string ("last"), GGS_string::makeEmptyString (), temp_4.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 86)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_3885, ioArgument_ioTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_5.readProperty_arrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 94)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_6 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_3885, ioArgument_ioTypeMap, GGS_string ("sublist"), GGS_string ("from"), GGS_string ("uint"), GGS_string ("inStartIndex"), GGS_string ("count"), GGS_string ("uint"), GGS_string ("inCount"), temp_6.readProperty_arrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 102)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_5208 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_5304 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS_formalParameterSignature temp_7 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 118)) ;
  var_setterMap_5304.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeAll"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 116)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 117)), temp_7, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 120)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 115)) ;
  }
  {
  GGS_formalParameterSignature temp_8 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 126)) ;
  temp_8.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 126)), var_elementType_3489, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 126)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 126)) ;
  var_setterMap_5304.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("append"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 124)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 125)), temp_8, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 128)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 123)) ;
  }
  {
  var_setterMap_5304.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("popFirst"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 132)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 133)), var_setterOutputFormalArgumentList_3706, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 136)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 131)) ;
  }
  {
  var_setterMap_5304.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("popLast"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 140)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 141)), var_setterOutputFormalArgumentList_3706, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 144)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 139)) ;
  }
  var_setterOutputFormalArgumentList_3706.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 147)), var_uintType_3398, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 147)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 147)) ;
  {
  var_setterMap_5304.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 149)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 150)), var_setterOutputFormalArgumentList_3706, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 153)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 148)) ;
  }
  var_setterInputFormalArgumentList_3565.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 157)), var_uintType_3398, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 157)), GGS_string ("inInsertionIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 157)) ;
  {
  var_setterMap_5304.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("insertAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 159)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 160)), var_setterInputFormalArgumentList_3565, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 163)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 158)) ;
  }
  GGS_initializerMap var_initializerMap_6790 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_6838 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_9 = this ;
  var_initializerMap_6790.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_6838, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 170)), temp_9.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_6838, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 169)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_7039 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_10 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 175)) ;
  temp_10.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 175)), var_uintType_3398, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 175)) ;
  GGS_functionSignature var_argumentTypeList_7089 = temp_10 ;
  {
  var_readSubscriptMap_7039.setter_insertKey (extensionGetter_subcriptSignature (var_argumentTypeList_7089, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 177)).getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 177)), var_argumentTypeList_7089, var_elementType_3489, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 176)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_11 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_arrayTypeName (), GGS_bool (false), var_initializerMap_6790, var_getterMap_3885, var_setterMap_5304, var_instanceMethodMap_5208, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 182)) ;
  }
  GGS_typeFeatures var_features_7758 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas4", 198)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas4", 198)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 198)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_arrayTypeDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      var_features_7758.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 200)) ;
    }
  }
  {
  const GGS_arrayTypeDeclarationAST temp_14 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_14.readProperty_arrayTypeName (), var_features_7758, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 202)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_8149 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  var_enumerationDescriptor_8149.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_elementType_3489, GGS_string ("entry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 211)) ;
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8265 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_15.readProperty_arrayTypeName (), temp_16.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 218)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-array.galgas4", 219)), GGS_bool (true), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_6790, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_3885, var_setterMap_5304, var_instanceMethodMap_5208, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 230)), var_readSubscriptMap_7039, var_enumerationDescriptor_8149, var_features_7758, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_elementType_3489, GGS_string ("array-").add_operation (temp_17.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas4", 237)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 237)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas4", 238)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8265.readProperty_typeName (), var_typeDefinition_8265, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 240)) ;
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
  GGS_lstring var_nameForUsefulness_10173 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10173, var_nameForUsefulness_10173, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 259)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10173  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 261)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10437 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 263)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10173, var_elementTypeNameForUsefulness_10437 COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 264)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_10437  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 266)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_10815 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_arrayTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 269)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10815, var_initializerNameForUsefulness_10815, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 273)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_10815  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 275)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11210 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 278)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_arrayTypeForGeneration::init_21_infoMessage_21__21_ (GGS_string ("array type ").add_operation (temp_16.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 280)), var_selfType_11210, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 282)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 279)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_12167 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 301)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_12167.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 304)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_12167.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 305)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 302))) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_12167.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 309)), var_selfTypeDefinition_12167.readProperty_isConcrete (), var_selfTypeDefinition_12167.readProperty_initializerMap (), var_selfTypeDefinition_12167.readProperty_classFunctionMap (), var_selfTypeDefinition_12167.readProperty_getterMap (), var_selfTypeDefinition_12167.readProperty_setterMap (), var_selfTypeDefinition_12167.readProperty_instanceMethodMap (), var_selfTypeDefinition_12167.readProperty_classMethodMap (), var_selfTypeDefinition_12167.readProperty_readSubscriptMap (), var_selfTypeDefinition_12167.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_12167.readProperty_features (), var_selfTypeDefinition_12167.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_12167.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_12167.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 307))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 307)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 331)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 332)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13666 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 333)) ;
  const GGS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_13666.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 336)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13666.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 337)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_13666.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 338)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 334))) ;
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
  result.appendString (" &) = delete ;\n\n//---\n  public: inline bool hasCurrentObject (void) const {\n    return mCurrent >= 0 ;\n  }\n\n//---\n  public: inline void gotoNextObject (void) {\n    mCurrent -= 1 ;\n  }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
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
  result.appendString (" &) = delete ;\n\n//---\n  public: inline bool hasCurrentObject (void) const {\n    return mCurrent < mSharedArray.count () ;\n  }\n\n//---\n  public: inline void gotoNextObject (void) {\n    mCurrent += 1 ;\n  }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current_entry (LOCATION_ARGS) const ;\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: GenericArray <GGS_") ;
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
  result.appendString (" & inSource) ;\n\n//--------------------------------- Direct access\n  public: void removeAll (void) ;\n  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }\n\n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override ;\n\n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--------------------------------- Friend\n  friend class UpEnumerator_") ;
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
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    outValue = mSharedArray.lastObject (THERE) ;\n    mSharedArray.removeLastObject (THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_removingFirst (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;\n    if (startIndex >= int32_t (count ())) {\n      String errorMessage ;\n      errorMessage.appendCString (\"'removingFirst' getter call with argument \") ;\n      errorMessage.appendSigned (startIndex) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      const int32_t lastIndex = int32_t (count ()) - 1 ;\n      result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_sublist (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inStartIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint & inLength,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {\n    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;\n    if (startIndex >= int32_t (count ())) {\n      String errorMessage ;\n      errorMessage.appendCString (\"'sublist' getter call with start index \") ;\n      errorMessage.appendSigned (startIndex) ;\n      errorMessage.appendCString (\" too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }else{\n      const int32_t lastIndex = startIndex + int32_t (inLength.uintValue ()) - 1 ;\n      if (lastIndex >= int32_t (count ())) {\n        String errorMessage ;\n        errorMessage.appendCString (\"'sublist' getter call with last index \") ;\n        errorMessage.appendSigned (lastIndex) ;\n        errorMessage.appendCString (\" too large (array size is\") ;\n        errorMessage.appendSigned (mSharedArray.count ()) ;\n        errorMessage.appendCString (\")\") ;\n        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n      }else{\n        result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (inCompiler COMMA_THERE) ;\n        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;\n      }\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_first (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (!isValid ()) {\n  }else if (mSharedArray.count () == 0) {\n    const String errorMessage = \"'first' getter call on an empty array'\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n  }else{\n    result = mSharedArray (0 COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_last (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (!isValid ()) {\n  }else if (mSharedArray.count () == 0) {\n    const String errorMessage = \"'last' getter call on an empty array'\" ;\n    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n  }else{\n    result = mSharedArray.lastObject (THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
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
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_entry (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
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
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_entry (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n") ;
  return GGS_string (result) ;
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
  GGS_lstring var_key_3824 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 94)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3824, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 95)) ;
  }
  const GGS_structDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_3978 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_3978.hasCurrentObject ()) {
    GGS_lstring var_propertyKey_4017 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_3978.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 97)), enumerator_3978.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3824, var_propertyKey_4017 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 98)) ;
    }
    enumerator_3978.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntry var_structTypeIndex_5109 ;
  {
  const GGS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_5109, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 119)) ;
  }
  GGS_propertyMap var_propertyMap_5188 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorPropertyTypeList_5233 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_5294 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_1 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_5418 (temp_1.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_5418.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_5500 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5418.current (HERE).readProperty_typeName (), var_propertyTypeEntry_5500, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 126)) ;
    }
    GGS_string temp_2 ;
    const GalgasBool test_3 = enumerator_5418.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = enumerator_5418.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_5529 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas4", 127)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = enumerator_5418.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas4", 128)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_constructorPropertyTypeList_5233.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (var_selector_5529, var_propertyTypeEntry_5500, enumerator_5418.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 129)) ;
      }
    }
    var_typedPropertyList_5294.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_propertyTypeEntry_5500, enumerator_5418.current (HERE).readProperty_name (), enumerator_5418.current (HERE).readProperty_initialization (), enumerator_5418.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 136)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 136)), enumerator_5418.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 132)) ;
    {
    var_propertyMap_5188.setter_insertKey (enumerator_5418.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_5418.current (HERE).readProperty_accessControl (), var_structTypeIndex_5109, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 141)), enumerator_5418.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 142)), var_propertyTypeEntry_5500, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 139)) ;
    }
    enumerator_5418.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_6367 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6367, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 147)) ;
  }
  GGS_setterMap var_setterMap_6420 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_6460 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6508 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_6460, var_getterMap_6367, var_setterMap_6420, var_instanceMethodMap_6508, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 152)) ;
  }
  GGS_typeFeatures var_features_6967 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas4", 167)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_6460.getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 169)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_6967.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 170)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 170)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_6460.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_5233, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 172)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_5233, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 171)) ;
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
      var_features_6967.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 180)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 180)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_6967.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 182)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 182)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 182)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 182)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_6967, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 184)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_7793 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      var_enumeratedType_7793 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 194)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_7793, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 196)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8024 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 204)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas4", 205)), GGS_bool (false), var_typedPropertyList_5294, var_propertyMap_5188, var_typedPropertyList_5294, var_initializerMap_6460, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6367, var_setterMap_6420, var_instanceMethodMap_6508, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 216)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6967, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_enumeratedType_7793, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 223)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas4", 224)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8024.readProperty_typeName (), var_typeDefinition_8024, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 226)) ;
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
  GGS_unifiedTypeMapEntry var_structType_9621 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 239)) ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_structNameForUsefulness_9694 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 240)) ;
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
  GGS_typedPropertyList var_typedPropertyList_9971 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_constructorArgumentList_10022 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_10078 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_6 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_10121 (temp_6.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_10121.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_10160 = function_typeNameForUsefulEntitiesGraph (enumerator_10121.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 249)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9694, var_propertyTypeNameForUsefulness_10160 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 250)) ;
    }
    GGS_unifiedTypeMapEntry var_t_10360 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10121.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 251)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 252)).getter_contains (enumerator_10121.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 252)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_m_10506 = GGS_string ("an property cannot be named:") ;
        UpEnumerator_stringset enumerator_10582 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 254))) ;
        while (enumerator_10582.hasCurrentObject ()) {
          var_m_10506.plusAssignOperation(GGS_string (" ").add_operation (enumerator_10582.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 255)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 255)) ;
          enumerator_10582.gotoNextObject () ;
        }
        var_m_10506.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 257)) ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_10121.current (HERE).readProperty_name ().readProperty_location (), var_m_10506, fixItArray8  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 258)) ;
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = enumerator_10121.current (HERE).readProperty_mutability ().getter_isWeakProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 260)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        switch (extensionGetter_definition (var_t_10360, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 261)).readProperty_unwrappedType ().enumValue ()) {
        case GGS_unifiedTypeMapEntry::Enumeration::invalid:
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
          {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_10121.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 263)) ;
          }
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
          {
            GGS_unifiedTypeMapElementClass_2E_weak extractedValue_10929_aWeakType_0 ;
            extensionGetter_definition (var_t_10360, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 261)).readProperty_unwrappedType ().getAssociatedValuesFor_element (extractedValue_10929_aWeakType_0) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_unifiedTypeMapElementClass var_aType_10959 = extractedValue_10929_aWeakType_0.unwrappedValue () ;
              if (!extractedValue_10929_aWeakType_0.isValuated ()) {
                test_11 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) var_aType_10959.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 265)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("declaration-type-struct.galgas4", 265)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_10121.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 267)) ;
            }
          }
          break ;
        }
      }
    }
    {
    var_propertyMap_10078.setter_insertKey (enumerator_10121.current (HERE).readProperty_name (), var_t_10360, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 271)) ;
    }
    switch (enumerator_10121.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_10022.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10360, enumerator_10121.current (HERE).readProperty_name (), enumerator_10121.current (HERE).readProperty_initialization (), enumerator_10121.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 278)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 278)), enumerator_10121.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 274)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_9971.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10360, enumerator_10121.current (HERE).readProperty_name (), enumerator_10121.current (HERE).readProperty_initialization (), enumerator_10121.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 286)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 286)), enumerator_10121.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 282)) ;
    const GGS_structDeclarationAST temp_13 = this ;
    switch (temp_13.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_11845 = extensionGetter_definition (var_t_10360, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)).readProperty_features () ;
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = var_propertyFeatures_11845.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 294)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 294)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 294)).operator_and (var_propertyFeatures_11845.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 295)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 295)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 295)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 294)).operator_and (var_propertyFeatures_11845.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas4", 296)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 296)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 296)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 295)).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_10121.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_10121.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 297)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = extensionGetter_definition (var_t_10360, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 301)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 301)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 301)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 301)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GenericArray <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_10121.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_10121.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 303)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 303)), fixItArray17  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 302)) ;
          }
        }
      }
      break ;
    }
    enumerator_10121.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_12689 ;
  GGS_string var_initializationCode_12726 ;
  const GGS_structDeclarationAST temp_18 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_18.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_9694, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_12689, var_initializationCode_12726, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 308)) ;
  GGS_bool var_constructorNeedsCompilerVar_12767 = var_unusedVariableCppNameSet_12689.getter_contains (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 318)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 318)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 318)) ;
  const GGS_structDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_structTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("struct ").add_operation (temp_19.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 320)), var_structType_9621, var_typedPropertyList_9971, var_constructorArgumentList_10022, var_initializationCode_12726, var_constructorNeedsCompilerVar_12767, extensionGetter_definition (var_structType_9621, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 326)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 326)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 326)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 319)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9694, var_structNameForUsefulness_9694, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 329)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_structNameForUsefulness_9694  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 331)) ;
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = extensionGetter_definition (var_structType_9621, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 334)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 334)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 334)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_structDeclarationAST temp_25 = this ;
      GGS_lstring var_initializerForUsefulness_13576 = function_initializerNameForUsefulEntitiesGraph (temp_25.readProperty_structTypeName (), extensionGetter_initializerSignature (var_constructorArgumentList_10022, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 335)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_13576, var_initializerForUsefulness_13576, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 339)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_13576, var_structNameForUsefulness_9694 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 340)) ;
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
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_13576  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 342)) ;
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
  UpEnumerator_typedPropertyList enumerator_14936 (temp_0.readProperty_mTypedPropertyList ()) ;
  while (enumerator_14936.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14936.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 366)) ;
    enumerator_14936.gotoNextObject () ;
  }
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_15037 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 368)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypeDefinition_15037.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 371)), temp_3.readProperty_mTypedPropertyList () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 369))) ;
  const GGS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_15037.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 376)), var_selfTypeDefinition_15037.readProperty_isConcrete (), var_selfTypeDefinition_15037.readProperty_initializerMap (), var_selfTypeDefinition_15037.readProperty_classFunctionMap (), var_selfTypeDefinition_15037.readProperty_getterMap (), var_selfTypeDefinition_15037.readProperty_setterMap (), var_selfTypeDefinition_15037.readProperty_instanceMethodMap (), var_selfTypeDefinition_15037.readProperty_classMethodMap (), var_selfTypeDefinition_15037.readProperty_readSubscriptMap (), var_selfTypeDefinition_15037.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_15037.readProperty_features (), var_selfTypeDefinition_15037.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_15037.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_15037.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 374))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 374)) ;
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_16363 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 401)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  const GGS_structTypeForGeneration temp_4 = this ;
  const GGS_structTypeForGeneration temp_5 = this ;
  const GGS_structTypeForGeneration temp_6 = this ;
  const GGS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_16363.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 404)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_16363.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 410)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 402))) ;
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
//
//Overriding extension func '@listDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_listDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_listDeclarationAST temp_0 = this ;
  result_result = GGS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 83)) ;
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
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listDeclarationAST temp_0 = this ;
  const GGS_listDeclarationAST temp_1 = this ;
  GGS_lstring var_key_4012 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 96)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4012, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 97)) ;
  }
  const GGS_listDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_4160 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_4160.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_4160.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 99)), enumerator_4160.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 99)) ;
    }
    enumerator_4160.gotoNextObject () ;
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
  GGS_typedPropertyList var_typedAttributeList_5101 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_5149 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_5149.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_5149.current (HERE).readProperty_initialization ().getter_isSome (SOURCE_FILE ("declaration-type-list.galgas4", 119)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5149.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 120)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_5350 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5149.current (HERE).readProperty_typeName (), var_attributeTypeIndex_5350, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 122)) ;
    }
    var_typedAttributeList_5101.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_5350, enumerator_5149.current (HERE).readProperty_name (), enumerator_5149.current (HERE).readProperty_initialization (), GGS_bool (true), enumerator_5149.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 123)) ;
    enumerator_5149.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_uintType_5589 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_5589, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 126)) ;
  }
  GGS_unifiedTypeMapEntry var_listTypeIndex_5671 ;
  {
  const GGS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_5671, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 128)) ;
  }
  GGS_unifiedTypeMapEntry var_listElementType_5821 ;
  {
  const GGS_listDeclarationAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_4.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 131)), var_listElementType_5821, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 130)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_5899 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorAttributeTypeList_5952 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterOutputFormalArgumentList_6019 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterInputFormalArgumentList_6088 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_typedPropertyList enumerator_6142 (var_typedAttributeList_5101) ;
  while (enumerator_6142.hasCurrentObject ()) {
    GGS_string temp_5 ;
    const GalgasBool test_6 = enumerator_6142.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      temp_5 = enumerator_6142.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_6) {
      temp_5 = GGS_string::makeEmptyString () ;
    }
    GGS_string var_selector_6172 = temp_5 ;
    var_enumerationDescriptor_5899.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (enumerator_6142.current (HERE).readProperty_typeEntry (), enumerator_6142.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 141)) ;
    var_constructorAttributeTypeList_5952.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (var_selector_6172.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 143)), enumerator_6142.current (HERE).readProperty_typeEntry (), enumerator_6142.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 142)) ;
    var_setterOutputFormalArgumentList_6019.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (var_selector_6172.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 149)), enumerator_6142.current (HERE).readProperty_typeEntry (), GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-list.galgas4", 151)), enumerator_6142.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 148)) ;
    var_setterInputFormalArgumentList_6088.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (var_selector_6172.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 155)), enumerator_6142.current (HERE).readProperty_typeEntry (), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 157)), enumerator_6142.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 154)) ;
    enumerator_6142.gotoNextObject () ;
  }
  GGS_classFunctionMap var_classFunctionMap_6802 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  var_classFunctionMap_6802.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("listWithValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 164)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_5952, GGS_bool (false), var_listTypeIndex_5671, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 163)) ;
  }
  GGS_getterMap var_getterMap_7045 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7045, inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 170)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7045, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 171)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7045, ioArgument_ioTypeMap, GGS_string ("range"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 179)) ;
  }
  {
  const GGS_listDeclarationAST temp_7 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7045, ioArgument_ioTypeMap, GGS_string ("subListFromIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_7.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 187)) ;
  }
  {
  const GGS_listDeclarationAST temp_8 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7045, ioArgument_ioTypeMap, GGS_string ("subListToIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_8.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 195)) ;
  }
  {
  const GGS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7045, ioArgument_ioTypeMap, GGS_string ("subListWithRange"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_string ("inRange"), temp_9.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 203)) ;
  }
  UpEnumerator_typedPropertyList enumerator_8180 (var_typedAttributeList_5101) ;
  while (enumerator_8180.hasCurrentObject ()) {
    {
    GGS_functionSignature temp_10 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 215)) ;
    temp_10.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 215)), var_uintType_5589, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 215)) ;
    var_getterMap_7045.setter_insertOrReplace (GGS_lstring::init_21__21_ (enumerator_8180.current (HERE).readProperty_name ().readProperty_string ().add_operation (GGS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 213)), enumerator_8180.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 214)), temp_10, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 216)), GGS_bool (true), enumerator_8180.current (HERE).readProperty_typeEntry (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 219)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 212)) ;
    }
    enumerator_8180.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_8647 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_8647.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("first"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 226)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 227)), var_setterOutputFormalArgumentList_6019, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 229)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 231)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 225)) ;
  }
  {
  var_instanceMethodMap_8647.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("last"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 235)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 236)), var_setterOutputFormalArgumentList_6019, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 238)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 240)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 234)) ;
  }
  GGS_setterMap var_setterMap_9166 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_9166.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("append"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 246)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 247)), var_setterInputFormalArgumentList_6088, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 250)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 245)) ;
  }
  {
  var_setterMap_9166.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popFirst"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 254)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 255)), var_setterOutputFormalArgumentList_6019, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 258)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 253)) ;
  }
  {
  var_setterMap_9166.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popLast"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 262)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 263)), var_setterOutputFormalArgumentList_6019, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 266)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 261)) ;
  }
  var_setterOutputFormalArgumentList_6019.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 269)), var_uintType_5589, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 269)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 269)) ;
  {
  var_setterMap_9166.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("removeAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 271)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 272)), var_setterOutputFormalArgumentList_6019, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 275)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 270)) ;
  }
  UpEnumerator_typedPropertyList enumerator_10070 (var_typedAttributeList_5101) ;
  while (enumerator_10070.hasCurrentObject ()) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = enumerator_10070.current (HERE).readProperty_hasSetter ().boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_formalParameterSignature var_setterFormalArgumentList_10133 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        var_setterFormalArgumentList_10133.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 281)), enumerator_10070.current (HERE).readProperty_typeEntry (), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 281)), enumerator_10070.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 281)) ;
        var_setterFormalArgumentList_10133.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 282)), var_uintType_5589, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 282)), enumerator_10070.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 282)) ;
        {
        var_setterMap_9166.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_10070.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-list.galgas4", 284)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 284)).add_operation (GGS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 284)), enumerator_10070.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 285)), var_setterFormalArgumentList_10133, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 288)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 283)) ;
        }
      }
    }
    enumerator_10070.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_6088.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas4", 294)), var_uintType_5589, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas4", 294)), GGS_string ("inInsertionIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 294)) ;
  {
  var_setterMap_9166.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 296)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas4", 297)), var_setterInputFormalArgumentList_6088, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas4", 300)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 295)) ;
  }
  GGS_initializerMap var_initializerMap_11168 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_11214 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_12 = this ;
  var_initializerMap_11168.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_11214, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 307)), temp_12.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_11214, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 306)) ;
  }
  {
  const GGS_listDeclarationAST temp_13 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_13.readProperty_mListTypeName (), GGS_bool (false), var_initializerMap_11168, var_getterMap_7045, var_setterMap_9166, var_instanceMethodMap_8647, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 311)) ;
  }
  GGS_typeFeatures var_features_11799 = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-list.galgas4", 327)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-list.galgas4", 327)) COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 327)) ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_listDeclarationAST temp_15 = this ;
    test_14 = temp_15.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      var_features_11799.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas4", 329)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 329)) ;
    }
  }
  {
  const GGS_listDeclarationAST temp_16 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_16.readProperty_mListTypeName (), var_features_11799, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 331)) ;
  }
  const GGS_listDeclarationAST temp_17 = this ;
  const GGS_listDeclarationAST temp_18 = this ;
  const GGS_listDeclarationAST temp_19 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12136 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_17.readProperty_mListTypeName (), temp_18.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas4", 344)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-list.galgas4", 345)), GGS_bool (true), var_typedAttributeList_5101, GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_11168, var_classFunctionMap_6802, var_getterMap_7045, var_setterMap_9166, var_instanceMethodMap_8647, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas4", 356)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_5899, var_features_11799, var_constructorAttributeTypeList_5952, GGS_bool (false), var_listElementType_5821, GGS_string ("list-").add_operation (temp_19.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-list.galgas4", 363)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 363)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-list.galgas4", 364)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12136.readProperty_typeName (), var_typeDefinition_12136, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 366)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_13394 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_13443 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_13443.hasCurrentObject ()) {
    var_structAttributeList_13394.plusPlusAssignOperation (GGS_propertyInCollectionListAST_2E_element::init_21_mutability_21__21__21__21_hasSelector_21_initialization (enumerator_13443.current (HERE).readProperty_mutability (), enumerator_13443.current (HERE).readProperty_typeName (), enumerator_13443.current (HERE).readProperty_name (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-list.galgas4", 379)), enumerator_13443.current (HERE).readProperty_hasSelector (), enumerator_13443.current (HERE).readProperty_initialization (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 375)) ;
    enumerator_13443.gotoNextObject () ;
  }
  const GGS_listDeclarationAST temp_1 = this ;
  const GGS_listDeclarationAST temp_2 = this ;
  const GGS_listDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas4", 389)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-list.galgas4", 389)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 386)), var_structAttributeList_13394, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 384)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_14717 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 409)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14717, var_nameForUsefulness_14717, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 410)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_14717  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 412)) ;
    }
  }
  const GGS_listDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_14974 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_5.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 415)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 414)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14717, var_elementTypeNameForUsefulness_14974 COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 417)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_14974  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 419)) ;
    }
  }
  const GGS_listDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_15380 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_mListTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 422)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_15380, var_initializerNameForUsefulness_15380, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 426)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_15380, var_nameForUsefulness_14717 COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 427)) ;
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
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_15380  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 429)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_15874 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_15923 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_15 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_15965 (temp_15.readProperty_mPropertyList ()) ;
  while (enumerator_15965.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = enumerator_15965.current (HERE).readProperty_initialization ().getter_isSome (SOURCE_FILE ("declaration-type-list.galgas4", 435)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_15965.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("property initialization is not handled for a list"), fixItArray17  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 436)) ;
      }
    }
    GGS_lstring var_propertyTypeNameForUsefulness_16123 = function_typeNameForUsefulEntitiesGraph (enumerator_15965.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 438)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14717, var_propertyTypeNameForUsefulness_16123 COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 439)) ;
    }
    GGS_unifiedTypeMapEntry var_t_16313 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15965.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 440)) ;
    var_typedAttributeList_15874.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_t_16313, enumerator_15965.current (HERE).readProperty_name (), enumerator_15965.current (HERE).readProperty_initialization (), GGS_bool (true), enumerator_15965.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 441)) ;
    {
    var_attributeMap_15923.setter_insertKey (enumerator_15965.current (HERE).readProperty_name (), var_t_16313, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 448)) ;
    }
    enumerator_15965.gotoNextObject () ;
  }
  const GGS_listDeclarationAST temp_18 = this ;
  GGS_unifiedTypeMapEntry var_selfType_16595 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_18.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 451)) ;
  const GGS_listDeclarationAST temp_19 = this ;
  const GGS_listDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_listTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("list type ").add_operation (temp_19.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 453)), var_selfType_16595, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_20.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 455)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 455)), var_typedAttributeList_15874, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 452)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17536 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 475)) ;
  const GGS_listTypeForGeneration temp_1 = this ;
  const GGS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypeDefinition_17536.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 478)), temp_2.readProperty_mTypedAttributeList (), var_selfTypeDefinition_17536.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17536.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_17536.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 482)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_17536.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 483)) COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 476))) ;
  const GGS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_17536.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 487)), var_selfTypeDefinition_17536.readProperty_isConcrete (), var_selfTypeDefinition_17536.readProperty_initializerMap (), var_selfTypeDefinition_17536.readProperty_classFunctionMap (), var_selfTypeDefinition_17536.readProperty_getterMap (), var_selfTypeDefinition_17536.readProperty_setterMap (), var_selfTypeDefinition_17536.readProperty_instanceMethodMap (), var_selfTypeDefinition_17536.readProperty_classMethodMap (), var_selfTypeDefinition_17536.readProperty_readSubscriptMap (), var_selfTypeDefinition_17536.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17536.readProperty_features (), var_selfTypeDefinition_17536.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_17536.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_17536.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 485))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 485)) ;
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
  UpEnumerator_typedPropertyList enumerator_19125 (temp_0.readProperty_mTypedAttributeList ()) ;
  while (enumerator_19125.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19125.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 511)) ;
    enumerator_19125.gotoNextObject () ;
  }
  const GGS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 513)) ;
  const GGS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 514)) ;
  const GGS_listTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_19345 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 515)) ;
  const GGS_listTypeForGeneration temp_4 = this ;
  const GGS_listTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_19345.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 518)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_19345.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 520)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_19345.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 521)) COMMA_SOURCE_FILE ("declaration-type-list.galgas4", 516))) ;
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
                                                                          const GGS__5B_enumerationDescriptor_5D_ & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
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
  GGS_uint index_781_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_781 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_781.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_781.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_781.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_781.gotoNextObject () ;
      index_781_.increment () ;
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
  GGS_uint index_2090_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_2090 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_2090.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2090.current_entry (HERE).readProperty_mEnumeratedType (), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_2090.current_entry (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_2090.gotoNextObject () ;
      index_2090_.increment () ;
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
  GGS_uint index_4582_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4582 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4582.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4582.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_4582.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 114)).stringValue ()) ;
      enumerator_4582.gotoNextObject () ;
      index_4582_.increment () ;
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
                                                                       GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  const GGS_weakReferenceDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2636 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 48)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2636, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 49)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_weakReferenceDeclarationAST temp_5 = this ;
      const GGS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2636, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 53)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 51)) ;
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
  GGS_unifiedTypeMapEntry var_superClassIndex_3889 ;
  GGS_bool var_generateHeaderInSeparateFile_3917 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassIndex_3889 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 74)) ;
      const GGS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_3917 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_3889, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 77)) ;
    }
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_4208 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 78)) ;
    var_generateHeaderInSeparateFile_3917 = var_superTypeDefinition_4208.readProperty_generateHeaderInSeparateFile () ;
  }
  GGS_unifiedTypeMapEntry var_weakReferenceIndex_4496 ;
  {
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4496, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 82)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_4565 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_6 = this ;
  var_classFunctionMap_4565.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nil"), temp_6.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_weakReferenceIndex_4496, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 88)) ;
  }
  GGS_getterMap var_getterMap_4765 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_4798 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4839 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4885 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mWeakReferenceTypeName (), GGS_bool (false), var_initializerMap_4885, var_getterMap_4765, var_setterMap_4798, var_instanceMethodMap_4839, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 99)) ;
  }
  UpEnumerator_getterMap enumerator_5328 (var_getterMap_4765) ;
  while (enumerator_5328.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (enumerator_5328.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 115)) ;
    enumerator_5328.gotoNextObject () ;
  }
  UpEnumerator_setterMap enumerator_5437 (var_setterMap_4798) ;
  while (enumerator_5437.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (enumerator_5437.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 118)) ;
    enumerator_5437.gotoNextObject () ;
  }
  UpEnumerator_instanceMethodMap enumerator_5546 (var_instanceMethodMap_4839) ;
  while (enumerator_5546.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (enumerator_5546.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 121)) ;
    enumerator_5546.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_5652 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 123)) ;
  {
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mWeakReferenceTypeName (), var_features_5652, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 124)) ;
  }
  GGS_unifiedTypeMapEntry var_classIndex_5952 ;
  {
  const GGS_weakReferenceDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_12.readProperty_mClassTypeName (), var_classIndex_5952, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 132)) ;
  }
  const GGS_weakReferenceDeclarationAST temp_13 = this ;
  const GGS_weakReferenceDeclarationAST temp_14 = this ;
  const GGS_weakReferenceDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_5970 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_mWeakReferenceTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), var_superClassIndex_3889, GGS_typeKindEnum::class_func_weakReferenceType (var_classIndex_5952  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 139)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_4885, var_classFunctionMap_4565, GGS_getterMap::init (inCompiler COMMA_HERE), GGS_setterMap::init (inCompiler COMMA_HERE), GGS_instanceMethodMap::init (inCompiler COMMA_HERE), GGS_classMethodMap::init (inCompiler COMMA_HERE), var_classIndex_5952, GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_5652, GGS_functionSignature::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_3917, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 156)), GGS_string ("weak-reference-").add_operation (temp_15.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 157)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 157)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 158)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5970.readProperty_typeName (), var_typeDefinition_5970, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 160)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  GGS_lstring var_weakRefTypeNameForUsefulness_7677 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 177)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_7677, var_weakRefTypeNameForUsefulness_7677, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 178)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_weakReferenceDeclarationAST temp_3 = this ;
      GGS_lstring var_superWeakRefNameForUsefulness_7928 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_7677, var_superWeakRefNameForUsefulness_7928 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 181)) ;
      }
    }
  }
  const GGS_weakReferenceDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8187 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 184)) ;
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry temp_6 ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 187)) ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 188)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_8308 = temp_6 ;
  const GGS_weakReferenceDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_referenceClassType_8534 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 191)) ;
  const GGS_weakReferenceDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_optionalClassTypeOrNull_8668 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, function_makeOptionalTypeLName (temp_10.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 195)) ;
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_weakReferenceTypeForGeneration::init_21_infoMessage_21__21__21__21__21_ (GGS_string ("weak reference ").add_operation (temp_11.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 199)), var_selfType_8187, var_referenceClassType_8534, var_superClassEntry_8308, extensionGetter_definition (var_selfType_8187, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 203)).readProperty_generateHeaderInSeparateFile (), var_optionalClassTypeOrNull_8668, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 198)) ;
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
  GGS_unifiedTypeDefinition var_typeDefinition_10122 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 227)) ;
  GGS_string var_optionalClassTypeNameRepresentation_10184 ;
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  switch (temp_5.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_10184 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_10333__0 ;
      temp_5.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_10333__0) ;
      const GGS_weakReferenceTypeForGeneration temp_6 = this ;
      var_optionalClassTypeNameRepresentation_10184 = extensionGetter_identifierRepresentation (temp_6.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 233)) ;
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
  outArgument_outHeader = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_7.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 236)), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 237)), temp_10, var_optionalClassTypeNameRepresentation_10184 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 235))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_10122.readProperty_typeName ().readProperty_string (), var_typeDefinition_10122.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 243)), var_typeDefinition_10122.readProperty_isConcrete (), var_typeDefinition_10122.readProperty_initializerMap (), var_typeDefinition_10122.readProperty_classFunctionMap (), var_typeDefinition_10122.readProperty_getterMap (), var_typeDefinition_10122.readProperty_setterMap (), var_typeDefinition_10122.readProperty_instanceMethodMap (), var_typeDefinition_10122.readProperty_classMethodMap (), var_typeDefinition_10122.readProperty_readSubscriptMap (), var_typeDefinition_10122.readProperty_enumerationDescriptorList (), var_typeDefinition_10122.readProperty_features (), var_typeDefinition_10122.readProperty_addAssignOperatorArguments (), var_typeDefinition_10122.readProperty_typeForEnumeratedElement (), var_typeDefinition_10122.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 241))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 241)) ;
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
  GGS_unifiedTypeDefinition var_typeDefinition_11772 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 268)) ;
  GGS_string var_optionalClassTypeNameRepresentation_11834 ;
  const GGS_weakReferenceTypeForGeneration temp_2 = this ;
  switch (temp_2.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_11834 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_11983__0 ;
      temp_2.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_11983__0) ;
      const GGS_weakReferenceTypeForGeneration temp_3 = this ;
      var_optionalClassTypeNameRepresentation_11834 = extensionGetter_identifierRepresentation (temp_3.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 274)) ;
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
  outArgument_outImplementation = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 278)), var_typeDefinition_11772.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas4", 279)), temp_7, var_optionalClassTypeNameRepresentation_11834 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas4", 277))) ;
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
//Overriding extension func '@enumDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_enumDeclarationAST temp_0 = this ;
  result_result = GGS_string ("enum @").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 125)) ;
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
  UpEnumerator__5B_enumConstant_5D_ enumerator_4714 (temp_0.readProperty_mConstantList ()) ;
  while (enumerator_4714.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_4714.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 132)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_enumDeclarationAST temp_2 = this ;
        GGS_lstring var_associatedTypeName_4800 = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (temp_2.readProperty_enumTypeName ().readProperty_string (), enumerator_4714.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 134)), enumerator_4714.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
        GGS_propertyInCollectionListAST var_propertyListAST_4990 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_5052 (enumerator_4714.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_5052.hasCurrentObject ()) {
          GGS_lstring temp_3 ;
          const GalgasBool test_4 = enumerator_5052.current (HERE).readProperty_weakQualifier ().boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            temp_3 = function_makeWeakTypeLName (enumerator_5052.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 140)) ;
          }else if (GalgasBool::boolFalse == test_4) {
            temp_3 = enumerator_5052.current (HERE).readProperty_typeName () ;
          }
          GGS_lstring var_associatedValueTypeName_5093 = temp_3 ;
          var_propertyListAST_4990.plusPlusAssignOperation (GGS_propertyInCollectionListAST_2E_element::init_21_mutability_21__21__21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-enum.galgas4", 144)), var_associatedValueTypeName_5093, enumerator_5052.current (HERE).readProperty_valueName (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-enum.galgas4", 147)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas4", 149)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 143)) ;
          enumerator_5052.gotoNextObject () ;
        }
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_structDeclarationAST var_s_5543 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_associatedTypeName_4800, var_propertyListAST_4990, GGS_string::makeEmptyString (), temp_5.readProperty_comparison (), GGS_bool (true), inCompiler COMMA_HERE) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (var_s_5543  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 159)) ;
        {
        GGS_lstring joker_5887 ; // Joker input parameter
        extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_5887, var_associatedTypeName_4800, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 160)) ;
        }
      }
    }
    enumerator_4714.gotoNextObject () ;
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
  GGS_lstring var_key_6715 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 179)), temp_1.readProperty_enumTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6715, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 180)) ;
  }
  GGS_bool var_circularReference_6943 = GGS_bool (true) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_6993 (temp_3.readProperty_mConstantList ()) ;
  bool bool_4 = var_circularReference_6943.isValidAndTrue () ;
  if (enumerator_6993.hasCurrentObject () && bool_4) {
    while (enumerator_6993.hasCurrentObject () && bool_4) {
      GGS_bool var_namesCurrentType_7044 = GGS_bool (false) ;
      UpEnumerator__5B_associatedValue_5D_ enumerator_7107 (enumerator_6993.current (HERE).readProperty_associatedValueTypeList ()) ;
      bool bool_5 = var_namesCurrentType_7044.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 185)).isValidAndTrue () ;
      if (enumerator_7107.hasCurrentObject () && bool_5) {
        while (enumerator_7107.hasCurrentObject () && bool_5) {
          GGS_lstring var_propertyKey_7173 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_7107.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 186)), enumerator_7107.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_propertyKey_7173.readProperty_string ().objectCompare (var_key_6715.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_namesCurrentType_7044 = GGS_bool (true) ;
            }
          }
          enumerator_7107.gotoNextObject () ;
          if (enumerator_7107.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_7044.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 185)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_namesCurrentType_7044.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 191)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_circularReference_6943 = GGS_bool (false) ;
        }
      }
      enumerator_6993.gotoNextObject () ;
      if (enumerator_6993.hasCurrentObject ()) {
        bool_4 = var_circularReference_6943.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_circularReference_6943.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumDeclarationAST temp_9 = this ;
      UpEnumerator__5B_enumConstant_5D_ enumerator_7573 (temp_9.readProperty_mConstantList ()) ;
      while (enumerator_7573.hasCurrentObject ()) {
        UpEnumerator__5B_associatedValue_5D_ enumerator_7630 (enumerator_7573.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_7630.hasCurrentObject ()) {
          GGS_lstring var_propertyKey_7671 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_7630.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 199)), enumerator_7630.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = GGS_bool (ComparisonKind::notEqual, var_propertyKey_7671.readProperty_string ().objectCompare (var_key_6715.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6715, var_propertyKey_7671 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 201)) ;
              }
            }
          }
          enumerator_7630.gotoNextObject () ;
        }
        enumerator_7573.gotoNextObject () ;
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
  GGS_classFunctionMap var_classFunctionMap_8636 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_8678 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_enumTypeEntry_8776 ;
  {
  const GGS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_enumTypeName (), var_enumTypeEntry_8776, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 222)) ;
  }
  GGS_constantIndexMap var_constantMap_8841 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_hasAssociatedValues_8873 = GGS_bool (false) ;
  const GGS_enumDeclarationAST temp_1 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_8926 (temp_1.readProperty_mConstantList ()) ;
  while (enumerator_8926.hasCurrentObject ()) {
    GGS_associatedValueDescriptorList var_associatedTypeList_8984 = GGS_associatedValueDescriptorList::init (inCompiler COMMA_HERE) ;
    GGS_functionSignature var_argumentTypeList_9038 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_9099 (enumerator_8926.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_9099.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_9188 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9099.current (HERE).readProperty_typeName (), var_associatedTypeEntry_9188, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 230)) ;
      }
      var_argumentTypeList_9038.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_9099.current (HERE).readProperty_valueName (), var_associatedTypeEntry_9188, enumerator_9099.current (HERE).readProperty_typeName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 231)) ;
      var_associatedTypeList_8984.plusPlusAssignOperation (GGS_associatedValueDescriptorList_2E_element::init_21__21_ (var_associatedTypeEntry_9188, enumerator_9099.current (HERE).readProperty_valueName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 232)) ;
      var_hasAssociatedValues_8873 = GGS_bool (true) ;
      enumerator_9099.gotoNextObject () ;
    }
    {
    var_constantMap_8841.setter_insertKey (enumerator_8926.current (HERE).readProperty_name (), var_constantMap_8841.getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 235)), var_associatedTypeList_8984, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 235)) ;
    }
    {
    var_classFunctionMap_8636.setter_insertOrReplace (enumerator_8926.current (HERE).readProperty_name (), var_argumentTypeList_9038, GGS_bool (false), var_enumTypeEntry_8776 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 236)) ;
    }
    enumerator_8926.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_9725 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_2 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_9774 (temp_2.readProperty_mConstantList ()) ;
  while (enumerator_9774.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_9774.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 246)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_unifiedTypeMapEntryList var_associatedTypeList_9885 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
        GGS_formalParameterSignature var_argumentTypeList_9948 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_10011 (enumerator_9774.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_10011.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_associatedTypeEntry_10102 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10011.current (HERE).readProperty_typeName (), var_associatedTypeEntry_10102, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 250)) ;
          }
          var_argumentTypeList_9948.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_10011.current (HERE).readProperty_valueName (), var_associatedTypeEntry_10102, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-enum.galgas4", 251)), enumerator_10011.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 251)) ;
          var_associatedTypeList_9885.plusPlusAssignOperation (GGS_unifiedTypeMapEntryList_2E_element::init_21_ (var_associatedTypeEntry_10102, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 252)) ;
          var_hasAssociatedValues_8873 = GGS_bool (true) ;
          enumerator_10011.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_9725.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("extract").add_operation (enumerator_9774.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 256)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 256)), enumerator_9774.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-enum.galgas4", 257)), var_argumentTypeList_9948, enumerator_9774.current (HERE).readProperty_name ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-enum.galgas4", 261)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 255)) ;
        }
      }
    }
    enumerator_9774.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_10733 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10733, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 267)) ;
  }
  const GGS_enumDeclarationAST temp_4 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_10769 (temp_4.readProperty_mConstantList ()) ;
  while (enumerator_10769.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_10769.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 269)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumDeclarationAST temp_6 = this ;
        GGS_string var_associatedTypeName_10855 = function_makeEmbeddedTypeName (temp_6.readProperty_enumTypeName ().readProperty_string (), enumerator_10769.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 270)) ;
        GGS_string var_optionalTypeName_10960 = function_makeOptionalTypeName (var_associatedTypeName_10855, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 271)) ;
        {
        routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10733, ioArgument_ioTypeMap, GGS_string ("get").add_operation (enumerator_10769.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 275)), GGS_string::makeEmptyString (), var_optionalTypeName_10960, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 272)) ;
        }
      }
    }
    enumerator_10769.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_7 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_11395 (temp_7.readProperty_mConstantList ()) ;
  while (enumerator_11395.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10733, ioArgument_ioTypeMap, GGS_string ("is").add_operation (enumerator_11395.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 287)), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 284)) ;
    }
    enumerator_11395.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_11730 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_enumTypeName (), GGS_bool (false), var_initializerMap_11730, var_getterMap_10733, var_setterMap_8678, var_instanceMethodMap_9725, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 295)) ;
  }
  GGS_typeFeatures var_features_12201 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-enum.galgas4", 311)) ;
  const GGS_enumDeclarationAST temp_9 = this ;
  switch (temp_9.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_12201.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 316)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 316)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_12201.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 318)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 318)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 318)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 318)) ;
    }
    break ;
  }
  {
  const GGS_enumDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_enumTypeName (), var_features_12201, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 320)) ;
  }
  const GGS_enumDeclarationAST temp_11 = this ;
  const GGS_enumDeclarationAST temp_12 = this ;
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12672 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_enumTypeName (), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 333)), GGS_typeKindEnum::class_func_enumType (var_constantMap_8841  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 334)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_11730, var_classFunctionMap_8636, var_getterMap_10733, var_setterMap_8678, var_instanceMethodMap_9725, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 345)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_12201, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 351)), GGS_string ("enum-").add_operation (temp_13.readProperty_enumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 352)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 352)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-enum.galgas4", 353)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12672.readProperty_typeName (), var_typeDefinition_12672, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 355)) ;
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
  GGS_lstring var_nameForUsefulness_14331 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 369)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14331, var_nameForUsefulness_14331, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 370)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_enumDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_14331  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 372)) ;
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_associatedValuesTypes_14622 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_constantList_14658 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_enumConstantForGeneration_5D_ var_enumConstantListForGeneration_14723 = GGS__5B_enumConstantForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  GGS_constantIndexMap var_constantMap_14767 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_14827 (temp_3.readProperty_mConstantList ()) ;
  while (enumerator_14827.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_14827.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 380)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_string var_associatedTypeName_14913 = function_makeEmbeddedTypeName (temp_5.readProperty_enumTypeName ().readProperty_string (), enumerator_14827.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 381)) ;
        GGS_string var_optionalTypeName_15018 = function_makeOptionalTypeName (var_associatedTypeName_14913, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 382)) ;
        GGS_unifiedTypeMapEntry var_associatedType_15106 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (var_optionalTypeName_15018, enumerator_14827.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 383)) ;
        {
        var_associatedValuesTypes_14622.setter_append (var_associatedType_15106, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 384)) ;
        }
      }
    }
    var_constantList_14658.plusPlusAssignOperation (enumerator_14827.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 386)) ;
    GGS_associatedValueDescriptorList var_associatedTypeList_15341 = GGS_associatedValueDescriptorList::init (inCompiler COMMA_HERE) ;
    GGS_stringset var_associatedValueNameSet_15387 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_15454 (enumerator_14827.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_15454.hasCurrentObject ()) {
      GGS_lstring var_propertyTypeNameForUsefulness_15493 = function_typeNameForUsefulEntitiesGraph (enumerator_15454.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 390)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14331, var_propertyTypeNameForUsefulness_15493 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 391)) ;
      }
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_15698 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15454.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 392)) ;
      var_associatedTypeList_15341.plusPlusAssignOperation (GGS_associatedValueDescriptorList_2E_element::init_21__21_ (var_associatedTypeEntry_15698, enumerator_15454.current (HERE).readProperty_valueName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_associatedValueNameSet_15387.getter_contains (enumerator_15454.current (HERE).readProperty_valueName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 394)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_15454.current (HERE).readProperty_valueName ().readProperty_location (), GGS_string ("duplicated name"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 395)) ;
        }
      }
      var_associatedValueNameSet_15387.plusPlusAssignOperation (enumerator_15454.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 397)) ;
      const GGS_enumDeclarationAST temp_8 = this ;
      switch (temp_8.readProperty_comparison ().enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GGS_unifiedTypeDefinition var_associatedType_16198 = extensionGetter_definition (var_associatedTypeEntry_15698, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 402)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_associatedType_16198.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 403)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 403)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 403)).operator_and (var_associatedType_16198.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 404)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 404)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 404)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 403)).operator_and (var_associatedType_16198.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-enum.galgas4", 405)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 405)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 405)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 404)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_15454.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_15454.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 406)).add_operation (GGS_string (" should be equatable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 406)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 406)) ;
            }
          }
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GGS_unifiedTypeDefinition var_associatedType_16615 = extensionGetter_definition (var_associatedTypeEntry_15698, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 409)) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = var_associatedType_16615.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 410)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 410)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 410)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_15454.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_15454.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 411)).add_operation (GGS_string (" should be comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 411)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 411)) ;
            }
          }
        }
        break ;
      }
      enumerator_15454.gotoNextObject () ;
    }
    {
    var_constantMap_14767.setter_insertKey (enumerator_14827.current (HERE).readProperty_name (), var_constantMap_14767.getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 415)), var_associatedTypeList_15341, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 415)) ;
    }
    var_enumConstantListForGeneration_14723.plusPlusAssignOperation (GGS_enumConstantForGeneration::init_21__21_ (enumerator_14827.current (HERE).readProperty_name ().readProperty_string (), var_associatedTypeList_15341, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 416)) ;
    enumerator_14827.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeMapEntry var_selfType_17069 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 419)) ;
  const GGS_enumDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_enumTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("enum ").add_operation (temp_14.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 421)), var_selfType_17069, var_enumConstantListForGeneration_14723, var_associatedValuesTypes_14622, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 420)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_hasAssociatedValues_18331 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_18384 (temp_0.readProperty_constantList ()) ;
  bool bool_1 = var_hasAssociatedValues_18331.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 452)).isValidAndTrue () ;
  if (enumerator_18384.hasCurrentObject () && bool_1) {
    while (enumerator_18384.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_18331 = GGS_bool (ComparisonKind::greaterThan, enumerator_18384.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 453)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_18384.gotoNextObject () ;
      if (enumerator_18384.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_18331.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 452)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_18517 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 455)) ;
  const GGS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypeDefinition_18517.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18517.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 458)), temp_3.readProperty_constantList (), var_hasAssociatedValues_18331 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 456))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_18517.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18517.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 464)), var_selfTypeDefinition_18517.readProperty_isConcrete (), var_selfTypeDefinition_18517.readProperty_initializerMap (), var_selfTypeDefinition_18517.readProperty_classFunctionMap (), var_selfTypeDefinition_18517.readProperty_getterMap (), var_selfTypeDefinition_18517.readProperty_setterMap (), var_selfTypeDefinition_18517.readProperty_instanceMethodMap (), var_selfTypeDefinition_18517.readProperty_classMethodMap (), var_selfTypeDefinition_18517.readProperty_readSubscriptMap (), var_selfTypeDefinition_18517.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18517.readProperty_features (), var_selfTypeDefinition_18517.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_18517.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_18517.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 462))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 462)) ;
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
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_19921 (temp_0.readProperty_associatedValuesTypes ()) ;
  while (enumerator_19921.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19921.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 487)) ;
    enumerator_19921.gotoNextObject () ;
  }
  GGS_bool var_hasAssociatedValues_20016 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_1 = this ;
  UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_20069 (temp_1.readProperty_constantList ()) ;
  bool bool_2 = var_hasAssociatedValues_20016.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 490)).isValidAndTrue () ;
  if (enumerator_20069.hasCurrentObject () && bool_2) {
    while (enumerator_20069.hasCurrentObject () && bool_2) {
      var_hasAssociatedValues_20016 = GGS_bool (ComparisonKind::greaterThan, enumerator_20069.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 491)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_20069.gotoNextObject () ;
      if (enumerator_20069.hasCurrentObject ()) {
        bool_2 = var_hasAssociatedValues_20016.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 490)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 493)) ;
  const GGS_enumTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20263 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 494)) ;
  const GGS_enumTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_20263.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_20263.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 497)), temp_5.readProperty_constantList (), var_hasAssociatedValues_20016, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_20263.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 500)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 495))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_enumGenerationTemplate_2,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_enumGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_enumGenerationTemplate_1,
  1,
  gWrapperAllDirectories_enumGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_enumGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  1,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (Compiler * inCompiler,
                                                                          const GGS_string & /* in_TYPE_5F_NAME */,
                                                                          const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const GGS__5B_enumConstantForGeneration_5D_ & in_CONSTANT_5F_LIST,
                                                                          const GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   enum ") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Enumeration\n  public: enum class Enumeration {\n    invalid") ;
  GGS_uint index_513_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_513 (in_CONSTANT_5F_LIST) ;
    while (enumerator_513.hasCurrentObject ()) {
      result.appendString (",\n    enum_") ;
      result.appendString (enumerator_513.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 13)).stringValue ()) ;
      enumerator_513.gotoNextObject () ;
      index_513_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  \n//--------------------------------- Private properties\n") ;
  const GalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  private: Enumeration mEnum ;\n\n//--------------------------------- Associated value extraction\n") ;
  GGS_uint index_884_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_884 (in_CONSTANT_5F_LIST) ;
    while (enumerator_884.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_884.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 28)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_") ;
        result.appendString (enumerator_884.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_1106_idx (0) ;
        if (enumerator_884.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_1106 (enumerator_884.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_1106.hasCurrentObject ()) {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1106.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 31)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1106.current_name (HERE).stringValue ()) ;
            enumerator_1106.gotoNextObject () ;
            if (enumerator_1106.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1106_idx.increment () ;
          }
        }
        result.appendString (") const ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_884.gotoNextObject () ;
      index_884_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {\n    return Enumeration::invalid != mEnum ;\n  }\n\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override {\n    mEnum = Enumeration::invalid ;\n") ;
  const GalgasBool test_2 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("    mAssociatedValues.drop () ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  public: inline Enumeration enumValue (void) const {\n    return mEnum ;\n  }\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (Compiler * inCompiler,
                                                                                      const GGS_string & in_TYPE_5F_NAME,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS__5B_enumConstantForGeneration_5D_ & in_CONSTANT_5F_LIST,
                                                                                      const GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES,
                                                                                      const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Enum ") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("mAssociatedValues (),\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("mEnum (Enumeration::invalid) {\n}\n\n\n") ;
  GGS_uint index_410_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_410 (in_CONSTANT_5F_LIST) ;
    while (enumerator_410.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_410.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("UNUSED_LOCATION_ARGS") ;
        } break ;
      case GalgasBool::boolFalse : {
        GGS_uint index_769_idx (0) ;
        if (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_769 (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_769.hasCurrentObject ()) {
            result.appendString ("const GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_769.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            result.appendString (" & inAssociatedValue") ;
            result.appendString (index_769_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            enumerator_769.gotoNextObject () ;
            if (enumerator_769.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_769_idx.increment () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") {\n  GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n  result.mEnum = Enumeration::enum_") ;
      result.appendString (enumerator_410.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 30)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("  AC_GALGAS_root * p = nullptr ;\n  macroMyNew (p, GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_410.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (" (") ;
        GGS_uint index_1324_idx (0) ;
        if (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_1324 (enumerator_410.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_1324.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_1324_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 34)).stringValue ()) ;
            enumerator_1324.gotoNextObject () ;
            if (enumerator_1324.hasCurrentObject ()) {
              result.appendString (", ") ;
            }
            index_1324_idx.increment () ;
          }
        }
        result.appendString (")) ;\n  EnumerationAssociatedValues * eav = nullptr ;\n  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;\n  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues\n  macroDetachSharedObject (eav) ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("  return result ;\n}\n\n") ;
      enumerator_410.gotoNextObject () ;
      index_410_.increment () ;
    }
  }
  GGS_uint index_1748_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_1748 (in_CONSTANT_5F_LIST) ;
    while (enumerator_1748.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_1748.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::method_extract") ;
        result.appendString (enumerator_1748.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 50)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 50)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_2085_ (0) ;
        if (enumerator_1748.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_2085 (enumerator_1748.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2085.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2085.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 52)).stringValue ()) ;
            result.appendString (" & outAssociatedValue_") ;
            result.appendString (enumerator_2085.current_name (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            enumerator_2085.gotoNextObject () ;
            index_2085_.increment () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (mEnum != Enumeration::enum_") ;
        result.appendString (enumerator_1748.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 56)).stringValue ()) ;
        result.appendString (") {\n") ;
        GGS_uint index_2388_idx (0) ;
        if (enumerator_1748.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_2388 (enumerator_1748.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2388.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2388.current_name (HERE).stringValue ()) ;
            result.appendString (".drop () ;\n") ;
            enumerator_2388.gotoNextObject () ;
            index_2388_idx.increment () ;
          }
        }
        result.appendString ("    String s ;\n    s.appendCString (\"proc @") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (".") ;
        result.appendString (enumerator_1748.current_entry (HERE).readProperty_name ().stringValue ()) ;
        result.appendString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const auto ptr = (GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_1748.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_uint index_2888_idx (0) ;
        if (enumerator_1748.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_2888 (enumerator_1748.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_2888.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2888.current_name (HERE).stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_2888.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_2888.gotoNextObject () ;
            index_2888_idx.increment () ;
          }
        }
        result.appendString ("  }\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1748.gotoNextObject () ;
      index_1748_.increment () ;
    }
  }
  GGS_uint index_3058_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_3058 (in_CONSTANT_5F_LIST) ;
    while (enumerator_3058.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_3058.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3058.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString ("_3F_ GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getter_get") ;
        result.appendString (enumerator_3058.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3058.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).stringValue ()) ;
        result.appendString ("_3F_ result ;\n  if (mEnum == Enumeration::enum_") ;
        result.appendString (enumerator_3058.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (") {\n    const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3058.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n    result = GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3058.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).stringValue ()) ;
        result.appendString (" (*ptr) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getAssociatedValuesFor_") ;
        result.appendString (enumerator_3058.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 85)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_4274_idx (0) ;
        if (enumerator_3058.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_4274 (enumerator_3058.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_4274.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_4274.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 87)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_4274.current_name (HERE).stringValue ()) ;
            enumerator_4274.gotoNextObject () ;
            if (enumerator_4274.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_4274_idx.increment () ;
          }
        }
        result.appendString (") const {\n  const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3058.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_uint index_4608_ (0) ;
        if (enumerator_3058.current_entry (HERE).readProperty_associatedValueTypeList ().isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_4608 (enumerator_3058.current_entry (HERE).readProperty_associatedValueTypeList ()) ;
          while (enumerator_4608.hasCurrentObject ()) {
            result.appendString ("  out_") ;
            result.appendString (enumerator_4608.current_name (HERE).stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_4608.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 93)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_4608.gotoNextObject () ;
            index_4608_.increment () ;
          }
        }
        result.appendString ("}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3058.gotoNextObject () ;
      index_3058_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString ("] = {\n  \"(not built)\"") ;
  GGS_uint index_4974_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_4974 (in_CONSTANT_5F_LIST) ;
    while (enumerator_4974.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (enumerator_4974.current_entry (HERE).readProperty_name ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 104)).stringValue ()) ;
      enumerator_4974.gotoNextObject () ;
      index_4974_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  GGS_uint index_5075_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_5075 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5075.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_is") ;
      result.appendString (enumerator_5075.current_entry (HERE).readProperty_name ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_") ;
      result.appendString (enumerator_5075.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" == mEnum) ;\n}\n\n") ;
      enumerator_5075.gotoNextObject () ;
      index_5075_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t ") ;
  const GalgasBool test_5 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("inIndentation") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("/* inIndentation */") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") const {\n  ioString.appendCString (\"<enum @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (": \") ;\n  ioString.appendCString (gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [size_t (mEnum)]) ;\n") ;
  const GalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  mAssociatedValues.description (ioString, inIndentation) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  ioString.appendCString (\">\") ;\n}\n\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n") ;
    const GalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
    switch (test_8) {
    case GalgasBool::boolTrue : {
      result.appendString ("      switch (mEnum) {\n") ;
      GGS_uint index_6686_ (0) ;
      if (in_CONSTANT_5F_LIST.isValid ()) {
        UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_6686 (in_CONSTANT_5F_LIST) ;
        while (enumerator_6686.hasCurrentObject ()) {
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, enumerator_6686.current_entry (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 152)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("      case Enumeration::enum_") ;
            result.appendString (enumerator_6686.current_entry (HERE).readProperty_name ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 153)).stringValue ()) ;
            result.appendString (": {\n        const auto left = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6686.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue ()) ;
            result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n        const auto right = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6686.current_entry (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue ()) ;
            result.appendString (" *) inOperand.mAssociatedValues.associatedValuesPointer () ;\n        result = left->objectCompare (*right) ;\n        }break ;\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_6686.gotoNextObject () ;
          index_6686_.increment () ;
        }
      }
      result.appendString ("      default:\n        result = ComparisonResult::operandEqual ;\n        break ;\n      }\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("      result = ComparisonResult::operandEqual ;\n") ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("    }\n  }\n  return result ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@graphDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_graphDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_graphDeclarationAST temp_0 = this ;
  result_result = GGS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 100)) ;
//---
  return result_result ;
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
  GGS_lstring var_key_4925 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 114)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4925, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 115)) ;
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  const GGS_graphDeclarationAST temp_4 = this ;
  GGS_lstring var_arrayTypeKey_5062 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mAssociatedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 116)), temp_4.readProperty_mAssociatedArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4925, var_arrayTypeKey_5062 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 117)) ;
  }
  GGS_lstring var_lstringArrayTypeName_5248 = function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 118)) ;
  GGS_lstring var_lstringArrayTypeKey_5318 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (var_lstringArrayTypeName_5248.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 119)), var_lstringArrayTypeName_5248.readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4925, var_lstringArrayTypeKey_5318 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 120)) ;
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
  GGS_unifiedTypeMapEntry var_stringTypeEntry_6305 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeEntry_6305, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 133)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeEntry_6423 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeEntry_6423, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 135)) ;
  }
  {
  const GGS_graphDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_6514 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), joker_6514, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 137)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedArrayType_6638 ;
  {
  const GGS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedArrayTypeName (), var_associatedArrayType_6638, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 139)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedElementType_6783 ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mAssociatedElementTypeName (), var_associatedElementType_6783, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 141)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_6939 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 143)).readProperty_string (), var_lstringArrayTypeEntry_6939, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 143)) ;
  }
  GGS_getterMap var_getterMap_7031 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7031, inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 145)) ;
  }
  GGS_setterMap var_setterMap_7062 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_7105 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_formalParameterList_7200 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 151)), var_associatedArrayType_6638, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 153)), GGS_string ("outSortedInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 150)) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 157)), var_lstringArrayTypeEntry_6939, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 159)), GGS_string ("outSortedLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 156)) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 163)), var_associatedArrayType_6638, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 165)), GGS_string ("outUnsortedInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 162)) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 169)), var_lstringArrayTypeEntry_6939, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 171)), GGS_string ("outUnsortedLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 168)) ;
  {
  var_instanceMethodMap_7105.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("topologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 175)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 176)), var_formalParameterList_7200, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 178)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 180)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 174)) ;
  }
  {
  var_instanceMethodMap_7105.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("depthFirstTopologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 184)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 185)), var_formalParameterList_7200, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 187)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 189)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 183)) ;
  }
  var_formalParameterList_7200 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 195)), var_associatedArrayType_6638, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 197)), GGS_string ("outInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 194)) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 201)), var_lstringArrayTypeEntry_6939, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 203)), GGS_string ("outLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 200)) ;
  {
  var_instanceMethodMap_7105.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("circularities"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 207)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 208)), var_formalParameterList_7200, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 210)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 212)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 206)) ;
  }
  {
  var_instanceMethodMap_7105.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoSuccessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 216)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 217)), var_formalParameterList_7200, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 219)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 221)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 215)) ;
  }
  {
  var_instanceMethodMap_7105.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoPredecessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 225)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 226)), var_formalParameterList_7200, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 228)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 230)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 224)) ;
  }
  {
  const GGS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("nodeList"), temp_3.readProperty_mAssociatedArrayTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 234)) ;
  }
  {
  const GGS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("reversedGraph"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 242)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("undefinedNodeCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 250)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("undefinedNodeKeyList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 258)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("undefinedNodeReferenceList"), GGS_string ("[lstring]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 266)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("graphviz"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 274)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("isNodeDefined"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 282)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 292)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 302)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("lkeyList"), GGS_string ("[lstring]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 310)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("edges"), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 318)) ;
  }
  {
  const GGS_graphDeclarationAST temp_5 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("subgraphFromNodes"), GGS_string::makeEmptyString (), GGS_string ("[lstring]"), GGS_string ("inStartNodeLStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), temp_5.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 326)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7031, ioArgument_ioTypeMap, GGS_string ("accessibleNodesFrom"), GGS_string::makeEmptyString (), GGS_string ("[lstring]"), GGS_string ("inStartNodeStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), GGS_string ("[lstring]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 340)) ;
  }
  var_formalParameterList_7200 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 352)), var_lstringTypeEntry_6423, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 354)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 351)) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 358)), var_associatedElementType_6783, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 360)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 357)) ;
  const GGS_graphDeclarationAST temp_6 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_13357 (temp_6.readProperty_mInsertModifierList ()) ;
  while (enumerator_13357.hasCurrentObject ()) {
    {
    var_setterMap_7062.setter_insertOrReplace (enumerator_13357.current (HERE).readProperty_mInsertModifierName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 366)), var_formalParameterList_7200, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 369)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 364)) ;
    }
    enumerator_13357.gotoNextObject () ;
  }
  {
  var_setterMap_7062.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToDominators"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 375)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 376)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 379)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 374)) ;
  }
  var_formalParameterList_7200 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 384)), var_stringTypeEntry_6305, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 384)), GGS_string ("inNodeName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 384)) ;
  {
  var_setterMap_7062.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 386)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 387)), var_formalParameterList_7200, GGS_bool (true), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 390)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 385)) ;
  }
  var_formalParameterList_7200 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("from").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 395)), var_lstringTypeEntry_6423, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 395)), GGS_string ("inSourceNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 395)) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("to").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 396)), var_lstringTypeEntry_6423, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 396)), GGS_string ("inTargetNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 396)) ;
  {
  var_setterMap_7062.setter_insertKey (GGS_string ("addEdge").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 398)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 399)), var_formalParameterList_7200, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 402)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 397)) ;
  }
  var_formalParameterList_7200 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7200.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 408)), var_lstringTypeEntry_6423, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 410)), GGS_string ("inNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 407)) ;
  {
  var_setterMap_7062.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("noteNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 413)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 414)), var_formalParameterList_7200, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 417)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 412)) ;
  }
  GGS_initializerMap var_initializerMap_15199 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorPropertyTypeList_15247 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_7 = this ;
  var_initializerMap_15199.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15247, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 424)), temp_7.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15247, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 423)) ;
  }
  {
  const GGS_graphDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mGraphTypeName (), GGS_bool (false), var_initializerMap_15199, var_getterMap_7031, var_setterMap_7062, var_instanceMethodMap_7105, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 428)) ;
  }
  GGS_typeFeatures var_features_15891 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-graph.galgas4", 443)) ;
  {
  const GGS_graphDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_mGraphTypeName (), var_features_15891, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 444)) ;
  }
  const GGS_graphDeclarationAST temp_10 = this ;
  const GGS_graphDeclarationAST temp_11 = this ;
  const GGS_graphDeclarationAST temp_12 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_16171 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_mGraphTypeName (), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 457)), GGS_typeKindEnum::class_func_graphType (SOURCE_FILE ("declaration-type-graph.galgas4", 458)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15199, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_7031, var_setterMap_7062, var_instanceMethodMap_7105, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 469)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_15891, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 475)), GGS_string ("graph-").add_operation (temp_12.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-graph.galgas4", 476)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 476)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-graph.galgas4", 477)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16171.readProperty_typeName (), var_typeDefinition_16171, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 479)) ;
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
  GGS_lstring var_nameForUsefulness_17858 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 492)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17858, var_nameForUsefulness_17858, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 493)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_graphDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17858  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 495)) ;
    }
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  GGS_lstring var_associatedTypeNameForUsefulness_18106 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 497)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17858, var_associatedTypeNameForUsefulness_18106 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 498)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_graphDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_associatedTypeNameForUsefulness_18106  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 500)) ;
    }
  }
  const GGS_graphDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_18485 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_mGraphTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 505)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 503)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18485, var_initializerNameForUsefulness_18485, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 507)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_graphDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_18485  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 509)) ;
    }
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_graphTypeEntry_18864 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 512)) ;
  const GGS_graphDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_associatedArrayType_18941 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 513)) ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeMapEntry var_associatedListElementTypeEntry_19033 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mAssociatedElementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 514)) ;
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_19138 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 515)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 515)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 515)) ;
  GGS_unifiedTypeMapEntry var_stringArrayTypeEntry_19241 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 516)) ;
  GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 518)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("noteNode")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 518)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("addArc")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 518)) ;
  GGS_stringset var_reservedModifierNames_19384 = temp_12 ;
  const GGS_graphDeclarationAST temp_13 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_19460 (temp_13.readProperty_mInsertModifierList ()) ;
  while (enumerator_19460.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_reservedModifierNames_19384.getter_contains (enumerator_19460.current (HERE).readProperty_mInsertModifierName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 520)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_19460.current (HERE).readProperty_mInsertModifierName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_19460.current (HERE).readProperty_mInsertModifierName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 522)).add_operation (GGS_string ("' mutating proc name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 522)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 521)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_19460.current (HERE).readProperty_mInsertErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 524)) ;
    }
    enumerator_19460.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_16 = this ;
  const GGS_graphDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_graphDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("graph ").add_operation (temp_16.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 528)), var_graphTypeEntry_18864, var_associatedArrayType_18941, var_associatedListElementTypeEntry_19033, var_lstringArrayTypeEntry_19138, var_stringArrayTypeEntry_19241, temp_17.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 527)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_21062 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 557)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_mAssociatedArrayTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 558)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_2.readProperty_mLStringArrayType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 559)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_3.readProperty_mStringArrayType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 560)) ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  const GGS_graphDeclarationForGeneration temp_7 = this ;
  const GGS_graphDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_graphGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21062.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 563)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mLStringArrayType (), temp_8.readProperty_mStringArrayType () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 561))) ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21062.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_9.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 571)), var_selfTypeDefinition_21062.readProperty_isConcrete (), var_selfTypeDefinition_21062.readProperty_initializerMap (), var_selfTypeDefinition_21062.readProperty_classFunctionMap (), var_selfTypeDefinition_21062.readProperty_getterMap (), var_selfTypeDefinition_21062.readProperty_setterMap (), var_selfTypeDefinition_21062.readProperty_instanceMethodMap (), var_selfTypeDefinition_21062.readProperty_classMethodMap (), var_selfTypeDefinition_21062.readProperty_readSubscriptMap (), var_selfTypeDefinition_21062.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21062.readProperty_features (), var_selfTypeDefinition_21062.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_21062.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_21062.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 569))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 569)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 593)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedArrayTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 594)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 595)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  const GGS_graphDeclarationForGeneration temp_7 = this ;
  const GGS_graphDeclarationForGeneration temp_8 = this ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_graphGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 598)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mInsertModifierList (), temp_8.readProperty_mLStringArrayType (), temp_9.readProperty_mStringArrayType () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 596))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'graphGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_graphGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_graphGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_graphGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_graphGenerationTemplate_2,
  0,
  gWrapperAllDirectories_graphGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_graphGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_graphGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_graphGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_graphGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_graphGenerationTemplate_1,
  1,
  gWrapperAllDirectories_graphGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_graphGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_graphGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_graphGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_graphGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_graphGenerationTemplate_0,
  1,
  gWrapperAllDirectories_graphGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'graphGenerationTemplate graphTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_graphGenerationTemplate_graphTypeHeader_31_ (Compiler * inCompiler,
                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ARRAY_5F_TYPE,
                                                                            const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ELEMENT_5F_TYPE,
                                                                            const GGS_unifiedTypeMapEntry & in_LSTRING_5F_ARRAY_5F_TYPE,
                                                                            const GGS_unifiedTypeMapEntry & in_STRING_5F_ARRAY_5F_TYPE
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 2)).add_operation (GGS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--- Private Data member\n  private: class SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSharedGraph ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- count\n  public: uint32_t count (void) const ;\n\n//--- isValid\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {\n    return mSharedGraph != nullptr ;\n  }\n\n//--- drop\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- Create a new list\n  protected: void makeNewEmptyGraph (LOCATION_ARGS) ;\n\n//--------------------------------- Getters\n  public: class GGS_uint getter_count (LOCATION_ARGS) const ;\n\n  public: class GGS_bool getter_isNodeDefined (const GGS_string & inKey COMMA_LOCATION_ARGS) const ;\n\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 38)).stringValue ()) ;
  result.appendString (" getter_keyList (LOCATION_ARGS) const ;\n\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 40)).stringValue ()) ;
  result.appendString (" getter_lkeyList (LOCATION_ARGS) const ;\n\n  public: class GGS_uint getter_undefinedNodeCount (LOCATION_ARGS) const ;\n\n  public: class GGS__5B_string_5D_ getter_undefinedNodeKeyList (LOCATION_ARGS) const ;\n\n  public: class GGS_location getter_locationForKey (const GGS_string & inKey,\n                                                    Compiler * inCompiler\n                                                    COMMA_LOCATION_ARGS) const ;\n\n//--------------------------------- Setters\n  public: void setter_addEdge (const class GGS_lstring & inSourceNodeKey,\n                               const class GGS_lstring & inTargetNodeKey\n                               COMMA_LOCATION_ARGS) ;\n\n  public: void setter_removeEdgesToNode (const GGS_string & inNodeName,\n                                         Compiler * inCompiler\n                                         COMMA_LOCATION_ARGS) ;\n\n  public: void setter_removeEdgesToDominators (LOCATION_ARGS) ;\n\n//--------------------------------- Comparison\n  public: ComparisonResult objectCompare (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const ;\n\n//--- Description\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n//--- Internal methods for handling graph\n  protected: void reversedGraphFromGraph (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inGraph\n                                          COMMA_LOCATION_ARGS) ;\n\n  protected: void subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                            const class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 73)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                            const class GGS_stringset & inNodesToExclude,\n                            Compiler * inCompiler\n                            COMMA_LOCATION_ARGS) const ;\n\n\n  protected: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 79)).stringValue ()) ;
  result.appendString (" graph (void) const ;\n\n  private: void insulateGraph (LOCATION_ARGS) ;\n\n  protected: void internalAddNode (const GGS_lstring & inKey,\n                                   const char * inErrorMessage,\n                                   const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 85)).stringValue ()) ;
  result.appendString (" & inElement,\n                                   Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n  public: void setter_noteNode (const GGS_lstring & inKey\n                                COMMA_LOCATION_ARGS) ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 92)).stringValue ()) ;
  result.appendString (" getter_undefinedNodeReferenceList (LOCATION_ARGS) const ;\n\n  protected: void internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 95)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 96)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 97)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                           Compiler * inCompiler\n                                           COMMA_LOCATION_ARGS) const ;\n\n  protected: void internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 101)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 102)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                             COMMA_UNUSED_LOCATION_ARGS) const ;\n\n  protected: void internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 105)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 106)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList\n                                                  COMMA_LOCATION_ARGS) const ;\n\n  protected: void internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 109)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList\n                                                COMMA_LOCATION_ARGS) const ;\n\n\n  protected: void internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 114)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 115)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 116)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 117)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                                     Compiler * inCompiler\n                                                     COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_string getter_graphviz (UNUSED_LOCATION_ARGS) const ;\n\n  public: class GGS__32_stringlist getter_edges (UNUSED_LOCATION_ARGS) const ;\n\n  friend class SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'graphGenerationTemplate graphTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_graphGenerationTemplate_graphTypeSpecificImplementation (Compiler * inCompiler,
                                                                                        const GGS_unifiedTypeMapEntry & /* in_TYPE */,
                                                                                        const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ARRAY_5F_TYPE,
                                                                                        const GGS_unifiedTypeMapEntry & in_ASSOCIATED_5F_ELEMENT_5F_TYPE,
                                                                                        const GGS__5B_graphInsertModifier_5D_ & in_INSERT_5F_MODIFIER_5F_LIST,
                                                                                        const GGS_unifiedTypeMapEntry & in_LSTRING_5F_ARRAY_5F_TYPE,
                                                                                        const GGS_unifiedTypeMapEntry & in_STRING_5F_ARRAY_5F_TYPE
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mInfPtr ;\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSupPtr ;\n  public: int32_t mBalance ;\n  public: const String mKey ;\n  public: const uint32_t mNodeID ;\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" mElement ;\n  public: GGS_location mDefinitionLocation ;\n  public: GenericUniqueArray <GGS_location> mReferenceLocationArray ;\n  public: bool mIsDefined ;\n\n//--- Constructors\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const String & inKey,\n                                        const uint32_t inNodeID) ;\n\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) ;\n\n  public: void accumulateNodes (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" & outNodeList) const ;\n\n//--- Destructor\n  public: ~ GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- No copy\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroMyDelete (mInfPtr) ;\n  macroMyDelete (mSupPtr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nclass SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public SharedObject {\n//--------------------------------- Attributes\n  private: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mRoot ;\n  public: inline const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * root (void) const { return mRoot ; }\n  private: DirectedGraph mDirectedGraph ;\n  private: GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> mNodeArray ;\n\n//--- Constructor\n  public: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (LOCATION_ARGS) ;\n\n//--- Destructor\n  public: virtual ~ SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Count\n  public: inline uint32_t allNodeCount (void) const { return (uint32_t) mNodeArray.count () ; }\n\n//--- isNodeDefined\n  public: bool isNodeDefined (const String & inKey) const ;\n\n//--- locationForKey\n  public: GGS_location locationForKey (const String & inKey,\n                                          Compiler * inCompiler\n                                          COMMA_LOCATION_ARGS) const ;\n\n//--- Internal methods\n  public: void description (String & ioString,\n                            const int32_t inIndentation) const ;\n\n  public: void copyFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) ;\n\n  public: void copyReversedGraphFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) ;\n\n  public: int32_t graphCompare (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inOperand) const ;\n\n  public: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * findOrAddNodeForKey (const String & inKey) ;\n\n  protected: GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * internalInsert (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr,\n                                          const String & inKey,\n                                          bool & ioExtension) ;\n\n  public: void internalAddNode (const GGS_lstring & inKey,\n                                const char * inErrorMessage,\n                                const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (" & inElement,\n                                Compiler * inCompiler\n                                COMMA_LOCATION_ARGS) ;\n\n  public: void addEdge (const String & inSourceNodeKey,\n                        const GGS_location & inSourceNodeLocation,\n                        const String & inTargetNodeKey,\n                        const GGS_location & inTargetNodeLocation) ;\n\n  public: void removeEdgesToDominators (LOCATION_ARGS) ;\n\n  public: void removeEdgesToNode (const String & inNodeName,\n                                  Compiler * inCompiler\n                                  COMMA_LOCATION_ARGS) ;\n\n  public: void internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 98)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 99)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                        GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const ;\n\n\n  public: void internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 104)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                          GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 105)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 107)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 108)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 111)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const ;\n\n  public: void internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 113)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 114)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 115)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 116)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const ;\n\n  public: void subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                         const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 119)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                         const GGS_stringset & inNodesToExclude,\n                         Compiler * inCompiler\n                         COMMA_LOCATION_ARGS) const ;\n\n  public: void graph (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 124)).stringValue ()) ;
  result.appendString (" & outNodeList) const ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 126)).stringValue ()) ;
  result.appendString (" keyList (void) const ;\n\n  public: GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 128)).stringValue ()) ;
  result.appendString (" lkeyList (void) const ;\n\n  public: String getter_graphviz (void) const ;\n\n  public: void edges (GGS__32_stringlist & ioList) const ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: void checkGraph (LOCATION_ARGS) const ;\n  #endif\n\n//--- No copy\n  private: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nSharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (LOCATION_ARGS) :\nSharedObject (THERE),\nmRoot (nullptr),\nmDirectedGraph (),\nmNodeArray () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nSharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroMyDelete (mRoot) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Copy\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) :\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (inNode->mBalance),\nmKey (inNode->mKey),\nmNodeID (inNode->mNodeID),\nmElement (inNode->mElement),\nmDefinitionLocation (inNode->mDefinitionLocation),\nmReferenceLocationArray (),\nmIsDefined (inNode->mIsDefined) {\n  mReferenceLocationArray.setCapacity (inNode->mReferenceLocationArray.count ()) ;\n  for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {\n    mReferenceLocationArray.appendObject (inNode->mReferenceLocationArray (i COMMA_HERE)) ;\n  }\n  if (nullptr != inNode->mInfPtr) {\n    macroMyNew (mInfPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr)) ;\n  }\n  if (nullptr != inNode->mSupPtr) {\n    macroMyNew (mSupPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr)) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildNodeArray (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                            GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> & ioNodeArray) {\n  if (nullptr != inNode) {\n    macroAssert (ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) == nullptr, \"ioNodeArray (%lld COMMA_HERE) != nullptr\", inNode->mNodeID, 0) ;\n    ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) = inNode ;\n    buildNodeArray (inNode->mInfPtr, ioNodeArray) ;\n    buildNodeArray (inNode->mSupPtr, ioNodeArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copyFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inSource->mRoot)) ;\n    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, mNodeArray) ;\n    mDirectedGraph = inSource->mDirectedGraph ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkGraph (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                const int32_t /* inIndentation */) const {\n  ioString.appendCString (\" (\") ;\n  ioString.appendUnsigned (mDirectedGraph.nodeCount ()) ;\n  ioString.appendCString (\" node\") ;\n  ioString.appendCString ((mDirectedGraph.nodeCount () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\", \") ;\n  ioString.appendUnsigned (mDirectedGraph.edgeCount ()) ;\n  ioString.appendCString (\" edge\") ;\n  ioString.appendCString ((mDirectedGraph.edgeCount () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\")\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::checkGraph (LOCATION_ARGS) const {\n    GenericUniqueArray <GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> nodeArray (mNodeArray.count () COMMA_HERE) ;\n    nodeArray.appendObjects (mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, nodeArray) ;\n    macroAssertThere (nodeArray.count() == mNodeArray.count (), \"nodeArray.count() == %lld != mNodeArray.count () %lld\", nodeArray.count(), mNodeArray.count ()) ;\n    for (int32_t i=0 ; i<nodeArray.count() ; i++) {\n      macroAssertThere (nodeArray (i COMMA_HERE) == mNodeArray (i COMMA_HERE), \"nodeArray.(%lld) != mNodeArray.(%lld)\", i, i) ;\n      macroAssertThere (mDirectedGraph.isNodeDefined ((uint32_t) i), \"! mDirectedGraph.isNodeDefined (i) : %lld != 0\", i, 0) ;\n    }\n  }\n#endif\n\n//--------------------------------------------------------------------------------------------------\n//    GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedGraph (nullptr) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroDetachSharedObject (mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedGraph (nullptr) {\n  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeNewEmptyGraph (LOCATION_ARGS) {\n  macroMyNew (mSharedGraph, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t inIndentation) const {\n  ioString.appendCString (\"<graph @\") ;\n  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  if (isValid ()) {\n    mSharedGraph->description (ioString, inIndentation) ;\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nuint32_t GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::count () const {\n  uint32_t result = 0 ;\n  if (isValid ()) {\n    result = mSharedGraph->allNodeCount () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  return GGS_uint (count ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  macroDetachSharedObject (mSharedGraph) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::insulateGraph (LOCATION_ARGS) {\n  if ((mSharedGraph != nullptr) && !mSharedGraph->isUniquelyReferenced ()) {\n    SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n    macroMyNew (p, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n    p->copyFrom (mSharedGraph) ;\n    macroAssignSharedObject (mSharedGraph, p) ;\n    macroDetachSharedObject (p) ;\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_hasKey\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_isNodeDefined (const GGS_string & inKey\n                                                   COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = mSharedGraph->isNodeDefined (inKey.stringValue ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isNodeDefined (const String & inKey) const {\n  bool result = false ;\n  for (int32_t i=0 ; (i<mNodeArray.count ()) && !result ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    result = p->mIsDefined && (p->mKey == inKey) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_locationForKey\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_location GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_locationForKey (const GGS_string & inKey,\n                                                     Compiler * inCompiler\n                                                     COMMA_LOCATION_ARGS) const {\n  GGS_location result ;\n  if (isValid () && inKey.isValid ()) {\n    result = mSharedGraph->locationForKey (inKey.stringValue (), inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_location SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::locationForKey (const String & inKey,\n                                          Compiler * inCompiler\n                                          COMMA_LOCATION_ARGS) const {\n  GGS_location result ;\n  bool found = false ;\n  bool ok = false ;\n  for (int32_t i=0 ; (i<mNodeArray.count ()) && !found ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    found = p->mKey == inKey ;\n    if (found && p->mIsDefined) {\n      ok = true ;\n      result = p->mDefinitionLocation ;\n    }\n  }\n  if (!ok) {\n    inCompiler->emitSemanticError (\n      GGS_location (),\n      String (\"graph locationForKey: node '\") + inKey + String (\"' is undefined\"),\n      GenericArray <FixItDescription> ()\n      COMMA_THERE\n    ) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_keyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 413)).stringValue ()) ;
  result.appendString (" SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::keyList (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 414)).stringValue ()) ;
  result.appendString (" result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 414)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    result.plusPlusAssignOperation (mNodeArray (i COMMA_HERE)->mKey COMMA_HERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 423)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_keyList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_STRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 424)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = mSharedGraph->keyList () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_lkeyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 439)).stringValue ()) ;
  result.appendString (" SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::lkeyList (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 440)).stringValue ()) ;
  result.appendString (" result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 440)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mNodeArray (i COMMA_HERE) ;\n    GGS_location loc = p->mDefinitionLocation ;\n    if (! loc.isValid ()) {\n      loc = GGS_location::class_func_nowhere (HERE) ;\n    }\n    result.plusPlusAssignOperation (GGS_lstring (p->mKey, loc) COMMA_HERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 454)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_lkeyList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 455)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = mSharedGraph->lkeyList () ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark internalFindNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * findNode (const String & inKey,\n                                   const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) {\n  const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * result = nullptr ;\n  while ((nullptr != inNode) && (result == nullptr)) {\n    const int32_t r = inKey.compare (inNode->mKey) ;\n    if (r < 0) {\n      inNode = inNode->mInfPtr ;\n    }else if (r > 0) {\n      inNode = inNode->mSupPtr ;\n    }else{\n      result = inNode ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark graph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::accumulateNodes (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 494)).stringValue ()) ;
  result.appendString (" & outNodeList) const {\n  outNodeList.plusPlusAssignOperation (mElement COMMA_HERE) ;\n  if (mInfPtr != nullptr) {\n    mInfPtr->accumulateNodes (outNodeList) ;\n  }\n  if (mSupPtr != nullptr) {\n    mSupPtr->accumulateNodes (outNodeList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graph (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 506)).stringValue ()) ;
  result.appendString (" & outNodeList) const {\n  if (mRoot != nullptr) {\n    mRoot->accumulateNodes (outNodeList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 514)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graph (void) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 515)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    mSharedGraph->graph (result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark subGraph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                            const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 531)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                            const GGS_stringset & inNodesToExclude,\n                            Compiler * inCompiler\n                            COMMA_LOCATION_ARGS) const {\n//--- Build start node set\n  UInt32Set startNodeSet ;\n  UpEnumerator_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 537)).stringValue ()) ;
  result.appendString (" enumerator1 (inStartNodes) ;\n  while (enumerator1.hasCurrentObject ()) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = findNode (enumerator1.current (THERE).mProperty_string.stringValue(), root()) ;\n    if (nullptr == nodePtr) {\n      String message (\"subgraphFromNodes: '\") ;\n      message.appendString (enumerator1.current (THERE).mProperty_string.stringValue()) ;\n      message.appendCString (\"' is not a declared node, cannot start from it\") ;\n      inCompiler->emitSemanticError (\n        enumerator1.current (THERE).mProperty_location,\n        message,\n        GenericArray <FixItDescription> ()\n        COMMA_THERE\n      ) ;\n    }else{\n      startNodeSet.add (nodePtr->mNodeID) ;\n    }\n    enumerator1.gotoNextObject () ;\n  }\n//--- Build node to exclude set\n  UInt32Set nodesToExcludeSet ;\n  UpEnumerator_stringset enumerator2 (inNodesToExclude) ;\n  while (enumerator2.hasCurrentObject ()) {\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = findNode (enumerator2.current_key (THERE).stringValue(), root()) ;\n    if (nullptr == nodePtr) {\n      String message (\"subgraphFromNodes: '\") ;\n      message.appendString (enumerator2.current_key (THERE).stringValue()) ;\n      message.appendCString (\"' is not a declared node, cannot be excluded\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      nodesToExcludeSet.add (nodePtr->mNodeID) ;\n    }\n    enumerator2.gotoNextObject () ;\n  }\n//--- Build sub graph\n  const DirectedGraph theSubGraph = mDirectedGraph.subGraphFromNodes (\n    startNodeSet,\n    nodesToExcludeSet\n  ) ;\n//--- Enter nodes\n  GenericUniqueArray <uint32_t> nodeArray ; theSubGraph.getNodeValueArray (nodeArray) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_THERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_string = nodePtr->mKey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    outResultingGraph.internalAddNode (\n      lkey,\n      \"subgraphFromNodes Internal error\",\n      nodePtr->mElement,\n      inCompiler\n      COMMA_THERE\n    ) ;\n  }\n//--- Enter edges\n  GenericUniqueArray <GraphEdge> edgeArray ; theSubGraph.getEdges (edgeArray) ;\n  for (int32_t i=0 ; i<edgeArray.count () ; i++) {\n    const uint32_t sourceNodeIndex = edgeArray (i COMMA_HERE).mSource ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * sourceNodePtr = mNodeArray ((int32_t) sourceNodeIndex COMMA_THERE) ;\n    GGS_lstring source ;\n    source.mProperty_string = sourceNodePtr->mKey ;\n    source.mProperty_location = sourceNodePtr->mDefinitionLocation ;\n    const uint32_t targetNodeIndex = edgeArray (i COMMA_HERE).mTarget ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * targetNodePtr = mNodeArray ((int32_t) targetNodeIndex COMMA_THERE) ;\n    GGS_lstring target ;\n    target.mProperty_string = targetNodePtr->mKey ;\n    target.mProperty_location = targetNodePtr->mDefinitionLocation ;\n    outResultingGraph.setter_addEdge (source, target COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subGraph (GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outResultingGraph,\n                                const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 611)).stringValue ()) ;
  result.appendString (" & inStartNodes,\n                                const GGS_stringset & inNodesToExclude,\n                                Compiler * inCompiler\n                                COMMA_LOCATION_ARGS) const {\n  if (isValid () && inStartNodes.isValid () && inNodesToExclude.isValid ()) {\n    outResultingGraph.makeNewEmptyGraph (THERE) ;\n    mSharedGraph->subGraph (\n      outResultingGraph,\n      inStartNodes,\n      inNodesToExclude,\n      inCompiler\n      COMMA_THERE\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Reversed Graph\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copyReversedGraphFrom (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inSource->mRoot)) ;\n    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;\n    buildNodeArray (mRoot, mNodeArray) ;\n    mDirectedGraph = inSource->mDirectedGraph.reversedGraph () ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkGraph (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::reversedGraphFromGraph (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inGraph\n                                              COMMA_LOCATION_ARGS) {\n  macroDetachSharedObject (mSharedGraph) ;\n  if (inGraph.isValid ()) {\n    macroMyNew (mSharedGraph, SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n    mSharedGraph->copyReversedGraphFrom (inGraph.mSharedGraph) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Object Compare\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nint32_t SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::graphCompare (const SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inOperand) const {\n  const int32_t r = int32_t (allNodeCount ()) - int32_t (inOperand->allNodeCount ()) ;\n  return r ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const int32_t r = mSharedGraph->graphCompare (inOperand.mSharedGraph) ;\n    if (r < 0) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (r > 0) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Node Insertion\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void rotateLeft (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * b = ioRootPtr->mSupPtr ;\n  ioRootPtr->mSupPtr = b->mInfPtr ;\n  b->mInfPtr = ioRootPtr;\n\n  if (b->mBalance >= 0) {\n    ioRootPtr->mBalance += 1 ;\n  }else{\n    ioRootPtr->mBalance += 1 - b->mBalance ;\n  }\n\n  if (ioRootPtr->mBalance > 0) {\n    b->mBalance += ioRootPtr->mBalance + 1 ;\n  }else{\n    b->mBalance += 1 ;\n  }\n  ioRootPtr = b ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void rotateRight (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * b = ioRootPtr->mInfPtr ;\n  ioRootPtr->mInfPtr = b->mSupPtr ;\n  b->mSupPtr = ioRootPtr ;\n\n  if (b->mBalance > 0) {\n    ioRootPtr->mBalance += -b->mBalance - 1 ;\n  }else{\n    ioRootPtr->mBalance -= 1 ;\n  }\n  if (ioRootPtr->mBalance >= 0) {\n    b->mBalance -= 1 ;\n  }else{\n    b->mBalance += ioRootPtr->mBalance - 1 ;\n  }\n  ioRootPtr = b ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const String & inKey,\n                                                            const uint32_t inNodeID) :\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (0),\nmKey (inKey),\nmNodeID (inNodeID),\nmElement (),\nmDefinitionLocation (),\nmReferenceLocationArray (),\nmIsDefined (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalInsert (GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr,\n                                         const String & inKey,\n                                         bool & ioExtension) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * matchingEntry = nullptr ;\n  if (ioRootPtr == nullptr) {\n    macroMyNew (ioRootPtr, GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inKey, (uint32_t) mNodeArray.count ())) ;\n    mDirectedGraph.addNode ((uint32_t) mNodeArray.count ()) ;\n    mNodeArray.appendObject (ioRootPtr) ;\n    ioExtension = true ;\n    matchingEntry = ioRootPtr ;\n  }else{\n    macroValidPointer (ioRootPtr) ;\n    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;\n    if (comparaison > 0) {\n      matchingEntry = internalInsert (ioRootPtr->mInfPtr, inKey, ioExtension) ;\n      if (ioExtension) {\n        ioRootPtr->mBalance += 1 ;\n        if (ioRootPtr->mBalance == 0) {\n          ioExtension = false;\n        }else if (ioRootPtr->mBalance == 2) {\n          if (ioRootPtr->mInfPtr->mBalance == -1) {\n            rotateLeft (ioRootPtr->mInfPtr) ;\n          }\n          rotateRight (ioRootPtr) ;\n          ioExtension = false;\n        }\n      }\n    }else if (comparaison < 0) {\n      matchingEntry = internalInsert (ioRootPtr->mSupPtr, inKey, ioExtension) ;\n      if (ioExtension) {\n        ioRootPtr->mBalance-- ;\n        if (ioRootPtr->mBalance == 0) {\n          ioExtension = false ;\n        }else if (ioRootPtr->mBalance == -2) {\n          if (ioRootPtr->mSupPtr->mBalance == 1) {\n            rotateRight (ioRootPtr->mSupPtr) ;\n          }\n          rotateLeft (ioRootPtr) ;\n          ioExtension = false;\n        }\n      }\n    }else{ // Entry already exists\n      matchingEntry = ioRootPtr ;\n      ioExtension = false ;\n    }\n  }\n  return matchingEntry ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark internalAddNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nGraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::findOrAddNodeForKey (const String & inKey) {\n  bool extension = false ; // Unused here\n  return internalInsert (mRoot, inKey, extension) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalAddNode (const GGS_lstring & inKey,\n                                   const char * inErrorMessage,\n                                   const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 819)).stringValue ()) ;
  result.appendString (" & inElement,\n                                   Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = findOrAddNodeForKey (inKey.mProperty_string.stringValue ()) ;\n  if (!node->mIsDefined) { // Node exists, but is undefined\n    node->mElement = inElement ;\n    node->mDefinitionLocation = inKey.mProperty_location ;\n    node->mIsDefined = true ;\n  }else{ // Error : node redefinition\n    GGS_lstring existingKey ;\n    existingKey.mProperty_location = node->mDefinitionLocation ;\n    existingKey.mProperty_string = GGS_string (node->mKey) ;\n    inCompiler->semanticErrorWith_K_L_message (existingKey, inErrorMessage, inKey.mProperty_location COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalAddNode (const GGS_lstring & inKey,\n                                       const char * inErrorMessage,\n                                       const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 839)).stringValue ()) ;
  result.appendString (" & inElement,\n                                       Compiler * inCompiler\n                                       COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid () && inElement.isValid ()) {\n    insulateGraph (THERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->internalAddNode (inKey, inErrorMessage, inElement, inCompiler COMMA_THERE) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark modifier noteNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_noteNode (const GGS_lstring & inKey\n                                       COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    insulateGraph (THERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = (nullptr == mSharedGraph)\n      \? nullptr\n      : mSharedGraph->findOrAddNodeForKey (inKey.mProperty_string.stringValue ())\n    ;\n    if (nullptr != node) {\n      node->mReferenceLocationArray.appendObject (inKey.mProperty_location) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier addEdge\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addEdge (const String & inSourceNodeKey,\n                           const GGS_location & inSourceNodeLocation,\n                           const String & inTargetNodeKey,\n                           const GGS_location & inTargetNodeLocation) {\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * sourceNode = findOrAddNodeForKey (inSourceNodeKey) ;\n  macroValidPointer (sourceNode) ;\n  GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * targetNode = findOrAddNodeForKey (inTargetNodeKey) ;\n  macroValidPointer (targetNode) ;\n  sourceNode->mReferenceLocationArray.appendObject (inSourceNodeLocation) ;\n  targetNode->mReferenceLocationArray.appendObject (inTargetNodeLocation) ;\n  mDirectedGraph.addEdge (sourceNode->mNodeID, targetNode->mNodeID) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_addEdge (const GGS_lstring & inSourceNodeKey,\n                                      const GGS_lstring & inTargetNodeKey\n                                      COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inSourceNodeKey.isValid () && inTargetNodeKey.isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->addEdge (inSourceNodeKey.mProperty_string.stringValue (),\n                             inSourceNodeKey.mProperty_location,\n                             inTargetNodeKey.mProperty_string.stringValue (),\n                             inTargetNodeKey.mProperty_location) ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      mSharedGraph->checkGraph (HERE) ;\n    #endif\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Output graphviz text\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nString SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_graphviz (void) const {\n  GenericUniqueArray <String> nodeNameArray ;\n  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {\n    nodeNameArray.appendObject (mNodeArray (i COMMA_HERE)->mKey) ;\n  }\n  return mDirectedGraph.graphvizString (nodeNameArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_string GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_graphviz (UNUSED_LOCATION_ARGS) const {\n  GGS_string result ;\n  if (isValid ()) {\n    result = GGS_string (mSharedGraph->getter_graphviz ()) ;\n  }\n  return result ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Output arc list\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::edges (GGS__32_stringlist & ioList) const {\n  GenericUniqueArray <GraphEdge> edgeArray ; mDirectedGraph.getEdges (edgeArray) ;\n  for (int32_t i=0 ; i<edgeArray.count () ; i++) {\n    const GraphEdge edge = edgeArray (i COMMA_HERE) ;\n    ioList.addAssignOperation (\n      mNodeArray ((int32_t) edge.mSource COMMA_HERE)->mKey,\n      mNodeArray ((int32_t) edge.mTarget COMMA_HERE)->mKey\n      COMMA_HERE\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS__32_stringlist GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_edges (LOCATION_ARGS) const {\n  GGS__32_stringlist result ;\n  if (isValid ()) {\n    result = GGS__32_stringlist::init (nullptr COMMA_THERE) ;\n    mSharedGraph->edges (result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeCount\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void countUndefinedNodeCount (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode, uint32_t & ioCount) {\n  if (nullptr != inNode) {\n    countUndefinedNodeCount (inNode->mInfPtr, ioCount) ;\n    if (! inNode->mIsDefined) {\n      ioCount += 1 ;\n    }\n    countUndefinedNodeCount (inNode->mSupPtr, ioCount) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeCount (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    result = GGS_uint (undefinedNodeCount) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeKeyList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildUndefinedNodeKeyList (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode, GGS__5B_string_5D_ & ioResult) {\n  if (nullptr != inNode) {\n    buildUndefinedNodeKeyList (inNode->mInfPtr, ioResult) ;\n    if (!inNode->mIsDefined) {\n      ioResult.plusPlusAssignOperation (GGS_string (inNode->mKey) COMMA_HERE) ;\n    }\n    buildUndefinedNodeKeyList (inNode->mSupPtr, ioResult) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS__5B_string_5D_ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeKeyList (LOCATION_ARGS) const {\n  GGS__5B_string_5D_ result ;\n  if (isValid ()) {\n    result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;\n    buildUndefinedNodeKeyList (mSharedGraph->root (), result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Find circularities\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1047)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1048)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesInvolvedInCircularities (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1052)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalFindCircularities (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1066)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                 GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1067)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                 COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalFindCircularities (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Nodes with no predecessor\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1083)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1084)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoPredecessor (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1088)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoPredecessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1102)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                      GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1103)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                      COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalNodesWithNoPredecessor (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Nodes with no successor\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1119)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1120)).stringValue ()) ;
  result.appendString (" & outNodeKeyList) const {\n  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoSuccessor (nodeArray) ;\n//--- Add nodes\n  outInfoList.removeAll () ;\n  outNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1124)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<nodeArray.count () ; i++) {\n    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalNodesWithNoSuccessor (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1138)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                                                    GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1139)).stringValue ()) ;
  result.appendString (" & outNodeKeyList\n                                                    COMMA_UNUSED_LOCATION_ARGS) const {\n  outNodeKeyList.drop () ;\n  if (isValid ()) {\n    mSharedGraph->internalNodesWithNoSuccessor (outInfoList, outNodeKeyList) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Breath First Topological sort\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1155)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1156)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1157)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                           GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1158)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const {\n  GenericUniqueArray <uint32_t> sortedNodes ;\n  GenericUniqueArray <uint32_t> unsortedNodes ;\n  mDirectedGraph.topologicalSort (sortedNodes, unsortedNodes) ;\n//--- Add sorted nodes\n  outSortedList.removeAll () ;\n  outSortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1164)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n//--- Add unsorted nodes\n  outUnsortedList.removeAll () ;\n  outUnsortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1176)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1190)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1191)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1192)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                               GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1193)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                               Compiler * inCompiler\n                                               COMMA_LOCATION_ARGS) const {\n  outSortedNodeKeyList.drop () ;\n  outUnsortedNodeKeyList.drop () ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    if (0 != undefinedNodeCount) {\n      String s (\"Cannot apply graph topologicalSort: there \") ;\n      if (undefinedNodeCount > 1) {\n        s.appendCString (\"are \") ;\n        s.appendUnsigned (undefinedNodeCount) ;\n        s.appendCString (\" undefined nodes\") ;\n      }else{\n        s.appendCString (\"is 1 undefined node\") ;\n      }\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n    }else{\n      mSharedGraph->internalTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Depth First Topological sort\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1225)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1226)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1227)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                     GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1228)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList) const {\n  GenericUniqueArray <uint32_t> sortedNodes ;\n  GenericUniqueArray <uint32_t> unsortedNodes ;\n  mDirectedGraph.depthFirstTopologicalSort (sortedNodes, unsortedNodes) ;\n//--- Add sorted nodes\n  outSortedList.removeAll () ;\n  outSortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1234)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n//--- Add unsorted nodes\n  outUnsortedList.removeAll () ;\n  outUnsortedNodeKeyList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1246)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_HERE) ;\n  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {\n    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;\n    const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;\n    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;\n    GGS_lstring lkey ;\n    lkey.mProperty_location = nodePtr->mDefinitionLocation ;\n    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;\n    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalDepthFirstTopologicalSort (GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1260)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1261)).stringValue ()) ;
  result.appendString (" & outSortedNodeKeyList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1262)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                                                         GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1263)).stringValue ()) ;
  result.appendString (" & outUnsortedNodeKeyList,\n                                                         Compiler * inCompiler\n                                                         COMMA_LOCATION_ARGS) const {\n  outSortedNodeKeyList.drop () ;\n  outUnsortedNodeKeyList.drop () ;\n  if (isValid ()) {\n    uint32_t undefinedNodeCount = 0 ;\n    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;\n    if (0 != undefinedNodeCount) {\n      String s (\"Cannot apply graph topologicalSort: there \") ;\n      if (undefinedNodeCount > 1) {\n        s.appendCString (\"are \") ;\n        s.appendUnsigned (undefinedNodeCount) ;\n        s.appendCString (\" undefined nodes\") ;\n      }else{\n        s.appendCString (\"is 1 undefined node\") ;\n      }\n      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n    }else{\n      mSharedGraph->internalDepthFirstTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark getter_undefinedNodeReferenceList\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void buildUndefinedNodeReferenceList (const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                             GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1296)).stringValue ()) ;
  result.appendString (" & ioResult) {\n  if (nullptr != inNode) {\n    buildUndefinedNodeReferenceList (inNode->mInfPtr, ioResult) ;\n    if (!inNode->mIsDefined) {\n      GGS_lstring lkey ;\n      lkey.mProperty_string = GGS_string (inNode->mKey) ;\n      for (int32_t i=0 ; i < inNode->mReferenceLocationArray.count () ; i++) {\n        lkey.mProperty_location = inNode->mReferenceLocationArray (i COMMA_HERE) ;\n        ioResult.plusPlusAssignOperation (lkey COMMA_HERE) ;\n      }\n    }\n    buildUndefinedNodeReferenceList (inNode->mSupPtr, ioResult) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1313)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_undefinedNodeReferenceList (LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1314)).stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1316)).stringValue ()) ;
  result.appendString ("::init (nullptr COMMA_THERE) ;\n    buildUndefinedNodeReferenceList (mSharedGraph->root (), result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier removeEdgesToNode\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeEdgesToNode (const GGS_string & inNodeName,\n                                                Compiler * inCompiler\n                                                COMMA_LOCATION_ARGS) {\n  if (isValid () && inNodeName.isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->removeEdgesToNode (inNodeName.stringValue (), inCompiler COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::removeEdgesToNode (const String & inNodeName,\n                                     Compiler * inCompiler\n                                     COMMA_LOCATION_ARGS) {\n//--- Find node\n  const GraphNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * node = findNode (inNodeName, mRoot) ;\n  if (nullptr == node) {\n    String s (\"graph removeEdgesToNode: node '\") ;\n    s.appendString (inNodeName) ;\n    s.appendCString (\"' does not exist\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const uint32_t nodeIndex = node->mNodeID ;\n    mDirectedGraph.removeEdgesToNode (nodeIndex COMMA_HERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Modifier removeEdgesToDominators\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeEdgesToDominators (LOCATION_ARGS) {\n  if (isValid ()) {\n    insulateGraph (HERE) ;\n    macroAssert (nullptr != mSharedGraph, \"mSharedGraph == nullptr\", 0, 0) ;\n    if (nullptr != mSharedGraph) {\n      mSharedGraph->removeEdgesToDominators (THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid SharedGraph_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::removeEdgesToDominators (LOCATION_ARGS) {\n//--- Find start nodes\n  GenericUniqueArray <uint32_t> startNodes ; mDirectedGraph.getNodesWithNoPredecessor (startNodes) ;\n//--- Add a dummy start node for handling case where there several start nodes\n  const uint32_t dummyNodeIndex = mDirectedGraph.unusedNodeIndex () ;\n//--- Add edges from dummy node to start nodes\n  for (int32_t i=0 ; i<startNodes.count () ; i++) {\n    mDirectedGraph.addEdge (dummyNodeIndex, startNodes (i COMMA_HERE)) ;\n  }\n//--- Remove edge to dominator\n  mDirectedGraph.removeEdgesToDominator (THERE) ;\n//--- Remove dummy node\n  mDirectedGraph.removeNode (dummyNodeIndex) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyGraph (THERE) ;\n  return result ;\n}\n\n") ;
  GGS_uint index_59180_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    UpEnumerator__5B_graphInsertModifier_5D_ enumerator_59180 (in_INSERT_5F_MODIFIER_5F_LIST) ;
    while (enumerator_59180.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_59180.current_entry (HERE).readProperty_mInsertModifierName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1406)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inKey,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ELEMENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1407)).stringValue ()) ;
      result.appendString (" inElement,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const char * kErrorMessage = ") ;
      result.appendString (enumerator_59180.current_entry (HERE).readProperty_mInsertErrorMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1410)).stringValue ()) ;
      result.appendString (" ;\n  internalAddNode (inKey, kErrorMessage, inElement, inCompiler COMMA_THERE) ;\n}\n") ;
      enumerator_59180.gotoNextObject () ;
      index_59180_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_topologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1418)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1419)).stringValue ()) ;
  result.appendString (" & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1420)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1421)).stringValue ()) ;
  result.appendString (" & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1424)).stringValue ()) ;
  result.appendString (" sortedList ;\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1425)).stringValue ()) ;
  result.appendString (" unsortedList ;\n  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1427)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1428)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_depthFirstTopologicalSort (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1433)).stringValue ()) ;
  result.appendString (" & outSortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1434)).stringValue ()) ;
  result.appendString (" & outSortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1435)).stringValue ()) ;
  result.appendString (" & outUnsortedList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1436)).stringValue ()) ;
  result.appendString (" & outUnsortedKeyList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1439)).stringValue ()) ;
  result.appendString (" sortedList ;\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1440)).stringValue ()) ;
  result.appendString (" unsortedList ;\n  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n  outSortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1442)).stringValue ()) ;
  result.appendString (" (sortedList) ;\n  outUnsortedList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1443)).stringValue ()) ;
  result.appendString (" (unsortedList) ;\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_reversedGraph (LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_circularities (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1457)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1458)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1460)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1462)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoSuccessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1467)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1468)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1470)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1472)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_nodesWithNoPredecessor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1477)).stringValue ()) ;
  result.appendString (" & outInfoList,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1478)).stringValue ()) ;
  result.appendString (" & outKeyList\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1480)).stringValue ()) ;
  result.appendString (" infoList ;\n  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n  outInfoList = GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1482)).stringValue ()) ;
  result.appendString (" (infoList) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subgraphFromNodes (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1487)).stringValue ()) ;
  result.appendString (" & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inKeysToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1498)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1499)).stringValue ()) ;
  result.appendString (" resultingList ;\n  if (isValid ()) {\n    resultingList = graph () ;\n  }\n  return resultingList ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1508)).stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_accessibleNodesFrom (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1508)).stringValue ()) ;
  result.appendString (" & inStartKeyList,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_stringset & inNodesToExclude,\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_LSTRING_5F_ARRAY_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 1512)).stringValue ()) ;
  result.appendString (" result ;\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" resultingGraph ;\n  subGraph (resultingGraph,\n            inStartKeyList,\n            inNodesToExclude,\n            inCompiler\n            COMMA_THERE) ;\n  if (resultingGraph.isValid ()) {\n    result = resultingGraph.getter_lkeyList (THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

