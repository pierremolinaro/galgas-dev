#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-20.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                         const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                         const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                         const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap var_lexicalTypeMap_31930 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 839)) ;
  GGS_lexicalAttributeMap var_lexicalAttributeMap_31997 = GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_31930, temp_0.readProperty_mLexicalAttributeListAST (), var_lexicalAttributeMap_31997, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 841)) ;
  }
  GGS_terminalMap var_terminalMap_32194 = GGS_terminalMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  UpEnumerator_terminalDeclarationListAST enumerator_32235 (temp_1.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_32235.hasCurrentObject ()) {
    GGS_lexicalSentValueList var_argumentTypeList_32274 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_32344 (enumerator_32235.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_32344.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_32430 ;
      var_lexicalAttributeMap_31997.method_searchKey (enumerator_32344.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_32430, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 851)) ;
      var_argumentTypeList_32274.plusPlusAssignOperation (GGS_lexicalSentValueList_2E_element::init_21__21__21_ (enumerator_32344.current (HERE).readProperty_mFormalSelector (), enumerator_32344.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_32430, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 852)) ;
      enumerator_32344.gotoNextObject () ;
    }
    {
    var_terminalMap_32194.setter_insertKey (enumerator_32235.current (HERE).readProperty_mName (), var_argumentTypeList_32274, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 854)) ;
    }
    enumerator_32235.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_2 = this ;
  UpEnumerator_lexicalListDeclarationListAST enumerator_32664 (temp_2.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_32664.hasCurrentObject ()) {
    GGS_lexicalSentValueList var_argumentTypeList_32706 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_32779 (enumerator_32664.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_32779.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_32865 ;
      var_lexicalAttributeMap_31997.method_searchKey (enumerator_32779.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_32865, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 860)) ;
      var_argumentTypeList_32706.plusPlusAssignOperation (GGS_lexicalSentValueList_2E_element::init_21__21__21_ (enumerator_32779.current (HERE).readProperty_mFormalSelector (), enumerator_32779.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_32865, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 861)) ;
      enumerator_32779.gotoNextObject () ;
    }
    UpEnumerator_lexicalListEntryListAST enumerator_33027 (enumerator_32664.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_33027.hasCurrentObject ()) {
      {
      var_terminalMap_32194.setter_insertKey (enumerator_33027.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_32706, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 864)) ;
      }
      enumerator_33027.gotoNextObject () ;
    }
    enumerator_32664.gotoNextObject () ;
  }
  {
  const GGS_lexiqueComponentAST temp_3 = this ;
  const GGS_lexiqueComponentAST temp_4 = this ;
  const GGS_lexiqueComponentAST temp_5 = this ;
  const GGS_lexiqueComponentAST temp_6 = this ;
  const GGS_lexiqueComponentAST temp_7 = this ;
  const GGS_lexiqueComponentAST temp_8 = this ;
  const GGS_lexiqueComponentAST temp_9 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), temp_4.readProperty_mIsTemplate (), var_terminalMap_32194, temp_5.readProperty_mIndexingListAST (), temp_6.readProperty_mTerminalDeclarationListAST (), temp_7.readProperty_mLexicalAttributeListAST (), temp_8.readProperty_mLexicalStyleListAST (), temp_9.readProperty_mLexicalListDeclarationListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 868)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                        const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                        const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                        GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_34233 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 891)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_34233, var_nameForUsefulness_34233, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 892)) ;
  }
  GGS_lexicalTypeMap var_lexicalTypeMap_34484 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 894)) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_34622 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_34622, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 896)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_34741 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_34741, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 898)) ;
  }
  GGS_stringset var_unicodeTestFunctions_34868 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_34868, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 900)) ;
  }
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_34961 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_1.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_34622, var_lexicalFunctionMap_34741, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS_terminalList::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS_templateDelimitorList::init (inCompiler COMMA_HERE), GGS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_34868, inCompiler COMMA_HERE) ;
  GGS_bigint var_styleIndex_35364 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 917)) ;
  const GGS_lexiqueComponentAST temp_2 = this ;
  UpEnumerator_lexicalStyleListAST enumerator_35404 (temp_2.readProperty_mLexicalStyleListAST ()) ;
  while (enumerator_35404.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_34961.mProperty_mStyleMap.setter_insertKey (enumerator_35404.current (HERE).readProperty_mName (), enumerator_35404.current (HERE).readProperty_mComment (), var_styleIndex_35364.getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 919)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 919)) ;
    }
    var_styleIndex_35364.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 920)), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 920)) ;
    enumerator_35404.gotoNextObject () ;
  }
  {
  const GGS_lexiqueComponentAST temp_3 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_34484, temp_3.readProperty_mLexicalAttributeListAST (), var_lexiqueAnalysisContext_34961.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 923)) ;
  }
  const GGS_lexiqueComponentAST temp_4 = this ;
  UpEnumerator_terminalDeclarationListAST enumerator_35842 (temp_4.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_35842.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_35887 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_35842.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 931)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_lstring joker_36022 ; // Joker input parameter
        var_lexiqueAnalysisContext_34961.readProperty_mStyleMap ().method_searchKey (enumerator_35842.current (HERE).readProperty_mStyle (), joker_36022, var_terminalStyleIndex_35887, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 932)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_36063 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_36137 (enumerator_35842.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_36137.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_36251 ;
      var_lexiqueAnalysisContext_34961.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_36137.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_36251, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 936)) ;
      var_argumentTypeList_36063.plusPlusAssignOperation (GGS_lexicalSentValueList_2E_element::init_21__21__21_ (enumerator_36137.current (HERE).readProperty_mFormalSelector (), enumerator_36137.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_36251, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 937)) ;
      enumerator_36137.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_34961.mProperty_mTerminalMap.setter_insertKey (enumerator_35842.current (HERE).readProperty_mName (), var_argumentTypeList_36063, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 939)) ;
    }
    var_lexiqueAnalysisContext_34961.mProperty_mTerminalList.plusPlusAssignOperation (GGS_terminalList_2E_element::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_35842.current (HERE).readProperty_mName (), var_argumentTypeList_36063, enumerator_35842.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string (), enumerator_35842.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_35842.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 945)), var_terminalStyleIndex_35887, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 940)) ;
    enumerator_35842.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_6 = this ;
  UpEnumerator_lexicalListDeclarationListAST enumerator_36794 (temp_6.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_36794.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_36842 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::greaterThan, enumerator_36794.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 951)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_lstring joker_36983 ; // Joker input parameter
        var_lexiqueAnalysisContext_34961.readProperty_mStyleMap ().method_searchKey (enumerator_36794.current (HERE).readProperty_mStyle (), joker_36983, var_terminalStyleIndex_36842, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 952)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_37024 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_37101 (enumerator_36794.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_37101.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_37215 ;
      var_lexiqueAnalysisContext_34961.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_37101.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_37215, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 956)) ;
      var_argumentTypeList_37024.plusPlusAssignOperation (GGS_lexicalSentValueList_2E_element::init_21__21__21_ (enumerator_37101.current (HERE).readProperty_mFormalSelector (), enumerator_37101.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_37215, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 957)) ;
      enumerator_37101.gotoNextObject () ;
    }
    GGS_lexicalExplicitTokenListMap var_lexicalTokenListMap_37393 = GGS_lexicalExplicitTokenListMap::init (inCompiler COMMA_HERE) ;
    GGS_tokenSortedlist var_tokenSortedlist_37427 = GGS_tokenSortedlist::init (inCompiler COMMA_HERE) ;
    UpEnumerator_lexicalListEntryListAST enumerator_37494 (enumerator_36794.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_37494.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_37518 = enumerator_36794.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_37494.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 962)) ;
      var_lexiqueAnalysisContext_34961.mProperty_mTerminalList.plusPlusAssignOperation (GGS_terminalList_2E_element::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_37494.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_37024, var_syntaxErrorMessage_37518, enumerator_37494.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_37494.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 968)), var_terminalStyleIndex_36842, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 963)) ;
      {
      var_lexiqueAnalysisContext_34961.mProperty_mTerminalMap.setter_insertKey (enumerator_37494.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_37024, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 971)) ;
      }
      {
      var_lexicalTokenListMap_37393.setter_insertKey (enumerator_37494.current (HERE).readProperty_mEntrySpelling (), enumerator_37494.current (HERE).readProperty_mTerminalSpelling (), enumerator_37494.current (HERE).readProperty_nonAtomicSelection (), enumerator_37494.current (HERE).readProperty_isEndOfTemplateMark (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 972)) ;
      }
      var_tokenSortedlist_37427.plusPlusAssignOperation (GGS_tokenSortedlist_2E_element::init_21__21__21_ (enumerator_37494.current (HERE).readProperty_mEntrySpelling ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 978)), enumerator_37494.current (HERE).readProperty_mEntrySpelling ().readProperty_string (), enumerator_37494.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 978)) ;
      var_lexiqueAnalysisContext_34961.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_37494.current (HERE).readProperty_mEntrySpelling ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 979)) ;
      enumerator_37494.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_34961.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_36794.current (HERE).readProperty_mName (), var_lexicalTokenListMap_37393, var_tokenSortedlist_37427, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 981)) ;
    }
    enumerator_36794.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_8 = this ;
  UpEnumerator_lexicalMessageDeclarationListAST enumerator_38671 (temp_8.readProperty_mLexicalMessageDeclarationListAST ()) ;
  while (enumerator_38671.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_34961.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_38671.current (HERE).readProperty_mMessageName (), enumerator_38671.current (HERE).readProperty_mMessageValue (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 985)) ;
    }
    enumerator_38671.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_9 = this ;
  UpEnumerator_lexicalRuleListAST enumerator_38912 (temp_9.readProperty_mLexicalRuleListAST ()) ;
  while (enumerator_38912.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((cPtr_abstractLexicalRuleAST *) enumerator_38912.current (HERE).readProperty_mLexicalRule ().ptr (), var_lexiqueAnalysisContext_34961, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 989)) ;
    enumerator_38912.gotoNextObject () ;
  }
  UpEnumerator_lexicalMessageMap enumerator_39112 (var_lexiqueAnalysisContext_34961.readProperty_mLexicalMessageMap ()) ;
  while (enumerator_39112.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = enumerator_39112.current (HERE).readProperty_mMessageIsUsed ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 993)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_39112.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("unused message"), fixItArray11  COMMA_SOURCE_FILE ("lexique-component.galgas4", 994)) ;
      }
    }
    enumerator_39112.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_12 = this ;
  UpEnumerator_templateDelimitorListAST enumerator_39320 (temp_12.readProperty_mTemplateDelimitorListAST ()) ;
  while (enumerator_39320.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_34961.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_39320.current (HERE).readProperty_mStartString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 999)) ;
    var_lexiqueAnalysisContext_34961.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_39320.current (HERE).readProperty_mEndString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 1000)) ;
    var_lexiqueAnalysisContext_34961.mProperty_mTemplateDelimitorList.plusPlusAssignOperation (GGS_templateDelimitorList_2E_element::init_21__21__21_ (enumerator_39320.current (HERE).readProperty_mStartString (), enumerator_39320.current (HERE).readProperty_mEndString (), enumerator_39320.current (HERE).readProperty_mPreserved (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 1001)) ;
    enumerator_39320.gotoNextObject () ;
  }
  GGS_stringset var_indexNameSet_39703 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_13 = this ;
  UpEnumerator_indexingListAST enumerator_39742 (temp_13.readProperty_mIndexingListAST ()) ;
  while (enumerator_39742.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_indexNameSet_39703.getter_contains (enumerator_39742.current (HERE).readProperty_mIndexName ().readProperty_string () COMMA_SOURCE_FILE ("lexique-component.galgas4", 1005)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_39742.current (HERE).readProperty_mIndexName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_39742.current (HERE).readProperty_mIndexName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 1006)).add_operation (GGS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 1006)), fixItArray15  COMMA_SOURCE_FILE ("lexique-component.galgas4", 1006)) ;
      }
    }
    var_indexNameSet_39703.plusPlusAssignOperation (enumerator_39742.current (HERE).readProperty_mIndexName ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 1008)) ;
    enumerator_39742.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_16 = this ;
  UpEnumerator_templateReplacementListAST enumerator_40056 (temp_16.readProperty_mTemplateReplacementListAST ()) ;
  while (enumerator_40056.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_34961.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_40056.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 1012)) ;
    var_lexiqueAnalysisContext_34961.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_40056.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 1013)) ;
    enumerator_40056.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("lexique-component.galgas4", 1017)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_lexiqueComponentAST temp_18 = this ;
      const GGS_lexiqueComponentAST temp_19 = this ;
      const GGS_lexiqueComponentAST temp_20 = this ;
      const GGS_lexiqueComponentAST temp_21 = this ;
      GGS_string var_headerContents_40427 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (inCompiler, temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas4", 1020)), temp_19.readProperty_mLexicalListDeclarationListAST (), var_lexiqueAnalysisContext_34961, temp_20.readProperty_mTemplateDelimitorListAST (), temp_21.readProperty_mIndexingListAST () COMMA_SOURCE_FILE ("lexique-component.galgas4", 1019))) ;
      const GGS_lexiqueComponentAST temp_22 = this ;
      const GGS_lexiqueComponentAST temp_23 = this ;
      const GGS_lexiqueComponentAST temp_24 = this ;
      const GGS_lexiqueComponentAST temp_25 = this ;
      const GGS_lexiqueComponentAST temp_26 = this ;
      const GGS_lexiqueComponentAST temp_27 = this ;
      const GGS_lexiqueComponentAST temp_28 = this ;
      GGS_string var_cppContents_40729 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (inCompiler, temp_22.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas4", 1028)), extensionGetter_useLoopLocalVar (temp_23.readProperty_mLexicalRuleListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 1029)), var_lexiqueAnalysisContext_34961.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_34961.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_34961.readProperty_mTerminalList (), var_lexiqueAnalysisContext_34961.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_34961.readProperty_mUnicodeStringToGenerate (), temp_24.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_34961, temp_25.readProperty_mTemplateDelimitorListAST (), temp_26.readProperty_mLexiqueComponentName ().readProperty_string (), temp_27.readProperty_mTemplateReplacementListAST (), temp_28.readProperty_mLexicalStyleListAST () COMMA_SOURCE_FILE ("lexique-component.galgas4", 1027))) ;
      const GGS_lexiqueComponentAST temp_29 = this ;
      const GGS_lexiqueComponentAST temp_30 = this ;
      const GGS_lexiqueComponentAST temp_31 = this ;
      const GGS_lexiqueComponentAST temp_32 = this ;
      const GGS_lexiqueComponentAST temp_33 = this ;
      const GGS_lexiqueComponentAST temp_34 = this ;
      const GGS_lexiqueComponentAST temp_35 = this ;
      GGS_string var_swiftUIImplementation_41434 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_swiftUIImplementationZone_32_ (inCompiler, GGS_string ("lexique-").add_operation (temp_29.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas4", 1044)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 1044)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 1044)), temp_30.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_34961.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_34961.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_34961.readProperty_mTerminalList (), var_lexiqueAnalysisContext_34961.readProperty_mUnicodeStringToGenerate (), temp_31.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_34961, temp_32.readProperty_mTemplateReplacementListAST (), temp_33.readProperty_mIndexingListAST (), temp_34.readProperty_mLexicalStyleListAST (), temp_35.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas4", 1043))) ;
      const GGS_lexiqueComponentAST temp_36 = this ;
      const GGS_lexiqueComponentAST temp_37 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_lexiqueDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("lexique-").add_operation (temp_36.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas4", 1061)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 1061)), temp_37.readProperty_mLexiqueComponentName ().readProperty_string (), GGS_string::makeEmptyString (), var_headerContents_40427, var_cppContents_40729, var_swiftUIImplementation_41434, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 1058)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates headerZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (Compiler * inCompiler,
                                                                          const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                          const GGS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                          const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                          const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                          const GGS_indexingListAST & in_INDEXING_5F_LIST
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    R O U T I N E S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_654_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    UpEnumerator_lexicalRoutineMap enumerator_654 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ()) ;
    while (enumerator_654.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_654.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("\nvoid scanner_routine_") ;
        result.appendString (enumerator_654.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GGS_uint index_873_ (0) ;
        if (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          UpEnumerator_lexicalRoutineFormalArgumentList enumerator_873 (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE)) ;
          while (enumerator_873.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (extensionGetter_cppTypeName (enumerator_873.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (extensionGetter_cppReferenceInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_873.current_mArgumentNameForComment (HERE).stringValue ()) ;
            enumerator_873.gotoNextObject () ;
            index_873_.increment () ;
          }
        }
        GGS_uint index_1226_ (0) ;
        if (enumerator_654.current_mErrorMessageList (HERE).isValid ()) {
          UpEnumerator_stringlist enumerator_1226 (enumerator_654.current_mErrorMessageList (HERE)) ;
          while (enumerator_1226.hasCurrentObject ()) {
            result.appendString (",\n                const char * ") ;
            result.appendString (enumerator_1226.current_mValue (HERE).stringValue ()) ;
            enumerator_1226.gotoNextObject () ;
            index_1226_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_654.gotoNextObject () ;
      index_654_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    F U N C T I O N S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_1712_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    UpEnumerator_lexicalFunctionMap enumerator_1712 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ()) ;
    while (enumerator_1712.hasCurrentObject ()) {
      const GalgasBool test_1 = enumerator_1712.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1712.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" scanner_function_") ;
        result.appendString (enumerator_1712.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GGS_uint index_1907_ (0) ;
        if (enumerator_1712.current_mLexicalTypeList (HERE).isValid ()) {
          UpEnumerator_lexicalFunctionFormalArgumentList enumerator_1907 (enumerator_1712.current_mLexicalTypeList (HERE)) ;
          while (enumerator_1907.hasCurrentObject ()) {
            result.appendString (",\n                const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1907.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1907.current_mArgumentNameForComment (HERE).stringValue ()) ;
            enumerator_1907.gotoNextObject () ;
            index_1907_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1712.gotoNextObject () ;
      index_1712_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cToken {\n") ;
  GGS_uint index_2424_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_2424 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_2424.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_2424.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2424.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2424.gotoNextObject () ;
      index_2424_.increment () ;
    }
  }
  result.appendString ("\n  public: cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public Lexique {\n//--- Constructors\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GGS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static proc\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) { }\n  #endif\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 80)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n\n//--- Terminal symbols enumeration\n  public: const static int32_t kToken_ = 0 ;\n") ;
  GGS_uint index_4095_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_4095 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_4095.hasCurrentObject ()) {
      result.appendString ("  public: static const int32_t kToken_") ;
      result.appendString (enumerator_4095.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_4095_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_4095.gotoNextObject () ;
      index_4095_idx.increment () ;
    }
  }
  GGS_uint index_4321_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    UpEnumerator_lexicalListDeclarationListAST enumerator_4321 (in_DELIMITOR_5F_LIST_5F_LIST) ;
    while (enumerator_4321.hasCurrentObject ()) {
      result.appendString ("\n//--- Key words table '") ;
      result.appendString (enumerator_4321.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'\n  public: static int32_t search_into_") ;
      result.appendString (enumerator_4321.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) ;\n") ;
      enumerator_4321.gotoNextObject () ;
      index_4321_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Assign from attribute\n") ;
  GGS_uint index_4585_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_4585 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_4585.hasCurrentObject ()) {
      result.appendString ("  public: GGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_4585.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" synthetizedAttribute_") ;
      result.appendString (enumerator_4585.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      enumerator_4585.gotoNextObject () ;
      index_4585_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Attribute access\n") ;
  GGS_uint index_4856_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_4856 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_4856.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_4856.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" attributeValue_") ;
      result.appendString (enumerator_4856.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      enumerator_4856.gotoNextObject () ;
      index_4856_.increment () ;
    }
  }
  result.appendString ("\n\n//--- indexing keys\n") ;
  GGS_uint index_5057_idx (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    UpEnumerator_indexingListAST enumerator_5057 (in_INDEXING_5F_LIST) ;
    while (enumerator_5057.hasCurrentObject ()) {
      result.appendString ("public: static const uint32_t kIndexing_") ;
      result.appendString (enumerator_5057.current_mIndexName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_5057_idx.getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_5057.gotoNextObject () ;
      index_5057_idx.increment () ;
    }
  }
  result.appendString ("\n//--- Parse lexical token\n  protected: void internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) ;\n  protected: virtual bool parseLexicalToken (void) override ;\n\n//--- Get terminal message\n  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;\n\n//--- Get terminal count\n  public: virtual int32_t terminalVocabularyCount (void) const override { return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 125)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 125)).stringValue ()) ;
  result.appendString (" ; }\n\n//--- Get Token String\n  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;\n\n//--- Enter Token\n  protected: void enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) ;\n\n//--- Style name for Latex\n  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;\n  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (Compiler * inCompiler,
                                                                                            const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                            const GGS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                            const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                            const GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                            const GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                            const GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                            const GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                            const GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                            const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                            const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                            const GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                            const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                            const GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E                                                                             \n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"utf32.h\"\n#include \"scanner_actions.h\"\n#include \"LexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void)") ;
  GGS_uint index_634_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_634 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    const bool nonEmpty_enumerator_634 = enumerator_634.hasCurrentObject () ;
    if (nonEmpty_enumerator_634) {
      result.appendString (" :\n") ;
    }
    while (enumerator_634.hasCurrentObject ()) {
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_634.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_634.gotoNextObject () ;
      if (enumerator_634.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_634_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceFileName\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique (inCallerCompiler, inSourceFileName COMMA_THERE)") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
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
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                        Lexical error message list                                             \n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_2068_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalMessageMap enumerator_2068 (in_LEXICAL_5F_MESSAGE_5F_MAP) ;
    while (enumerator_2068.hasCurrentObject ()) {
      result.appendString ("\nstatic const char * gLexicalMessage_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2068.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_2068.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2068.gotoNextObject () ;
      index_2068_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                getMessageForTerminal                                                          \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getMessageForTerminal (const int32_t inTerminalIndex) const {\n  String result = \"<unknown>\" ;\n  if ((inTerminalIndex >= 0) && (inTerminalIndex < ") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue ()) ;
  result.appendString (")) {\n    static const char * syntaxErrorMessageArray [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue ()) ;
  result.appendString ("] = {kEndOfSourceLexicalErrorMessage") ;
  GGS_uint index_2931_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_2931 (in_TERMINAL_5F_LIST) ;
    while (enumerator_2931.hasCurrentObject ()) {
      result.appendString (",\n        ") ;
      result.appendString (enumerator_2931.current_mSyntaxErrorMessage (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 64)).stringValue ()) ;
      enumerator_2931.gotoNextObject () ;
      index_2931_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = syntaxErrorMessageArray [inTerminalIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S                                           \n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_3454_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    UpEnumerator_stringset enumerator_3454 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES) ;
    while (enumerator_3454.hasCurrentObject ()) {
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_3454.current_key (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_3454.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3454.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_3454.current_key (HERE).getter_utf_33__32_Representation (GGS_bool (false) COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3454.gotoNextObject () ;
      index_3454_.increment () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_3903_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_3903 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_3903.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//             Key words table '") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'      \n//--------------------------------------------------------------------------------------------------\n\nstatic const int32_t ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_3903.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).stringValue ()) ;
      result.appendString (" ;\n\nstatic const C_unicode_lexique_table_entry ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" [ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("] = {\n") ;
      GGS_uint index_4594_ (0) ;
      if (enumerator_3903.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_4594 (enumerator_3903.current_mTokenSortedList (HERE)) ;
        while (enumerator_4594.hasCurrentObject ()) {
          result.appendString ("  C_unicode_lexique_table_entry (kUnicodeString_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4594.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (", Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("::kToken_") ;
          result.appendString (enumerator_4594.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (")") ;
          enumerator_4594.gotoNextObject () ;
          if (enumerator_4594.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_4594_.increment () ;
        }
      }
      result.appendString ("\n} ;\n\nint32_t Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::search_into_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) {\n  return searchInList (inSearchedString, ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3903.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      enumerator_3903.gotoNextObject () ;
      index_3903_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                          getCurrentTokenString                                                \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getCurrentTokenString (const cToken * inTokenPtr) const {\n  const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = (const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inTokenPtr ;\n  String s ;\n  if (ptr == nullptr) {\n    s.appendCString (\"$$\") ;\n  }else{\n    switch (ptr->mTokenCode) {\n    case kToken_:\n      s.appendCString (\"$$\") ;\n      break ;\n") ;
  GGS_uint index_5941_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_5941 (in_TERMINAL_5F_LIST) ;
    while (enumerator_5941.hasCurrentObject ()) {
      result.appendString ("    case kToken_") ;
      result.appendString (enumerator_5941.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 115)).stringValue ()) ;
      result.appendString (":\n      s.appendChar (utf32 ('$')) ;\n      s.appendCString (") ;
      result.appendString (enumerator_5941.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (") ;\n      s.appendChar (utf32 ('$')) ;\n") ;
      GGS_uint index_6290_ (0) ;
      if (enumerator_5941.current_mSentAttributeList (HERE).isValid ()) {
        UpEnumerator_lexicalSentValueList enumerator_6290 (enumerator_5941.current_mSentAttributeList (HERE)) ;
        while (enumerator_6290.hasCurrentObject ()) {
          result.appendString ("      s.appendChar (utf32 (' ')) ;\n      s.") ;
          result.appendString (extensionGetter_appendMethodName (enumerator_6290.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (" (ptr->mLexicalAttribute_") ;
          result.appendString (enumerator_6290.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (extensionGetter_appendArgumentOfMethod (enumerator_6290.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_6290.gotoNextObject () ;
          index_6290_.increment () ;
        }
      }
      result.appendString ("      break ;\n") ;
      enumerator_5941.gotoNextObject () ;
      index_5941_.increment () ;
    }
  }
  result.appendString ("    default:\n      break ;\n    }\n  }\n  return s ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters                                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_7149_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    UpEnumerator_templateDelimitorList enumerator_7149 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
    const bool nonEmpty_enumerator_7149 = enumerator_7149.hasCurrentObject () ;
    if (nonEmpty_enumerator_7149) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_7149.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_7149.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_7149.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_7149.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_7149.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_7149.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_7149.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_7149.gotoNextObject () ;
      if (enumerator_7149.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_7149_.increment () ;
    }
    if (nonEmpty_enumerator_7149) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements                                               \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_8150_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    UpEnumerator_templateReplacementListAST enumerator_8150 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
    const bool nonEmpty_enumerator_8150 = enumerator_8150.hasCurrentObject () ;
    if (nonEmpty_enumerator_8150) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_8150.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8150.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8150.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8150.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8150.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_8150.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_8150.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", true)") ;
      enumerator_8150.gotoNextObject () ;
      if (enumerator_8150.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_8150_.increment () ;
    }
    if (nonEmpty_enumerator_8150) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_5 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    GGS_uint index_9296_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      UpEnumerator_terminalList enumerator_9296 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
      const bool nonEmpty_enumerator_9296 = enumerator_9296.hasCurrentObject () ;
      if (nonEmpty_enumerator_9296) {
        result.appendString ("static const bool ") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_kEndOfScriptInTemplateArray [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_9296.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_9296.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_9296.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        enumerator_9296.gotoNextObject () ;
        if (enumerator_9296.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_9296_.increment () ;
      }
      if (nonEmpty_enumerator_9296) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               INTERNAL PARSE LEXICAL TOKEN                                         \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) {\n") ;
  const GalgasBool test_6 = in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  bool loop = true ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_9934_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_9934 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_9934.hasCurrentObject ()) {
      result.appendString ("  token.mLexicalAttribute_") ;
      result.appendString (enumerator_9934.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (extensionGetter_initialization (enumerator_9934.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9934.gotoNextObject () ;
      index_9934_.increment () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n  try{\n") ;
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  GGS_uint index_10155_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalRuleListAST enumerator_10155 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_10155.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateLexicalRuleCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10155.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 200)).stringValue ()) ;
      enumerator_10155.gotoNextObject () ;
      index_10155_.increment () ;
    }
  }
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  result.appendString ("if (testForInputUTF32Char (utf32 ('\\0'))) { // End of source text \? \n      token.mTokenCode = kToken_ ; // Empty string code\n    }else{ // Unknown input character\n      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n      token.mTokenCode = -1 ; // No token\n      advance () ; // ... go throught unknown character\n    }\n  }catch (const C_lexicalErrorException &) {\n    token.mTokenCode = -1 ; // No token\n    advance () ; // ... go throught unknown character\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N                                         \n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\\0')) {\n") ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0)\n     && (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n     && (mCurrentChar.u32 () != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                               true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar.u32 () != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray, ") ;
    result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).stringValue ()) ;
    result.appendString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.appendString (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                                kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendChar (previousChar ()) ;\n            }\n            ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray, ") ;
    result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).stringValue ()) ;
    result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mCurrentChar.u32 () != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  ") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("    internalParseLexicalToken (token) ;") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  }\n  if (mCurrentChar.u32 () == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         E N T E R    T O K E N                                                \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = nullptr ;\n  macroMyNew (ptr, cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ()) ;\n  ptr->mTokenCode = ioToken.mTokenCode ;\n  ptr->mStartLocation = mTokenStartLocation ;\n  ptr->mEndLocation = mTokenEndLocation ;\n  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n  ioToken.mTemplateStringBeforeToken = \"\" ;\n") ;
  GGS_uint index_14549_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_14549 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_14549.hasCurrentObject ()) {
      result.appendString ("  ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14549.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" = ioToken.mLexicalAttribute_") ;
      result.appendString (enumerator_14549.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_14549.gotoNextObject () ;
      index_14549_.increment () ;
    }
  }
  result.appendString ("  enterTokenFromPointer (ptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//               A T T R I B U T E   A C C E S S                                                 \n") ;
  GGS_uint index_14979_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_14979 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_14979.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_14979.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::attributeValue_") ;
      result.appendString (enumerator_14979.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  return ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14979.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_14979.gotoNextObject () ;
      index_14979_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//         A S S I G N    F R O M    A T T R I B U T E                                           \n") ;
  GGS_uint index_15684_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_15684 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_15684.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15684.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::synthetizedAttribute_") ;
      result.appendString (enumerator_15684.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  macroValidSharedObject (ptr, cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n  GGS_") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15684.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (" value (ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_15684.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (") ;\n  GGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15684.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).stringValue ()) ;
      result.appendString (" result (value, currentLocation) ;\n  return result ;\n}\n\n") ;
      enumerator_15684.gotoNextObject () ;
      index_15684_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N                                             \n//--------------------------------------------------------------------------------------------------\n\n GGS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;\n") ;
  GGS_uint index_17165_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_17165 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_17165.hasCurrentObject ()) {
      result.appendString ("  result.addAssignOperation (GGS_string (") ;
      result.appendString (enumerator_17165.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      enumerator_17165.gotoNextObject () ;
      index_17165_.increment () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GenericUniqueArray <String> & ") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 334)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
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
  GGS_uint index_17678_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_17678 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_17678.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).add_operation (enumerator_17678.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).stringValue ()) ;
      result.appendString (") ;\n") ;
      enumerator_17678.gotoNextObject () ;
      index_17678_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
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
  const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 345)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
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
  const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 346)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_11) {
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
  GGS_uint index_18391_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_18391 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_18391.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).add_operation (enumerator_18391.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GGS_uint index_18588_ (0) ;
      if (enumerator_18391.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_18588 (enumerator_18391.current_mTokenSortedList (HERE)) ;
        while (enumerator_18588.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_18588.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_18588.gotoNextObject () ;
          index_18588_.increment () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      enumerator_18391.gotoNextObject () ;
      index_18391_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic LexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n//--------------------------------------------------------------------------------------------------\n\nuint32_t Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n  static const uint32_t kTerminalSymbolStyles [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GGS_uint index_19683_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_19683 (in_TERMINAL_5F_LIST) ;
    while (enumerator_19683.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_19683.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_19683.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" */") ;
      enumerator_19683.gotoNextObject () ;
      index_19683_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleNameForIndex (const uint32_t inStyleIndex) const {\n  String result ;\n  if (inStyleIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).stringValue ()) ;
  result.appendString (") {\n    static const char * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).stringValue ()) ;
  result.appendString ("] = {\n      \"\"") ;
  GGS_uint index_20519_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_20519 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_20519.hasCurrentObject ()) {
      result.appendString (",\n      ") ;
      result.appendString (enumerator_20519.current_mName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 388)).stringValue ()) ;
      enumerator_20519.gotoNextObject () ;
      index_20519_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inStyleIndex] ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftUIImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftUIImplementationZone_32_ (Compiler * inCompiler,
                                                                                         const GGS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                         const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                         const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                         const GGS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                         const GGS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                         const GGS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                         const GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                         const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                         const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                         const GGS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                         const GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                         const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   LEXIQUE ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n\nstruct SettingViewFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mUnused = false\n\n  @AppStorage(\"FontFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n\n  @AppStorage(\"LineHeightFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mLineHeight : Int = 12\n\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mDefaultColor : Color = .black\n\n") ;
  GGS_uint index_929_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_929 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_929.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(\"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_929.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mColorFor_") ;
      result.appendString (enumerator_929.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Color = .black\n\n  @AppStorage(\"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_929.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mBoldFor_") ;
      result.appendString (enumerator_929.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_929.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mItalicFor_") ;
      result.appendString (enumerator_929.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n") ;
      enumerator_929.gotoNextObject () ;
      index_929_.increment () ;
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
  GGS_uint index_2825_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_2825 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_2825.hasCurrentObject ()) {
      result.appendString ("      LabeledContent (") ;
      result.appendString (enumerator_2825.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_") ;
      result.appendString (enumerator_2825.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (").labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_") ;
      result.appendString (enumerator_2825.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n          Toggle (\"Italic\", isOn: self.$mItalicFor_") ;
      result.appendString (enumerator_2825.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n        }\n      }\n") ;
      enumerator_2825.gotoNextObject () ;
      index_2825_.increment () ;
    }
  }
  result.appendString ("      LabeledContent (\"Lexical Error\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_lexical_error).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_lexical_error)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_lexical_error)\n        }\n      }\n      LabeledContent (\"Template\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_template).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_template)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_template)\n        }\n      }\n    }.padding (20)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\nclass ScannerFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : AbstractScanner {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mDebug = false\n  private let mVerboseDebug = false\n  private var mTokenArray = [LexicalToken] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override func popUpDefinitionList () -> [[UInt16]] {\n    return gPopUpData_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override func lineComment () -> String\? {\n    return gLineComment_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,\n                                granularity inGranularity : NSSelectionGranularity,\n                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {\n    var result = inTextViewComputedRange\n    switch inGranularity {\n    case .selectByCharacter :\n      ()\n    case .selectByWord :\n      var found = false\n      var idx = 0\n      while idx < self.mTokenArray.count, !found {\n        let token = self.mTokenArray [idx]\n        idx += 1\n        let tokenRange = token.range\n        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)\n           && (tokenRange.location <= inProposedSelectionRange.location)\n        if found, self.atomicSelectionFor (token: token.tokenCode) {\n          result = tokenRange\n        }\n      }\n    case .selectByParagraph :\n      var found = false\n      var idx = 0\n      while idx < self.mTokenArray.count, !found {\n        let token = self.mTokenArray [idx]\n        idx += 1\n        let tokenRange = token.range\n        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)\n           && (tokenRange.location <= inProposedSelectionRange.location)\n        if found {\n          result = tokenRange\n        }\n      }\n    @unknown default:\n      ()\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Scanner\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_6459_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_6459 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_6459.hasCurrentObject ()) {
      result.appendString ("  private var mLexicalAttribute_") ;
      result.appendString (enumerator_6459.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_6459.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 171)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_6459.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 171)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_6459.gotoNextObject () ;
      index_6459_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func lexiqueIdentifier () -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func isTemplateLexique () -> Bool {\n    return ") ;
  result.appendString (GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 183)).objectCompare (GGS_uint (uint32_t (0U)))).getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 183)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func terminalVocabularyCount () -> Int {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 189)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 189)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {\n    let kTerminalSymbolStyles : [UInt8] = [\n      0, // Default\n") ;
  GGS_uint index_7540_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_7540 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_7540.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_7540.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 199)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_7540_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 199)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 199)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_7540.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 199)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_7540.gotoNextObject () ;
      index_7540_idx.increment () ;
    }
  }
  result.appendString ("      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 201)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 201)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 201)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 201)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 201)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 201)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 202)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 202)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 202)).stringValue ()) ;
  result.appendString ("  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 202)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 202)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 202)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalSymbolStyles [Int (inTokenIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {\n    let kTerminalAtomicSelection : [Bool] = [\n      false, // Default\n") ;
  GGS_uint index_8369_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_8369 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_8369.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_8369.current_atomicSelection (HERE).getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 214)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_8369_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 214)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 214)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_8369.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 214)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_8369.gotoNextObject () ;
      index_8369_idx.increment () ;
    }
  }
  result.appendString ("      false, // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 216)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 216)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 216)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      false  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 217)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 217)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 217)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalAtomicSelection [Int (inTokenIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func indexingTitles () -> [String] {\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 226)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("    return [\n") ;
    GGS_uint index_9065_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      UpEnumerator_indexingListAST enumerator_9065 (in_INDEXING_5F_LIST) ;
      while (enumerator_9065.hasCurrentObject ()) {
        result.appendString ("      ") ;
        result.appendString (enumerator_9065.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 230)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_9065.current_mIndexName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        enumerator_9065.gotoNextObject () ;
        if (enumerator_9065.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_9065_.increment () ;
      }
    }
    result.appendString ("\n    ]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("\n    return []\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  S T Y L E S\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleCount () -> UInt8 {\n    return ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 247)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 247)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleNameFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex: inIndex)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex: inIndex)\n  }\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n  final var mLineHeight : Int = 12\n  final var mDefaultColor : Color = .black\n") ;
  GGS_uint index_10342_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_10342 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_10342.hasCurrentObject ()) {
      result.appendString ("  final var mColorFor_") ;
      result.appendString (enumerator_10342.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Color = .black\n  final var mBoldFor_") ;
      result.appendString (enumerator_10342.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n  final var mItalicFor_") ;
      result.appendString (enumerator_10342.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n") ;
      enumerator_10342.gotoNextObject () ;
      index_10342_.increment () ;
    }
  }
  result.appendString ("  final var mColorFor_lexical_error : Color = .red\n  final var mBoldFor_lexical_error : Bool = false\n  final var mItalicFor_lexical_error : Bool = false\n  final var mColorFor_template : Color = .gray\n  final var mBoldFor_template : Bool = false\n  final var mItalicFor_template : Bool = false\n  final var mTokenAttributeArray = [[NSAttributedString.Key : Any]\?] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {\n    ioStyleDidChange = false\n    let ud = UserDefaults.standard\n    if let s = ud.string (forKey: \"FontFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = CustomFont (rawValue: s) {\n      if self.mFont != v {\n        self.mFont = v\n        ioStyleDidChange = true\n      }\n    }\n    if let s = ud.string (forKey: \"LineHeightFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = Int (s) {\n      if self.mLineHeight != v {\n        self.mLineHeight = v\n        ioStyleDidChange = true\n      }\n    }\n    if let s = ud.string (forKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = Color (rawValue: s) {\n      if self.mDefaultColor != v {\n        self.mDefaultColor = v\n        ioStyleDidChange = true\n      }\n    }\n") ;
  GGS_uint index_11777_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_11777 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_11777.hasCurrentObject ()) {
      result.appendString ("    if let s = ud.string (forKey: \"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"), let v = Color (rawValue: s) {\n      if self.mColorFor_") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mColorFor_") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mBoldFor_") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mBoldFor_") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mItalicFor_") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mItalicFor_") ;
      result.appendString (enumerator_11777.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n") ;
      enumerator_11777.gotoNextObject () ;
      index_11777_.increment () ;
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
  GGS_uint index_14850_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_14850 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_14850.hasCurrentObject ()) {
      result.appendString ("    //--- Attributes for ") ;
      result.appendString (enumerator_14850.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n      if self.mColorFor_") ;
      result.appendString (enumerator_14850.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_") ;
      result.appendString (enumerator_14850.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n      }\n      if self.mBoldFor_") ;
      result.appendString (enumerator_14850.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" && self.mItalicFor_") ;
      result.appendString (enumerator_14850.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_") ;
      result.appendString (enumerator_14850.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_") ;
      result.appendString (enumerator_14850.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n") ;
      enumerator_14850.gotoNextObject () ;
      index_14850_.increment () ;
    }
  }
  result.appendString ("    //--- Lexical error\n      if self.mColorFor_lexical_error != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)\n      }\n      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_lexical_error {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_lexical_error {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n    //--- Template\n      if self.mColorFor_template != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_template)\n      }\n      if self.mBoldFor_template && self.mItalicFor_template {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_template {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_template {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {\n    if self.mDebug { Swift.print (\"performLexicalColoringAfterUserDefaultChange\") }\n    let start = Date ()\n    var styleDidChange = false\n    self.updateTokenStyleArrays (&styleDidChange)\n    if styleDidChange {\n      let nsString = inTextStorage.string as NSString\n      let fullRange = NSRange (location: 0, length: nsString.length)\n    //---- Apply default attributes\n      let tsDelegate : (any NSTextStorageDelegate)\? = inTextStorage.delegate\n      inTextStorage.delegate = nil // NSTextStorageDelegate\n      inTextStorage.beginEditing ()\n      let defaultFont = self.mFont.nsFont\n      inTextStorage.font = defaultFont\n      let ps = NSMutableParagraphStyle ()\n      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0\n      let defaultAttributes : [NSAttributedString.Key : Any] = [\n        .font: defaultFont,\n        .foregroundColor: NSColor (self.mDefaultColor),\n        .paragraphStyle : ps\n      ]\n      inTextStorage.setAttributes (defaultAttributes, range: fullRange)\n    //--- Apply styles\n      for token in self.mTokenArray {\n        let idx = Int (self.styleIndexFor (token: token.tokenCode))\n        if idx > 0, idx < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [idx - 1] {\n          inTextStorage.addAttributes (attributes, range: token.range)\n        }\n      }\n      inTextStorage.endEditing ()\n      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate\n    }\n    if self.mDebug { Swift.print (\"  done: \\(Int (Date ().timeIntervalSince (start) * 1000.0)) ms\") }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,\n                                                   editedRange inEditedRange : NSRange,\n                                                   changeInLength inDelta : Int,\n                                                   popMenuItems ioPopupMenuItems : inout [IdentifiableAttributedString]) {\n    if self.mDebug { Swift.print (\"performLexicalAnalysisAndColoring \\(inEditedRange), delta \\(inDelta)\") }\n    let nsString = inTextStorage.string as NSString\n  //---\n    var savedTokenCount = 0\n    var found = false\n    while savedTokenCount < self.mTokenArray.count, !found {\n      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {\n        savedTokenCount += 1\n      }else{\n        found = true\n      }\n    }\n    if self.mDebug { Swift.print (\"  savedTokenCount \\(savedTokenCount), currently \\(self.mTokenArray.count) tokens\") }\n  //--- Eliminate tokens beyond end of source string\n    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {\n      if self.mVerboseDebug { Swift.print (\"Remove last token \\(lastToken.range), beyond end\") }\n      _ = self.mTokenArray.removeLast ()\n    }\n    if self.mDebug { Swift.print (\"  Eliminate token beyond end: \\(self.mTokenArray.count) tokens\") }\n  //--- Translater les tokens suivants\n    var i = savedTokenCount + 1\n    while i < self.mTokenArray.count {\n      let token = self.mTokenArray [i]\n      let newToken = LexicalToken (\n        range: NSRange (location: token.range.location + inDelta, length: token.range.length),\n        tokenCode: token.tokenCode,\n        templateDelimiterIndex: token.templateDelimiterIndex\n      )\n      self.mTokenArray [i] = newToken\n      i += 1\n    }\n  //--- Eliminate tokens beyond end of source string\n    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {\n      if self.mVerboseDebug { Swift.print (\"Remove last token \\(lastToken.range), beyond end\") }\n      _ = self.mTokenArray.removeLast ()\n    }\n    if self.mDebug { Swift.print (\"  Eliminate token beyond end, after delta correction: \\(self.mTokenArray.count) tokens\") }\n  //--- Perform lexical analysis\n    let start = Date ()\n    if savedTokenCount == 0 {\n      self.resetScannerLocation (withString: nsString)\n    }else{\n      self.resetScanner (\n        withString: nsString,\n        location: self.mTokenArray [savedTokenCount-1].range.upperBound,\n        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex\n      )\n    }\n    if self.mDebug { Swift.print (\"  Scanning start location: \\(self.currentLocation)\") }\n    var stop = false\n    var insertionIndex = savedTokenCount\n    while self.currentLocation < nsString.length, !stop {\n      let token : LexicalToken = self.parseLexicalTokenForLexicalColoring ()\n      if token.tokenCode > 0 { // For eliminating separators\n        if self.mVerboseDebug { Swift.print (\"  -> new token \\(token.range) '\\(nsString.substring (with: token.range))'\") }\n      //--- Eliminate previous tokens before new token location\n        if insertionIndex < self.mTokenArray.count,\n              self.mTokenArray [insertionIndex] == token,\n              token.range.location > inEditedRange.upperBound {\n          if self.mVerboseDebug { Swift.print (\"    stop at \\(insertionIndex)\") }\n          stop = true\n        }else{\n          while insertionIndex < self.mTokenArray.count,\n                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {\n            if self.mVerboseDebug { Swift.print (\"    remove token \\(self.mTokenArray [insertionIndex].range) at \\(insertionIndex)\") }\n            self.mTokenArray.remove (at: insertionIndex)\n          }\n          if insertionIndex == self.mTokenArray.count {\n            if self.mVerboseDebug { Swift.print (\"    append token \\(token.range) at \\(insertionIndex)\") }\n            self.mTokenArray.append (token)\n            insertionIndex += 1\n          }else{\n            if self.mVerboseDebug {  Swift.print (\"    insert token \\(token.range) at \\(insertionIndex)\") }\n            self.mTokenArray.insert (token, at: insertionIndex)\n            insertionIndex += 1\n          }\n        }\n      }\n    }\n    if self.mDebug { Swift.print (\"  Lexical analysis time: \\(Int (Date ().timeIntervalSince (start) * 1000.0)) ms\") }\n  //---- Apply default attributes\n    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0)\n      \? 0\n      : self.mTokenArray [savedTokenCount - 1].range.upperBound)\n    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)\n       \? nsString.length\n       : self.mTokenArray [insertionIndex].range.upperBound\n    )\n    if self.mDebug { Swift.print (\"  Attributes will change from char index \\(modificationStart) to \\(modificationEnd)\") }\n    let start2 = Date ()\n    if modificationStart < modificationEnd {\n      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)\n      let tsDelegate : (any NSTextStorageDelegate)\? = inTextStorage.delegate\n      inTextStorage.delegate = nil // NSTextStorageDelegate\n      inTextStorage.beginEditing ()\n      let defaultFont = self.mFont.nsFont\n      let ps = NSMutableParagraphStyle ()\n      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0\n      let defaultAttributes : [NSAttributedString.Key : Any] = [\n        .font: defaultFont,\n        .foregroundColor: NSColor (self.mDefaultColor),\n        .paragraphStyle : ps\n      ]\n      if self.mVerboseDebug { Swift.print (\"Apply default attributes \\(modifiedRange)\") }\n      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)\n    //--- Apply styles\n      var idx = 0\n      stop = false\n      while idx < self.mTokenArray.count, !stop { // Apply token styles\n        let token = self.mTokenArray [idx]\n        idx += 1\n        if token.range.lowerBound >= modifiedRange.upperBound {\n          stop = true\n        }else if token.range.upperBound > modifiedRange.lowerBound {\n          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))\n          if styleIndex > 0, styleIndex < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [styleIndex - 1] {\n            inTextStorage.addAttributes (attributes, range: token.range)\n          }\n        }\n      }\n      inTextStorage.endEditing ()\n      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate\n    }\n    if self.mDebug { Swift.print (\"  Adding attributes: \\(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms\") }\n    ioPopupMenuItems = self.updateEntryPopUpButtons (self.mTokenArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func parseLexicalTokenForLexicalColoring () -> LexicalToken {\n    var loop = true\n    var scanningOk = true\n") ;
  GGS_uint index_25599_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_25599 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_25599.hasCurrentObject ()) {
      result.appendString ("    self.mLexicalAttribute_") ;
      result.appendString (enumerator_25599.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_25599.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 594)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_25599.gotoNextObject () ;
      index_25599_.increment () ;
    }
  }
  result.appendString ("    var tokenCode : UInt16 = 0\n    let startLocation = self.currentLocation\n") ;
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 599)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 599)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 599)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 599)).uintValue ())) ;
  }
  GGS_uint index_25836_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalRuleListAST enumerator_25836 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_25836.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateSwiftCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_25836.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 601)).stringValue ()) ;
      enumerator_25836.gotoNextObject () ;
      index_25836_.increment () ;
    }
  }
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 599)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 599)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 599)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 599)).uintValue ())) ;
  }
  result.appendString ("if self.testForInputChar (0) { // End of source text \?\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n    }else{ // Unknown input character\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n      self.advance ()\n    }\n    return LexicalToken (\n      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n      tokenCode: tokenCode,\n      templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n") ;
  GGS_uint index_26669_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_26669 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ()) ;
    while (enumerator_26669.hasCurrentObject ()) {
      const GalgasBool test_1 = enumerator_26669.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//             Key words table '") ;
        result.appendString (enumerator_26669.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//--------------------------------------------------------------------------------------------------\n\nfileprivate let kDictionary_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 626)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_26669.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : [String : UInt16] = [\n") ;
        GGS_uint index_27219_ (0) ;
        if (enumerator_26669.current_mTokenSortedList (HERE).isValid ()) {
          UpEnumerator_tokenSortedlist enumerator_27219 (enumerator_26669.current_mTokenSortedList (HERE)) ;
          while (enumerator_27219.hasCurrentObject ()) {
            result.appendString ("  ") ;
            result.appendString (enumerator_27219.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 628)).stringValue ()) ;
            result.appendString (" : ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_27219.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 628)).stringValue ()) ;
            enumerator_27219.gotoNextObject () ;
            if (enumerator_27219.hasCurrentObject ()) {
              result.appendString (",\n") ;
            }
            index_27219_.increment () ;
          }
        }
        result.appendString ("\n]\n\nfileprivate func search_into_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 632)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_26669.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (_ inSearchedString : String) -> UInt16 {\n  return kDictionary_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 633)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_26669.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" [inSearchedString, default: ") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
        result.appendString ("_1_]\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_26669.gotoNextObject () ;
      index_26669_.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"Default Style\", // 0\n") ;
  GGS_uint index_28222_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_28222 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_28222.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_28222.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 652)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_28222_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 652)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 652)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_28222.gotoNextObject () ;
      index_28222_idx.increment () ;
    }
  }
  result.appendString ("    \"Lexical error\", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 654)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 654)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 654)).stringValue ()) ;
  result.appendString ("\n    \"Template\" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 655)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 655)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 655)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\", // 0\n") ;
  GGS_uint index_28789_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_28789 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_28789.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 666)).add_operation (enumerator_28789.current_mName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 666)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 666)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_28789_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 666)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 666)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_28789.gotoNextObject () ;
      index_28789_idx.increment () ;
    }
  }
  result.appendString ("    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string (".ERROR"), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 668)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 668)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 668)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 668)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 668)).stringValue ()) ;
  result.appendString ("\n    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string (".TEMPLATE"), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 669)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 669)).stringValue ()) ;
  result.appendString (" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 669)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 669)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 669)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 678)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 679)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GGS_uint index_29707_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_29707 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_29707.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_29707.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 682)).stringValue ()) ;
        enumerator_29707.gotoNextObject () ;
        if (enumerator_29707.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_29707_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 692)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 693)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GGS_uint index_30353_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_30353 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
      while (enumerator_30353.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_30353.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 696)).stringValue ()) ;
        result.appendString (", endString: ") ;
        result.appendString (enumerator_30353.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 696)).stringValue ()) ;
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_30353.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 697)).getter_cString (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 697)).stringValue ()) ;
        result.appendString (")") ;
        enumerator_30353.gotoNextObject () ;
        if (enumerator_30353.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_30353_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//--------------------------------------------------------------------------------------------------\n\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ : UInt16 = 0\n") ;
  GGS_uint index_31015_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_31015 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_31015.hasCurrentObject ()) {
      result.appendString ("let ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_31015.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 711)).stringValue ()) ;
      result.appendString (" : UInt16 = ") ;
      result.appendString (index_31015_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 711)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 711)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_31015.gotoNextObject () ;
      index_31015_idx.increment () ;
    }
  }
  result.appendString ("let ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 713)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 713)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 713)).stringValue ()) ;
  result.appendString ("\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 714)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 714)).getter_string (SOURCE_FILE ("lexique_swiftui_implementation.swift.galgasTemplate", 714)).stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  GGS_lexicalSentValueList joker_8238 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_8238, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 200)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 208)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalOrExpressionAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 222)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 223)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterSetMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_lexicalCharacterSetMatchAST temp_1 = this ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ().getter_contains (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 237)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas4", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterSetMatchAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GGS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 238)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStringMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 252)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStringNotMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 259)) ;
  {
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 260)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_11853 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11853, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 277)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_11853.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11853, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 284)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 283)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 284)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 285)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 286)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 283)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 298)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 299)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 301)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 300)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 301)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 299)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas4", 313)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal character has @uint").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 314)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 316)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 315)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 316)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 314)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                            const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 328)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 329)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 331)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 330)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 331)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 329)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14516 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_14548 ;
  GGS_string var_replacementFunctionName_14584 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_14613 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_14516, var_returnedLexicalFormalType_14548, var_replacementFunctionName_14584, joker_14613, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 343)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_14584.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_14584, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 352)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 352)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 352)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_14548.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_14548, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 357)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 356)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 357)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 359)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 358)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 359)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 356)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_14516.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 364)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 364)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 366)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 366)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 365)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 366)).add_operation (var_lexicalFormalTypeList_14516.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 368)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 368)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 367)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 368)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 365)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator_lexicalFunctionFormalArgumentList enumerator_15599 (var_lexicalFormalTypeList_14516) ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_15637 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_15599.hasCurrentObject () && enumerator_15637.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_15637.current (HERE).readProperty_mLexicalActualInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_15599.current (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 373)) ;
    enumerator_15599.gotoNextObject () ;
    enumerator_15637.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_16704 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_16704, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 394)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_16704.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_16704, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 401)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 400)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 401)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 403)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 402)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 403)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 400)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 415)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 416)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 418)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 417)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 418)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 416)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas4", 430)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal unsigned value has @uint").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 431)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 433)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 432)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 433)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 431)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                           const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 445)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 446)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 448)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 447)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 448)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 446)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19370 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_19402 ;
  GGS_string var_replacementFunctionName_19438 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_19467 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_19370, var_returnedLexicalFormalType_19402, var_replacementFunctionName_19438, joker_19467, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 460)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_19438.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19438, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 469)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 469)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 469)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_19402.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19402, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 474)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 473)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 474)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 476)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 475)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 476)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 473)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_19370.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 481)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 481)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 483)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 483)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 482)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 483)).add_operation (var_lexicalFormalTypeList_19370.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 485)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 485)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 484)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 485)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 482)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator_lexicalFunctionFormalArgumentList enumerator_20455 (var_lexicalFormalTypeList_19370) ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_20493 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_20455.hasCurrentObject () && enumerator_20493.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_20493.current (HERE).readProperty_mLexicalActualInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_20455.current (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 490)) ;
    enumerator_20455.gotoNextObject () ;
    enumerator_20493.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalImplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_21774 ; // Joker input parameter
  GGS_tokenSortedlist joker_21778 ; // Joker input parameter
  GGS_bool joker_21782 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_21774, joker_21778, joker_21782, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 516)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalExplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 523)) ;
  GGS_lexicalTagMap var_tagMap_22107 = GGS_lexicalTagMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_22140 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_22140.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_22140.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_22107, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 526)) ;
    enumerator_22140.gotoNextObject () ;
  }
}

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
  result.appendString ("/galgas/galgas-input-output.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/C_galgas_class_inspector.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IssueWithFixIt.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_ObjectArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/CollectionElementPtr.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/CollectionElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/CollectionElementArray.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("/galgas/AC_GALGAS_enumAssociatedValues.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AbstractPtrClass.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AbstractStrongPtrClass.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/PtrWeakReferenceProxy.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_weak_reference.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/PtrObject.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("       \"AbstractCommandLineOption.cpp\",\n       \"BoolCommandLineOption.cpp\",\n       \"UIntCommandLineOption.cpp\",\n       \"StringCommandLineOption.cpp\",\n       \"builtin-command-line-options.cpp\",\n       \"analyzeCommandLineOptions.cpp\",\n       \"F_mainForLIBPM.cpp\",\n       \"BinaryDecisionDiagram.cpp\",\n       \"BinaryDecisionDiagramRelationSingleType.cpp\",\n       \"BinaryDecisionDiagramRelationConfiguration.cpp\",\n       \"BinaryDecisionDiagramRelation.cpp\",\n       \"FileManager.cpp\",\n       \"AbstractFileHandle.cpp\",\n       \"TextFileWrite.cpp\",\n       \"HTMLFileWrite.cpp\",\n       \"BinaryFileWrite.cpp\",\n       \"AbstractOutputStream.cpp\",\n       \"ColoredConsole.cpp\",\n       \"ConsoleOut.cpp\",\n       \"utf32.cpp\",\n       \"String-class-getters.cpp\",\n       \"String-class.cpp\",\n       \"HTMLString.cpp\",\n       \"print.cpp\",\n       \"Timer.cpp\",\n       \"DateTime.cpp\",\n       \"PrologueEpilogue.cpp\",\n       \"SharedObject.cpp\",\n       \"BigSigned-add.cpp\",\n       \"BigSigned-bit.cpp\",\n       \"BigSigned-chunk-operations.cpp\",\n       \"BigSigned-constructors.cpp\",\n       \"BigSigned-conversions.cpp\",\n       \"BigSigned-divide.cpp\",\n       \"BigSigned-logic-operations.cpp\",\n       \"BigSigned-multiply.cpp\",\n       \"BigSigned-print.cpp\",\n       \"BigSigned-shifts.cpp\",\n       \"BigSigned-subtract.cpp\",\n       \"BigSigned-utilities.cpp\",\n       \"BigSigned.cpp\",\n       \"BigUnsigned-add.cpp\",\n       \"BigUnsigned-bit.cpp\",\n       \"BigUnsigned-chunk-operations.cpp\",\n       \"BigUnsigned-constructors.cpp\",\n       \"BigUnsigned-conversions.cpp\",\n       \"BigUnsigned-divide-naive.cpp\",\n       \"BigUnsigned-divide.cpp\",\n       \"BigUnsigned-logic-operations.cpp\",\n       \"BigUnsigned-multiply.cpp\",\n       \"BigUnsigned-print.cpp\",\n       \"BigUnsigned-shifts.cpp\",\n       \"BigUnsigned-subtract.cpp\",\n       \"BigUnsigned-utilities.cpp\",\n       \"ChunkSharedArray.cpp\",\n       \"UInt128.cpp\",\n       \"U8Data.cpp\",\n       \"F_DisplayException.cpp\",\n       \"macroAssert.cpp\",\n       \"F_GetPrime.cpp\",\n       \"MF_MemoryControl.cpp\",\n       \"cpp-allocation.cpp\",\n       \"basic-allocation.cpp\",\n       \"UInt32Set.cpp\",\n       \"DirectedGraph.cpp\",\n       \"md5.cpp\",\n       \"SHA256.cpp\",\n       \"galgas-random.cpp\",\n       \"C_galgas_CLI_Options.cpp\",\n       \"Compiler.cpp\",\n       \"Lexique.cpp\",\n       \"Lexique-parsing.cpp\",\n       \"LocationInSource.cpp\",\n       \"SourceTextInString.cpp\",\n       \"GALGAS_TypeDescriptor.cpp\",\n       \"galgas-input-output.cpp\",\n       \"C_galgas_class_inspector.cpp\",\n       \"IssueWithFixIt.cpp\",\n       \"GALGAS_ObjectArray.cpp\",\n       \"CollectionElementPtr.cpp\",\n       \"CollectionElement.cpp\",\n       \"CollectionElementArray.cpp\",\n       \"Enumerator_range.cpp\",\n       \"IndexingDictionary.cpp\",\n       \"IssueDescriptor.cpp\",\n       \"LexiqueIntrospection.cpp\",\n       \"AC_GALGAS_root.cpp\",\n       \"AC_GALGAS_reference_class.cpp\",\n       \"AC_GALGAS_enumAssociatedValues.cpp\",\n       \"AbstractPtrClass.cpp\",\n       \"AbstractStrongPtrClass.cpp\",\n       \"PtrWeakReferenceProxy.cpp\",\n       \"AC_GALGAS_weak_reference.cpp\",\n       \"PtrObject.cpp\",\n       \"scanner_actions.cpp\",\n       \"GGS_application.cpp\",\n       \"GGS_bigint.cpp\",\n       \"GGS_binaryset.cpp\",\n       \"GGS_bool.cpp\",\n       \"GGS_char.cpp\",\n       \"GGS_data.cpp\",\n       \"GGS_double.cpp\",\n       \"GGS_filewrapper.cpp\",\n       \"GGS_location.cpp\",\n       \"GGS_sint.cpp\",\n       \"GGS_sint64.cpp\",\n       \"GGS_string.cpp\",\n       \"GGS_string-getters.cpp\",\n       \"GGS_stringset.cpp\",\n       \"GGS_type.cpp\",\n       \"GGS_object.cpp\",\n       \"GGS_uint.cpp\",\n       \"GGS_timer.cpp\",\n       \"GGS_uint64.cpp\"\n    ],\n    \"USER_LINK_OPTIONS\"  :  [") ;
  GGS_uint index_4683_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_4683 (in_TOOL_5F_LINK_5F_LIST) ;
    while (enumerator_4683.hasCurrentObject ()) {
      result.appendString ("\n        \"") ;
      result.appendString (enumerator_4683.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_4683.gotoNextObject () ;
      if (enumerator_4683.hasCurrentObject ()) {
        result.appendString (",") ;
      }
      index_4683_.increment () ;
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
  GGS_string var_dir_6954 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 116)) ;
  var_dir_6954.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 117)) ;
  GGS_string var_s_7048 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (true), GGS_string ("Windows"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 118))) ;
  GGS_bool joker_7445 ; // Joker input parameter
  var_s_7048.method_writeToFileWhenDifferentContents (var_dir_6954.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 129)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 129)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 129)), joker_7445, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 129)) ;
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
  GGS_string var_dir_7924 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 144)) ;
  var_dir_7924.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 145)) ;
  GGS_string var_s_8018 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 146))) ;
  GGS_bool joker_8413 ; // Joker input parameter
  var_s_8018.method_writeToFileWhenDifferentContents (var_dir_7924.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 157)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 157)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 157)), joker_8413, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 157)) ;
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
  GGS_string var_dir_8893 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 172)) ;
  var_dir_8893.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 173)) ;
  GGS_string var_s_8987 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 174))) ;
  GGS_bool joker_9382 ; // Joker input parameter
  var_s_8987.method_writeToFileWhenDifferentContents (var_dir_8893.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 185)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 185)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 185)), joker_9382, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 185)) ;
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
  GGS_string var_dir_9672 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 194)) ;
  var_dir_9672.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 195)) ;
  GGS_string var_s_31__9756 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 196))) ;
  GGS_bool joker_9935 ; // Joker input parameter
  var_s_31__9756.method_writeToExecutableFileWhenDifferentContents (var_dir_9672.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 197)), joker_9935, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 197)) ;
  GGS_string var_s_32__9945 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 198))) ;
  GGS_bool joker_10096 ; // Joker input parameter
  var_s_32__9945.method_writeToExecutableFileWhenDifferentContents (var_dir_9672.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 199)), joker_10096, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 199)) ;
  GGS_string var_s_33__10106 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 200))) ;
  GGS_bool joker_10261 ; // Joker input parameter
  var_s_33__10106.method_writeToExecutableFileWhenDifferentContents (var_dir_9672.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 201)), joker_10261, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 201)) ;
  GGS_string var_s_34__10271 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 202))) ;
  GGS_bool joker_10430 ; // Joker input parameter
  var_s_34__10271.method_writeToExecutableFileWhenDifferentContents (var_dir_9672.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 203)), joker_10430, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 203)) ;
  GGS_string var_s_35__10440 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 204))) ;
  GGS_bool joker_10605 ; // Joker input parameter
  var_s_35__10440.method_writeToExecutableFileWhenDifferentContents (var_dir_9672.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 206)), joker_10605, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 205)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_9672.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 209)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 209)) ;
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
  GGS_string var_dir_10938 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 218)) ;
  var_dir_10938.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 219)) ;
  GGS_string var_s_31__11011 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 220))) ;
  GGS_bool joker_11181 ; // Joker input parameter
  var_s_31__11011.method_writeToExecutableFileWhenDifferentContents (var_dir_10938.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 221)), joker_11181, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 221)) ;
  GGS_string var_s_32__11191 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 222))) ;
  GGS_bool joker_11342 ; // Joker input parameter
  var_s_32__11191.method_writeToExecutableFileWhenDifferentContents (var_dir_10938.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 223)), joker_11342, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 223)) ;
  GGS_string var_s_33__11352 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 224))) ;
  GGS_bool joker_11495 ; // Joker input parameter
  var_s_33__11352.method_writeToExecutableFileWhenDifferentContents (var_dir_10938.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 225)), joker_11495, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 225)) ;
  GGS_string var_s_34__11505 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 226))) ;
  GGS_bool joker_11652 ; // Joker input parameter
  var_s_34__11505.method_writeToExecutableFileWhenDifferentContents (var_dir_10938.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 227)), joker_11652, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 227)) ;
  GGS_string var_s_35__11662 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 228))) ;
  GGS_bool joker_11813 ; // Joker input parameter
  var_s_35__11662.method_writeToExecutableFileWhenDifferentContents (var_dir_10938.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 229)), joker_11813, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 229)) ;
  GGS_string var_s_36__11823 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 230))) ;
  GGS_bool joker_11962 ; // Joker input parameter
  var_s_36__11823.method_writeToExecutableFileWhenDifferentContents (var_dir_10938.add_operation (GGS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 231)), joker_11962, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 231)) ;
  GGS_string var_s_37__11972 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 232))) ;
  GGS_bool joker_12120 ; // Joker input parameter
  var_s_37__11972.method_writeToExecutableFileWhenDifferentContents (var_dir_10938.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 233)), joker_12120, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 233)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_10938.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 234)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 234)) ;
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
  GGS_string var_dir_12449 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 243)) ;
  var_dir_12449.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 244)) ;
  GGS_string var_s_31__12524 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 245))) ;
  GGS_bool joker_12696 ; // Joker input parameter
  var_s_31__12524.method_writeToExecutableFileWhenDifferentContents (var_dir_12449.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 246)), joker_12696, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 246)) ;
  GGS_string var_s_32__12706 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 247))) ;
  GGS_bool joker_12859 ; // Joker input parameter
  var_s_32__12706.method_writeToExecutableFileWhenDifferentContents (var_dir_12449.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 248)), joker_12859, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 248)) ;
  GGS_string var_s_33__12869 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 249))) ;
  GGS_bool joker_13014 ; // Joker input parameter
  var_s_33__12869.method_writeToExecutableFileWhenDifferentContents (var_dir_12449.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 250)), joker_13014, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 250)) ;
  GGS_string var_s_34__13024 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 251))) ;
  GGS_bool joker_13173 ; // Joker input parameter
  var_s_34__13024.method_writeToExecutableFileWhenDifferentContents (var_dir_12449.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 252)), joker_13173, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 252)) ;
  GGS_string var_s_35__13183 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 253))) ;
  GGS_bool joker_13336 ; // Joker input parameter
  var_s_35__13183.method_writeToExecutableFileWhenDifferentContents (var_dir_12449.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 254)), joker_13336, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 254)) ;
  GGS_string var_s_36__13346 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 255))) ;
  GGS_bool joker_13496 ; // Joker input parameter
  var_s_36__13346.method_writeToExecutableFileWhenDifferentContents (var_dir_12449.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 256)), joker_13496, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 256)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_12449.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 257)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 257)) ;
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
  GGS_string var_dir_13837 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 266)) ;
  var_dir_13837.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 267)) ;
  GGS_string var_s_31__13926 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 268))) ;
  GGS_bool joker_14109 ; // Joker input parameter
  var_s_31__13926.method_writeToExecutableFileWhenDifferentContents (var_dir_13837.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 269)), joker_14109, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 269)) ;
  GGS_string var_s_32__14119 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 270))) ;
  GGS_bool joker_14283 ; // Joker input parameter
  var_s_32__14119.method_writeToExecutableFileWhenDifferentContents (var_dir_13837.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 271)), joker_14283, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 271)) ;
  GGS_string var_s_33__14293 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 272))) ;
  GGS_bool joker_14449 ; // Joker input parameter
  var_s_33__14293.method_writeToExecutableFileWhenDifferentContents (var_dir_13837.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 273)), joker_14449, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 273)) ;
  GGS_string var_s_34__14459 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 274))) ;
  GGS_bool joker_14619 ; // Joker input parameter
  var_s_34__14459.method_writeToExecutableFileWhenDifferentContents (var_dir_13837.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 275)), joker_14619, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 275)) ;
  GGS_string var_s_35__14629 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 276))) ;
  GGS_bool joker_14793 ; // Joker input parameter
  var_s_35__14629.method_writeToExecutableFileWhenDifferentContents (var_dir_13837.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 277)), joker_14793, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 277)) ;
  GGS_string var_s_36__14803 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 278))) ;
  GGS_bool joker_14964 ; // Joker input parameter
  var_s_36__14803.method_writeToExecutableFileWhenDifferentContents (var_dir_13837.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 279)), joker_14964, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 279)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_13837.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 280)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 280)) ;
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
  GGS_string var_dir_15305 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 289)) ;
  var_dir_15305.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 290)) ;
  GGS_string var_s_31__15394 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 291))) ;
  GGS_bool joker_15577 ; // Joker input parameter
  var_s_31__15394.method_writeToExecutableFileWhenDifferentContents (var_dir_15305.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 292)), joker_15577, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 292)) ;
  GGS_string var_s_32__15587 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 293))) ;
  GGS_bool joker_15751 ; // Joker input parameter
  var_s_32__15587.method_writeToExecutableFileWhenDifferentContents (var_dir_15305.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 294)), joker_15751, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 294)) ;
  GGS_string var_s_33__15761 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 295))) ;
  GGS_bool joker_15917 ; // Joker input parameter
  var_s_33__15761.method_writeToExecutableFileWhenDifferentContents (var_dir_15305.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 296)), joker_15917, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 296)) ;
  GGS_string var_s_34__15927 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 297))) ;
  GGS_bool joker_16087 ; // Joker input parameter
  var_s_34__15927.method_writeToExecutableFileWhenDifferentContents (var_dir_15305.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 298)), joker_16087, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 298)) ;
  GGS_string var_s_35__16097 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 299))) ;
  GGS_bool joker_16261 ; // Joker input parameter
  var_s_35__16097.method_writeToExecutableFileWhenDifferentContents (var_dir_15305.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 300)), joker_16261, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 300)) ;
  GGS_string var_s_36__16271 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 301))) ;
  GGS_bool joker_16432 ; // Joker input parameter
  var_s_36__16271.method_writeToExecutableFileWhenDifferentContents (var_dir_15305.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 302)), joker_16432, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 302)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_15305.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 303)) ;
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
  GGS_string var_dir_16854 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-arm64-linux-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 311)) ;
  var_dir_16854.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 312)) ;
  GGS_string var_s_31__16944 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 313))) ;
  GGS_bool joker_17128 ; // Joker input parameter
  var_s_31__16944.method_writeToExecutableFileWhenDifferentContents (var_dir_16854.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 314)), joker_17128, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 314)) ;
  GGS_string var_s_32__17138 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 315))) ;
  GGS_bool joker_17303 ; // Joker input parameter
  var_s_32__17138.method_writeToExecutableFileWhenDifferentContents (var_dir_16854.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 316)), joker_17303, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 316)) ;
  GGS_string var_s_33__17313 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 317))) ;
  GGS_bool joker_17470 ; // Joker input parameter
  var_s_33__17313.method_writeToExecutableFileWhenDifferentContents (var_dir_16854.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 318)), joker_17470, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 318)) ;
  GGS_string var_s_34__17480 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 319))) ;
  GGS_bool joker_17641 ; // Joker input parameter
  var_s_34__17480.method_writeToExecutableFileWhenDifferentContents (var_dir_16854.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 320)), joker_17641, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 320)) ;
  GGS_string var_s_35__17651 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 321))) ;
  GGS_bool joker_17816 ; // Joker input parameter
  var_s_35__17651.method_writeToExecutableFileWhenDifferentContents (var_dir_16854.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 322)), joker_17816, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 322)) ;
  GGS_string var_s_36__17826 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 323))) ;
  GGS_bool joker_17988 ; // Joker input parameter
  var_s_36__17826.method_writeToExecutableFileWhenDifferentContents (var_dir_16854.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 324)), joker_17988, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 324)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_16854.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 325)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 325)) ;
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
                                                                                                                                                                                   const GGS_location /* constinArgument__5F_inEndOfProjectSourceFile */,
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
  ioArgument_ioAllProductFileSet.plusAssignOperation(GGS_stringset::class_func_setWithStringList (constinArgument_inSwiftAppProductFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 357)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 357)) ;
  GGS_string var_projectDirectory_19282 = constinArgument_inProjectSourceFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 358)) ;
  GGS_string var_s_31__19385 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 360))) ;
  GGS_bool joker_19581 ; // Joker input parameter
  var_s_31__19385.method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 362)), joker_19581, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 361)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 365)) ;
  GGS_stringlist var_toolCppFileList_19722 = constinArgument_inToolCppFileList ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_toolCppFileList_19722.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("C_galgas_verbose_option.cpp"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 369)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_toolCppFileList_19722.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("C_galgas_quiet_option.cpp"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 371)) ;
  }
  GGS_lstring var_macCodeSign_20004 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_20025 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("macCodeSign"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("macCodeSign"), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_entry_20025.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_entry_20025.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the %macCodeSign attribute should not be empty"), fixItArray3  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 377)) ;
          var_macCodeSign_20004.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_macCodeSign_20004 = var_entry_20025.readProperty_mFeatureValue () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    var_macCodeSign_20004 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas4", 382)) ;
  }
  GGS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20411 = GGS_string ("14.6") ;
  GGS_string var_libpmPath_20531 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_20550 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("libpmAtPath"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("libpmAtPath"), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_entry_20550.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (var_entry_20550.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the libpm path should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 390)) ;
          var_libpmPath_20531.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        var_libpmPath_20531 = var_entry_20550.readProperty_mFeatureValue ().readProperty_string () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    routine_updateLIBPMatPath_3F_ (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 395)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 395)) ;
    }
    var_libpmPath_20531 = GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 396)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 396)) ;
  }
  GGS_stringset var_availableGenerationFeatures_21086 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 401)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 402)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 403)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 404)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 405)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 406)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 407)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 408)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("makefile-arm64-linux-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 409)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 410)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("MacOS")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 411)) ;
  var_availableGenerationFeatures_21086.plusPlusAssignOperation (GGS_string ("MacSwiftApp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 412)) ;
  GGS_stringset var_generationFeatures_21811 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_xcodeProject var_xcodeProject_21881 = GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 415)) ;
  UpEnumerator_lstringlist enumerator_21922 (constinArgument_inTargetFeatureList) ;
  while (enumerator_21922.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_availableGenerationFeatures_21086.getter_contains (enumerator_21922.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 417)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_generationFeatures_21811.getter_contains (enumerator_21922.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 418)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_21922.current_mValue (HERE).readProperty_location (), GGS_string ("duplicate '").add_operation (enumerator_21922.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 419)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 419)), fixItArray9  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 419)) ;
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::equal, enumerator_21922.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("MacSwiftApp"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_21881.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 423)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GenericArray <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_21922.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated XCode setting"), fixItArray12  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 424)) ;
              }
            }
            var_xcodeProject_21881 = GGS_xcodeProject::class_func_swiftApp (SOURCE_FILE ("galgasTargetGeneration.galgas4", 426)) ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          var_generationFeatures_21811.plusPlusAssignOperation (enumerator_21922.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 428)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      GGS_stringlist var_s_22443 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      UpEnumerator_stringset enumerator_22462 (var_availableGenerationFeatures_21086) ;
      while (enumerator_22462.hasCurrentObject ()) {
        var_s_22443.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("%").add_operation (enumerator_22462.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 433)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 433)) ;
        enumerator_22462.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray13 ;
      appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_s_22443) ;
      inCompiler->emitSemanticError (enumerator_21922.current_mValue (HERE).readProperty_location (), GGS_string ("unknown '").add_operation (enumerator_21922.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 435)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 435)), fixItArray13  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 435)) ;
    }
    enumerator_21922.gotoNextObject () ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = GGS_bool (ComparisonKind::notEqual, var_macCodeSign_20004.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = GGS_bool (ComparisonKind::equal, var_xcodeProject_21881.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 439)))) ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (var_macCodeSign_20004.readProperty_location (), GGS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%MacSwiftApp\""), fixItArray16  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 440)) ;
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_21881.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 444)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = constinArgument_inProjectQualifiedFeatureMap.getter_contains (GGS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 444)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas4", 444)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 445)), GGS_string ("For a MacOS target, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray18  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 445)) ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = var_generationFeatures_21811.getter_contains (GGS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 448)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 449)) ;
      }
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = var_generationFeatures_21811.getter_contains (GGS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 451)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 452)) ;
      }
    }
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = var_generationFeatures_21811.getter_contains (GGS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 454)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      {
      routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 455)) ;
      }
    }
  }
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = var_generationFeatures_21811.getter_contains (GGS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 457)).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      {
      routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 458)) ;
      }
    }
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = var_generationFeatures_21811.getter_contains (GGS_string ("makefile-arm64-linux-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 460)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 461)) ;
      }
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = var_generationFeatures_21811.getter_contains (GGS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 463)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 464)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = var_generationFeatures_21811.getter_contains (GGS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 466)).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_20531, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 467)) ;
      }
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = var_generationFeatures_21811.getter_contains (GGS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 478)).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_20531, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 479)) ;
      }
    }
  }
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = var_generationFeatures_21811.getter_contains (GGS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 490)).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_19282, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_20531, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 491)) ;
      }
    }
  }
  GGS_stringlist var_linkOptionForLinkingFrameworkWithTool_25362 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_25413 (constinArgument_inFrameworkToolFileList) ;
  while (enumerator_25413.hasCurrentObject ()) {
    var_linkOptionForLinkingFrameworkWithTool_25362.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("-framework"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 505)) ;
    var_linkOptionForLinkingFrameworkWithTool_25362.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_25413.current_mValue (HERE).getter_deletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas4", 506)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 506)) ;
    enumerator_25413.gotoNextObject () ;
  }
  GGS_stringlist var_handCodedSourceToolFileList_25643 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_25684 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_25684.hasCurrentObject ()) {
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_25684.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas4", 511)).objectCompare (GGS_string ("h"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        var_handCodedSourceToolFileList_25643.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_25684.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 512)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 512)) ;
      }
    }
    enumerator_25684.gotoNextObject () ;
  }
  GGS_stringset var_handCodedSourceDirectorySet_25854 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_25918 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_25918.hasCurrentObject ()) {
    GGS_string var_subDir_25959 = enumerator_25918.current (HERE).readProperty_mValue ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 517)) ;
    GalgasBool test_29 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_29) {
      test_29 = GGS_bool (ComparisonKind::equal, var_subDir_25959.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_29) {
        var_handCodedSourceDirectorySet_25854.plusPlusAssignOperation (GGS_string ("../sources/tool-sources")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 519)) ;
      }
    }
    if (GalgasBool::boolFalse == test_29) {
      var_handCodedSourceDirectorySet_25854.plusPlusAssignOperation (GGS_string ("../sources/tool-sources/").add_operation (var_subDir_25959, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 521))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 521)) ;
    }
    enumerator_25918.gotoNextObject () ;
  }
  GGS_string var_jsonFileListContents_26204 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, var_handCodedSourceDirectorySet_25854, var_handCodedSourceToolFileList_25643, var_toolCppFileList_19722, var_linkOptionForLinkingFrameworkWithTool_25362, var_libpmPath_20531, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 524))) ;
  GGS_string var_jsonFileListPath_26472 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 532)) ;
  GGS_bool joker_26618 ; // Joker input parameter
  var_jsonFileListContents_26204.method_writeToFileWhenDifferentContents (var_jsonFileListPath_26472, joker_26618, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 533)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 534)) ;
  switch (var_xcodeProject_21881.enumValue ()) {
  case GGS_xcodeProject::Enumeration::invalid:
    break ;
  case GGS_xcodeProject::Enumeration::enum_none:
    break ;
  case GGS_xcodeProject::Enumeration::enum_swiftApp:
    {
      GGS_string var_dir_26772 = var_projectDirectory_19282.add_operation (GGS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 539)) ;
      var_dir_26772.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 540)) ;
      GGS_string var_applicationBundleBase_26874 ;
      GalgasBool test_30 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_30) {
        const GGS_projectQualifiedFeatureMap_2E_element var_entry_26907 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("applicationBundleBase"), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("applicationBundleBase"), inCompiler COMMA_HERE).isValuated ()) {
          test_30 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_30) {
          var_applicationBundleBase_26874 = var_entry_26907.readProperty_mFeatureValue ().readProperty_string () ;
        }
      }
      if (GalgasBool::boolFalse == test_30) {
        var_applicationBundleBase_26874 = GGS_string ("unknown.unknown") ;
      }
      GGS_string var_InfoPlistContents_27105 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_26874, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20411, GGS_string ("$(PRODUCT_MODULE_NAME).ProjectDocument") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 548))) ;
      GGS_bool joker_27464 ; // Joker input parameter
      var_InfoPlistContents_27105.method_writeToFileWhenDifferentContents (var_dir_26772.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 556)), joker_27464, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 556)) ;
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = var_dir_26772.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 558)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas4", 558)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas4", 558)).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          GGS_string var_s_27552 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 559))) ;
          var_s_27552.method_writeToExecutableFile (var_dir_26772.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 560)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 560)) ;
        }
      }
      GGS_string var_d_27700 = var_dir_26772.add_operation (GGS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 563)) ;
      var_d_27700.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 563)) ;
      GGS_string var_InfoPlist_5F_strings_5F_path_27753 = var_dir_26772.add_operation (GGS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 564)) ;
      GGS_string var_s_32__27824 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 565))) ;
      GGS_bool joker_27986 ; // Joker input parameter
      var_s_32__27824.method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_27753, joker_27986, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 566)) ;
      GGS_string var_Credits_5F_rtf_5F_path_27998 = var_dir_26772.add_operation (GGS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 567)) ;
      GalgasBool test_32 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_32) {
        test_32 = var_Credits_5F_rtf_5F_path_27998.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas4", 568)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas4", 568)).boolEnum () ;
        if (GalgasBool::boolTrue == test_32) {
          GGS_string var_s_28103 = GGS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper) ;
          var_s_28103.method_writeToFile (var_Credits_5F_rtf_5F_path_27998, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 570)) ;
        }
      }
      GGS_string var_userResourceDir_28317 = var_projectDirectory_19282.add_operation (GGS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 573)) ;
      var_userResourceDir_28317.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 574)) ;
      GGS_stringlist temp_33 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 575)) ;
      temp_33.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("icns"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 575)) ;
      GGS_stringlist var_extensionList_28442 = temp_33 ;
      GGS_stringlist var_resourceFiles_28478 = var_userResourceDir_28317.getter_regularFilesWithExtensions (GGS_bool (false), var_extensionList_28442 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 576)) ;
      GGS_string var_newIntermediateFilePath_28600 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 578)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 579)) ;
      GGS_XcodeProjectDescriptor var_xcodeProject_28850 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
      var_xcodeProject_28850.mProperty_mApplicationBundleName = var_applicationBundleBase_26874 ;
      var_xcodeProject_28850.mProperty_mProjectName = constinArgument_inTargetName ;
      GGS_string var_headerSearchPaths_29009 = GGS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 584)).add_operation (GGS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 585)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 585)).add_operation (GGS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 585)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 586)).add_operation (GGS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 587)) ;
      var_headerSearchPaths_29009.plusAssignOperation(GGS_string (", \"").add_operation (constinArgument_inHandCodedSourceDirectory, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 588)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 588)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 588)) ;
      var_headerSearchPaths_29009.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 589)) ;
      GGS_stringlist temp_34 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 665)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 592)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 593)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 594)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 595)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_COMMA = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 596)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 597)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_EMPTY_BODY = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 598)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_INFINITE_RECURSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 599)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 600)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 601)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 602)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 603)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 604)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 605)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_UNREACHABLE_CODE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 606)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 607)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 608)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_NO_COMMON_BLOCKS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 609)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 610)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 611)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 612)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 613)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 614)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 615)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 616)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 617)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 618)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 619)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 620)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 621)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 622)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 623)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 624)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 625)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 626)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 627)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 628)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 629)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 630)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 631)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 632)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 633)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 634)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 635)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 636)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 637)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 638)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 639)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_headerSearchPaths_29009, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 640)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = macosx"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 641)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 642)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 643)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_DISABLE_SAFETY_CHECKS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 644)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENABLE_BARE_SLASH_REGEX = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 645)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENABLE_EMIT_CONST_VALUES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 646)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENFORCE_EXCLUSIVE_ACCESS = off"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 647)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_INSTALL_MODULE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 648)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_INSTALL_OBJC_HEADER = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 649)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_PRECOMPILE_BRIDGING_HEADER = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 650)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_REFLECTION_METADATA_LEVEL = all"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 651)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_STRICT_CONCURRENCY = complete"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 652)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_TREAT_WARNINGS_AS_ERRORS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 653)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_CONCISE_MAGIC_FILE = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 654)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_DEPRECATE_APPLICATION_MAIN = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 655)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_DISABLE_OUTWARD_ACTOR_ISOLATION = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 656)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_EXISTENTIAL_ANY = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 657)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_FORWARD_TRAILING_CLOSURES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 658)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_GLOBAL_CONCURRENCY = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 659)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPLICIT_OPEN_EXISTENTIALS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 660)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPORT_OBJC_FORWARD_DECLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 661)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_INFER_SENDABLE_FROM_CAPTURES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 662)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_ISOLATED_DEFAULT_VALUES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 663)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_REGION_BASED_ISOLATION = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 664)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_VERSION = 6.0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 665)) ;
      GGS_stringlist var_xcodeSettingList_29361 = temp_34 ;
      GalgasBool test_35 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_35) {
        test_35 = GGS_bool (ComparisonKind::notEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20411.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          var_xcodeSettingList_29361.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20411, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 668)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 668)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 668)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_28850, var_xcodeSettingList_29361, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 670)) ;
      }
      GGS_stringlist var_appFrameworksFileRefList_33334 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_36 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_36) {
        test_36 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas4", 673)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_36) {
          GGS_stringlist joker_33621 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33653 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33687 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33778 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_33840 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Frameworks (App)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 677)), joker_33621, joker_33653, joker_33687, var_appFrameworksFileRefList_33334, joker_33778, var_frameworkGroupRef_33840, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 674)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28850, var_frameworkGroupRef_33840, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 685)) ;
          }
        }
      }
      GGS_stringlist var_buildCFileRefListForTool_33989 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_buildCppFileRefListForTool_34040 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_swift_5F_FileRefList_34093 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_frameworksFileRefList_34137 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_resourceFileBuildRefs_34185 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_37 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_37) {
        test_37 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas4", 694)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_37) {
          GGS_string var_groupRef_34798 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Hand Coded Sources (Tool)"), GGS_string ("../sources/tool-sources/"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 698)), var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_34798, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 695)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28850, var_groupRef_34798, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 706)) ;
          }
        }
      }
      GGS_stringlist var_toolFrameworksFileRefList_34947 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas4", 710)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GGS_stringlist joker_35237 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_35269 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_35303 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_35394 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_35455 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Frameworks (Tool)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 714)), joker_35237, joker_35269, joker_35303, var_toolFrameworksFileRefList_34947, joker_35394, var_frameworkGroupRef_35455, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 711)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28850, var_frameworkGroupRef_35455, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 722)) ;
          }
        }
      }
      GGS_stringlist var_outputGroupFileList_35610 = constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 725)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 725)) ;
      var_outputGroupFileList_35610.plusAssignOperation(constinArgument_inSwiftAppProductFileList, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 726)) ;
      GGS_string var_groupRef_36205 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Generated by GALGAS"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 729)).add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 729)), GGS_stringset::class_func_setWithStringList (var_outputGroupFileList_35610  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 730)), var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 727)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28850, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 738)) ;
      }
      GGS_stringlist var_libpmReferenceGroupList_36302 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      {
      GGS_stringset temp_39 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 753)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 745)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 746)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 747)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 748)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 749)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 750)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 751)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 752)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 753)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Binary Decision Diagrams"), GGS_string ("bdd"), temp_39, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 741)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 762)) ;
      {
      GGS_stringset temp_40 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 804)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 768)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 769)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 770)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 771)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 772)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 773)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 774)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 775)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 776)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 777)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 778)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 779)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 780)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 781)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 782)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 783)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 784)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 785)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 786)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide-naive.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 787)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 788)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 789)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 790)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 791)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 792)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 793)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 794)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 795)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSelectSize.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 796)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 797)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 798)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("UInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 799)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("UInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 800)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U16.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 801)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 802)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U64.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 803)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U8.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 804)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Big Integers"), GGS_string ("big-integers"), temp_40, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 764)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 813)) ;
      {
      GGS_stringset temp_41 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 859)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("AbstractScanner.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 819)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("AllocationDebugView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 820)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Application.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 821)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ASCII.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 822)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Color+RawRepresentable.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 823)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CommandLineOption.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 824)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("common-command-line-options.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 825)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CompilationIssue.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 826)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CompileLogView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 827)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CustomFont.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 828)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CustomFontPicker.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 829)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("FocusedValues+extension.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 830)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("IdentifiableAttributedString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 831)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("IndexingOperation.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 832)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("lexical-functions.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 833)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("LexicalToken.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 834)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Notification+names.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 835)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectCompiler.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 836)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocument.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 837)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 838)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+compile.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 839)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+populateContextualMenu.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 840)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+search.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 841)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectWindowManagerView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 842)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("RootDirectoryNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 843)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ScrollSourceToLineNotification.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 844)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultItem.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 845)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultItemView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 846)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 847)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 848)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SharedTextModel.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 849)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 850)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNodeID.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 851)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 852)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineAndColumn.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 853)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineRangeForLineNumber.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 854)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineStartAndEndLocations.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 855)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 856)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("TextSyntaxColoringView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 857)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("UInt64+displayString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 858)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("UserInterfaceSetting.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 859)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Swift App"), GGS_string ("swiftui-app"), temp_41, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 815)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 868)) ;
      {
      GGS_stringset temp_42 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 876)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 874)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericUniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 875)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericUniqueMatrix.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 876)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Generic Arraies"), GGS_string ("generic-arraies"), temp_42, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 870)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 885)) ;
      {
      GGS_stringset temp_43 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 904)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 891)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 892)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("builtin-command-line-options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 893)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("builtin-command-line-options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 894)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 895)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 896)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 897)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 898)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 899)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 900)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 901)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 902)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 903)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 904)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Command line Interface"), GGS_string ("command_line_interface"), temp_43, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 887)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 913)) ;
      {
      GGS_stringset temp_44 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 928)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 919)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 920)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 921)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 922)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 923)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 924)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 925)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 926)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 927)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 928)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("File"), GGS_string ("files"), temp_44, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 915)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 937)) ;
      {
      GGS_stringset temp_45 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1026)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 943)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 944)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 945)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 946)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 947)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 948)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 949)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 950)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AbstractPtrClass.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 951)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AbstractPtrClass.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 952)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AbstractStrongPtrClass.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 953)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AbstractStrongPtrClass.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 954)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("PtrWeakReferenceProxy.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 955)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("PtrWeakReferenceProxy.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 956)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 957)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 958)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 959)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 960)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 961)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 962)) ;
      GGS_string temp_46 ;
      const GalgasBool test_47 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (GalgasBool::boolTrue == test_47) {
        temp_46 = GGS_string ("C_galgas_verbose_option.cpp") ;
      }else if (GalgasBool::boolFalse == test_47) {
        temp_46 = GGS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_45.plusPlusAssignOperation (temp_46  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 963)) ;
      GGS_string temp_48 ;
      const GalgasBool test_49 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (GalgasBool::boolTrue == test_49) {
        temp_48 = GGS_string ("C_galgas_verbose_option.h") ;
      }else if (GalgasBool::boolFalse == test_49) {
        temp_48 = GGS_string ("C_galgas_quiet_option.h") ;
      }
      temp_45.plusPlusAssignOperation (temp_48  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 964)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 965)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("galgas-input-output.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 966)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("galgas-input-output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 967)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 968)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 969)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 970)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 971)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique-parsing.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 972)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 973)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 974)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 975)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 976)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 977)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 978)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 979)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 980)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 981)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElementArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 982)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElementPtr.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 983)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("CollectionElementPtr.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 984)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Enumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 985)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Enumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 986)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 987)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 988)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 989)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 990)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 991)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 992)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_ObjectArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 993)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_ObjectArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 994)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("PtrObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 995)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("PtrObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 996)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 997)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 998)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 999)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1000)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1001)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1002)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1003)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_double.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1004)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1005)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1006)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1007)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_sint64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1008)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_sint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1009)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1010)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_string-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1011)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1012)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1013)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_type.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1014)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_uint64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1015)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_uint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1016)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1017)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1018)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("ComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1019)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("ComparisonKind.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1020)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("EnumerationOrder.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1021)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_GenericDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1022)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_GenericMapRoot.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1023)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedGenericPtrWithValueSemantics.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1024)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1025)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1026)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Galgas"), GGS_string ("galgas"), temp_45, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 939)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1035)) ;
      {
      GGS_stringset temp_50 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1046)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1041)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1042)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1043)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1044)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1045)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1046)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Streams"), GGS_string ("streams"), temp_50, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1037)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1055)) ;
      {
      GGS_stringset temp_51 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1069)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1061)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1062)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1063)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1064)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("unicode-data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1065)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("utf32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1066)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("utf32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1067)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1068)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("print.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1069)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Strings"), GGS_string ("strings"), temp_51, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1057)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1078)) ;
      {
      GGS_stringset temp_52 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1087)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1084)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1085)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1086)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1087)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Time"), GGS_string ("time"), temp_52, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1080)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1096)) ;
      {
      GGS_stringset temp_53 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1131)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1102)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1103)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("U8Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1104)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("U8Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1105)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1106)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1107)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1108)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1109)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("UInt32Set.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1110)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("UInt32Set.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1111)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1112)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1113)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1114)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1115)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1116)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1117)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1118)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1119)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1120)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1121)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("SHA256.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1122)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("SHA256.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1123)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("macroAssert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1124)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("macroAssert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1125)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1126)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1127)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1128)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1129)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("galgas-random.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1130)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("galgas-random.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1131)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Utilities"), GGS_string ("utilities"), temp_53, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_groupRef_36205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1098)) ;
      }
      var_libpmReferenceGroupList_36302.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_groupRef_36205, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1140)) ;
      GGS_string var_libpmGroupRef_49753 ;
      {
      extensionSetter_addGroup (var_xcodeProject_28850, GGS_string ("libpm"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1142)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1142)), var_libpmReferenceGroupList_36302, var_libpmGroupRef_49753, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1142)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28850, var_libpmGroupRef_49753, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1143)) ;
      }
      GGS_string var_resourcesGroupRef_50248 ;
      {
      GGS_stringset temp_54 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1148)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1148)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Resources"), GGS_string ("."), temp_54, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_resourcesGroupRef_50248, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1145)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28850, var_resourcesGroupRef_50248, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1156)) ;
      }
      GGS_string var_userResourcesGroupRef_50804 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("User Resources"), GGS_string ("userResources"), GGS_stringset::class_func_setWithStringList (var_resourceFiles_28478  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1161)), var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_userResourcesGroupRef_50804, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1158)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28850, var_userResourcesGroupRef_50804, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1169)) ;
      }
      GGS_string var_frameworkGroupRef_51416 ;
      {
      GGS_stringset temp_55 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1176)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1175)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1176)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28850, GGS_string ("Frameworks for App"), GGS_string ("/System/Library/Frameworks"), temp_55, var_buildCFileRefListForTool_33989, var_buildCppFileRefListForTool_34040, var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137, var_resourceFileBuildRefs_34185, var_frameworkGroupRef_51416, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1171)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28850, var_frameworkGroupRef_51416, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1185)) ;
      }
      GGS_stringlist var_codeSigningSettingList_51561 ;
      GalgasBool test_56 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_56) {
        test_56 = GGS_bool (ComparisonKind::equal, var_macCodeSign_20004.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_56) {
          GGS_stringlist temp_57 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1189)) ;
          temp_57.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"-\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1189)) ;
          var_codeSigningSettingList_51561 = temp_57 ;
        }
      }
      if (GalgasBool::boolFalse == test_56) {
        GGS_stringlist var_components_51705 = var_macCodeSign_20004.readProperty_string ().getter_componentsSeparatedByString (GGS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1191)) ;
        GalgasBool test_58 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_58) {
          test_58 = GGS_bool (ComparisonKind::notEqual, var_components_51705.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas4", 1192)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_58) {
            GenericArray <FixItDescription> fixItArray59 ;
            inCompiler->emitSemanticError (var_macCodeSign_20004.readProperty_location (), GGS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray59  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1193)) ;
            var_codeSigningSettingList_51561.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_58) {
          GalgasBool test_60 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_60) {
            test_60 = GGS_bool (ComparisonKind::equal, var_components_51705.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1194)).objectCompare (GGS_string ("MacDeveloper"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_60) {
              GGS_stringlist temp_61 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1197)) ;
              temp_61.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1196)) ;
              temp_61.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_51705.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1197)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1197)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1197)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1197)) ;
              var_codeSigningSettingList_51561 = temp_61 ;
            }
          }
          if (GalgasBool::boolFalse == test_60) {
            GalgasBool test_62 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_62) {
              test_62 = GGS_bool (ComparisonKind::equal, var_components_51705.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1199)).objectCompare (GGS_string ("Certificate"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_62) {
                GGS_stringlist temp_63 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1200)) ;
                temp_63.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_51705.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1200)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1200)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1200)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1200)) ;
                var_codeSigningSettingList_51561 = temp_63 ;
              }
            }
            if (GalgasBool::boolFalse == test_62) {
              GenericArray <FixItDescription> fixItArray64 ;
              inCompiler->emitSemanticError (var_macCodeSign_20004.readProperty_location (), GGS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray64  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1202)) ;
              var_codeSigningSettingList_51561.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GGS_stringlist temp_65 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1210)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1207)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1208)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1209)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_26874, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1210)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1210)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1210)).add_operation (GGS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1210)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1210)) ;
      GGS_stringlist var_settingList_52587 = temp_65.add_operation (var_codeSigningSettingList_51561, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1211)) ;
      GGS_string var_releaseTargetRef_53190 ;
      GGS_string var_releaseProductFileRef_53234 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_28850, constinArgument_inTargetName.add_operation (GGS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1213)), constinArgument_inTargetName, var_buildCFileRefListForTool_33989.add_operation (var_buildCppFileRefListForTool_34040, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1215)), var_toolFrameworksFileRefList_34947, var_settingList_52587, var_releaseTargetRef_53190, var_releaseProductFileRef_53234, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1212)) ;
      }
      GGS_stringlist temp_66 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1227)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1223)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1224)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1225)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1226)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_26874, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1227)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1227)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1227)).add_operation (GGS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1227)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1227)) ;
      var_settingList_52587 = temp_66.add_operation (var_codeSigningSettingList_51561, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1228)) ;
      GGS_string var_debugTargetRef_53945 ;
      GGS_string var_debugProductFileRef_53987 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_28850, constinArgument_inTargetName.add_operation (GGS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1230)), constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1231)), var_buildCFileRefListForTool_33989.add_operation (var_buildCppFileRefListForTool_34040, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1232)), var_toolFrameworksFileRefList_34947, var_settingList_52587, var_debugTargetRef_53945, var_debugProductFileRef_53987, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1229)) ;
      }
      GGS_stringlist temp_67 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1241)) ;
      temp_67.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1240)) ;
      temp_67.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1241)) ;
      GGS_stringlist var_cocoaConfigurationSettingList_54058 = temp_67.add_operation (var_codeSigningSettingList_51561, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1242)) ;
      {
      GGS_stringlist temp_68 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1250)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_releaseTargetRef_53190, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1250)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_debugTargetRef_53945, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1250)) ;
      GGS__32_stringlist temp_69 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1251)) ;
      temp_69.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_releaseProductFileRef_53234, constinArgument_inTargetName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1251)) ;
      temp_69.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_debugProductFileRef_53987, constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1251)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1251)) ;
      GGS_string joker_54775 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_28850, constinArgument_inTargetName.add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1244)), constinArgument_inTargetName.getter_capitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas4", 1245)).add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1245)), var_swift_5F_FileRefList_34093, var_frameworksFileRefList_34137.add_operation (var_appFrameworksFileRefList_33334, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1247)), var_resourceFileBuildRefs_34185, var_cocoaConfigurationSettingList_54058, temp_68, temp_69, joker_54775, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1243)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_28850, var_dir_26772.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1256)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1256)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1256)), var_newIntermediateFilePath_28600, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1255)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GGS_nonTerminalLabelListAST & constinArgument_inLabels,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result_result ; // Returned variable
  result_result = GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalLabelListAST enumerator_1529 (constinArgument_inLabels) ;
  while (enumerator_1529.hasCurrentObject ()) {
    GGS_signatureForGrammarAnalysis var_formalParametersList_1578 = GGS_signatureForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_1633 (enumerator_1529.current (HERE).readProperty_mFormalArgumentList ()) ;
    while (enumerator_1633.hasCurrentObject ()) {
      var_formalParametersList_1578.plusPlusAssignOperation (GGS_signatureForGrammarAnalysis_2E_element::init_21__21_ (enumerator_1633.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_1633.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 33)) ;
      enumerator_1633.gotoNextObject () ;
    }
    {
    result_result.setter_insertKey (enumerator_1529.current (HERE).readProperty_mLabelName (), var_formalParametersList_1578, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 35)) ;
    }
    enumerator_1529.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const GGS_location constinArgument_inNonTerminalLocation,
                                            const GGS_nonTerminalLabelListAST constinArgument_inLabels,
                                            const GGS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_labelStringSet_2211 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalLabelListAST enumerator_2248 (constinArgument_inLabels) ;
  while (enumerator_2248.hasCurrentObject ()) {
    var_labelStringSet_2211.plusPlusAssignOperation (enumerator_2248.current (HERE).readProperty_mLabelName ().readProperty_string ()  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 49)) ;
    GGS_signatureForGrammarAnalysis var_formalParametersList_2393 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2248.current (HERE).readProperty_mLabelName (), var_formalParametersList_2393, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 50)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_2248.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 51)).objectCompare (var_formalParametersList_2393.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 51)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_2248.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 54)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string::makeEmptyString () ;
        }
        GGS_string temp_3 ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, var_formalParametersList_2393.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 58)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          temp_3 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_4) {
          temp_3 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2248.current (HERE).readProperty_mLabelName ().readProperty_location (), enumerator_2248.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 52)).getter_string (SOURCE_FILE ("grammarCompilation.galgas4", 52)).add_operation (GGS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 52)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 53)).add_operation (GGS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 54)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2248.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 55)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)).add_operation (var_formalParametersList_2393.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 57)).getter_string (SOURCE_FILE ("grammarCompilation.galgas4", 57)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 52)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      UpEnumerator_formalParameterListAST enumerator_3017 (enumerator_2248.current (HERE).readProperty_mFormalArgumentList ()) ;
      UpEnumerator_signatureForGrammarAnalysis enumerator_3069 (var_formalParametersList_2393) ;
      while (enumerator_3017.hasCurrentObject () && enumerator_3069.hasCurrentObject ()) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_3069.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().objectCompare (enumerator_3017.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_3069.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_3069.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 64)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 64)).add_operation (GGS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 65)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2248.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 66)).add_operation (GGS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)).add_operation (extensionGetter_string (enumerator_3017.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)).add_operation (GGS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 63)) ;
          }
        }
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_3069.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string ().objectCompare (enumerator_3017.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_3069.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared of '@").add_operation (enumerator_3069.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 73)).add_operation (GGS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 74)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2248.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 75)).add_operation (GGS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)).add_operation (enumerator_3017.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 77)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 77)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 72)) ;
          }
        }
        enumerator_3017.gotoNextObject () ;
        enumerator_3069.gotoNextObject () ;
      }
    }
    enumerator_2248.gotoNextObject () ;
  }
  UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4402 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis) ;
  while (enumerator_4402.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_labelStringSet_2211.getter_contains (enumerator_4402.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 85)).operator_not (SOURCE_FILE ("grammarCompilation.galgas4", 85)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GGS_string ("this non terminal does not declare the '").add_operation (enumerator_4402.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (GGS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (GGS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 88)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 86)) ;
      }
    }
    enumerator_4402.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                    const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_nonterminalDeclarationListAST enumerator_5061 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_5061.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_5104 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5061.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5061.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5061.current (HERE).readProperty_mNonterminalName ().readProperty_location (), enumerator_5061.current (HERE).readProperty_mLabels (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5061.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 105)), var_entry_5104.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 102)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5061.current (HERE).readProperty_mNonterminalName (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 111)), function_transformLabelMap (enumerator_5061.current (HERE).readProperty_mLabels (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 112)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 109)) ;
      }
    }
    enumerator_5061.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                                const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_syntaxRuleListAST enumerator_5950 (constinArgument_inRuleList) ;
  while (enumerator_5950.hasCurrentObject ()) {
    GGS_nonTerminalLabelListAST var_nonTerminalLabelListAST_5972 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_6050 (enumerator_5950.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_6050.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_5972.plusPlusAssignOperation (GGS_nonTerminalLabelListAST_2E_element::init_21__21__21_ (enumerator_6050.current (HERE).readProperty_mLabelName (), enumerator_6050.current (HERE).readProperty_mFormalArguments (), enumerator_6050.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 127)) ;
      enumerator_6050.gotoNextObject () ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_6226 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5950.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5950.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5950.current (HERE).readProperty_mNonterminalName ().readProperty_location (), var_nonTerminalLabelListAST_5972, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5950.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 137)), var_entry_6226.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 134)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5950.current (HERE).readProperty_mNonterminalName (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 143)), function_transformLabelMap (var_nonTerminalLabelListAST_5972, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 144)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 141)) ;
      }
    }
    enumerator_5950.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@semanticInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument__5F_ioActuallyUsedTerminalSymbolMap */,
                                                                                 const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument__5F_inNonTerminalSymbolMap */,
                                                                                 GGS_uint & /* ioArgument__5F_ioAddedNonTerminalIndex */,
                                                                                 GGS_syntaxInstructionListForGrammarAnalysis & /* ioArgument__5F_ioSyntaxInstructionList */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionListForGrammarAnalysis?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const GGS_syntaxInstructionList constinArgument_inInstructionList,
                                                                                                                                  GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                                                                  const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                                                                  GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                                                                                  GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_syntaxInstructionList enumerator_8426 (constinArgument_inInstructionList) ;
  while (enumerator_8426.hasCurrentObject ()) {
    callExtensionMethod_transformInstructionForGrammarAnalysis ((cPtr_syntaxInstructionAST *) enumerator_8426.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 178)) ;
    enumerator_8426.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                    const GGS_lstring constinArgument_inSyntaxComponentName,
                                                    const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                                    GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                    GGS_syntaxComponentListForGrammarAnalysis & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                                                    GGS_uint & ioArgument_ioAddedNonTerminalCount,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis var_productionRulesList_9201 = GGS_productionRuleListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_syntaxRuleListAST enumerator_9279 (constinArgument_inRuleList) ;
  while (enumerator_9279.hasCurrentObject ()) {
    GGS_uint var_nonTerminalIndex_9372 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_9390 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_9279.current (HERE).readProperty_mNonterminalName (), var_nonTerminalIndex_9372, joker_9390, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 199)) ;
    GGS_syntaxInstructionList var_parsedSyntaxInstructionList_9476 ;
    GGS_lstring joker_9532 ; // Joker input parameter
    GGS_formalParameterListAST joker_9536 ; // Joker input parameter
    GGS_location joker_9540 ; // Joker input parameter
    GGS_location joker_9574 ; // Joker input parameter
    enumerator_9279.current (HERE).readProperty_mLabelList ().method_first (joker_9532, joker_9536, joker_9540, var_parsedSyntaxInstructionList_9476, joker_9574, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 202)) ;
    GGS_syntaxInstructionListForGrammarAnalysis var_instructionList_9621 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_parsedSyntaxInstructionList_9476, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9621, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 205)) ;
    }
    var_productionRulesList_9201.plusPlusAssignOperation (GGS_productionRuleListForGrammarAnalysis_2E_element::init_21__21__21__21_ (enumerator_9279.current (HERE).readProperty_mNonterminalName (), var_nonTerminalIndex_9372, var_instructionList_9621, var_productionRulesList_9201.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 217)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 213)) ;
    enumerator_9279.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.plusPlusAssignOperation (GGS_syntaxComponentListForGrammarAnalysis_2E_element::init_21__21_ (var_productionRulesList_9201, constinArgument_inSyntaxComponentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 220)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_grammarGenerationTemplate_0,
  0,
  gWrapperAllDirectories_grammarGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (Compiler * inCompiler,
                                                                                          const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                          const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                          const GGS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                          const GGS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                          const GGS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                          const GGS_string & in_GRAMMAR_5F_NAME,
                                                                                          const GGS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  GRAMMAR ") ;
  result.appendString (in_GRAMMAR_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass cGrammar_") ;
  result.appendString (in_GRAMMAR_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 5)).stringValue ()) ;
  result.appendString (" : ") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_331_ (0) ;
  if (in_SYNTAX_5F_COMPONENTS.isValid ()) {
    UpEnumerator_lstringlist enumerator_331 (in_SYNTAX_5F_COMPONENTS) ;
    while (enumerator_331.hasCurrentObject ()) {
      result.appendString ("public cParser_") ;
      result.appendString (enumerator_331.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 7)).stringValue ()) ;
      enumerator_331.gotoNextObject () ;
      if (enumerator_331.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_331_.increment () ;
    }
  }
  result.appendString (" {\n") ;
  GGS_uint index_503_ (0) ;
  if (in_NON_5F_TERMINAL_5F_MAP.isValid ()) {
    UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_503 (in_NON_5F_TERMINAL_5F_MAP) ;
    while (enumerator_503.hasCurrentObject ()) {
      result.appendString ("//------------------------------------- '") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("' non terminal\n//--- 'parse' label\n /*  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 16)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_0 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 18)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ; */\n\n//--- indexing\n  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 23)).stringValue ()) ;
      result.appendString ("_indexing (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ;\n\n") ;
      GGS_uint index_1122_ (0) ;
      if (enumerator_503.current_mNonterminalSymbolParametersMap (HERE).isValid ()) {
        UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_1122 (enumerator_503.current_mNonterminalSymbolParametersMap (HERE)) ;
        while (enumerator_1122.hasCurrentObject ()) {
          result.appendString ("//----------- '") ;
          result.appendString (enumerator_1122.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("' label\n  public: virtual void nt_") ;
          result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1122.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_1443_IDX (0) ;
          if (enumerator_1122.current_mFormalParametersList (HERE).isValid ()) {
            UpEnumerator_signatureForGrammarAnalysis enumerator_1443 (enumerator_1122.current_mFormalParametersList (HERE)) ;
            while (enumerator_1443.hasCurrentObject ()) {
              const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_1443.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)))).boolEnum () ;
              switch (test_1) {
              case GalgasBool::boolTrue : {
                result.appendString ("const GGS_") ;
                result.appendString (enumerator_1443.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1443_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1443.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 31)))).boolEnum () ;
                switch (test_2) {
                case GalgasBool::boolTrue : {
                  result.appendString ("GGS_") ;
                  result.appendString (enumerator_1443.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_1443_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1443.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 33)))).boolEnum () ;
                  switch (test_3) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_1443.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_1443_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_1443.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_1443_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
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
              enumerator_1443.gotoNextObject () ;
              index_1443_IDX.increment () ;
            }
          }
          const GalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_4) {
          case GalgasBool::boolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString ("Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString (" * inCompiler) ;\n\n") ;
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("//--- Start symbol\n  public: static void _performSourceFileParsing_") ;
            result.appendString (enumerator_1122.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 47)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const GalgasBool test_6 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_6) {
            case GalgasBool::boolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 50)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            result.appendString ("GGS_lstring inFileName") ;
            GGS_uint index_2941_IDX (0) ;
            if (enumerator_1122.current_mFormalParametersList (HERE).isValid ()) {
              UpEnumerator_signatureForGrammarAnalysis enumerator_2941 (enumerator_1122.current_mFormalParametersList (HERE)) ;
              while (enumerator_2941.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_2941.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 55)))).boolEnum () ;
                switch (test_7) {
                case GalgasBool::boolTrue : {
                  result.appendString ("const GGS_") ;
                  result.appendString (enumerator_2941.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_2941_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, enumerator_2941.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 57)))).boolEnum () ;
                  switch (test_8) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_2941.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_2941_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, enumerator_2941.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 59)))).boolEnum () ;
                    switch (test_9) {
                    case GalgasBool::boolTrue : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_2941.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_2941_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolFalse : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_2941.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_2941_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
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
                enumerator_2941.gotoNextObject () ;
                index_2941_IDX.increment () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: static void _performSourceStringParsing_") ;
            result.appendString (enumerator_1122.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const GalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_10) {
            case GalgasBool::boolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 69)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            result.appendString ("GGS_string inSourceString,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("GGS_string inNameString") ;
            GGS_uint index_4281_IDX (0) ;
            if (enumerator_1122.current_mFormalParametersList (HERE).isValid ()) {
              UpEnumerator_signatureForGrammarAnalysis enumerator_4281 (enumerator_1122.current_mFormalParametersList (HERE)) ;
              while (enumerator_4281.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, enumerator_4281.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 75)))).boolEnum () ;
                switch (test_11) {
                case GalgasBool::boolTrue : {
                  result.appendString ("const GGS_") ;
                  result.appendString (enumerator_4281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_4281_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_12 = GGS_bool (ComparisonKind::equal, enumerator_4281.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 77)))).boolEnum () ;
                  switch (test_12) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_4281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_4281_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    const GalgasBool test_13 = GGS_bool (ComparisonKind::equal, enumerator_4281.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 79)))).boolEnum () ;
                    switch (test_13) {
                    case GalgasBool::boolTrue : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_4281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_4281_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolFalse : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_4281.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_4281_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
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
                enumerator_4281.gotoNextObject () ;
                index_4281_IDX.increment () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_1122.gotoNextObject () ;
          index_1122_.increment () ;
        }
      }
      const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
      switch (test_14) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--- Indexing\n  public: static void performIndexing (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n//--- Only lexical analysis\n  public: static void performOnlyLexicalAnalysis (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n//--- Only syntax analysis\n  public: static void performOnlySyntaxAnalysis (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_503.gotoNextObject () ;
      index_503_.increment () ;
    }
  }
  GGS_uint index_5818_ (0) ;
  if (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_nonTerminalToAddList enumerator_5818 (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST) ;
    while (enumerator_5818.hasCurrentObject ()) {
      result.appendString ("  public: virtual int32_t select_") ;
      result.appendString (enumerator_5818.current_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_5818.current_mNonTerminalToAddCount (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) ;\n") ;
      enumerator_5818.gotoNextObject () ;
      if (enumerator_5818.hasCurrentObject ()) {
        result.appendString ("\n") ;
      }
      index_5818_.increment () ;
    }
  }
  result.appendString ("} ;\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                const GGS_string constinArgument_inClassMethodName,
                                                                                                                const GGS_string constinArgument_inArgumentTypeName,
                                                                                                                const GGS_string constinArgument_inArgumentName,
                                                                                                                const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1761 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_1761, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 33)) ;
  }
  GGS_formalParameterSignature var_argList_1812 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1812.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas4", 35)), var_argumentTypeIndex_1761, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas4", 35)), constinArgument_inArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 35)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 37)), inCompiler COMMA_HERE), var_argList_1812, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                         const GGS_string constinArgument_inClassMethodName,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_31_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_31_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_32_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_32_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_33_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_33_,
                                                                                                                                                                                         const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_argList_2638 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_31__2737 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__2737, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 59)) ;
  }
  var_argList_2638.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas4", 60)), var_argumentTypeIndex_31__2737, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas4", 60)), constinArgument_inArgumentName_31_, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 60)) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_32__2928 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__2928, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 62)) ;
  }
  var_argList_2638.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas4", 63)), var_argumentTypeIndex_32__2928, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas4", 63)), constinArgument_inArgumentName_32_, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 63)) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_33__3119 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__3119, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 65)) ;
  }
  var_argList_2638.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas4", 66)), var_argumentTypeIndex_33__3119, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas4", 66)), constinArgument_inArgumentName_33_, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 66)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 68)), inCompiler COMMA_HERE), var_argList_2638, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 68)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                       const GGS_string constinArgument_inClassMethodName,
                                                                                                       const GGS_string constinArgument_inStringArgumentName,
                                                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3756 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_argumentTypeIndex_3756, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 80)) ;
  }
  GGS_formalParameterSignature var_argList_3807 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_3807.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas4", 82)), var_argumentTypeIndex_3756, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas4", 82)), constinArgument_inStringArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 82)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 84)), inCompiler COMMA_HERE), var_argList_3807, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 83)) ;
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
  UpEnumerator_lstringlist enumerator_2192 (temp_0.readProperty_mSyntaxComponents ()) ;
  while (enumerator_2192.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("syntax-").add_operation (enumerator_2192.current (HERE).readProperty_mValue ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 42)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 42))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 42)) ;
    enumerator_2192.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_1 = this ;
  const GGS_grammarForGeneration temp_2 = this ;
  const GGS_grammarForGeneration temp_3 = this ;
  const GGS_grammarForGeneration temp_4 = this ;
  const GGS_grammarForGeneration temp_5 = this ;
  const GGS_grammarForGeneration temp_6 = this ;
  const GGS_grammarForGeneration temp_7 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 45)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mStartSymbolName (), temp_5.readProperty_mHasTranslateFeature (), temp_6.readProperty_mGrammarName (), temp_7.readProperty_mSyntaxComponents () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 44))) ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 60))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 60)) ;
  const GGS_grammarForGeneration temp_1 = this ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3088 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis ()) ;
  while (enumerator_3088.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3177 (enumerator_3088.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_3177.hasCurrentObject ()) {
      UpEnumerator_signatureForGrammarAnalysis enumerator_3261 (enumerator_3177.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_3261.hasCurrentObject ()) {
        switch (enumerator_3261.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            GGS_unifiedTypeMapEntry var_t_3422 = extensionGetter_typeMapEntryForLKey (constinArgument_inUnifiedTypeMap, enumerator_3261.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 66)) ;
            extensionMethod_addHeaderFileName (var_t_3422, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 67)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_3261.gotoNextObject () ;
      }
      enumerator_3177.gotoNextObject () ;
    }
    enumerator_3088.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_2 = this ;
  outArgument_outImplementation = temp_2.readProperty_mCppFileContents () ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_grammarForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_grammarForGeneration temp_0 = this ;
  result_result = GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 79)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 79)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_grammarForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 91)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syntaxDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syntaxDeclarationForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  result_result = GGS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 118)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syntaxDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_syntaxDeclarationForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syntaxDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_syntaxDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 130)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syntaxDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_syntaxDeclarationForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@syntaxDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 143))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 143)) ;
  GGS__5B_uint_5D_ var_selectMethodList_6123 = GGS__5B_uint_5D_::init (inCompiler COMMA_HERE) ;
  GGS_uint var_idx_6167 = GGS_uint (uint32_t (0U)) ;
  const GGS_syntaxDeclarationForGeneration temp_1 = this ;
  if (temp_1.readProperty_mSelectMethodCount ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 146)).isValid ()) {
    uint32_t variant_6179 = temp_1.readProperty_mSelectMethodCount ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 146)).uintValue () ;
    bool loop_6179 = true ;
    while (loop_6179) {
      const GGS_syntaxDeclarationForGeneration temp_2 = this ;
      loop_6179 = GGS_bool (ComparisonKind::lowerThan, var_idx_6167.objectCompare (temp_2.readProperty_mSelectMethodCount ())).isValid () ;
      if (loop_6179) {
        loop_6179 = GGS_bool (ComparisonKind::lowerThan, var_idx_6167.objectCompare (temp_2.readProperty_mSelectMethodCount ())).boolValue () ;
      }
      if (loop_6179 && (0 == variant_6179)) {
        loop_6179 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas4", 146)) ;
      }
      if (loop_6179) {
        variant_6179 -= 1 ;
        var_selectMethodList_6123.plusPlusAssignOperation (var_idx_6167  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 148)) ;
        var_idx_6167.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 149)) ;
      }
    }
  }
  const GGS_syntaxDeclarationForGeneration temp_3 = this ;
  const GGS_syntaxDeclarationForGeneration temp_4 = this ;
  const GGS_syntaxDeclarationForGeneration temp_5 = this ;
  const GGS_syntaxDeclarationForGeneration temp_6 = this ;
  const GGS_syntaxDeclarationForGeneration temp_7 = this ;
  const GGS_syntaxDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 153)), temp_5.readProperty_mNonterminalDeclarationMap (), temp_6.readProperty_mRuleDeclarationList (), var_selectMethodList_6123, temp_7.readProperty_mHasIndexing (), temp_8.readProperty_mHasTranslateFeature () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 151))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@syntaxDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 167)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 167))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 167)) ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GGS_stringset::init (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 168))) ;
  const GGS_syntaxDeclarationForGeneration temp_1 = this ;
  GGS_string var_lexiqueCppName_7197 = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 172)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 172)) ;
  const GGS_syntaxDeclarationForGeneration temp_2 = this ;
  UpEnumerator_ruleDeclarationList enumerator_7302 (temp_2.readProperty_mRuleDeclarationList ()) ;
  while (enumerator_7302.hasCurrentObject ()) {
    UpEnumerator_ruleLabelImplementationList enumerator_7420 (enumerator_7302.current (HERE).readProperty_mLabelImplementationList ()) ;
    while (enumerator_7420.hasCurrentObject ()) {
      const GGS_syntaxDeclarationForGeneration temp_3 = this ;
      const GGS_syntaxDeclarationForGeneration temp_4 = this ;
      GGS_string var_ruleName_7468 = GGS_string ("cParser_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 176)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 176)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 176)).add_operation (temp_4.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 177)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 177)).add_operation (enumerator_7302.current (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 178)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 177)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 178)).add_operation (enumerator_7302.current (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 179)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 179)).add_operation (enumerator_7420.current (HERE).readProperty_mLabelName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 179)) ;
      outArgument_outImplementation.plusAssignOperation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 180)) ;
      GGS_string var_code_8384 ;
      {
      const GGS_syntaxDeclarationForGeneration temp_5 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_ruleName_7468, ioArgument_ioInclusionSet, enumerator_7420.current (HERE).readProperty_mSignatureForGeneration (), enumerator_7420.current (HERE).readProperty_mInstructionListForGeneration (), GGS_bool (false), var_lexiqueCppName_7197, GGS_bool (false), GGS_bool (false), temp_5.readProperty_mHasTranslateFeature (), var_code_8384, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 181)) ;
      }
      outArgument_outImplementation.plusAssignOperation(var_code_8384, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 194)) ;
      enumerator_7420.gotoNextObject () ;
    }
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_syntaxDeclarationForGeneration temp_7 = this ;
      test_6 = temp_7.readProperty_mHasIndexing ().boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_semanticInstructionListForGeneration var_instructionList_8585 ;
        GGS_lstring joker_8564 ; // Joker input parameter
        GGS_formalParameterListForGeneration joker_8568 ; // Joker input parameter
        GGS_formalParameterSignature joker_8572 ; // Joker input parameter
        GGS_location joker_8576 ; // Joker input parameter
        enumerator_7302.current (HERE).readProperty_mLabelImplementationList ().method_first (joker_8564, joker_8568, joker_8572, joker_8576, var_instructionList_8585, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 198)) ;
        const GGS_syntaxDeclarationForGeneration temp_8 = this ;
        const GGS_syntaxDeclarationForGeneration temp_9 = this ;
        GGS_string var_ruleName_8622 = GGS_string ("cParser_").add_operation (temp_8.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 199)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 199)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 199)).add_operation (temp_9.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 200)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 200)).add_operation (enumerator_7302.current (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 201)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 200)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 201)).add_operation (enumerator_7302.current (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 202)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 202)).add_operation (GGS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 202)) ;
        outArgument_outImplementation.plusAssignOperation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 203)) ;
        GGS_string var_code_9521 ;
        {
        routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_ruleName_8622, ioArgument_ioInclusionSet, GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), function_syntaxSignatureOfInstructionList (GGS_string ("indexing"), var_instructionList_8585, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 209)), GGS_bool (false), var_lexiqueCppName_7197, GGS_bool (false), GGS_bool (false), GGS_bool (false), var_code_9521, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 204)) ;
        }
        outArgument_outImplementation.plusAssignOperation(var_code_9521, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 217)) ;
      }
    }
    enumerator_7302.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure?static?&???????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (const GGS_bool constinArgument_inGenerateStatic,
                                                                                  const GGS_string constinArgument_inProcedureMangledName,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                                  const GGS_bool constinArgument_inProcedureIsConst,
                                                                                  const GGS_string constinArgument_inCompilerTypeName,
                                                                                  const GGS_bool constinArgument_inGenerateLocationArgs,
                                                                                  const GGS_bool constinArgument_inGenerateResetTemplateString,
                                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_stringset var_unusedVariableCppNameSet_10496 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_unusedVariableCppNameSet_10496.plusPlusAssignOperation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 248))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 248)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas4", 250)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_unusedVariableCppNameSet_10496.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 251))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 251)) ;
    }
  }
  UpEnumerator_formalParameterListForGeneration enumerator_10778 (constinArgument_inFormalArgumentList) ;
  while (enumerator_10778.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_10778.current (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticGeneration.galgas4", 254)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_unusedVariableCppNameSet_10496.plusPlusAssignOperation (enumerator_10778.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 255)) ;
      }
    }
    enumerator_10778.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_10975 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_11008 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_11008.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 261)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_11075 (constinArgument_inInstructionList) ;
  while (enumerator_11075.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_11075.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_10975, var_unusedVariableCppNameSet_10496, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_11008, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 263)) ;
    enumerator_11075.gotoNextObject () ;
  }
  {
  var_routineBody_11008.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 271)) ;
  }
  UpEnumerator_formalParameterListForGeneration enumerator_11387 (constinArgument_inFormalArgumentList) ;
  while (enumerator_11387.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11387.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 274)) ;
    enumerator_11387.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = constinArgument_inGenerateStatic.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 279)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("void ").add_operation (constinArgument_inProcedureMangledName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 281)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 281)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 281)) ;
  GGS_uint var_colRef_11671 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 282)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_11733 (constinArgument_inFormalArgumentList) ;
  while (enumerator_11733.hasCurrentObject ()) {
    switch (enumerator_11733.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11733.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 287)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 287)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 287)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11733.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 289)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 289)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 289)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 289)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11733.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 291)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 291)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 291)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 291)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11733.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 293)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 293)) ;
      }
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_10496.getter_contains (enumerator_11733.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 295)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_11733.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 296)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 296)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 296)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_11733.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 298)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 300)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11671, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 301)) ;
    }
    enumerator_11733.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_10496.getter_contains (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 305)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 305)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 306)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 306)).add_operation (GGS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 306)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 308)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 308)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 308)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 308)) ;
      }
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11671, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 310)) ;
      }
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 313)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 313)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_unusedVariableCppNameSet_10496.getter_contains (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 314)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 314)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 315)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 315)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 315)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 317)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 317)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 320)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11671, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 321)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 322)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 324)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 326)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 328)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_13649 (constinArgument_inFormalArgumentList) ;
  while (enumerator_13649.hasCurrentObject ()) {
    switch (enumerator_13649.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_13649.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 333)).add_operation (GGS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 333)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 333)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      break ;
    }
    enumerator_13649.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_11008, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 338)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 341)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 341)).add_operation (GGS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 341)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 341)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 344)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction?&??????static?const!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (const GGS_string constinArgument_inFunctionCppRepresentationName,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GGS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                                  const GGS_string constinArgument_inCompilerTypeName,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                                                  const GGS_string constinArgument_inResultVariableCppName,
                                                                                  const GGS_bool constinArgument_inIsStatic,
                                                                                  const GGS_bool constinArgument_inIsConst,
                                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 364)) ;
  GGS_stringset var_unusedVariableCppNameSet_15158 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_15158.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 367))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 367)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_15325 (constinArgument_inFormalArgumentList) ;
  while (enumerator_15325.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15325.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 370)) ;
    var_unusedVariableCppNameSet_15158.plusPlusAssignOperation (enumerator_15325.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 371)) ;
    enumerator_15325.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_15518 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_15559 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_15559.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 376)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_15626 (constinArgument_inInstructionList) ;
  while (enumerator_15626.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_15626.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_15518, var_unusedVariableCppNameSet_15158, GGS_bool (false), var_routineBody_15559, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 378)) ;
    enumerator_15626.gotoNextObject () ;
  }
  {
  var_routineBody_15559.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 386)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 389)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 391)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 391)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 391)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 391)) ;
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inFunctionCppRepresentationName.add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 392)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 392)) ;
  GGS_uint var_colRef_16137 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 393)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_16199 (constinArgument_inFormalArgumentList) ;
  while (enumerator_16199.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_16199.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16199.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 397)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 397)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 397)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 397)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16199.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 399)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 399)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 399)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_15158.getter_contains (enumerator_16199.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 401)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_16199.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 404)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 404)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 406)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16137, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 407)) ;
    }
    enumerator_16199.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 410)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 410)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_15158.getter_contains (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 411)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 411)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" /* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 412)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 412)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 412)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 414)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 414)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 414)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 416)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16137, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 417)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 418)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = constinArgument_inIsConst.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 420)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 422)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 424)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 424)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 424)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 425)).add_operation (GGS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 425)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 424)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_15559, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 427)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 429)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 430)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 430)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 430)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 432)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (const GGS_string constinArgument_inFunctionCppRepresentationName,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      const GGS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                      const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                      const GGS_string constinArgument_inCompilerTypeName,
                                                                      const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                                      const GGS_string constinArgument_inResultVariableCppName,
                                                                      GGS_string & outArgument_outGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 446)) ;
  GGS_stringset var_unusedVariableCppNameSet_18428 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_18428.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 449))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 449)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_18595 (constinArgument_inFormalArgumentList) ;
  while (enumerator_18595.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18595.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 452)) ;
    var_unusedVariableCppNameSet_18428.plusPlusAssignOperation (enumerator_18595.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 453)) ;
    enumerator_18595.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_18788 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_18829 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_18829.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 458)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_18896 (constinArgument_inInstructionList) ;
  while (enumerator_18896.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_18896.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_18788, var_unusedVariableCppNameSet_18428, GGS_bool (false), var_routineBody_18829, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 460)) ;
    enumerator_18896.gotoNextObject () ;
  }
  {
  var_routineBody_18829.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 468)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 470)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 470)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 470)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 470)) ;
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inFunctionCppRepresentationName.add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 471)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 471)) ;
  GGS_uint var_colRef_19346 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 472)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_19408 (constinArgument_inFormalArgumentList) ;
  while (enumerator_19408.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_19408.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19408.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 476)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 476)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 476)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19408.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 478)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 478)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 478)) ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_unusedVariableCppNameSet_18428.getter_contains (enumerator_19408.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 480)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" /* ").add_operation (enumerator_19408.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 481)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 481)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 481)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_19408.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 483)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 483)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 485)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19346, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 486)) ;
    }
    enumerator_19408.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 489)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 489)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_unusedVariableCppNameSet_18428.getter_contains (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 490)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 490)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 491)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 491)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 491)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 491)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 493)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 493)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 493)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 495)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19346, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 496)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS) const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 497)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 499)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 499)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 499)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 500)).add_operation (GGS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 500)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 499)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_18829, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 502)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 504)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 505)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 505)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 505)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 507)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter???&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (const GGS_string constinArgument_inClassName,
                                                                  const GGS_string constinArgument_inBaseClassName,
                                                                  const GGS_string constinArgument_inMethodName,
                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                  const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                  const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_stringset var_unusedVariableCppNameSet_21437 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_21437.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 526))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 526)) ;
  var_unusedVariableCppNameSet_21437.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 527)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_21573 (constinArgument_inFormalArgumentList) ;
  while (enumerator_21573.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_21437.plusPlusAssignOperation (enumerator_21573.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 529)) ;
    enumerator_21573.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_21697 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_21730 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_21730.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 534)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_21797 (constinArgument_inInstructionList) ;
  while (enumerator_21797.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_21797.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_21697, var_unusedVariableCppNameSet_21437, GGS_bool (false), var_routineBody_21730, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 536)) ;
    enumerator_21797.gotoNextObject () ;
  }
  {
  var_routineBody_21730.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 544)) ;
  }
  outArgument_outGeneratedCode = GGS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 546)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 546)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 546)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 546)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 546)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 546)) ;
  GGS_uint var_colRef_22256 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 547)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 549)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 549)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 549)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 549)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 551)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 551)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 551)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 551)) ;
  }
  GGS_bool var_currentObjectIsUnused_22515 = var_unusedVariableCppNameSet_21437.getter_contains (GGS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 553)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_22515.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 555)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 557)) ;
  }
  UpEnumerator_formalParameterListForGeneration enumerator_22727 (constinArgument_inFormalArgumentList) ;
  while (enumerator_22727.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 561)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22256, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 562)) ;
    }
    switch (enumerator_22727.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22727.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 565)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 565)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 565)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 565)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22727.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 567)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 567)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 567)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22727.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 569)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 569)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 569)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 569)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22727.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 571)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 571)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 571)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 571)) ;
      }
      break ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_21437.getter_contains (enumerator_22727.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 573)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_22727.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 574)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 574)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 574)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_22727.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 576)) ;
    }
    enumerator_22727.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 580)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22256, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 581)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 582)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_21437.getter_contains (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 583)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 583)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 584)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 584)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 584)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 584)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 586)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 586)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 588)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22256, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 589)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 590)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 591)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_22515.operator_not (SOURCE_FILE ("semanticGeneration.galgas4", 593)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, constinArgument_inBaseClassName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 595)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 595)).add_operation (GGS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 595)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 595)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 597)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 597)).add_operation (GGS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 597)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 597)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 597)).add_operation (GGS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 597)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 597)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 599)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 599)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 599)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 599)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_21730, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 601)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 603)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew?&???!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (const GGS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 const GGS_string constinArgument_inMethodName,
                                                                 const GGS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                                                 const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                                 GGS_string & outArgument_outGeneratedCode,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_string var_className_25371 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 616)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_25474 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_25474.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 619))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 619)) ;
  var_unusedVariableCppNameSet_25474.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 620)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_25610 (constinArgument_inFormalArgumentList) ;
  while (enumerator_25610.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_25474.plusPlusAssignOperation (enumerator_25610.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 622)) ;
    enumerator_25610.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_25734 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_25775 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_25775.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 627)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_25842 (constinArgument_inInstructionList) ;
  while (enumerator_25842.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_25842.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_25734, var_unusedVariableCppNameSet_25474, GGS_bool (false), var_routineBody_25775, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 629)) ;
    enumerator_25842.gotoNextObject () ;
  }
  {
  var_routineBody_25775.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 637)) ;
  }
  GGS_unifiedTypeMapEntry var_baseType_26175 = constinArgument_inReceiverType ;
  GGS_bool var_searching_26213 = GGS_bool (true) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas4", 641)).isValid ()) {
    uint32_t variant_26232 = GGS_uint::class_func_max (SOURCE_FILE ("semanticGeneration.galgas4", 641)).uintValue () ;
    bool loop_26232 = true ;
    while (loop_26232) {
      loop_26232 = var_searching_26213.isValid () ;
      if (loop_26232) {
        loop_26232 = var_searching_26213.boolValue () ;
      }
      if (loop_26232 && (0 == variant_26232)) {
        loop_26232 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas4", 641)) ;
      }
      if (loop_26232) {
        variant_26232 -= 1 ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extensionGetter_definition (var_baseType_26175, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 642)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticGeneration.galgas4", 642)).operator_not (SOURCE_FILE ("semanticGeneration.galgas4", 642)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = extensionGetter_definition (extensionGetter_definition (var_baseType_26175, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 643)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 643)).readProperty_instanceMethodMap ().getter_contains (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 643)).boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                var_baseType_26175 = extensionGetter_definition (var_baseType_26175, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 644)).readProperty_superType () ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              var_searching_26213 = GGS_bool (false) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          var_searching_26213 = GGS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (var_baseType_26175, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 652)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 652)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 652)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 652)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 652)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 652))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 652)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 653)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_26765 (constinArgument_inFormalArgumentList) ;
  while (enumerator_26765.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_26765.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 655)) ;
    enumerator_26765.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GGS_string ("void cPtr_").add_operation (var_className_25371.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 658)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 658)).add_operation (GGS_string ("::method_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 658)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 658)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 658)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 658)) ;
  GGS_uint var_colRef_27028 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 659)) ;
  UpEnumerator_formalParameterListForGeneration enumerator_27090 (constinArgument_inFormalArgumentList) ;
  while (enumerator_27090.hasCurrentObject ()) {
    switch (enumerator_27090.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27090.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 664)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 664)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 664)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 664)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27090.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 666)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 666)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 666)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 666)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27090.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 668)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 668)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 668)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 668)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27090.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 670)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 670)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 670)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 670)) ;
      }
      break ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_25474.getter_contains (enumerator_27090.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 672)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_27090.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 673)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 673)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 673)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_27090.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 675)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 677)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_27028, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 678)) ;
    }
    enumerator_27090.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 681)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_25474.getter_contains (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 682)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 682)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 683)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 683)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 683)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 683)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 685)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 685)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 687)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_27028, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 688)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 689)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 690)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_25775, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 692)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 694)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- File '/galgas-predefined-entities.txt'

