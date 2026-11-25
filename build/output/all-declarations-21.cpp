#include "all-declarations-21.h"

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
  GGS_nonterminalMap var_nonterminalMap_56696 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_56696, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1256)) ;
  }
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_56784 (constinArgument_inRuleList) ;
  while (enumerator_56784.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_56827 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_56877 (enumerator_56784.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_56877.hasCurrentObject ()) {
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_56933 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_57007 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_57050 (enumerator_56877.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_57050.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_57082 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_57050.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1269)) ;
        var_signatureForGeneration_56933.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_57050.current (HERE).readProperty_mFormalSelector (), enumerator_57050.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_57082, enumerator_57050.current (HERE).readProperty_mFormalArgumentName (), GGS_string ("argument_").add_operation (enumerator_57050.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1275)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1270)) ;
        var_signature_57007.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_57050.current (HERE).readProperty_mFormalSelector (), var_type_57082, enumerator_57050.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_57050.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1276)) ;
        enumerator_57050.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_56827.setter_insertKey (enumerator_56877.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_56933, var_signature_57007, enumerator_56877.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1278)) ;
      }
      enumerator_56877.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_56784.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_56827, var_nonterminalMap_56696, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1280)) ;
    }
    enumerator_56784.gotoNextObject () ;
  }
  GGS_analysisContext var_analysisContext_57786 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 1287)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_selectMethodCount_58007 = GGS_u_33__32_ (uint32_t (0U)) ;
  GGS__5B_ruleDeclarationAST_5D_ var_ruleDeclarationList_58057 = GGS__5B_ruleDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_newRuleIndex_58094 = GGS_u_33__32_ (uint32_t (0U)) ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_58126 (constinArgument_inRuleList) ;
  while (enumerator_58126.hasCurrentObject ()) {
    GGS__5B_ruleLabelImplementationAST_5D_ var_ruleLabelImplementationList_58186 = GGS__5B_ruleLabelImplementationAST_5D_::init (inCompiler COMMA_HERE) ;
    GGS_u_33__32_ var_localSelectMethodCount_58233 = var_selectMethodCount_58007 ;
    GGS_nonterminalLabelMap joker_58330 ; // Joker input parameter
    var_nonterminalMap_56696.method_searchKey (enumerator_58126.current (HERE).readProperty_mNonterminalName (), joker_58330, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1298)) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_58358 (enumerator_58126.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_58358.hasCurrentObject ()) {
      var_localSelectMethodCount_58233 = var_selectMethodCount_58007 ;
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_58915 ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_58952 ;
      GGS__5B_semanticInstructionForGeneration_5D_ var_instructionListForGeneration_58976 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_58358.current (HERE).readProperty_mFormalArguments (), enumerator_58358.current (HERE).readProperty_mSyntaxInstructionList (), var_analysisContext_57786, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1310)), var_nonterminalMap_56696, constinArgument_inSyntaxComponentName, enumerator_58358.current (HERE).readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, var_localSelectMethodCount_58233, var_signatureForGeneration_58915, var_signature_58952, var_instructionListForGeneration_58976, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1301)) ;
      }
      var_ruleLabelImplementationList_58186.plusPlusAssignOperation (GGS_ruleLabelImplementationAST::init_21__21__21__21__21_ (enumerator_58358.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_58915, var_signature_58952, enumerator_58358.current (HERE).readProperty_mEndOfArgumentLocation (), var_instructionListForGeneration_58976, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1320)) ;
      enumerator_58358.gotoNextObject () ;
    }
    var_selectMethodCount_58007 = var_localSelectMethodCount_58233 ;
    GGS_nonterminalLabelMap joker_59318 ; // Joker input parameter
    var_nonterminalMap_56696.method_searchKey (enumerator_58126.current (HERE).readProperty_mNonterminalName (), joker_59318, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1328)) ;
    var_ruleDeclarationList_58057.plusPlusAssignOperation (GGS_ruleDeclarationAST::init_21__21__21_ (enumerator_58126.current (HERE).readProperty_mNonterminalName ().readProperty_string (), var_newRuleIndex_58094, var_ruleLabelImplementationList_58186, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1329)) ;
    var_newRuleIndex_58094.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1333)) ;
    enumerator_58126.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GGS_syntaxDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_56696, var_ruleDeclarationList_58057, var_selectMethodCount_58007, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
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
  constinArgument_inDotDocumentFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 1352)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1352)) ;
  GGS_string var_document_60048 = GGS_string ("digraph G {\n") ;
  var_document_60048.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1354)) ;
  var_document_60048.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1355)) ;
  UpEnumerator_unifiedTypeMap enumerator_60197 (constinArgument_inTypeMap) ;
  while (enumerator_60197.hasCurrentObject ()) {
    switch (enumerator_60197.current (HERE).readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_60307_definition_0 ;
        enumerator_60197.current (HERE).readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_60307_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_60307_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas4", 1360)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_60307_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_60048.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_60307_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1363)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1363)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1363)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass extractedValue_60508_superType_0 ;
                extractedValue_60307_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_60508_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_typeDefinition_2E_solved var_solvedType_60538 = extractedValue_60508_superType_0.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1365)).unwrappedValue () ;
                  if (!extractedValue_60508_superType_0.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1365)).isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    var_document_60048.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_60307_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1366)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1366)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1366)) ;
                    var_document_60048.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_60307_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1367)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1367)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1367)) ;
                    var_document_60048.plusAssignOperation(var_solvedType_60538.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1368)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1368)) ;
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
    enumerator_60197.gotoNextObject () ;
  }
  var_document_60048.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1374)) ;
  GGS_bool joker_60932 ; // Joker input parameter
  var_document_60048.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_60932, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1375)) ;
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
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_6677 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 155)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_6762 (var_descendantClasses_6677) ;
  while (enumerator_6762.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_6800 = extensionGetter_definition (enumerator_6762.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 157)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_6867 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_6800.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 158)) ;
    GGS_bool var_found_6976 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_7007 (var_overridingMethods_6867) ;
    bool bool_0 = var_found_6976.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 160)).isValidAndTrue () ;
    if (enumerator_7007.hasCurrentObject () && bool_0) {
      while (enumerator_7007.hasCurrentObject () && bool_0) {
        var_found_6976 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionSetterName.readProperty_string ().objectCompare (enumerator_7007.current (HERE).readProperty_string ())) ;
        enumerator_7007.gotoNextObject () ;
        if (enumerator_7007.hasCurrentObject ()) {
          bool_0 = var_found_6976.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 160)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_6976.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 163)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_6762.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 164)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 164)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_6800.readProperty_string (), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 165)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 174)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 174)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 174)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 175)).add_operation (var_descendantClassName_6800.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 176)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 176)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 174)) ;
        }
      }
    }
    enumerator_6762.gotoNextObject () ;
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
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_8268 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 192)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_8353 (var_descendantClasses_8268) ;
  while (enumerator_8353.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_8391 = extensionGetter_definition (enumerator_8353.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 194)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_8458 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_8391.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 195)) ;
    GGS_bool var_found_8567 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_8600 (var_overridingMethods_8458) ;
    bool bool_0 = var_found_8567.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 197)).isValidAndTrue () ;
    if (enumerator_8600.hasCurrentObject () && bool_0) {
      while (enumerator_8600.hasCurrentObject () && bool_0) {
        var_found_8567 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionMethodName.readProperty_string ().objectCompare (enumerator_8600.current (HERE).readProperty_string ())) ;
        enumerator_8600.gotoNextObject () ;
        if (enumerator_8600.hasCurrentObject ()) {
          bool_0 = var_found_8567.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 197)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_8567.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 200)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_8353.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 201)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 201)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_8391.readProperty_string (), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 202)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 211)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 211)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 211)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 212)).add_operation (var_descendantClassName_8391.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 213)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 213)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 211)) ;
        }
      }
    }
    enumerator_8353.gotoNextObject () ;
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
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_9863 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 229)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_9952 (var_descendantClasses_9863) ;
  while (enumerator_9952.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_9990 = extensionGetter_definition (enumerator_9952.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 231)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingReaders_10061 = extensionGetter_listForKey (constinArgument_inOverridingExtensionGetterListMap, var_descendantClassName_9990.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 232)) ;
    GGS_bool var_found_10170 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_10206 (var_overridingReaders_10061) ;
    bool bool_0 = var_found_10170.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 234)).isValidAndTrue () ;
    if (enumerator_10206.hasCurrentObject () && bool_0) {
      while (enumerator_10206.hasCurrentObject () && bool_0) {
        var_found_10170 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionGetterName.readProperty_string ().objectCompare (enumerator_10206.current (HERE).readProperty_string ())) ;
        enumerator_10206.gotoNextObject () ;
        if (enumerator_10206.hasCurrentObject ()) {
          bool_0 = var_found_10170.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 234)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_10170.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 237)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_9952.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 238)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 238)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_9990.readProperty_string (), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 239)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.readProperty_location (), GGS_string ("an abstract extension func '").add_operation (constinArgument_inAbstractExtensionGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 248)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 248)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 248)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 249)).add_operation (var_descendantClassName_9990.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 250)).add_operation (GGS_string ("' does not implement this func"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 250)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 248)) ;
        }
      }
    }
    enumerator_9952.gotoNextObject () ;
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
    test_0 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Perform global checkings"), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 261)) ;
      }
    }
  }
  GGS_descendantClassListMap var_descendantClassListMap_11513 = GGS_descendantClassListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_unifiedTypeMap enumerator_11556 (ioArgument_ioTypeMap) ;
  while (enumerator_11556.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_superType_11578 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_11556.current (HERE).readProperty_mElement ().ptr (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 267)).readProperty_superType () ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_superType_11578.getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas4", 268)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 268)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        extensionSetter_insertKey (var_descendantClassListMap_11513, extensionGetter_definition (var_superType_11578, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 270)).readProperty_typeName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11556.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 271)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 269)) ;
        }
      }
    }
    enumerator_11556.gotoNextObject () ;
  }
  GGS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_11898 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionMethodListMap_11972 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_12038 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_12114 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_12198 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionReaderListMap_12272 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_12338 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_12414 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_12498 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionSetterListMap_12572 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_12638 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_12714 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_12782 (constinArgument_inSemanticDeclarationList) ;
  while (enumerator_12782.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((cPtr_semanticDeclarationAST *) enumerator_12782.current (HERE).ptr (), var_abstractExtensionSetterListMap_12498, var_extensionSetterListMap_12572, var_overridingExtensionSetterListMap_12638, var_overridingAbstractExtensionSetterListMap_12714, var_abstractExtensionMethodListMap_11898, var_extensionMethodListMap_11972, var_overridingExtensionMethodListMap_12038, var_overridingAbstractExtensionMethodListMap_12114, var_abstractExtensionGetterListMap_12198, var_extensionReaderListMap_12272, var_overridingExtensionGetterListMap_12338, var_overridingAbstractExtensionGetterListMap_12414, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 289)) ;
    enumerator_12782.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas4", 305)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_13512 (var_abstractExtensionSetterListMap_12498.readProperty_dictionary ()) ;
      while (enumerator_13512.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_13620 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_13664 (enumerator_13512.current_value (HERE)) ;
        while (enumerator_13664.hasCurrentObject ()) {
          {
          var_extensionSetterMap_13620.setter_insertKey (enumerator_13664.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 310)) ;
          }
          enumerator_13664.gotoNextObject () ;
        }
        enumerator_13512.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_13833 (var_extensionSetterListMap_12572.readProperty_dictionary ()) ;
      while (enumerator_13833.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_13933 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_13977 (enumerator_13833.current_value (HERE)) ;
        while (enumerator_13977.hasCurrentObject ()) {
          {
          var_extensionSetterMap_13933.setter_insertKey (enumerator_13977.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 317)) ;
          }
          enumerator_13977.gotoNextObject () ;
        }
        enumerator_13833.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14152 (var_overridingExtensionSetterListMap_12638.readProperty_dictionary ()) ;
      while (enumerator_14152.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14262 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14306 (enumerator_14152.current_value (HERE)) ;
        while (enumerator_14306.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14262.setter_insertKey (enumerator_14306.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 324)) ;
          }
          enumerator_14306.gotoNextObject () ;
        }
        enumerator_14152.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14490 (var_overridingAbstractExtensionMethodListMap_12114.readProperty_dictionary ()) ;
      while (enumerator_14490.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14608 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14652 (enumerator_14490.current_value (HERE)) ;
        while (enumerator_14652.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14608.setter_insertKey (enumerator_14652.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 331)) ;
          }
          enumerator_14652.gotoNextObject () ;
        }
        enumerator_14490.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14880 (var_abstractExtensionSetterListMap_12498.readProperty_dictionary ()) ;
      while (enumerator_14880.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_14957 (enumerator_14880.current_value (HERE)) ;
        while (enumerator_14957.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_14880.current_key (HERE), enumerator_14880.current_key (HERE), enumerator_14957.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionSetterListMap_12638, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 337)) ;
          }
          enumerator_14957.gotoNextObject () ;
        }
        enumerator_14880.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_15351 (var_overridingAbstractExtensionSetterListMap_12714.readProperty_dictionary ()) ;
      while (enumerator_15351.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_15440 (enumerator_15351.current_value (HERE)) ;
        while (enumerator_15440.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15351.current_key (HERE), enumerator_15351.current_key (HERE), enumerator_15440.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionSetterListMap_12638, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 350)) ;
          }
          enumerator_15440.gotoNextObject () ;
        }
        enumerator_15351.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_15761 (var_abstractExtensionMethodListMap_11898.readProperty_dictionary ()) ;
      while (enumerator_15761.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_15867 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_15911 (enumerator_15761.current_value (HERE)) ;
        while (enumerator_15911.hasCurrentObject ()) {
          {
          var_extensionMethodMap_15867.setter_insertKey (enumerator_15911.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 364)) ;
          }
          enumerator_15911.gotoNextObject () ;
        }
        enumerator_15761.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16069 (var_extensionMethodListMap_11972.readProperty_dictionary ()) ;
      while (enumerator_16069.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16167 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16211 (enumerator_16069.current_value (HERE)) ;
        while (enumerator_16211.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16167.setter_insertKey (enumerator_16211.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 371)) ;
          }
          enumerator_16211.gotoNextObject () ;
        }
        enumerator_16069.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16375 (var_overridingExtensionMethodListMap_12038.readProperty_dictionary ()) ;
      while (enumerator_16375.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16483 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16527 (enumerator_16375.current_value (HERE)) ;
        while (enumerator_16527.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16483.setter_insertKey (enumerator_16527.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 378)) ;
          }
          enumerator_16527.gotoNextObject () ;
        }
        enumerator_16375.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16700 (var_overridingAbstractExtensionMethodListMap_12114.readProperty_dictionary ()) ;
      while (enumerator_16700.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16816 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16860 (enumerator_16700.current_value (HERE)) ;
        while (enumerator_16860.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16816.setter_insertKey (enumerator_16860.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 385)) ;
          }
          enumerator_16860.gotoNextObject () ;
        }
        enumerator_16700.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17068 (var_abstractExtensionMethodListMap_11898.readProperty_dictionary ()) ;
      while (enumerator_17068.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17145 (enumerator_17068.current_value (HERE)) ;
        while (enumerator_17145.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17068.current_key (HERE), enumerator_17068.current_key (HERE), enumerator_17145.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionMethodListMap_12038, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 391)) ;
          }
          enumerator_17145.gotoNextObject () ;
        }
        enumerator_17068.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17510 (var_overridingAbstractExtensionMethodListMap_12114.readProperty_dictionary ()) ;
      while (enumerator_17510.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17597 (enumerator_17510.current_value (HERE)) ;
        while (enumerator_17597.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17510.current_key (HERE), enumerator_17510.current_key (HERE), enumerator_17597.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionMethodListMap_12038, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 404)) ;
          }
          enumerator_17597.gotoNextObject () ;
        }
        enumerator_17510.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18065 (var_abstractExtensionGetterListMap_12198.readProperty_dictionary ()) ;
      while (enumerator_18065.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18173 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18217 (enumerator_18065.current_value (HERE)) ;
        while (enumerator_18217.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18173.setter_insertKey (enumerator_18217.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 420)) ;
          }
          enumerator_18217.gotoNextObject () ;
        }
        enumerator_18065.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18377 (var_extensionReaderListMap_12272.readProperty_dictionary ()) ;
      while (enumerator_18377.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18477 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18521 (enumerator_18377.current_value (HERE)) ;
        while (enumerator_18521.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18477.setter_insertKey (enumerator_18521.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 427)) ;
          }
          enumerator_18521.gotoNextObject () ;
        }
        enumerator_18377.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18687 (var_overridingExtensionGetterListMap_12338.readProperty_dictionary ()) ;
      while (enumerator_18687.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18797 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18841 (enumerator_18687.current_value (HERE)) ;
        while (enumerator_18841.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18797.setter_insertKey (enumerator_18841.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 434)) ;
          }
          enumerator_18841.gotoNextObject () ;
        }
        enumerator_18687.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19026 (var_abstractExtensionGetterListMap_12198.readProperty_dictionary ()) ;
      while (enumerator_19026.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19105 (enumerator_19026.current_value (HERE)) ;
        while (enumerator_19105.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19026.current_key (HERE), enumerator_19026.current_key (HERE), enumerator_19105.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionGetterListMap_12338, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 440)) ;
          }
          enumerator_19105.gotoNextObject () ;
        }
        enumerator_19026.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19447 (var_overridingAbstractExtensionGetterListMap_12414.readProperty_dictionary ()) ;
      while (enumerator_19447.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19536 (enumerator_19447.current_value (HERE)) ;
        while (enumerator_19536.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19447.current_key (HERE), enumerator_19447.current_key (HERE), enumerator_19536.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionGetterListMap_12338, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 453)) ;
          }
          enumerator_19536.gotoNextObject () ;
        }
        enumerator_19447.gotoNextObject () ;
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
                                                              GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                              const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 35)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_1854 (constinArgument_inInstructionList) ;
  while (enumerator_1854.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_1854.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 37)) ;
    enumerator_1854.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 45)) ;
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
#include "filewrapper-utilities.h"
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
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_3039.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 78)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3039.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 80)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
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
      const bool verboseOptionOn = !gBuildOption_quiet.mValue ;
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
        message.appendCString (".") ;
        ggs_printMessageLn (message COMMA_HERE) ;
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