const char * gWrapperFileContent_0_typeGenerationTemplate = 
  "\n"
  "extern proc #usefull println (let @string inString)\n"
  "\n"
  "extern proc #usefull print (let @string inString)\n"
  "\n"
  "list @2lstringlist #usefull {\n"
  "  public var @lstring mValue0\n"
  "  public var @lstring mValue1\n"
  "}\n"
  "\n"
   ;

const cRegularFileWrapper gWrapperFile_0_typeGenerationTemplate (
  "galgas-predefined-entities.txt",
  "txt",
  true, // Text file
 198, // Text length
  gWrapperFileContent_0_typeGenerationTemplate
) ;

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_typeGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_typeGenerationTemplate_2,
  0,
  gWrapperAllDirectories_typeGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_typeGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_typeGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_typeGenerationTemplate_1,
  1,
  gWrapperAllDirectories_typeGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeGenerationTemplate_0 [2] = {
  & gWrapperFile_0_typeGenerationTemplate,
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_typeGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate (
  "",
  1,
  gWrapperAllFiles_typeGenerationTemplate_0,
  1,
  gWrapperAllDirectories_typeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (Compiler * inCompiler,
                                                                               const GGS_string & /* in_TYPE_5F_NAME */,
                                                                               const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GGS_bool & /* in_IS_5F_CONCRETE */,
                                                                               const GGS_initializerMap & in_INITIALIZER_5F_MAP,
                                                                               const GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                               const GGS_getterMap & in_GETTER_5F_MAP,
                                                                               const GGS_setterMap & in_MODIFIER_5F_MAP,
                                                                               const GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                               const GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                               const GGS_subscriptMap & in_READ_5F_SUBSCRIPT_5F_MAP,
                                                                               const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                               const GGS_typeFeatures & in_SUPPORTED_5F_OPERATORS,
                                                                               const GGS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                               const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                               const GGS_bool & in_SUPPORT_5F_COLLECTION_5F_VALUE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//-- Start of type generic part\n\n//--------------------------------- Initializers\n") ;
  GGS_uint index_133_ (0) ;
  if (in_INITIALIZER_5F_MAP.isValid ()) {
    UpEnumerator_initializerMap enumerator_133 (in_INITIALIZER_5F_MAP) ;
    while (enumerator_133.hasCurrentObject ()) {
      result.appendString ("  public: static GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" ") ;
      result.appendString (enumerator_133.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 5)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_320_IDX (0) ;
      if (enumerator_133.current_mArgumentTypeList (HERE).isValid ()) {
        UpEnumerator_functionSignature enumerator_320 (enumerator_133.current_mArgumentTypeList (HERE)) ;
        while (enumerator_320.hasCurrentObject ()) {
          const GalgasBool test_0 = enumerator_320.current_isConstant (HERE).boolEnum () ;
          switch (test_0) {
          case GalgasBool::boolTrue : {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_320.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_320_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_320.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 11)).stringValue ()) ;
            result.appendString (" inOperand") ;
            result.appendString (index_320_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 11)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_320.gotoNextObject () ;
          index_320_IDX.increment () ;
        }
      }
      result.appendString ("Compiler * inCompiler\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
      enumerator_133.gotoNextObject () ;
      index_133_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Object cloning\n  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;\n\n//--------------------------------- Object extraction\n  public: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- GALGAS class functions\n") ;
    GGS_uint index_1200_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      UpEnumerator_classFunctionMap enumerator_1200 (in_CLASS_5F_FUNC_5F_MAP) ;
      while (enumerator_1200.hasCurrentObject ()) {
        result.appendString ("  public: static class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1200.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_1200.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_1436_IDX (0) ;
        if (enumerator_1200.current_mArgumentTypeList (HERE).isValid ()) {
          UpEnumerator_functionSignature enumerator_1436 (enumerator_1200.current_mArgumentTypeList (HERE)) ;
          while (enumerator_1436.hasCurrentObject ()) {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1436.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 31)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_1436_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 31)).stringValue ()) ;
            enumerator_1436.gotoNextObject () ;
            if (enumerator_1436.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1436_IDX.increment () ;
          }
        }
        const GalgasBool test_2 = enumerator_1200.current_mHasCompilerArgument (HERE).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_1200.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_3 = enumerator_1200.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_3) {
          case GalgasBool::boolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_1200.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            switch (test_4) {
            case GalgasBool::boolTrue : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("LOCATION_ARGS) ;\n\n") ;
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
        enumerator_1200.gotoNextObject () ;
        index_1200_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Handle copy\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & operator = (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 54)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 54)).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- << and >> shift operators\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_uint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right_shift_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_bigint inShiftOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("class Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &= operator (with expression)\n  public: void andAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                   class Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- |= operator (with expression)\n  public: void orAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                  class Compiler * inCompiler\n                                  COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).boolEnum () ;
  switch (test_9) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ^= operator (with expression)\n  public: void xorAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                   class Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_10 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- += operator (with expression)\n  public: void plusAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                    class Compiler * inCompiler\n                                    COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- -= operator (with expression)\n  public: void minusAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                     class Compiler * inCompiler\n                                     COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 105)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 105)).boolEnum () ;
  switch (test_12) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- *= operator (with expression)\n  public: void mulAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                   class Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 112)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 112)).boolEnum () ;
  switch (test_13) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- /= operator (with expression)\n  public: void divAssignOperation (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" inOperand,\n                                   class Compiler * inCompiler\n                                   COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_14 = GGS_bool (ComparisonKind::greaterThan, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 119)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_14) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- += operator (with list of field expressions)\n  public: void addAssignOperation (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_6075_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_functionSignature enumerator_6075 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_6075.hasCurrentObject ()) {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_6075.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 123)).stringValue ()) ;
        result.appendString (" & inOperand") ;
        result.appendString (index_6075_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 123)).stringValue ()) ;
        enumerator_6075.gotoNextObject () ;
        if (enumerator_6075.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_6075_IDX.increment () ;
      }
    }
    const GalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
    switch (test_15) {
    case GalgasBool::boolTrue : {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_16 = in_SUPPORT_5F_COLLECTION_5F_VALUE.boolEnum () ;
  switch (test_16) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--------------------------------- ++= operator, collection value\n  public: void plusPlusAssignOperation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 136)).stringValue ()) ;
    result.appendString (" & inOperand\n  ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 141)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 141)).boolEnum () ;
  switch (test_17) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- & operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_and (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 147)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 147)).boolEnum () ;
  switch (test_18) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- | operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_or (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 153)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 153)).boolEnum () ;
  switch (test_19) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ^ operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_xor (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 159)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 159)).boolEnum () ;
  switch (test_20) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- not operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_not (LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 164)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 164)).boolEnum () ;
  switch (test_21) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ~ operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_tilde (LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)).boolEnum () ;
  switch (test_22) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- + operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" add_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 176)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 176)).boolEnum () ;
  switch (test_23) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &+ operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" add_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)).boolEnum () ;
  switch (test_24) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &- operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" substract_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 186)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 186)).boolEnum () ;
  switch (test_25) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- - operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" substract_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 193)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 193)).boolEnum () ;
  switch (test_26) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- * operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" multiply_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 200)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 200)).boolEnum () ;
  switch (test_27) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &* operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" multiply_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 205)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 205)).boolEnum () ;
  switch (test_28) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- / operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" divide_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 212)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 212)).boolEnum () ;
  switch (test_29) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &/ operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" divide_operation_no_ovf (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 217)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 217)).boolEnum () ;
  switch (test_30) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- mod operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" modulo_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)).boolEnum () ;
  switch (test_31) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- prefix - operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_unary_minus (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_32 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 230)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 230)).boolEnum () ;
  switch (test_32) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- prefix &- operator\n  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" operator_unary_minus_no_ovf (void) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_33 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).boolEnum () ;
  switch (test_33) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- ++, -- operators\n  public: void increment_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: void decrement_operation (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_34 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 242)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 242)).boolEnum () ;
  switch (test_34) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- &++, &-- operators\n  public: void increment_operation_no_overflow (void) ;\n\n  public: void decrement_operation_no_overflow (void) ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_35 = in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 247)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 247)).boolEnum () ;
  switch (test_35) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Implementation of func 'description'\n  public: void description (String & ioString,\n                            const int32_t inIndentation) const override ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_36 = extensionGetter_generateCppObjectComparison (in_SUPPORTED_5F_OPERATORS, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 253)).operator_and (in_SUPPORTED_5F_OPERATORS.getter_contains (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 254)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 254)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 254)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 253)).boolEnum () ;
  switch (test_36) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Comparison\n  public: ComparisonResult objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------- Setters\n") ;
  GGS_uint index_12259_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    UpEnumerator_setterMap enumerator_12259 (in_MODIFIER_5F_MAP) ;
    while (enumerator_12259.hasCurrentObject ()) {
      const GalgasBool test_37 = GGS_bool (ComparisonKind::equal, enumerator_12259.current_mKind (HERE).objectCompare (GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
      switch (test_37) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_38 = GGS_bool (ComparisonKind::equal, enumerator_12259.current_mErrorMessage (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::equal, enumerator_12259.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_12259.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_12259.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).boolEnum () ;
        switch (test_38) {
        case GalgasBool::boolTrue : {
          result.appendString ("  public: void setter_") ;
          result.appendString (enumerator_12259.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 266)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_12690_IDX (0) ;
          if (enumerator_12259.current_mParameterList (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_12690 (enumerator_12259.current_mParameterList (HERE)) ;
            while (enumerator_12690.hasCurrentObject ()) {
              const GalgasBool test_39 = GGS_bool (ComparisonKind::equal, enumerator_12690.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 268)))).boolEnum () ;
              switch (test_39) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_12690.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_12690_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_40 = GGS_bool (ComparisonKind::equal, enumerator_12690.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 270)))).boolEnum () ;
                switch (test_40) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_12690.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 271)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_12690_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 271)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_41 = GGS_bool (ComparisonKind::equal, enumerator_12690.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 272)))).boolEnum () ;
                  switch (test_41) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_12690.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_12690_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_12690.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 275)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_12690_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 275)).stringValue ()) ;
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
              enumerator_12690.gotoNextObject () ;
              if (enumerator_12690.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_12690_IDX.increment () ;
            }
          }
          const GalgasBool test_42 = GGS_bool (ComparisonKind::equal, enumerator_12259.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 279)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_42) {
          case GalgasBool::boolTrue : {
            const GalgasBool test_43 = enumerator_12259.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_43) {
            case GalgasBool::boolTrue : {
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_44 = enumerator_12259.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_44) {
            case GalgasBool::boolTrue : {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString (") ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_12259.gotoNextObject () ;
      index_12259_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Instance Methods\n") ;
  GGS_uint index_14074_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_instanceMethodMap enumerator_14074 (in_INSTANCE_5F_METHOD_5F_MAP) ;
    while (enumerator_14074.hasCurrentObject ()) {
      const GalgasBool test_45 = GGS_bool (ComparisonKind::equal, enumerator_14074.current_mKind (HERE).objectCompare (GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)))).boolEnum () ;
      switch (test_45) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_46 = GGS_bool (ComparisonKind::equal, enumerator_14074.current_mErrorMessage (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::equal, enumerator_14074.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_14074.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_14074.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 303)).boolEnum () ;
        switch (test_46) {
        case GalgasBool::boolTrue : {
          result.appendString ("  public: void method_") ;
          result.appendString (enumerator_14074.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_14505_IDX (0) ;
          if (enumerator_14074.current_mParameterList (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_14505 (enumerator_14074.current_mParameterList (HERE)) ;
            while (enumerator_14505.hasCurrentObject ()) {
              const GalgasBool test_47 = GGS_bool (ComparisonKind::equal, enumerator_14505.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 306)))).boolEnum () ;
              switch (test_47) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_14505.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 307)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_14505_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 307)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_48 = GGS_bool (ComparisonKind::equal, enumerator_14505.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)))).boolEnum () ;
                switch (test_48) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_14505.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 309)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_14505_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 309)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_49 = GGS_bool (ComparisonKind::equal, enumerator_14505.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 310)))).boolEnum () ;
                  switch (test_49) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_14505.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 311)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_14505_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 311)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_14505.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 313)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_14505_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 313)).stringValue ()) ;
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
              enumerator_14505.gotoNextObject () ;
              if (enumerator_14505.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_14505_IDX.increment () ;
            }
          }
          const GalgasBool test_50 = GGS_bool (ComparisonKind::equal, enumerator_14074.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 317)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_50) {
          case GalgasBool::boolTrue : {
            const GalgasBool test_51 = enumerator_14074.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_51) {
            case GalgasBool::boolTrue : {
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_52 = enumerator_14074.current_mHasCompilerArgument (HERE).boolEnum () ;
            switch (test_52) {
            case GalgasBool::boolTrue : {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("Compiler * inCompiler\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS") ;
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString (") const ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_14074.gotoNextObject () ;
      index_14074_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GGS_uint index_15836_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_classMethodMap enumerator_15836 (in_CLASS_5F_METHOD_5F_MAP) ;
    while (enumerator_15836.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_15836.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 339)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_16037_IDX (0) ;
      if (enumerator_15836.current_mParameterList (HERE).isValid ()) {
        UpEnumerator_formalParameterSignature enumerator_16037 (enumerator_15836.current_mParameterList (HERE)) ;
        while (enumerator_16037.hasCurrentObject ()) {
          const GalgasBool test_53 = GGS_bool (ComparisonKind::equal, enumerator_16037.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 341)))).boolEnum () ;
          switch (test_53) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_16037.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 342)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_16037_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 342)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_54 = GGS_bool (ComparisonKind::equal, enumerator_16037.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 343)))).boolEnum () ;
            switch (test_54) {
            case GalgasBool::boolTrue : {
              result.appendString ("class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_16037.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 344)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_16037_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 344)).stringValue ()) ;
              } break ;
            case GalgasBool::boolFalse : {
              const GalgasBool test_55 = GGS_bool (ComparisonKind::equal, enumerator_16037.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 345)))).boolEnum () ;
              switch (test_55) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_16037.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 346)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_16037_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 346)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_16037.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 348)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_16037_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 348)).stringValue ()) ;
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
          enumerator_16037.gotoNextObject () ;
          if (enumerator_16037.hasCurrentObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_16037_IDX.increment () ;
        }
      }
      const GalgasBool test_56 = GGS_bool (ComparisonKind::equal, enumerator_15836.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 352)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_56) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_57 = enumerator_15836.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_57) {
        case GalgasBool::boolTrue : {
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_58 = enumerator_15836.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_58) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") ;\n\n") ;
      enumerator_15836.gotoNextObject () ;
      index_15836_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Getters\n") ;
  GGS_uint index_17278_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    UpEnumerator_getterMap enumerator_17278 (in_GETTER_5F_MAP) ;
    while (enumerator_17278.hasCurrentObject ()) {
      const GalgasBool test_59 = GGS_bool (ComparisonKind::equal, enumerator_17278.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_59) {
      case GalgasBool::boolTrue : {
        switch (enumerator_17278.current_mKind (HERE).enumValue ()) {
        case GGS_methodKind::Enumeration::invalid :
          break ;
        case GGS_methodKind::Enumeration::enum_definedAsExtension :
          {
          }
          break ;
        case GGS_methodKind::Enumeration::enum_definedAsMember :
          {
            const GalgasBool test_60 = GGS_bool (ComparisonKind::equal, enumerator_17278.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)))).operator_or (GGS_bool (ComparisonKind::equal, enumerator_17278.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)).operator_or (GGS_bool (ComparisonKind::equal, enumerator_17278.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 377)).boolEnum () ;
            switch (test_60) {
            case GalgasBool::boolTrue : {
              result.appendString ("  public: class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_17278.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 378)).stringValue ()) ;
              result.appendString (" getter_") ;
              result.appendString (enumerator_17278.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 378)).stringValue ()) ;
              result.appendString (" (") ;
              columnMarker = result.currentColumn () ;
              GGS_uint index_17784_IDX (0) ;
              if (enumerator_17278.current_mArgumentTypeList (HERE).isValid ()) {
                UpEnumerator_functionSignature enumerator_17784 (enumerator_17278.current_mArgumentTypeList (HERE)) ;
                while (enumerator_17784.hasCurrentObject ()) {
                  result.appendString ("const class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_17784.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 380)).stringValue ()) ;
                  result.appendString (" & constinOperand") ;
                  result.appendString (index_17784_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 380)).stringValue ()) ;
                  enumerator_17784.gotoNextObject () ;
                  if (enumerator_17784.hasCurrentObject ()) {
                    result.appendString (",\n") ;
                    result.appendSpacesUntilColumn (columnMarker) ;
                  }
                  index_17784_IDX.increment () ;
                }
              }
              const GalgasBool test_61 = GGS_bool (ComparisonKind::equal, enumerator_17278.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              switch (test_61) {
              case GalgasBool::boolTrue : {
                const GalgasBool test_62 = enumerator_17278.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_62) {
                case GalgasBool::boolTrue : {
                  result.appendString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolFalse : {
                  result.appendString ("LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_63 = enumerator_17278.current_mHasCompilerArgument (HERE).boolEnum () ;
                switch (test_63) {
                case GalgasBool::boolTrue : {
                  result.appendString (",\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("Compiler * inCompiler\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolFalse : {
                  result.appendString ("\n") ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                  result.appendString ("COMMA_LOCATION_ARGS") ;
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (") const ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
          }
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_17278.gotoNextObject () ;
      index_17278_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Read subscripts\n") ;
  GGS_uint index_18502_ (0) ;
  if (in_READ_5F_SUBSCRIPT_5F_MAP.isValid ()) {
    UpEnumerator_subscriptMap enumerator_18502 (in_READ_5F_SUBSCRIPT_5F_MAP) ;
    while (enumerator_18502.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18502.current_valueType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 406)).stringValue ()) ;
      result.appendString (" readSubscript_") ;
      result.appendString (enumerator_18502.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 407)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_18710_IDX (0) ;
      if (enumerator_18502.current_argumentTypeList (HERE).isValid ()) {
        UpEnumerator_functionSignature enumerator_18710 (enumerator_18502.current_argumentTypeList (HERE)) ;
        while (enumerator_18710.hasCurrentObject ()) {
          result.appendString ("const class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_18710.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 409)).stringValue ()) ;
          result.appendString (" & in") ;
          result.appendString (index_18710_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 409)).stringValue ()) ;
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          enumerator_18710.gotoNextObject () ;
          index_18710_IDX.increment () ;
        }
      }
      result.appendString ("Compiler * inCompiler\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n") ;
      enumerator_18502.gotoNextObject () ;
      index_18502_.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------- Introspection\n  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;\n") ;
  const GalgasBool test_64 = GGS_bool (ComparisonKind::greaterThan, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 419)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_64) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- Friend\n  friend class UpEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n  friend class DownEnumerator_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" \n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nextern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForPackage'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (Compiler * inCompiler,
                                                                                  const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GGS_string & /* in_TYPE_5F_IDENTIFIER */,
                                                                                  const GGS_classFunctionMap & in_CLASS_5F_FUNC_5F_MAP,
                                                                                  const GGS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//-- Start of package generic part\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_CLASS_5F_FUNC_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 4)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------- GALGAS class getters\n") ;
    GGS_uint index_220_ (0) ;
    if (in_CLASS_5F_FUNC_5F_MAP.isValid ()) {
      UpEnumerator_classFunctionMap enumerator_220 (in_CLASS_5F_FUNC_5F_MAP) ;
      while (enumerator_220.hasCurrentObject ()) {
        result.appendString ("  public: static class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_220.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 7)).stringValue ()) ;
        result.appendString (" class_func_") ;
        result.appendString (enumerator_220.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 7)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_456_IDX (0) ;
        if (enumerator_220.current_mArgumentTypeList (HERE).isValid ()) {
          UpEnumerator_functionSignature enumerator_456 (enumerator_220.current_mArgumentTypeList (HERE)) ;
          while (enumerator_456.hasCurrentObject ()) {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_456.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_456_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 9)).stringValue ()) ;
            enumerator_456.gotoNextObject () ;
            if (enumerator_456.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_456_IDX.increment () ;
          }
        }
        const GalgasBool test_1 = enumerator_220.current_mHasCompilerArgument (HERE).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_220.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 12)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 12)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("class Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = enumerator_220.current_mHasCompilerArgument (HERE).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("Compiler * inCompiler\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_220.current_mArgumentTypeList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            switch (test_3) {
            case GalgasBool::boolTrue : {
              result.appendString ("\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
              } break ;
            case GalgasBool::boolFalse : {
              result.appendString ("LOCATION_ARGS) ;\n\n") ;
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
        enumerator_220.gotoNextObject () ;
        index_220_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------- Class Methods\n") ;
  GGS_uint index_1109_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_classMethodMap enumerator_1109 (in_CLASS_5F_METHOD_5F_MAP) ;
    while (enumerator_1109.hasCurrentObject ()) {
      result.appendString ("  public: static void class_method_") ;
      result.appendString (enumerator_1109.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_1310_IDX (0) ;
      if (enumerator_1109.current_mParameterList (HERE).isValid ()) {
        UpEnumerator_formalParameterSignature enumerator_1310 (enumerator_1109.current_mParameterList (HERE)) ;
        while (enumerator_1310.hasCurrentObject ()) {
          const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 31)))).boolEnum () ;
          switch (test_4) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            result.appendString (" constinArgument") ;
            result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 32)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 33)))).boolEnum () ;
            switch (test_5) {
            case GalgasBool::boolTrue : {
              result.appendString ("class GGS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              result.appendString (" & ioArgument") ;
              result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 34)).stringValue ()) ;
              } break ;
            case GalgasBool::boolFalse : {
              const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_1310.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 35)))).boolEnum () ;
              switch (test_6) {
              case GalgasBool::boolTrue : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                result.appendString (" & outArgument") ;
                result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 36)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                result.appendString ("class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_1310.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1310_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 38)).stringValue ()) ;
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
          enumerator_1310.gotoNextObject () ;
          if (enumerator_1310.hasCurrentObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_1310_IDX.increment () ;
        }
      }
      const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_1109.current_mParameterList (HERE).getter_count (SOURCE_FILE ("unified-class-body-for-package.h.galgasTemplate", 42)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_7) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_8 = enumerator_1109.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_8) {
        case GalgasBool::boolTrue : {
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_9 = enumerator_1109.current_mHasCompilerArgument (HERE).boolEnum () ;
        switch (test_9) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("Compiler * inCompiler\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") ;\n\n") ;
      enumerator_1109.gotoNextObject () ;
      index_1109_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (Compiler * inCompiler,
                                                                                 const GGS_string & in_TYPE_5F_NAME,
                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GGS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//     ") ;
  result.appendString (GGS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 2)).add_operation (GGS_string (" generic code implementation"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nconst GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("\"") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\",\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const GalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 6)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("nullptr") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("& kTypeDescriptor_GALGAS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_SUPER_5F_TYPE_5F_INDEX, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 6)).stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nconst GALGAS_TypeDescriptor * GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::staticTypeDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nAC_GALGAS_root * GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::clonedObject (void) const {\n  AC_GALGAS_root * result = nullptr ;\n  if (isValid ()) {\n    macroMyNew (result, GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (*this)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::extractObject (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_object & inObject,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inObject.embeddedObject () ;\n  if (nullptr != p) {\n    if (nullptr != dynamic_cast <const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *> (p)) {\n      result = *p ;\n    }else{\n      inCompiler->castError (\"") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n    }  \n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (Compiler * inCompiler,
                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GGS_string & in_PRE_5F_DECLARATION,
                                                                            const GGS_string & in_CODE
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 2)).add_operation (GGS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//  Predeclarations (from GALGAS extern type declaration\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_PRE_5F_DECLARATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//---\n  public: virtual bool isValid (void) const override ;\n  public: virtual void drop (void) override ;\n\n//--- For log instruction\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Code (from GALGAS extern type declaration)\n") ;
  result.appendString (in_CODE.stringValue ()) ;
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticComponentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticComponentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticComponentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticComponentGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticComponentGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate initializerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (Compiler * inCompiler,
                                                                                              const GGS_string & in_CLASS_5F_NAME,
                                                                                              const GGS_string & in_INITIALIZER_5F_NAME,
                                                                                              const GGS_formalInputParameterListForGeneration & /* in_FORMAL_5F_ARGUMENT_5F_LIST */,
                                                                                              const GGS_string & in_INITIALIZER_5F_IMPLEMENTATION
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   ") ;
  result.appendString (GGS_string ("INITIALIZER @").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (in_INITIALIZER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_INITIALIZER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_GETTER_5F_NAME,
                                                                                                       const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                       const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_594_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_594 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_594.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_594.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_594.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_594.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_594.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_594.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_594.gotoNextObject () ;
      index_594_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                          const GGS_string & in_CLASS_5F_NAME,
                                                                                                          const GGS_string & in_GETTER_5F_NAME,
                                                                                                          const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_582_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_582 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_582.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_582.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_582.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_582.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_582.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_582.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_582.gotoNextObject () ;
      index_582_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_1225_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_1225 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1225.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1225.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1225.gotoNextObject () ;
      index_1225_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_GETTER_5F_NAME,
                                                                                               const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                               const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_579_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_579 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_579.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_579.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_579.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_579.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_579.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_579.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_579.gotoNextObject () ;
      index_579_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_GETTER_5F_NAME,
                                                                                                  const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                  const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_701_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_701 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_701.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_701.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_701.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_701.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_701.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 17)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_701.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 17)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_701.gotoNextObject () ;
      index_701_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_1344_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_1344 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1344.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1344.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1344.gotoNextObject () ;
      index_1344_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                            const GGS_unifiedTypeMapEntry & /* in_RETURN_5F_TYPE */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Overriding extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-func.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-func.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_MODIFIER_5F_NAME,
                                                                                               const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension mutating proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_622_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_622 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_622.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_622.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_622.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_622_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_622.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_622.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_622_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_622.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_622.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_622_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_622.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_622_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
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
      enumerator_622.gotoNextObject () ;
      index_622_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_2145_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2145 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2145.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
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
      enumerator_2145.gotoNextObject () ;
      index_2145_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                  const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension mutating proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic GenericUniqueArray <extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("> gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_1425_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1425 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1425.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
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
      enumerator_1425.gotoNextObject () ;
      index_1425_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_2451_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2451 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2451.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2451.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_2451.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2451.gotoNextObject () ;
      index_2451_.increment () ;
    }
  }
  result.appendString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (") ;\n    const GALGAS_TypeDescriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.appendString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.appendString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const GALGAS_TypeDescriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (classIndex, f, nullptr) ;\n    }\n    f (inObject, ") ;
  GGS_uint index_4134_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_4134 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_4134.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_4134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_4134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_4134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
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
      result.appendString (", ") ;
      enumerator_4134.gotoNextObject () ;
      index_4134_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString (" (void) {\n  enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("kTypeDescriptor_GALGAS_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.appendString (" (void) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (",\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_METHOD_5F_NAME,
                                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_556_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_556 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_556.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_556.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_556.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_556.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_556.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_556.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_556.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_556.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_556.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_556.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_556.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_556.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_556.gotoNextObject () ;
      index_556_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                          const GGS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                          const GGS_string & in_METHOD_5F_NAME,
                                                                                                          const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension proc '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 7)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_614_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_614 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_614.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_614.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_614.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_614.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_614.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_614.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_614.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_614.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_614.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_614.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_614.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_614.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_614.gotoNextObject () ;
      index_614_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_1640_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1640 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1640.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1640.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 25)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1640.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 26)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1640.gotoNextObject () ;
      index_1640_.increment () ;
    }
  }
  result.appendString ("//--- Find proc\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 31)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2190_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2190 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2190.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2190.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2190.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2190.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2190.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2190.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2190.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2190.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 41)).stringValue ()) ;
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
      result.appendString (", ") ;
      enumerator_2190.gotoNextObject () ;
      index_2190_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_METHOD_5F_NAME,
                                                                                               const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_547_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_547 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_547.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_547.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_547.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_547.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_547.gotoNextObject () ;
      index_547_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_METHOD_5F_NAME,
                                                                                                  const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Extension proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 2)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_663_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_663 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_663.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_663.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 12)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_663.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_663.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 14)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_663.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_663.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 16)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_663.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_663.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 19)).stringValue ()) ;
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
      enumerator_663.gotoNextObject () ;
      index_663_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
  GGS_uint index_1661_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1661 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1661.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1661.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 26)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1661.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 27)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1661.gotoNextObject () ;
      index_1661_.increment () ;
    }
  }
  result.appendString ("  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2163_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2163 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2163.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2163.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2163.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2163.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2163.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2163.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2163.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2163.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 41)).stringValue ()) ;
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
      result.appendString (", ") ;
      enumerator_2163.gotoNextObject () ;
      index_2163_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Overriding extension proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-proc.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-proc.cpp.galgasTemplate", 2)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-proc.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-proc.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (Compiler * inCompiler,
                                                                                           const GGS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_string & in_FILEWRAPPER_5F_NAME
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_307.hasCurrentObject ()) {
      result.appendString ("extern const char * gWrapperFileContent_") ;
      result.appendString (enumerator_307.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_307.gotoNextObject () ;
      index_307_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_577_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("extern const uint8_t gWrapperFileContent_") ;
      result.appendString (enumerator_577.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" [] ;\n") ;
      enumerator_577.gotoNextObject () ;
      index_577_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_841_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_841.hasCurrentObject ()) {
      result.appendString ("extern const cRegularFileWrapper gWrapperFile_") ;
      result.appendString (enumerator_841.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_841.gotoNextObject () ;
      index_841_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1108_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result.appendString ("extern const cDirectoryWrapper gWrapperDirectory_") ;
      result.appendString (enumerator_1108.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_1108.gotoNextObject () ;
      index_1108_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (Compiler * inCompiler,
                                                                                              const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                              const GGS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_GETTER_5F_NAME,
                                                                                                         const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension func '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & inObject") ;
  GGS_uint index_580_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_580 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_580.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_580.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_580.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_580_IDX.getter_string (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_580.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_580_IDX.getter_string (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_580.gotoNextObject () ;
      index_580_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_NAME,
                                                                                                            const GGS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("  Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-implementation.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_METHOD_5F_NAME,
                                                                                                         const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension proc '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" inObject") ;
  GGS_uint index_544_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_544 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_544.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_544.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_544.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_544.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_544.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_544.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_544.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_544.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_544.gotoNextObject () ;
      index_544_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension proc '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                         const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension mutating proc '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & ioObject") ;
  GGS_uint index_553_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_553 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_553.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_553.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_553.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_553.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_553.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_553.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_553.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_553.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_553.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_553.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_553.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_553.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_553.gotoNextObject () ;
      index_553_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (Compiler * inCompiler,
                                                                                        const GGS_string & in_FUNCTION_5F_NAME,
                                                                                        const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                        const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_470_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_470 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_470.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_470.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_470.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_470_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_470.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_470_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_470.gotoNextObject () ;
      index_470_IDX.increment () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (Compiler * inCompiler,
                                                                                           const GGS_string & in_FUNCTION_5F_NAME,
                                                                                           const GGS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (Compiler * inCompiler,
                                                                                       const GGS_string & in_ROUTINE_5F_NAME,
                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_") ;
  result.appendString (in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_450_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_450 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_450.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
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
      enumerator_450.gotoNextObject () ;
      index_450_IDX.increment () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (Compiler * inCompiler,
                                                                                          const GGS_string & in_ROUTINE_5F_NAME,
                                                                                          const GGS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_ROUTINE_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (Compiler * inCompiler,
                                                                                               const GGS_string & in_FUNCTION_5F_NAME,
                                                                                               const GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                               const GGS_formalInputParameterListForGeneration & /* in_FORMAL_5F_ARGUMENT_5F_LIST */,
                                                                                               const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//  Function implementation                                                                      \n//--------------------------------------------------------------------------------------------------\n\nstatic bool gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" = false ;\nstatic GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (! gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (") {\n    gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.appendString (" = onceFunction_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.appendString (" (inCompiler COMMA_THERE) ;\n    gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" = true ;\n  }\n  return gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void releaseOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" (void) {\n  gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue ()) ;
  result.appendString (".drop () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gEpilogueForOnceFunction_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("nullptr,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("releaseOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (Compiler * inCompiler,
                                                                                                   const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                   const GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                   const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class Compiler * inCompiler") ;
  GGS_uint index_565_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_565 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_565.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_565.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" & ") ;
      result.appendString (enumerator_565.current_mFormalArgumentCppName (HERE).stringValue ()) ;
      enumerator_565.gotoNextObject () ;
      index_565_.increment () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (Compiler * inCompiler,
                                                                                                      const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                      const GGS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                      const GGS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                      const GGS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * ") ;
  const GalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_contains (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ") ;
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_676_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_676 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_676.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_676.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & ") ;
      const GalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_contains (enumerator_676.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("/* ") ;
        result.appendString (enumerator_676.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        result.appendString (" */") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (enumerator_676.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_676.gotoNextObject () ;
      index_676_.increment () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  String result ;\n") ;
  const GalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  uint32_t columnMarker = 0 ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString (in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue ()) ;
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString ("  return GGS_string (result) ;\n}\n\n") ;
  return GGS_string (result) ;
}

