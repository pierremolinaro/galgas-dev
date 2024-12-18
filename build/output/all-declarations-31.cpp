#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-31.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GGS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapper var_fw_1554 = GGS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  cEnumerator_stringlist enumerator_1622 (var_fw_1554.getter_allDirectoryPathes (SOURCE_FILE ("libpmHandling.galgas", 33)), EnumerationOrder::up) ;
  while (enumerator_1622.hasCurrentObject ()) {
    GGS_string var_actualDirectory_1674 = constinArgument_inLIBPMPath.add_operation (enumerator_1622.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 34)) ;
    var_actualDirectory_1674.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 35)) ;
    enumerator_1622.gotoNextObject () ;
  }
  GGS_stringset var_allNeededFileSet_1794 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_stringlist enumerator_1824 (var_fw_1554.getter_allTextFilePathes (SOURCE_FILE ("libpmHandling.galgas", 39)), EnumerationOrder::up) ;
  while (enumerator_1824.hasCurrentObject ()) {
    GGS_string var_contents_1867 = var_fw_1554.getter_textFileContentsAtPath (enumerator_1824.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 40)) ;
    GGS_string var_actualFilePath_1920 = constinArgument_inLIBPMPath.add_operation (enumerator_1824.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 41)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_actualFilePath_1920.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas", 42)).objectCompare (GGS_string ("py"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_bool joker_2082 ; // Joker input parameter
        var_contents_1867.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1920, joker_2082, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 43)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GGS_bool joker_2160 ; // Joker input parameter
      var_contents_1867.method_writeToFileWhenDifferentContents (var_actualFilePath_1920, joker_2160, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 45)) ;
    }
    var_allNeededFileSet_1794.addAssign_operation (enumerator_1824.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 47)) ;
    enumerator_1824.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_2241 (var_fw_1554.getter_allBinaryFilePathes (SOURCE_FILE ("libpmHandling.galgas", 50)), EnumerationOrder::up) ;
  while (enumerator_2241.hasCurrentObject ()) {
    GGS_data var_contents_2288 = var_fw_1554.getter_binaryFileContentsAtPath (enumerator_2241.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 51)) ;
    GGS_string var_actualFilePath_2345 = constinArgument_inLIBPMPath.add_operation (enumerator_2241.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)) ;
    GGS_bool joker_2446 ; // Joker input parameter
    var_contents_2288.method_writeToFileWhenDifferentContents (var_actualFilePath_2345, joker_2446, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 53)) ;
    var_allNeededFileSet_1794.addAssign_operation (enumerator_2241.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 54)) ;
    enumerator_2241.gotoNextObject () ;
  }
  GGS_stringset var_allActualFileSet_2532 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_stringlist enumerator_2562 (constinArgument_inLIBPMPath.getter_regularFiles (GGS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas", 58)), EnumerationOrder::up) ;
  while (enumerator_2562.hasCurrentObject ()) {
    var_allActualFileSet_2532.addAssign_operation (GGS_string ("/").add_operation (enumerator_2562.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 59))  COMMA_SOURCE_FILE ("libpmHandling.galgas", 59)) ;
    enumerator_2562.gotoNextObject () ;
  }
  GGS_stringset var_uselessFileSet_2659 = var_allActualFileSet_2532.substract_operation (var_allNeededFileSet_1794, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 61)) ;
  cEnumerator_stringset enumerator_2719 (var_uselessFileSet_2659, EnumerationOrder::up) ;
  while (enumerator_2719.hasCurrentObject ()) {
    {
    GGS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2719.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 63)) ;
    }
    enumerator_2719.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas&&?galgas4???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas_26__26__3F_galgas_34__3F__3F__3F__21__21__21_ (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GGS_bool constinArgument_inGalgas_34_,
                                                                                              const GGS_string constinArgument_inProductDirectory,
                                                                                              const GGS_location constinArgument_inEndOfProjectSourceFile,
                                                                                              const GGS_galgasDeclarationAST constinArgument_inSemanticDeclarations,
                                                                                              GGS_semanticContext & outArgument_outSemanticContext,
                                                                                              GGS_unifiedTypeMap & outArgument_outTypeMap,
                                                                                              GGS_semanticDeclarationListForGeneration & outArgument_outSemanticDeclarationSortedListForGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSemanticDeclarationSortedListForGeneration.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 32)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Building semantic context"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 33)) ;
      }
    }
  }
  GGS_galgasDeclarationAST var_semanticDeclarations_2141 = constinArgument_inSemanticDeclarations ;
  {
  routine_appendPredefinedTypesASTs_26__26_ (var_semanticDeclarations_2141.mProperty_mDeclarationList, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37)) ;
  }
  GGS_commandLineOptionListAST var_options_2354 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  cEnumerator__32_stringlist enumerator_2395 (GGS_application::class_func_boolOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 40)), EnumerationOrder::up) ;
  while (enumerator_2395.hasCurrentObject ()) {
    var_options_2354.addAssign_operation (GGS_string ("bool").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 42)), GGS_lstring::init_21__21_ (enumerator_2395.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 43)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_boolOptionInvocationCharacter (enumerator_2395.current (HERE).readProperty_mValue_30_ (), enumerator_2395.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), inCompiler COMMA_HERE), GGS_application::class_func_boolOptionInvocationString (enumerator_2395.current (HERE).readProperty_mValue_30_ (), enumerator_2395.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)), GGS_application::class_func_boolOptionCommentString (enumerator_2395.current (HERE).readProperty_mValue_30_ (), enumerator_2395.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 41)) ;
    enumerator_2395.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2828 (GGS_application::class_func_uintOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 50)), EnumerationOrder::up) ;
  while (enumerator_2828.hasCurrentObject ()) {
    var_options_2354.addAssign_operation (GGS_string ("uint").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 52)), GGS_lstring::init_21__21_ (enumerator_2828.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 53)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_uintOptionInvocationCharacter (enumerator_2828.current (HERE).readProperty_mValue_30_ (), enumerator_2828.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), inCompiler COMMA_HERE), GGS_application::class_func_uintOptionInvocationString (enumerator_2828.current (HERE).readProperty_mValue_30_ (), enumerator_2828.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)), GGS_application::class_func_uintOptionCommentString (enumerator_2828.current (HERE).readProperty_mValue_30_ (), enumerator_2828.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 51)) ;
    enumerator_2828.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_3267 (GGS_application::class_func_stringOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 60)), EnumerationOrder::up) ;
  while (enumerator_3267.hasCurrentObject ()) {
    var_options_2354.addAssign_operation (GGS_string ("string").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 62)), GGS_lstring::init_21__21_ (enumerator_3267.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 63)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_stringOptionInvocationCharacter (enumerator_3267.current (HERE).readProperty_mValue_30_ (), enumerator_3267.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), inCompiler COMMA_HERE), GGS_application::class_func_stringOptionInvocationString (enumerator_3267.current (HERE).readProperty_mValue_30_ (), enumerator_3267.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)), GGS_application::class_func_stringOptionCommentString (enumerator_3267.current (HERE).readProperty_mValue_30_ (), enumerator_3267.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 67)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 68))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 61)) ;
    enumerator_3267.gotoNextObject () ;
  }
  var_semanticDeclarations_2141.mProperty_mDeclarationList.addAssign_operation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (true), GGS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 72)), var_options_2354, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 70)) ;
  GGS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3870 = function_optionNameForUsefulEntitiesGraph (GGS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3870  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 76)) ;
  GGS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_4267 ;
  {
  routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (var_semanticDeclarations_2141, constinArgument_inEndOfProjectSourceFile, constinArgument_inGalgas_34_, outArgument_outSemanticContext, outArgument_outTypeMap, var_sortedSemanticDeclarationListAST_4267, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 78)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_println_3F_ (GGS_string ("*** Semantic analysis"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 88)) ;
      }
    }
  }
  cEnumerator_lstringlist enumerator_4478 (extensionGetter_unsolvedEntryList (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 91)), EnumerationOrder::up) ;
  while (enumerator_4478.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (enumerator_4478.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("the '@").add_operation (enumerator_4478.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)).add_operation (GGS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)) ;
    enumerator_4478.gotoNextObject () ;
  }
  outArgument_outSemanticDeclarationSortedListForGeneration = GGS_semanticDeclarationListForGeneration::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 96)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GGS_predefinedTypes var_predefinedTypes_4699 = function_buildPredefinedTypes (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 97)) ;
      cEnumerator_semanticDeclarationListAST enumerator_4774 (var_sortedSemanticDeclarationListAST_4267, EnumerationOrder::up) ;
      while (enumerator_4774.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((cPtr_semanticDeclarationAST *) enumerator_4774.current (HERE).readProperty_mSemanticDeclaration ().ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, outArgument_outTypeMap, var_predefinedTypes_4699, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 99)) ;
        enumerator_4774.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgasSemanticContext???galgas4!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (const GGS_galgasDeclarationAST constinArgument_inDeclarations,
                                                                           const GGS_location constinArgument_inEndOfProjectSourceFile,
                                                                           const GGS_bool constinArgument_inGalgas_34_,
                                                                           GGS_semanticContext & outArgument_outSemanticContext,
                                                                           GGS_unifiedTypeMap & outArgument_outTypeMap,
                                                                           GGS_semanticDeclarationListAST & outArgument_outSortedSemanticDeclarationListAST,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release 'out' argument
  GGS_galgasDeclarationAST var_semanticDeclarations_5939 = constinArgument_inDeclarations ;
  cEnumerator_semanticDeclarationListAST enumerator_6013 (constinArgument_inDeclarations.readProperty_mDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_6013.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((cPtr_semanticDeclarationAST *) enumerator_6013.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticDeclarations_5939, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 127)) ;
    enumerator_6013.gotoNextObject () ;
  }
  GGS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_6316 = GGS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  GGS_extensionInitializerForBuildingContext var_extensionInitializerForBuildingContext_6424 = GGS_extensionInitializerForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_equatableExtensionMap var_equatableExtensionMap_6498 = GGS_equatableExtensionMap::init (inCompiler COMMA_HERE) ;
  GGS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6570 = GGS_extensionMethodMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6657 = GGS_extensionGetterMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6744 = GGS_extensionSetterMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6821 = GGS_semanticDeclarationListAST::init (inCompiler COMMA_HERE) ;
  cEnumerator_semanticDeclarationListAST enumerator_6901 (var_semanticDeclarations_5939.readProperty_mDeclarationList (), EnumerationOrder::up) ;
  while (enumerator_6901.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((cPtr_semanticDeclarationAST *) enumerator_6901.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticTypePrecedenceGraph_6316, var_equatableExtensionMap_6498, var_extensionInitializerForBuildingContext_6424, var_extensionMethodMapForBuildingContext_6570, var_extensionGetterMapForBuildingContext_6657, var_extensionSetterMapForBuildingContext_6744, var_extensionOverrideDefinitionList_6821, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 141)) ;
    enumerator_6901.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_7384 (var_semanticTypePrecedenceGraph_6316.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 152)), EnumerationOrder::up) ;
  while (enumerator_7384.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_7384.current (HERE).readProperty_mValue ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 153)).objectCompare (GGS_char (TO_UNICODE (63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        routine_println_3F_ (GGS_string ("Optional '").add_operation (enumerator_7384.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)) ;
        }
      }
    }
    enumerator_7384.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_semanticTypePrecedenceGraph_6316.getter_undefinedNodeCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_7640 (var_semanticTypePrecedenceGraph_6316.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)), EnumerationOrder::up) ;
      while (enumerator_7640.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7640.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_7640.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)).add_operation (GGS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)) ;
        enumerator_7640.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GGS_string ("semantic analysis not performed, due to undefined type error(s)"), fixItArray3  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 162)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
      outArgument_outTypeMap.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GGS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_8059 ;
    GGS_lstringlist joker_8017 ; // Joker input parameter
    GGS_lstringlist joker_8100 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_6316.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_8017, var_unsortedSemanticDeclarationListAST_8059, joker_8100, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 166)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_8059.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 172)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GGS_string var_s_8178 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_8059.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)) ;
        cEnumerator_semanticDeclarationListAST enumerator_8352 (var_unsortedSemanticDeclarationListAST_8059, EnumerationOrder::up) ;
        while (enumerator_8352.hasCurrentObject ()) {
          var_s_8178.plusAssign_operation(GGS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_8352.current (HERE).readProperty_mSemanticDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)) ;
          enumerator_8352.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_8178, fixItArray5  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 177)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
        outArgument_outTypeMap.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssign_operation(var_extensionOverrideDefinitionList_6821, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 180)) ;
      outArgument_outTypeMap = GGS_unifiedTypeMap::init (inCompiler COMMA_HERE) ;
      outArgument_outSemanticContext = GGS_semanticContext::init_21_galgas_34_ (constinArgument_inGalgas_34_, inCompiler COMMA_HERE) ;
      cEnumerator_semanticDeclarationListAST enumerator_8865 (outArgument_outSortedSemanticDeclarationListAST, EnumerationOrder::up) ;
      while (enumerator_8865.hasCurrentObject ()) {
        callExtensionMethod_enterDeclarationInSemanticContext ((cPtr_semanticDeclarationAST *) enumerator_8865.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_equatableExtensionMap_6498, var_extensionInitializerForBuildingContext_6424, var_extensionMethodMapForBuildingContext_6570, var_extensionGetterMapForBuildingContext_6657, var_extensionSetterMapForBuildingContext_6744, outArgument_outTypeMap, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 186)) ;
        enumerator_8865.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3???&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26__26__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                 const GGS_string constinArgument_inProductDirectory,
                                                                                 const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                 GGS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                                 GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                                 GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                                                 GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_semanticDeclarationListForGeneration enumerator_9920 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_9920.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((cPtr_semanticDeclarationForGeneration *) enumerator_9920.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioCocoaProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 215)) ;
    enumerator_9920.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 222)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 223)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 224)) ;
          }
          {
          routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 230)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 237)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 237)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 238)) ;
            }
            {
            routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 244)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 251)).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 251)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 252)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 258)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 265)).boolEnum () ;
              if (kBoolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 266)) ;
                }
              }
            }
            if (kBoolFalse == test_4) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 275)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 281)) ;
              }
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyHeaders??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyHeaders_3F__3F__26__26_ (const GGS_string constinArgument_inProductDirectory,
                                                  const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                  GGS_stringset & ioArgument_ioAllProductFileSet,
                                                  GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_headerInclusionList_31__12813 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_headerInclusionList_32__12858 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_12906 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_12906.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 304)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 304)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_stringset var_inclusionSet_31__13031 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerDef_31__13131 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__13031, var_headerDef_31__13131, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)) ;
        GGS_string var_headerIncludes_31__13153 = GGS_string::makeEmptyString () ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_31__13031.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 308)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 309)).add_operation (GGS_string ("headers 1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 309)) ;
            }
          }
        }
        cEnumerator_stringset enumerator_13349 (var_inclusionSet_31__13031, EnumerationOrder::up) ;
        while (enumerator_13349.hasCurrentObject ()) {
          var_headerIncludes_31__13153.plusAssign_operation(GGS_string ("#include \"").add_operation (enumerator_13349.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 312)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 312)) ;
          enumerator_13349.gotoNextObject () ;
        }
        var_headerIncludes_31__13153.plusAssign_operation(var_headerDef_31__13131, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)) ;
        GGS_stringset var_inclusionSet_32__13495 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerDef_32__13615 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__13495, var_headerDef_32__13615, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 316)) ;
        GGS_string var_headerIncludes_32__13637 = GGS_string::makeEmptyString () ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_inclusionSet_32__13495.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 318)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 319)).add_operation (GGS_string ("headers 2"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 319)) ;
            }
          }
        }
        cEnumerator_stringset enumerator_13833 (var_inclusionSet_32__13495, EnumerationOrder::up) ;
        while (enumerator_13833.hasCurrentObject ()) {
          var_headerIncludes_32__13637.plusAssign_operation(GGS_string ("#include \"").add_operation (enumerator_13833.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 322)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 322)) ;
          enumerator_13833.gotoNextObject () ;
        }
        var_headerIncludes_32__13637.plusAssign_operation(var_headerDef_32__13615, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 326)).enumValue ()) {
        case GGS_headerKind::Enumeration::invalid:
          break ;
        case GGS_headerKind::Enumeration::enum_noHeader:
          {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_31__13153.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 329)).readProperty_location (), GGS_string ("'noHeader' setting for the '").add_operation (enumerator_12906.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 330)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 330)), fixItArray4  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 329)) ;
              }
            }
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13637.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 333)).readProperty_location (), GGS_string ("'noHeader' setting for the '").add_operation (enumerator_12906.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 334)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 334)), fixItArray6  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 333)) ;
              }
            }
          }
          break ;
        case GGS_headerKind::Enumeration::enum_oneHeader:
          {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, var_headerIncludes_31__13153.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 338)).readProperty_location (), GGS_string ("'oneHeader' setting for the '").add_operation (enumerator_12906.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 339)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 339)), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 338)) ;
              }
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13637.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 342)).readProperty_location (), GGS_string ("'oneHeader' setting for the '").add_operation (enumerator_12906.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 343)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 343)), fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 342)) ;
              }
            }
          }
          break ;
        case GGS_headerKind::Enumeration::enum_twoHeaders:
          {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, var_headerIncludes_31__13153.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 347)).readProperty_location (), GGS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12906.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 348)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 348)), fixItArray12  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 347)) ;
              }
            }
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GGS_bool (ComparisonKind::equal, var_headerIncludes_32__13637.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 351)).readProperty_location (), GGS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12906.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 352)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 352)), fixItArray14  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 351)) ;
              }
            }
          }
          break ;
        }
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GGS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)).objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            GGS_string var_headerString_15459 = GGS_string ("#pragma once\n") ;
            var_headerString_15459.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)) ;
            var_headerString_15459.plusAssign_operation(GGS_string ("#include \"all-predefined-types.h\"\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 359)) ;
            var_headerString_15459.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)) ;
            var_headerString_15459.plusAssign_operation(var_headerIncludes_31__13153, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)) ;
            var_headerString_15459.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)) ;
            var_headerString_15459.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)) ;
            GGS_string temp_16 ;
            const enumGalgasBool test_17 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              temp_16 = GGS_string ("-1") ;
            }else if (kBoolFalse == test_17) {
              temp_16 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_headerFileName_15890 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 364)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 364)) ;
            var_headerInclusionList_31__12813.addAssign_operation (var_headerFileName_15890  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 366)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_15890.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_15890.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 368))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 368)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15890.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)), var_headerString_15459, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)) ;
            }
          }
        }
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            GGS_string var_headerString_16468 = GGS_string ("#ifndef ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)).add_operation (GGS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)) ;
            var_headerString_16468.plusAssign_operation(GGS_string ("#define ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)).add_operation (GGS_string ("_DEFINED\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)) ;
            var_headerString_16468.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)) ;
            var_headerString_16468.plusAssign_operation(GGS_string ("#include \"").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)).add_operation (GGS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)) ;
            var_headerString_16468.plusAssign_operation(GGS_string ("\n//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)) ;
            var_headerString_16468.plusAssign_operation(var_headerIncludes_32__13637, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)) ;
            var_headerString_16468.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)) ;
            var_headerString_16468.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384)) ;
            var_headerString_16468.plusAssign_operation(GGS_string ("#endif\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 385)) ;
            var_headerInclusionList_32__12858.addAssign_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 387)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 387))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 387)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 388)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 388))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 388)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12906.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 391)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 391)), var_headerString_16468, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389)) ;
            }
          }
        }
      }
    }
    enumerator_12906.gotoNextObject () ;
  }
  GGS_string var_headerString_17737 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), var_headerInclusionList_31__12813.add_operation (var_headerInclusionList_32__12858, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 400)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 398))) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 402)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 403)) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_headerString_17737, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 404)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateOneBigHeader??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateOneBigHeader_3F__3F__26__26_ (const GGS_string constinArgument_inProductDirectory,
                                                   const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                   GGS_stringset & ioArgument_ioAllProductFileSet,
                                                   GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_headerString_18424 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), GGS_stringlist::init (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 418))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_18580 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_18580.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18580.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 424)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 424)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_stringset joker_18735 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_31__18761 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18580.current (HERE).readProperty_mDeclaration ().ptr (), joker_18735, var_headerString_31__18761, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 425)) ;
        var_headerString_18424.plusAssign_operation(var_headerString_31__18761, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)) ;
      }
    }
    enumerator_18580.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_18867 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_18867.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18867.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 431)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 431)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GGS_stringset joker_19042 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__19068 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18867.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, joker_19042, var_headerString_32__19068, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 432)) ;
        var_headerString_18424.plusAssign_operation(var_headerString_32__19068, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 433)) ;
      }
    }
    enumerator_18867.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 436)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 437)) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_headerString_18424, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 438)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildHeader???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildHeader_3F__3F__3F__26__26_ (const GGS_headerCompositionMap constinArgument_inHeaderCompositionMap,
                                              const GGS_string constinArgument_inHeaderFileName,
                                              const GGS_string constinArgument_inDeclarationName,
                                              GGS_headerRepartitionMap & ioArgument_ioHeaderRepartitionMap,
                                              GGS_string & ioArgument_ioHeaderString,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 471)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 471)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 472)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 472)) ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 473)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GGS_stringset var_inclusionSet_20599 ;
          GGS_string var_headerString_20633 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 475)), var_inclusionSet_20599, var_headerString_20633, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 474)) ;
          cEnumerator_stringset enumerator_20665 (var_inclusionSet_20599, EnumerationOrder::up) ;
          while (enumerator_20665.hasCurrentObject ()) {
            {
            routine_buildHeader_3F__3F__3F__26__26_ (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20665.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 480)) ;
            }
            enumerator_20665.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssign_operation(var_headerString_20633, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 488)) ;
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssign_operation(GGS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 490)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 490)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'definitionGroupAmount'
//
//--------------------------------------------------------------------------------------------------

static GGS_uint onceFunction_definitionGroupAmount (Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_result ; // Returned variable
  result_result = GGS_uint (uint32_t (50U)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_definitionGroupAmount = false ;
static GGS_uint gOnceFunctionResult_definitionGroupAmount ;

//--------------------------------------------------------------------------------------------------

GGS_uint function_definitionGroupAmount (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_definitionGroupAmount) {
    gOnceFunctionResult_definitionGroupAmount = onceFunction_definitionGroupAmount (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_definitionGroupAmount = true ;
  }
  return gOnceFunctionResult_definitionGroupAmount ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_definitionGroupAmount (void) {
  gOnceFunctionResult_definitionGroupAmount.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_definitionGroupAmount (nullptr,
                                                                 releaseOnceFunctionResult_definitionGroupAmount) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_definitionGroupAmount [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_definitionGroupAmount (Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_definitionGroupAmount (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_definitionGroupAmount ("definitionGroupAmount",
                                                                       functionWithGenericHeader_definitionGroupAmount,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_definitionGroupAmount) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                 const GGS_string constinArgument_inProductDirectory,
                                                                 const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                 GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                 GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_useOneHugeHeader_21563 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  GGS_bigint var_n_21676 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 513)) ;
  GGS_bigint var_fileIdx_21688 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 514)) ;
  GGS_string var_implementationString_21706 = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_21749 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_21789 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_21789.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21789.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 518)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 518)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_code_22000 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_21789.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21749, var_code_22000, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_21749.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21789.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)).add_operation (GGS_string (" cpp headers"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)) ;
            }
          }
        }
        var_implementationString_21706.plusAssign_operation(var_code_22000, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)) ;
        var_implementationString_21706.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21789.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 524)) ;
        var_n_21676.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_n_21676.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)).getter_bigint (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_useOneHugeHeader_21563.boolEnum () ;
              if (kBoolTrue == test_3) {
                GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)) ;
                temp_4.enterElement (GGS_string ("all-declarations"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)) ;
                var_inclusionSet_21749 = temp_4 ;
              }
            }
            GGS_string var_header_22457 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21749.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 531)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 530))) ;
            GGS_string var_fileName_22596 = GGS_string ("all-declarations-").add_operation (var_fileIdx_21688.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 533)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 533)) ;
            GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 534)) ;
            temp_5.enterElement (GGS_stringlist_2E_element::init_21_ (var_fileName_22596, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 534)) ;
            ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 534)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_22596  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22596, var_header_22457.add_operation (var_implementationString_21706, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            }
            var_n_21676 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 541)) ;
            var_fileIdx_21688.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 542)) ;
            var_implementationString_21706 = GGS_string::makeEmptyString () ;
            var_inclusionSet_21749 = GGS_stringset::init (inCompiler COMMA_HERE) ;
          }
        }
      }
    }
    enumerator_21789.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_implementationString_21706.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_useOneHugeHeader_21563.boolEnum () ;
        if (kBoolTrue == test_7) {
          GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551)) ;
          temp_8.enterElement (GGS_string ("all-declarations"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551)) ;
          var_inclusionSet_21749 = temp_8 ;
        }
      }
      GGS_string var_header_23162 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21749.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 554)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 553))) ;
      GGS_string var_fileName_23289 = GGS_string ("all-declarations-").add_operation (var_fileIdx_21688.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 556)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 556)) ;
      GGS_stringlist temp_9 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 557)) ;
      temp_9.enterElement (GGS_stringlist_2E_element::init_21_ (var_fileName_23289, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 557)) ;
      ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 557)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_23289  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 558)) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_23289, var_header_23162.add_operation (var_implementationString_21706, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 559)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFilesWithFewHeaders???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                   const GGS_string constinArgument_inProductDirectory,
                                                                                   const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                   GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                                   GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                   GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_headerCompositionMap var_headerCompositionMap_24037 = GGS_headerCompositionMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_24085 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_24085.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 578)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 578)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_stringset var_inclusionSet_31__24210 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_31__24310 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__24210, var_headerString_31__24310, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 580)) ;
        GGS_stringset var_inclusionSet_32__24346 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__24466 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__24346, var_headerString_32__24466, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 582)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 583)).objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 583)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GGS_string temp_2 ;
            const enumGalgasBool test_3 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 584)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 584)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              temp_2 = GGS_string ("-1") ;
            }else if (kBoolFalse == test_3) {
              temp_2 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_headerFileName_24558 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 584)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 584)) ;
            {
            var_headerCompositionMap_24037.setter_insertKey (var_headerFileName_24558.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)), var_inclusionSet_31__24210, var_headerString_31__24310, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 585)) ;
            }
          }
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 591)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 591)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 594)) ;
            temp_5.enterElement (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 594)).add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 594)) ;
            var_headerCompositionMap_24037.setter_insertKey (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24085.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 593)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 593)), var_inclusionSet_32__24346.operator_or (temp_5 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 594)), var_headerString_32__24466, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 592)) ;
            }
          }
        }
      }
    }
    enumerator_24085.gotoNextObject () ;
  }
  GGS_headerRepartitionMap var_headerRepartitionMap_25236 = GGS_headerRepartitionMap::init (inCompiler COMMA_HERE) ;
  GGS_bigint var_fileIdx_25269 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 601)) ;
  GGS_string var_implementationString_25287 = GGS_string::makeEmptyString () ;
  GGS_string var_headerString_25319 = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_25354 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_headerFileName_25379 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_25447 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_25447.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)).boolEnum () ;
      if (kBoolTrue == test_6) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 609)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 609)))).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24037, var_headerFileName_25379, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)).add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)), var_headerRepartitionMap_25236, var_headerString_25319, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)) ;
                }
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24037, var_headerFileName_25379, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)), var_headerRepartitionMap_25236, var_headerString_25319, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)).objectCompare (GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  {
                  routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24037, var_headerFileName_25379, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)), var_headerRepartitionMap_25236, var_headerString_25319, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)) ;
                  }
                }
              }
            }
          }
        }
        GGS_string var_code_26355 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_25354, var_code_26355, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 616)) ;
        cEnumerator_stringset enumerator_26372 (var_inclusionSet_25354, EnumerationOrder::up) ;
        while (enumerator_26372.hasCurrentObject ()) {
          {
          routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24037, var_headerFileName_25379, enumerator_26372.current_key (HERE), var_headerRepartitionMap_25236, var_headerString_25319, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)) ;
          }
          enumerator_26372.gotoNextObject () ;
        }
        var_implementationString_25287.plusAssign_operation(var_code_26355, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)) ;
        var_implementationString_25287.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_25447.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 621)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::greaterThan, var_implementationString_25287.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)).objectCompare (GGS_uint (uint32_t (786432U)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
            temp_11.enterElement (GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
            var_inclusionSet_25354 = temp_11 ;
            GGS_string var_cppHeader_26749 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_25354.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 624))) ;
            GGS_string var_fileName_26891 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 627)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 627)) ;
            GGS_stringlist temp_12 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 628)) ;
            temp_12.enterElement (GGS_stringlist_2E_element::init_21_ (var_fileName_26891, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 628)) ;
            ioArgument_ioToolProductFileList = temp_12.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 628)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_26891  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_26891, var_cppHeader_26749.add_operation (var_implementationString_25287, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 630)) ;
            }
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25379.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 636))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 636)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25379.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 637))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 637)) ;
            GGS_stringlist temp_13 ;
            const enumGalgasBool test_14 = GGS_bool (ComparisonKind::equal, var_fileIdx_25269.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              temp_13 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
            }else if (kBoolFalse == test_14) {
              GGS_stringlist temp_15 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)) ;
              temp_15.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)) ;
              temp_13 = temp_15 ;
            }
            GGS_string var_startOfHeader_27332 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25379, temp_13 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638))) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25379.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 644)), var_startOfHeader_27332.add_operation (var_headerString_25319, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)) ;
            }
            var_fileIdx_25269.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 648)) ;
            var_implementationString_25287 = GGS_string::makeEmptyString () ;
            var_headerString_25319 = GGS_string::makeEmptyString () ;
            var_headerFileName_25379 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 651)) ;
            var_inclusionSet_25354 = GGS_stringset::init (inCompiler COMMA_HERE) ;
          }
        }
      }
    }
    enumerator_25447.gotoNextObject () ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::notEqual, var_implementationString_25287.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      GGS_stringlist temp_17 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)) ;
      temp_17.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)) ;
      GGS_string var_header_27935 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_17 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 658))) ;
      GGS_string var_fileName_28072 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 661)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 661)) ;
      GGS_stringlist temp_18 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662)) ;
      temp_18.enterElement (GGS_stringlist_2E_element::init_21_ (var_fileName_28072, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662)) ;
      ioArgument_ioToolProductFileList = temp_18.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_28072  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_28072, var_header_27935.add_operation (var_implementationString_25287, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 664)) ;
      }
      ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25379.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 670))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 670)) ;
      ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25379.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 671))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 671)) ;
      GGS_stringlist temp_19 ;
      const enumGalgasBool test_20 = GGS_bool (ComparisonKind::equal, var_fileIdx_25269.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      }else if (kBoolFalse == test_20) {
        GGS_stringlist temp_21 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)) ;
        temp_21.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)) ;
        temp_19 = temp_21 ;
      }
      GGS_string var_startOfHeader_28466 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25379, temp_19 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672))) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25379.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)), var_startOfHeader_28466.add_operation (var_headerString_25319, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)) ;
      }
    }
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 683)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 684)) ;
  GGS_stringlist temp_22 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 687)) ;
  temp_22.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25269.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 687)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 687)) ;
  GGS_string var_startOfAllDeclarationsHeader_28914 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), temp_22 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 685))) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_28914, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 689)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                  GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                  GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_useOneHugeHeader_29582 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_29691 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_29691.hasCurrentObject ()) {
    GGS_stringset var_inclusionSet_29758 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_29691.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 709)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 709)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_implementationString_29940 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_29691.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_29758, var_implementationString_29940, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 710)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_29691.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 711)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_inclusionSet_29758.addAssign_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29691.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 712))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 712)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_useOneHugeHeader_29582.boolEnum () ;
          if (kBoolTrue == test_2) {
            GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715)) ;
            temp_3.enterElement (GGS_string ("all-declarations"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715)) ;
            var_inclusionSet_29758 = temp_3 ;
          }
        }
        GGS_string var_header_30206 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_29758.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 718)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 717))) ;
        var_implementationString_29940.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29691.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 720)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 720)) ;
        GGS_string var_fileName_30428 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29691.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 721)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 721)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_30428  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 722)) ;
        {
        GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_30428, var_header_30206.add_operation (var_implementationString_29940, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 726)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 723)) ;
        }
        ioArgument_ioToolProductFileList.addAssign_operation (var_fileName_30428  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 728)) ;
      }
    }
    enumerator_29691.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'Base.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'Base.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_1 [1] = {
  nullptr
} ;

//--- Directory 'Base.lproj'

const cDirectoryWrapper gWrapperDirectory_1_xcodeProjectGenerationFilewrapper (
  "Base.lproj",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_1,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [2] = {
  & gWrapperDirectory_1_xcodeProjectGenerationFilewrapper,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  1,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_REF,
                                                                            const GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const GGS_XCodeGroupList & in_GROUPS,
                                                                            const GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__32_stringlist & in_C_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                            const GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_249_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_249.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_249.current_mBuildReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_249.current_mFileName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_249.current_mFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      index_249_.increment () ;
      enumerator_249.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_552_ (0) ;
  if (in_C_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_552 (in_C_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_552.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_552.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_552.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.c;\n    name = ") ;
      result.appendString (enumerator_552.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_552.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_552_.increment () ;
      enumerator_552.gotoNextObject () ;
    }
  }
  GGS_uint index_937_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_937 (in_CPP_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_937.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_937.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_937.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_937.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_937.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_937_.increment () ;
      enumerator_937.gotoNextObject () ;
    }
  }
  GGS_uint index_1324_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1324 (in_M_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1324.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1324.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1324.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_1324.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1324.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_1324_.increment () ;
      enumerator_1324.gotoNextObject () ;
    }
  }
  GGS_uint index_1710_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1710 (in_MM_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1710.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1710.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1710.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_1710.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1710.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_1710_.increment () ;
      enumerator_1710.gotoNextObject () ;
    }
  }
  GGS_uint index_2105_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2105 (in_HEADER_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2105.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2105.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2105.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_2105.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2105.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_2105_.increment () ;
      enumerator_2105.gotoNextObject () ;
    }
  }
  GGS_uint index_2496_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2496 (in_FRAMEWORK_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2496.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2496.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2496.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2496.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2496.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_2496_.increment () ;
      enumerator_2496.gotoNextObject () ;
    }
  }
  GGS_uint index_3069_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_3069 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3069.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3069.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3069.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      index_3069_.increment () ;
      enumerator_3069.gotoNextObject () ;
    }
  }
  GGS_uint index_3665_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_3665 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3665.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3665.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3665.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      index_3665_.increment () ;
      enumerator_3665.gotoNextObject () ;
    }
  }
  GGS_uint index_3994_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3994 (in_PLIST_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3994.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3994.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_3994.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3994.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_3994_.increment () ;
      enumerator_3994.gotoNextObject () ;
    }
  }
  GGS_uint index_4358_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4358 (in_XIB_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4358.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4358.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4358.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4358.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_4358_.increment () ;
      enumerator_4358.gotoNextObject () ;
    }
  }
  GGS_uint index_4724_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4724 (in_TIFF_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4724.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4724.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_4724.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4724.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_4724_.increment () ;
      enumerator_4724.gotoNextObject () ;
    }
  }
  GGS_uint index_5063_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_5063 (in_ICNS_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5063.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5063.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_5063.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_5063.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_5063_.increment () ;
      enumerator_5063.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_5714_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5714 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5714.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_5714.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5714.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_5953_ (0) ;
        if (enumerator_5714.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_5953 (enumerator_5714.current_mFrameworksFileRefList (HERE), EnumerationOrder::up) ;
          while (enumerator_5953.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_5953.current_mValue (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            index_5953_.increment () ;
            enumerator_5953.gotoNextObject () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5714_.increment () ;
      enumerator_5714.gotoNextObject () ;
    }
  }
  GGS_uint index_6391_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_6391 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6391.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6391.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6575_ (0) ;
      if (enumerator_6391.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6575 (enumerator_6391.current_mFrameworksFileRefList (HERE), EnumerationOrder::up) ;
        while (enumerator_6575.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6575.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          index_6575_.increment () ;
          enumerator_6575.gotoNextObject () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      index_6391_.increment () ;
      enumerator_6391.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_6851_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_6851 (in_GROUPS, EnumerationOrder::up) ;
    while (enumerator_6851.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6851.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6851.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_6978_ (0) ;
      if (enumerator_6851.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6978 (enumerator_6851.current_mChildrenRefs (HERE), EnumerationOrder::up) ;
        while (enumerator_6978.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6978.current_mValue (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          index_6978_.increment () ;
          enumerator_6978.gotoNextObject () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_6851.current_mGroupName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_6851.current_mGroupPath (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      index_6851_.increment () ;
      enumerator_6851.gotoNextObject () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_7330_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_7330 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, EnumerationOrder::up) ;
    while (enumerator_7330.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_7330.current_mValue (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      index_7330_.increment () ;
      enumerator_7330.gotoNextObject () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_7744_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7744 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7744.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7744.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7744.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_7744.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_7744.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" ,\n") ;
      const enumGalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_7744.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_7744.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_7744.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_7744.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_7744.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      index_7744_.increment () ;
      enumerator_7744.gotoNextObject () ;
    }
  }
  GGS_uint index_8701_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8701 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8701.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8701.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8701.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_8701.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_8701.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_8701.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_8701.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_9090_ (0) ;
      if (enumerator_8701.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_9090 (enumerator_8701.current_mDependentTargets (HERE), EnumerationOrder::up) ;
        while (enumerator_9090.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_9090.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" ,\n") ;
          index_9090_.increment () ;
          enumerator_9090.gotoNextObject () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_8701.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_8701.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_8701.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      index_8701_.increment () ;
      enumerator_8701.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_10114_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_10114 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10114.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10114.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      index_10114_.increment () ;
      enumerator_10114.gotoNextObject () ;
    }
  }
  GGS_uint index_10453_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10453 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10453.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10453.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      index_10453_.increment () ;
      enumerator_10453.gotoNextObject () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_10905_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10905 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10905.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_10905.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_11088_ (0) ;
      if (enumerator_10905.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11088 (enumerator_10905.current_mResourceFileBuildRefs (HERE), EnumerationOrder::up) ;
        while (enumerator_11088.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_11088.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          index_11088_.increment () ;
          enumerator_11088.gotoNextObject () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      index_10905_.increment () ;
      enumerator_10905.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_11538_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_11538 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11538.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11538.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11705_ (0) ;
      if (enumerator_11538.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11705 (enumerator_11538.current_mBuildPhaseRefList (HERE), EnumerationOrder::up) ;
        while (enumerator_11705.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11705.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          index_11705_.increment () ;
          enumerator_11705.gotoNextObject () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      index_11538_.increment () ;
      enumerator_11538.gotoNextObject () ;
    }
  }
  GGS_uint index_12111_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12111 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12111.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_12111.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_12278_ (0) ;
      if (enumerator_12111.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_12278 (enumerator_12111.current_mBuildPhaseRefList (HERE), EnumerationOrder::up) ;
        while (enumerator_12278.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_12278.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          index_12278_.increment () ;
          enumerator_12278.gotoNextObject () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      index_12111_.increment () ;
      enumerator_12111.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_12785_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12785 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12785.hasCurrentObject ()) {
      GGS_uint index_12833_ (0) ;
      if (enumerator_12785.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_12833 (enumerator_12785.current_mDependentTargets (HERE), EnumerationOrder::up) ;
        while (enumerator_12833.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_12833.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_12833.current_mValue_31_ (HERE).stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          index_12833_.increment () ;
          enumerator_12833.gotoNextObject () ;
        }
      }
      index_12785_.increment () ;
      enumerator_12785.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        CLANG_CXX_LANGUAGE_STANDARD = \"c++17\";\n") ;
  GGS_uint index_13357_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13357 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13357.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_13357.current_mValue (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13357_.increment () ;
      enumerator_13357.gotoNextObject () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_13672_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_13672 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13672.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13672.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        ONLY_ACTIVE_ARCH = YES;\n") ;
      GGS_uint index_13876_ (0) ;
      if (enumerator_13672.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13876 (enumerator_13672.current_mBuildConfigurationSettingList (HERE), EnumerationOrder::up) ;
        while (enumerator_13876.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_13876.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_13876_.increment () ;
          enumerator_13876.gotoNextObject () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13672.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 345)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      index_13672_.increment () ;
      enumerator_13672.gotoNextObject () ;
    }
  }
  GGS_uint index_14351_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_14351 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14351.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14351.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_14519_ (0) ;
      if (enumerator_14351.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_14519 (enumerator_14351.current_mBuildConfigurationSettingList (HERE), EnumerationOrder::up) ;
        while (enumerator_14519.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_14519.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_14519_.increment () ;
          enumerator_14519.gotoNextObject () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = \"Info.plist\";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_14351.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 358)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_BUNDLE_IDENTIFIER = \"") ;
      result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
      result.appendString (".") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString ("\";\n    };\n    name = Default;\n  };\n\n") ;
      index_14351_.increment () ;
      enumerator_14351.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_15478_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_15478 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15478.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_15478.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_15478.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      index_15478_.increment () ;
      enumerator_15478.gotoNextObject () ;
    }
  }
  GGS_uint index_16060_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_16060 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_16060.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_16060.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_16060.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      index_16060_.increment () ;
      enumerator_16060.gotoNextObject () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'targetGalgas3GenerationFileWrapper'
//
//--------------------------------------------------------------------------------------------------

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

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_7 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper (
  "makefile-x86linux32-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_7,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7
) ;

//--- All files of 'makefile-x86linux64-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_6 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux64-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_6 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux64-on-macosx'

const cDirectoryWrapper gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper (
  "makefile-x86linux64-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_6,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_6
) ;

//--- File 'project-xcode-objc/adding-icons-to-your-application.rtf'

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

//--- All files of 'project-xcode-objc' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_3 [2] = {
  & gWrapperFile_0_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- All sub-directories of 'project-xcode-objc' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_3 [2] = {
  & gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- Directory 'project-xcode-objc'

const cDirectoryWrapper gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper (
  "project-xcode-objc",
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

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0 [7] = {
  & gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_targetGalgas_33_GenerationFileWrapper (
  "",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0,
  6,
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom macosx_gcc_tools import buildForMacOS\n#----------------------------------------------------------------- Build\nbuildForMacOS (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n#! /usr/bin/python3\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom unix_gcc_tools import buildForUnix\n#----------------------------------------------------------------- Build\nbuildForUnix (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n#! /usr/bin/python3\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"install-release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_32 import buildForLinux32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_64 import buildForLinux64OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux64OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom mingw32_on_macosx_gcc_tools import buildForWin32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForWin32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
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
                                                                                            const GGS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET,
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
  const enumGalgasBool test_0 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString (GGS_string (".exe").stringValue ()) ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-fomit-frame-pointer\" />\n     <Add option=\"-O2\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++17\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     <Add option=\"-DDO_NOT_GENERATE_CHECKINGS\" />\n     ") ;
  const enumGalgasBool test_1 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString (GGS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("    </Compiler>\n   </Target>\n   <Target title=\"Debug\">\n    <Option platforms=\"") ;
  result.appendString (in_PLATFORM.stringValue ()) ;
  result.appendString (";\" />\n    <Option output=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-debug") ;
  const enumGalgasBool test_2 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString (GGS_string (".exe").stringValue ()) ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects_debug\" />\n    <Option deps_output=\".deps_debug\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-g\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Winline\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++17\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     ") ;
  const enumGalgasBool test_3 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString (GGS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
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
  result.appendString ("/output\" />\n") ;
  GGS_uint index_2819_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_2819 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET, EnumerationOrder::up) ;
    while (enumerator_2819.hasCurrentObject ()) {
      result.appendString ("  <Add directory=\"") ;
      result.appendString (enumerator_2819.current_key (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      index_2819_.increment () ;
      enumerator_2819.gotoNextObject () ;
    }
  }
  result.appendString ("  </Compiler>\n  <Linker>\n") ;
  const enumGalgasBool test_4 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString (GGS_string ("   <Add option=\"-static\" />\n   <Add library=\"Comdlg32\" />\n").stringValue ()) ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  </Linker>\n") ;
  const enumGalgasBool test_5 = in_VERBOSE_5F_OPTION.boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("  <Unit filename=\"") ;
    result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
    result.appendString ("/galgas/C_galgas_verbose_option.cpp\" />\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  <Unit filename=\"") ;
    result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
    result.appendString ("/galgas/C_galgas_quiet_option.cpp\" />\n") ;
    } break ;
  default :
    break ;
  }
  GGS_uint index_3218_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3218 (in_TOOL_5F_CPP_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3218.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
      result.appendString ("/output/") ;
      result.appendString (enumerator_3218.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      index_3218_.increment () ;
      enumerator_3218.gotoNextObject () ;
    }
  }
  GGS_uint index_3338_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3338 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3338.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (enumerator_3338.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      index_3338_.increment () ;
      enumerator_3338.gotoNextObject () ;
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
  result.appendString ("/command_line_interface/StringListCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("/strings/unicode_character_cpp.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("/galgas/C_galgas_type_descriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/C_galgas_function_descriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/galgas-input-output.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/C_galgas_class_inspector.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IssueWithFixIt.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cObjectArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cCollectionElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/capCollectionElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/capCollectionElementArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cSortedListElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/capSortedListElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cGenericAbstractEnumerator.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cEnumerator_range.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cIndexingDictionary.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cIssueDescriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cLexiqueIntrospection.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_root.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_list.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_sortedlist.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_map.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_reference_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_value_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_graph.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_enumAssociatedValues.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/acPtr_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/acStrongPtr_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cPtr_weakReference_proxy.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_weak_reference.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cPtr_object.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/scanner_actions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_application.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_bigint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_binaryset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_bool.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_char.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_data.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_double.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_filewrapper.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_function.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_location.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_sint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_sint_36__34_.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_string.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_string-getters.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_stringset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_type.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_object.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_uint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_timer.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_uint_36__34_.cpp\" />\n  <Extensions>\n   <code_completion />\n   <envvars />\n   <debugger />\n   <lib_finder disable_auto=\"1\" />\n  </Extensions>\n </Project>\n</CodeBlocks_project_file>\n") ;
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
                                                                                                const GGS_string & in_MACOSX_5F_DEPLOYMENT_5F_TARGET
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
    cEnumerator_stringset enumerator_986 (in_HANDLED_5F_EXTENSION_5F_SET, EnumerationOrder::up) ;
    while (enumerator_986.hasCurrentObject ()) {
      result.appendString ("  <dict>\n      <key>CFBundleTypeIconFile</key>\n      <string>") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n      <key>CFBundleTypeIconSystemGenerated</key>\n      <integer>0</integer>\n      <key>CFBundleTypeName</key>\n      <string>") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString (" Source</string>\n      <key>CFBundleTypeRole</key>\n      <string>Editor</string>\n      <key>LSHandlerRank</key>\n      <string>Default</string>\n      <key>LSItemContentTypes</key>\n      <array>\n        <string>$(PRODUCT_BUNDLE_IDENTIFIER).") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n      </array>\n      <key>NSDocumentClass</key>\n      <string>OC_GGS_Document</string>\n  </dict>\n") ;
      index_986_.increment () ;
      enumerator_986.gotoNextObject () ;
    }
  }
  result.appendString ("\n </array>\n <key>UTExportedTypeDeclarations</key>\n <array>\n") ;
  GGS_uint index_1662_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1662 (in_HANDLED_5F_EXTENSION_5F_SET, EnumerationOrder::up) ;
    while (enumerator_1662.hasCurrentObject ()) {
      result.appendString ("  <dict>\n    <key>UTTypeConformsTo</key>\n    <array>\n      <string>public.text</string>\n    </array>\n    <key>UTTypeDescription</key>\n    <string>") ;
      result.appendString (enumerator_1662.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n    <key>UTTypeIcons</key>\n    <dict>\n      <key>UTTypeIconBadgeName</key>\n      <string>galgasDocuments</string>\n    </dict>\n    <key>UTTypeIdentifier</key>\n    <string>$(PRODUCT_BUNDLE_IDENTIFIER).") ;
      result.appendString (enumerator_1662.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n    <key>UTTypeTagSpecification</key>\n    <dict>\n      <key>public.filename-extension</key>\n      <array>\n        <string>") ;
      result.appendString (enumerator_1662.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n      </array>\n    </dict>\n  </dict>\n") ;
      index_1662_.increment () ;
      enumerator_1662.gotoNextObject () ;
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
    cEnumerator_stringset enumerator_821 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET, EnumerationOrder::up) ;
    while (enumerator_821.hasCurrentObject ()) {
      result.appendString (",\n                       \"") ;
      result.appendString (enumerator_821.current_key (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      index_821_.increment () ;
      enumerator_821.gotoNextObject () ;
    }
  }
  result.appendString ("],\n    \"SOURCES\"  :  [\n") ;
  GGS_uint index_934_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_934 (in_MAKEFILE_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_934.hasCurrentObject ()) {
      result.appendString ("        \"") ;
      result.appendString (enumerator_934.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      index_934_.increment () ;
      enumerator_934.gotoNextObject () ;
    }
  }
  GGS_uint index_1018_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1018 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1018.hasCurrentObject ()) {
      result.appendString ("        \"") ;
      result.appendString (enumerator_1018.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      index_1018_.increment () ;
      enumerator_1018.gotoNextObject () ;
    }
  }
  result.appendString ("       \"AbstractCommandLineOption.cpp\",\n       \"BoolCommandLineOption.cpp\",\n       \"UIntCommandLineOption.cpp\",\n       \"StringCommandLineOption.cpp\",\n       \"StringListCommandLineOption.cpp\",\n       \"builtin-command-line-options.cpp\",\n       \"analyzeCommandLineOptions.cpp\",\n       \"F_mainForLIBPM.cpp\",\n       \"BinaryDecisionDiagram.cpp\",\n       \"BinaryDecisionDiagramRelationSingleType.cpp\",\n       \"BinaryDecisionDiagramRelationConfiguration.cpp\",\n       \"BinaryDecisionDiagramRelation.cpp\",\n       \"FileManager.cpp\",\n       \"AbstractFileHandle.cpp\",\n       \"TextFileWrite.cpp\",\n       \"HTMLFileWrite.cpp\",\n       \"BinaryFileWrite.cpp\",\n       \"AbstractOutputStream.cpp\",\n       \"ColoredConsole.cpp\",\n       \"ConsoleOut.cpp\",\n       \"unicode_character_cpp.cpp\",\n       \"String-class-getters.cpp\",\n       \"String-class.cpp\",\n       \"HTMLString.cpp\",\n       \"print.cpp\",\n       \"Timer.cpp\",\n       \"DateTime.cpp\",\n       \"PrologueEpilogue.cpp\",\n       \"SharedObject.cpp\",\n       \"BigSigned-add.cpp\",\n       \"BigSigned-bit.cpp\",\n       \"BigSigned-chunk-operations.cpp\",\n       \"BigSigned-constructors.cpp\",\n       \"BigSigned-conversions.cpp\",\n       \"BigSigned-divide.cpp\",\n       \"BigSigned-logic-operations.cpp\",\n       \"BigSigned-multiply.cpp\",\n       \"BigSigned-print.cpp\",\n       \"BigSigned-shifts.cpp\",\n       \"BigSigned-subtract.cpp\",\n       \"BigSigned-utilities.cpp\",\n       \"BigSigned.cpp\",\n       \"BigUnsigned-add.cpp\",\n       \"BigUnsigned-bit.cpp\",\n       \"BigUnsigned-chunk-operations.cpp\",\n       \"BigUnsigned-constructors.cpp\",\n       \"BigUnsigned-conversions.cpp\",\n       \"BigUnsigned-divide-naive.cpp\",\n       \"BigUnsigned-divide.cpp\",\n       \"BigUnsigned-logic-operations.cpp\",\n       \"BigUnsigned-multiply.cpp\",\n       \"BigUnsigned-print.cpp\",\n       \"BigUnsigned-shifts.cpp\",\n       \"BigUnsigned-subtract.cpp\",\n       \"BigUnsigned-utilities.cpp\",\n       \"ChunkSharedArray.cpp\",\n       \"UInt128.cpp\",\n       \"U8Data.cpp\",\n       \"F_DisplayException.cpp\",\n       \"macroAssert.cpp\",\n       \"F_GetPrime.cpp\",\n       \"MF_MemoryControl.cpp\",\n       \"cpp-allocation.cpp\",\n       \"basic-allocation.cpp\",\n       \"UInt32Set.cpp\",\n       \"DirectedGraph.cpp\",\n       \"md5.cpp\",\n       \"SHA256.cpp\",\n       \"galgas-random.cpp\",\n       \"C_galgas_CLI_Options.cpp\",\n       \"Compiler.cpp\",\n       \"Lexique.cpp\",\n       \"Lexique-parsing.cpp\",\n       \"LocationInSource.cpp\",\n       \"SourceTextInString.cpp\",\n       \"C_galgas_type_descriptor.cpp\",\n       \"C_galgas_function_descriptor.cpp\",\n       \"galgas-input-output.cpp\",\n       \"C_galgas_class_inspector.cpp\",\n       \"IssueWithFixIt.cpp\",\n       \"cObjectArray.cpp\",\n       \"cCollectionElement.cpp\",\n       \"capCollectionElement.cpp\",\n       \"capCollectionElementArray.cpp\",\n       \"cSortedListElement.cpp\",\n       \"capSortedListElement.cpp\",\n       \"cGenericAbstractEnumerator.cpp\",\n       \"cEnumerator_range.cpp\",\n       \"cIndexingDictionary.cpp\",\n       \"cIssueDescriptor.cpp\",\n       \"cLexiqueIntrospection.cpp\",\n       \"AC_GALGAS_root.cpp\",\n       \"AC_GALGAS_list.cpp\",\n       \"AC_GALGAS_sortedlist.cpp\",\n       \"AC_GALGAS_map.cpp\",\n       \"AC_GALGAS_reference_class.cpp\",\n       \"AC_GALGAS_value_class.cpp\",\n       \"AC_GALGAS_graph.cpp\",\n       \"AC_GALGAS_enumAssociatedValues.cpp\",\n       \"acPtr_class.cpp\",\n       \"acStrongPtr_class.cpp\",\n       \"cPtr_weakReference_proxy.cpp\",\n       \"AC_GALGAS_weak_reference.cpp\",\n       \"cPtr_object.cpp\",\n       \"scanner_actions.cpp\",\n       \"GALGAS_application.cpp\",\n       \"GALGAS_bigint.cpp\",\n       \"GALGAS_binaryset.cpp\",\n       \"GALGAS_bool.cpp\",\n       \"GALGAS_char.cpp\",\n       \"GALGAS_data.cpp\",\n       \"GALGAS_double.cpp\",\n       \"GALGAS_filewrapper.cpp\",\n       \"GALGAS_function.cpp\",\n       \"GALGAS_location.cpp\",\n       \"GALGAS_sint.cpp\",\n       \"GALGAS_sint_36__34_.cpp\",\n       \"GALGAS_string.cpp\",\n       \"GALGAS_string-getters.cpp\",\n       \"GALGAS_stringset.cpp\",\n       \"GALGAS_type.cpp\",\n       \"GALGAS_object.cpp\",\n       \"GALGAS_uint.cpp\",\n       \"GALGAS_timer.cpp\",\n       \"GALGAS_uint_36__34_.cpp\"\n    ],\n    \"USER_LINK_OPTIONS\"  :  [") ;
  GGS_uint index_5150_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5150 (in_TOOL_5F_LINK_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5150.hasCurrentObject ()) {
      result.appendString ("\n        \"") ;
      result.appendString (enumerator_5150.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      if (enumerator_5150.hasNextObject ()) {
        result.appendString (",") ;
      }
      index_5150_.increment () ;
      enumerator_5150.gotoNextObject () ;
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
                                                                                                         const GGS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                         const GGS_bool constinArgument_inVerboseOption,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_6083 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 107)) ;
  var_dir_6083.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 108)) ;
  GGS_string var_s_6176 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GGS_bool (true), GGS_string ("Windows"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 109))) ;
  GGS_bool joker_6571 ; // Joker input parameter
  var_s_6176.method_writeToFileWhenDifferentContents (var_dir_6083.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)), joker_6571, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)) ;
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
                                                                                                           const GGS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                           const GGS_bool constinArgument_inVerboseOption,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_8055 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 163)) ;
  var_dir_8055.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 164)) ;
  GGS_string var_s_8148 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 165))) ;
  GGS_bool joker_8541 ; // Joker input parameter
  var_s_8148.method_writeToFileWhenDifferentContents (var_dir_8055.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 176)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 176)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 176)), joker_8541, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 176)) ;
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
                                                                                                                   const GGS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                                   const GGS_bool constinArgument_inVerboseOption,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_9022 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 191)) ;
  var_dir_9022.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 192)) ;
  GGS_string var_s_9115 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193))) ;
  GGS_bool joker_9508 ; // Joker input parameter
  var_s_9115.method_writeToFileWhenDifferentContents (var_dir_9022.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)), joker_9508, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MinGWOnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                            const GGS_string constinArgument_inBuildDirectoryName,
                                                                            const GGS_string constinArgument_inProjectName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_9792 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213)) ;
  var_dir_9792.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214)) ;
  GGS_bool joker_10038 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215))).method_writeToExecutableFileWhenDifferentContents (var_dir_9792.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)), joker_10038, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)) ;
  GGS_bool joker_10190 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216))).method_writeToExecutableFileWhenDifferentContents (var_dir_9792.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)), joker_10190, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)) ;
  GGS_bool joker_10334 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217))).method_writeToExecutableFileWhenDifferentContents (var_dir_9792.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)), joker_10334, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)) ;
  GGS_bool joker_10482 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218))).method_writeToExecutableFileWhenDifferentContents (var_dir_9792.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)), joker_10482, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)) ;
  GGS_bool joker_10634 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219))).method_writeToExecutableFileWhenDifferentContents (var_dir_9792.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)), joker_10634, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)) ;
  GGS_bool joker_10793 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220))).method_writeToExecutableFileWhenDifferentContents (var_dir_9792.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 221)), joker_10793, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_9792.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 224)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MakefileUnixTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MakefileUnixTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                           const GGS_string constinArgument_inBuildDirectoryName,
                                                                           const GGS_string constinArgument_inProjectName,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_11129 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233)) ;
  var_dir_11129.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234)) ;
  GGS_bool joker_11356 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235))).method_writeToExecutableFileWhenDifferentContents (var_dir_11129.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)), joker_11356, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)) ;
  GGS_bool joker_11500 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236))).method_writeToExecutableFileWhenDifferentContents (var_dir_11129.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)), joker_11500, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)) ;
  GGS_bool joker_11636 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237))).method_writeToExecutableFileWhenDifferentContents (var_dir_11129.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237)), joker_11636, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237)) ;
  GGS_bool joker_11776 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238))).method_writeToExecutableFileWhenDifferentContents (var_dir_11129.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238)), joker_11776, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238)) ;
  GGS_bool joker_11920 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 239))).method_writeToExecutableFileWhenDifferentContents (var_dir_11129.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 239)), joker_11920, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 239)) ;
  GGS_bool joker_12052 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 240))).method_writeToExecutableFileWhenDifferentContents (var_dir_11129.add_operation (GGS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 240)), joker_12052, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 240)) ;
  GGS_bool joker_12195 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 241))).method_writeToExecutableFileWhenDifferentContents (var_dir_11129.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 241)), joker_12195, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 241)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_11129.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 242)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MakefileMacTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MakefileMacTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                          const GGS_string constinArgument_inBuildDirectoryName,
                                                                          const GGS_string constinArgument_inProjectName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_12527 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251)) ;
  var_dir_12527.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252)) ;
  GGS_bool joker_12758 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253))).method_writeToExecutableFileWhenDifferentContents (var_dir_12527.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253)), joker_12758, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253)) ;
  GGS_bool joker_12904 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254))).method_writeToExecutableFileWhenDifferentContents (var_dir_12527.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254)), joker_12904, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254)) ;
  GGS_bool joker_13042 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255))).method_writeToExecutableFileWhenDifferentContents (var_dir_12527.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255)), joker_13042, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255)) ;
  GGS_bool joker_13184 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 256))).method_writeToExecutableFileWhenDifferentContents (var_dir_12527.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 256)), joker_13184, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 256)) ;
  GGS_bool joker_13330 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 257))).method_writeToExecutableFileWhenDifferentContents (var_dir_12527.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 257)), joker_13330, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 257)) ;
  GGS_bool joker_13611 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 259))).method_writeToExecutableFileWhenDifferentContents (var_dir_12527.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 259)), joker_13611, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 259)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_12527.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 260)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3Linux32OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                    const GGS_string constinArgument_inBuildDirectoryName,
                                                                                    const GGS_string constinArgument_inProjectName,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_13947 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 269)) ;
  var_dir_13947.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 270)) ;
  GGS_bool joker_14203 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271))).method_writeToExecutableFileWhenDifferentContents (var_dir_13947.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271)), joker_14203, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271)) ;
  GGS_bool joker_14360 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272))).method_writeToExecutableFileWhenDifferentContents (var_dir_13947.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272)), joker_14360, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272)) ;
  GGS_bool joker_14509 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 273))).method_writeToExecutableFileWhenDifferentContents (var_dir_13947.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 273)), joker_14509, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 273)) ;
  GGS_bool joker_14662 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 274))).method_writeToExecutableFileWhenDifferentContents (var_dir_13947.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 274)), joker_14662, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 274)) ;
  GGS_bool joker_14819 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 275))).method_writeToExecutableFileWhenDifferentContents (var_dir_13947.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 275)), joker_14819, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 275)) ;
  GGS_bool joker_14975 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 276))).method_writeToExecutableFileWhenDifferentContents (var_dir_13947.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 276)), joker_14975, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 276)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_13947.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 277)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3Linux64OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                    const GGS_string constinArgument_inBuildDirectoryName,
                                                                                    const GGS_string constinArgument_inProjectName,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_15311 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 286)) ;
  var_dir_15311.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 287)) ;
  GGS_bool joker_15567 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288))).method_writeToExecutableFileWhenDifferentContents (var_dir_15311.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288)), joker_15567, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288)) ;
  GGS_bool joker_15724 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 289))).method_writeToExecutableFileWhenDifferentContents (var_dir_15311.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 289)), joker_15724, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 289)) ;
  GGS_bool joker_15873 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 290))).method_writeToExecutableFileWhenDifferentContents (var_dir_15311.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 290)), joker_15873, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 290)) ;
  GGS_bool joker_16026 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 291))).method_writeToExecutableFileWhenDifferentContents (var_dir_15311.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 291)), joker_16026, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 291)) ;
  GGS_bool joker_16183 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 292))).method_writeToExecutableFileWhenDifferentContents (var_dir_15311.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 292)), joker_16183, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 292)) ;
  GGS_bool joker_16339 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 293))).method_writeToExecutableFileWhenDifferentContents (var_dir_15311.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 293)), joker_16339, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 293)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_15311.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 294)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets?absoluteBuildDir?buildDirName??????????????&???'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__3F__3F_ (const GGS_string constinArgument_inAbsoluteBuildDirectory,
                                                                                                                                              const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                                                              const GGS_string constinArgument_inProjectSourceFilePath,
                                                                                                                                              const GGS_string constinArgument_inTargetName,
                                                                                                                                              const GGS_location /* constinArgument_inEndOfProjectSourceFile */,
                                                                                                                                              const GGS_string constinArgument_inProjectVersionString,
                                                                                                                                              const GGS_projectQualifiedFeatureMap constinArgument_inProjectQualifiedFeatureMap,
                                                                                                                                              const GGS_lstringlist constinArgument_inTargetFeatureList,
                                                                                                                                              const GGS_bool constinArgument_inQuietOutputByDefault,
                                                                                                                                              const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                                                              const GGS_stringlist constinArgument_inToolHeaderFileList,
                                                                                                                                              const GGS_stringlist constinArgument_inAppProductFileList,
                                                                                                                                              const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                                                              const GGS_stringlist constinArgument_inFrameworkToolFileList,
                                                                                                                                              const GGS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                                                              const GGS_stringset constinArgument_inHandledExtensionSet,
                                                                                                                                              GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                                                                              const GGS_stringlist constinArgument_inHandCodedSourceAppFileList,
                                                                                                                                              const GGS_stringlist constinArgument_inHandCodedLinkAppFileList,
                                                                                                                                              const GGS_stringlist constinArgument_inHandCodedLinkToolFileList,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_projectDirectory_17404 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 321)) ;
  GGS_bool joker_17698 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 323))).method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 324)), joker_17698, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 323)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 327)) ;
  GGS_stringlist var_toolCppFileList_17839 = constinArgument_inToolCppFileList ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_toolCppFileList_17839.addAssign_operation (GGS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 331)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_toolCppFileList_17839.addAssign_operation (GGS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 333)) ;
  }
  GGS_lstring var_macCodeSign_18115 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18129 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GGS_string ("macCodeSign")) ;
  if (nullptr != objectArray_18129) {
      macroValidSharedObject (objectArray_18129, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, objectArray_18129->mProperty_mFeatureValue.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (objectArray_18129->mProperty_mFeatureValue.readProperty_location (), GGS_string ("the %macCodeSign attribute should not be empty"), fixItArray2  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 339)) ;
        var_macCodeSign_18115.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_1) {
      var_macCodeSign_18115 = objectArray_18129->mProperty_mFeatureValue ;
    }
  }else{
    var_macCodeSign_18115 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 344)) ;
  }
  GGS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18498 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18525 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GGS_string ("MacOSDeployment")) ;
  if (nullptr != objectArray_18525) {
      macroValidSharedObject (objectArray_18525, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, objectArray_18525->mProperty_mFeatureValue.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (objectArray_18525->mProperty_mFeatureValue.readProperty_location (), GGS_string ("the %MacOSDeployment attribute should not be empty"), fixItArray4  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 350)) ;
        var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18498.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18498 = objectArray_18525->mProperty_mFeatureValue.readProperty_string () ;
    }
  }else{
    var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18498 = GGS_string ("10.13").getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 355)).readProperty_string () ;
  }
  GGS_string var_libpmPath_18941 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18953 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GGS_string ("libpmAtPath")) ;
  if (nullptr != objectArray_18953) {
      macroValidSharedObject (objectArray_18953, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::equal, objectArray_18953->mProperty_mFeatureValue.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (objectArray_18953->mProperty_mFeatureValue.readProperty_location (), GGS_string ("the libpm path should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 361)) ;
        var_libpmPath_18941.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      var_libpmPath_18941 = objectArray_18953->mProperty_mFeatureValue.readProperty_string () ;
    }
  }else{
    {
    routine_updateLIBPMatPath_3F_ (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 366)) ;
    }
    var_libpmPath_18941 = GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 367)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 367)) ;
  }
  GGS_stringset var_availableGenerationFeatures_19463 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 372)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 373)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 374)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 375)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 376)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 377)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 378)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 379)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 380)) ;
  var_availableGenerationFeatures_19463.addAssign_operation (GGS_string ("MacOS")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 381)) ;
  GGS_stringset var_generationFeatures_20073 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_SDK_20151 = GGS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_20167 (constinArgument_inTargetFeatureList, EnumerationOrder::up) ;
  while (enumerator_20167.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_availableGenerationFeatures_19463.getter_hasKey (enumerator_20167.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 386)).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_generationFeatures_20073.getter_hasKey (enumerator_20167.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 387)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_20167.current_mValue (HERE).readProperty_location (), GGS_string ("duplicate '").add_operation (enumerator_20167.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)), fixItArray9  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)) ;
          }
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::equal, enumerator_20167.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("MacOS"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::notEqual, var_SDK_20151.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_20167.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated setting"), fixItArray12  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 393)) ;
              }
            }
            var_SDK_20151 = GGS_string ("macosx") ;
          }
        }
        if (kBoolFalse == test_10) {
          var_generationFeatures_20073.addAssign_operation (enumerator_20167.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 397)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      GGS_stringlist var_s_20642 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      cEnumerator_stringset enumerator_20661 (var_availableGenerationFeatures_19463, EnumerationOrder::up) ;
      while (enumerator_20661.hasCurrentObject ()) {
        var_s_20642.addAssign_operation (GGS_string ("%").add_operation (enumerator_20661.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 402))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 402)) ;
        enumerator_20661.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray13 ;
      appendFixItActions (fixItArray13, kFixItReplace, var_s_20642) ;
      inCompiler->emitSemanticError (enumerator_20167.current_mValue (HERE).readProperty_location (), GGS_string ("unknown '").add_operation (enumerator_20167.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)), fixItArray13  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)) ;
    }
    enumerator_20167.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    GGS_bool test_15 = GGS_bool (ComparisonKind::notEqual, var_macCodeSign_18115.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    if (kBoolTrue == test_15.boolEnum ()) {
      test_15 = GGS_bool (ComparisonKind::equal, var_SDK_20151.objectCompare (GGS_string::makeEmptyString ())) ;
    }
    test_14 = test_15.boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (var_macCodeSign_18115.readProperty_location (), GGS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%MacOS\""), fixItArray16  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 409)) ;
    }
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_SDK_20151.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_17) {
      test_17 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GGS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 417)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 417)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 418)), GGS_string ("For a Cocoa project, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray18  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 418)) ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = var_generationFeatures_20073.getter_hasKey (GGS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 421)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      routine_generateGalgas_33_MakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17404, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 422)) ;
      }
    }
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = var_generationFeatures_20073.getter_hasKey (GGS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 424)).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      routine_generateGalgas_33_MakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17404, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 425)) ;
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_generationFeatures_20073.getter_hasKey (GGS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 427)).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17404, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 428)) ;
      }
    }
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_generationFeatures_20073.getter_hasKey (GGS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 430)).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17404, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 431)) ;
      }
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = var_generationFeatures_20073.getter_hasKey (GGS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 433)).boolEnum () ;
    if (kBoolTrue == test_23) {
      {
      routine_generateGalgas_33_MinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17404, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 434)) ;
      }
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = var_generationFeatures_20073.getter_hasKey (GGS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 436)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (var_projectDirectory_17404, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18941, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 437)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = var_generationFeatures_20073.getter_hasKey (GGS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 448)).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_17404, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18941, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 449)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = var_generationFeatures_20073.getter_hasKey (GGS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 460)).boolEnum () ;
    if (kBoolTrue == test_26) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_17404, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18941, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 461)) ;
      }
    }
  }
  GGS_stringlist var_linkOptionForLinkingFrameworkWithTool_23550 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 474)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_27) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::notEqual, var_SDK_20151.objectCompare (GGS_string ("macosx"))).boolEnum () ;
        if (kBoolTrue == test_28) {
          var_linkOptionForLinkingFrameworkWithTool_23550.addAssign_operation (GGS_string ("-isysroot")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 476)) ;
          var_linkOptionForLinkingFrameworkWithTool_23550.addAssign_operation (GGS_string ("/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/").add_operation (var_SDK_20151, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477)).add_operation (GGS_string (".sdk"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477)) ;
        }
      }
      cEnumerator_stringlist enumerator_23895 (constinArgument_inFrameworkToolFileList, EnumerationOrder::up) ;
      while (enumerator_23895.hasCurrentObject ()) {
        var_linkOptionForLinkingFrameworkWithTool_23550.addAssign_operation (GGS_string ("-framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 480)) ;
        var_linkOptionForLinkingFrameworkWithTool_23550.addAssign_operation (enumerator_23895.current_mValue (HERE).getter_stringByDeletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 481))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 481)) ;
        enumerator_23895.gotoNextObject () ;
      }
    }
  }
  GGS_stringlist var_handCodedSourceToolFileList_24131 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  cEnumerator_stringlist enumerator_24172 (constinArgument_inHandCodedSourceToolFileList, EnumerationOrder::up) ;
  while (enumerator_24172.hasCurrentObject ()) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GGS_bool (ComparisonKind::notEqual, enumerator_24172.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 487)).objectCompare (GGS_string ("h"))).boolEnum () ;
      if (kBoolTrue == test_29) {
        var_handCodedSourceToolFileList_24131.addAssign_operation (enumerator_24172.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 488))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 488)) ;
      }
    }
    enumerator_24172.gotoNextObject () ;
  }
  GGS_string var_jsonFileListContents_24328 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, constinArgument_inHandCodedSourceDirectorySet, var_handCodedSourceToolFileList_24131, var_toolCppFileList_17839, var_linkOptionForLinkingFrameworkWithTool_23550.add_operation (constinArgument_inHandCodedLinkToolFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 495)), var_libpmPath_18941, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 491))) ;
  GGS_string var_jsonFileListPath_24627 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 499)) ;
  GGS_bool joker_24773 ; // Joker input parameter
  var_jsonFileListContents_24328.method_writeToFileWhenDifferentContents (var_jsonFileListPath_24627, joker_24773, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 500)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 501)) ;
  enumGalgasBool test_30 = kBoolTrue ;
  if (kBoolTrue == test_30) {
    test_30 = GGS_bool (ComparisonKind::notEqual, var_SDK_20151.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_30) {
      GGS_string var_dir_24893 = var_projectDirectory_17404.add_operation (GGS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 504)) ;
      var_dir_24893.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 505)) ;
      GGS_string var_applicationBundleBase_24994 ;
      const cMapElement_projectQualifiedFeatureMap * objectArray_25020 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GGS_string ("applicationBundleBase")) ;
      if (nullptr != objectArray_25020) {
          macroValidSharedObject (objectArray_25020, cMapElement_projectQualifiedFeatureMap) ;
        var_applicationBundleBase_24994 = objectArray_25020->mProperty_mFeatureValue.readProperty_string () ;
      }else{
        var_applicationBundleBase_24994 = GGS_string ("fr.irccyn") ;
      }
      GGS_string var_InfoPlistContents_25203 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_24994, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18498 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 513))) ;
      GGS_bool joker_25513 ; // Joker input parameter
      var_InfoPlistContents_25203.method_writeToFileWhenDifferentContents (var_dir_24893.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 520)), joker_25513, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 520)) ;
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = var_dir_24893.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).boolEnum () ;
        if (kBoolTrue == test_31) {
          GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523))).method_writeToExecutableFile (var_dir_24893.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523)) ;
        }
      }
      var_dir_24893.add_operation (GGS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 526)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 526)) ;
      GGS_string var_InfoPlist_5F_strings_5F_path_25771 = var_dir_24893.add_operation (GGS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 527)) ;
      GGS_bool joker_25987 ; // Joker input parameter
      GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_25771, joker_25987, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528)) ;
      GGS_string var_Credits_5F_rtf_5F_path_25999 = var_dir_24893.add_operation (GGS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 529)) ;
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = var_Credits_5F_rtf_5F_path_25999.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 530)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 530)).boolEnum () ;
        if (kBoolTrue == test_32) {
          GGS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_25999, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 531)) ;
        }
      }
      GGS_string var_userResourceDir_26302 = var_projectDirectory_17404.add_operation (GGS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 534)) ;
      var_userResourceDir_26302.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 535)) ;
      GGS_stringlist temp_33 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 536)) ;
      temp_33.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("icns"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 536)) ;
      GGS_stringlist var_extensionList_26426 = temp_33 ;
      GGS_stringlist var_resourceFiles_26462 = var_userResourceDir_26302.getter_regularFilesWithExtensions (GGS_bool (false), var_extensionList_26426 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 537)) ;
      GGS_string var_newIntermediateFilePath_26574 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 539)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GGS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 540)) ;
      GGS_XcodeProjectDescriptor var_xcodeProject_26828 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
      var_xcodeProject_26828.mProperty_mApplicationBundleName = var_applicationBundleBase_24994 ;
      var_xcodeProject_26828.mProperty_mProjectName = constinArgument_inTargetName ;
      GGS_string var_headerSearchPaths_26987 = GGS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 545)).add_operation (GGS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (GGS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)).add_operation (GGS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 548)) ;
      cEnumerator_stringset enumerator_27207 (constinArgument_inHandCodedSourceDirectorySet, EnumerationOrder::up) ;
      while (enumerator_27207.hasCurrentObject ()) {
        var_headerSearchPaths_26987.plusAssign_operation(GGS_string (", \"").add_operation (enumerator_27207.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)) ;
        enumerator_27207.gotoNextObject () ;
      }
      var_headerSearchPaths_26987.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 552)) ;
      GGS_stringlist temp_34 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 555)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\""), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 556)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 557)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 558)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_COMMA = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 559)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 560)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_EMPTY_BODY = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 561)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_INFINITE_RECURSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 562)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 563)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 564)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 565)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 566)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 567)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 568)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_UNREACHABLE_CODE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 570)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 571)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_NO_COMMON_BLOCKS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 572)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 573)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 574)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 575)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 576)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 577)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 578)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 579)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 580)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 581)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 582)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 583)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 584)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 585)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 586)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 587)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 588)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 589)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 590)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 591)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 592)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 594)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 595)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 596)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 597)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 598)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 599)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 600)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 601)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 602)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (var_headerSearchPaths_26987, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 603)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = ").add_operation (var_SDK_20151, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)) ;
      temp_34.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      GGS_stringlist var_xcodeSettingList_27386 = temp_34 ;
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = GGS_bool (ComparisonKind::equal, var_SDK_20151.objectCompare (GGS_string ("macosx10.6"))).boolEnum () ;
        if (kBoolTrue == test_35) {
          var_xcodeSettingList_27386.addAssign_operation (GGS_string ("CLANG_ENABLE_OBJC_ARC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 608)) ;
          var_xcodeSettingList_27386.addAssign_operation (GGS_string ("GCC_ENABLE_OBJC_GC = required")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 609)) ;
        }
      }
      if (kBoolFalse == test_35) {
        var_xcodeSettingList_27386.addAssign_operation (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 611)) ;
      }
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = GGS_bool (ComparisonKind::notEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18498.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_36) {
          var_xcodeSettingList_27386.addAssign_operation (GGS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18498, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_26828, var_xcodeSettingList_27386, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 616)) ;
      }
      GGS_stringlist var_m_5F_HandCodedSourceFileRefForAppList_30337 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_m_5F_HandCodedResourceFileRefForAppList_30398 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 620)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_37) {
          GGS_stringlist joker_30693 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_30724 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_30812 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_30844 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_groupRef_30969 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Hand Coded Sources (App)"), GGS_string ("../"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 624)), joker_30693, joker_30724, var_m_5F_HandCodedSourceFileRefForAppList_30337, joker_30812, joker_30844, var_m_5F_HandCodedResourceFileRefForAppList_30398, var_groupRef_30969, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 621)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_groupRef_30969, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 633)) ;
          }
        }
      }
      GGS_stringlist var_appFrameworksFileRefList_31117 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 637)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_38) {
          GGS_stringlist joker_31404 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_31435 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_31468 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_31499 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_31585 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_31646 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Frameworks (App)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 641)), joker_31404, joker_31435, joker_31468, joker_31499, var_appFrameworksFileRefList_31117, joker_31585, var_frameworkGroupRef_31646, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 638)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_frameworkGroupRef_31646, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 650)) ;
          }
        }
      }
      GGS_stringlist var_buildCFileRefListForTool_31795 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_buildCppFileRefListForTool_31846 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_m_5F_FileRefList_31899 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_mm_5F_FileRefList_31939 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_frameworksFileRefList_31980 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_resourceFileBuildRefs_32028 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_39 = kBoolTrue ;
      if (kBoolTrue == test_39) {
        test_39 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 660)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_39) {
          GGS_string var_groupRef_32642 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Hand Coded Sources (Tool)"), GGS_string ("../"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 664)), var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_32642, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 661)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_groupRef_32642, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 673)) ;
          }
        }
      }
      GGS_stringlist var_toolFrameworksFileRefList_32791 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_40 = kBoolTrue ;
      if (kBoolTrue == test_40) {
        test_40 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 677)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_40) {
          GGS_stringlist joker_33081 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33112 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33145 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33176 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33262 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_33322 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Frameworks (Tool)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 681)), joker_33081, joker_33112, joker_33145, joker_33176, var_toolFrameworksFileRefList_32791, joker_33262, var_frameworkGroupRef_33322, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 678)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_frameworkGroupRef_33322, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 690)) ;
          }
        }
      }
      GGS_string var_groupRef_33996 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Generated by GALGAS"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 695)).add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 695)), GGS_stringset::class_func_setWithStringList (constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696)), var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 693)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 705)) ;
      }
      GGS_stringlist var_libpmReferenceGroupList_34093 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      {
      GGS_stringset temp_41 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 720)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagramRelationConfiguration.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 712)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagramRelationConfiguration.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 713)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagramRelation.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 714)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagramRelation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 715)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagramRelationSingleType.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 716)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagramRelationSingleType.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 717)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagram-node.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 718)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagram.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 719)) ;
      temp_41.enterElement (GGS_string ("BinaryDecisionDiagram.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 720)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Binary Decision Diagrams"), GGS_string ("bdd"), temp_41, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 708)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 730)) ;
      {
      GGS_stringset temp_42 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 772)) ;
      temp_42.enterElement (GGS_string ("BigSigned-add.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 736)) ;
      temp_42.enterElement (GGS_string ("BigSigned-bit.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 737)) ;
      temp_42.enterElement (GGS_string ("BigSigned-chunk-operations.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 738)) ;
      temp_42.enterElement (GGS_string ("BigSigned-constructors.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 739)) ;
      temp_42.enterElement (GGS_string ("BigSigned-conversions.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 740)) ;
      temp_42.enterElement (GGS_string ("BigSigned-divide.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 741)) ;
      temp_42.enterElement (GGS_string ("BigSigned-logic-operations.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 742)) ;
      temp_42.enterElement (GGS_string ("BigSigned-multiply.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 743)) ;
      temp_42.enterElement (GGS_string ("BigSigned-print.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 744)) ;
      temp_42.enterElement (GGS_string ("BigSigned-shifts.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 745)) ;
      temp_42.enterElement (GGS_string ("BigSigned-subtract.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 746)) ;
      temp_42.enterElement (GGS_string ("BigSigned-utilities.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 747)) ;
      temp_42.enterElement (GGS_string ("BigSigned.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 748)) ;
      temp_42.enterElement (GGS_string ("BigSigned.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 749)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-add.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 750)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-bit.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 751)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-chunk-operations.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 752)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-constructors.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 753)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-conversions.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 754)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-divide-naive.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 755)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-divide.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 756)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-logic-operations.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 757)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-multiply.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 758)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-print.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 759)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-shifts.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 760)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-subtract.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 761)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned-utilities.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 762)) ;
      temp_42.enterElement (GGS_string ("BigUnsigned.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 763)) ;
      temp_42.enterElement (GGS_string ("ChunkSelectSize.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 764)) ;
      temp_42.enterElement (GGS_string ("ChunkSharedArray.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 765)) ;
      temp_42.enterElement (GGS_string ("ChunkSharedArray.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 766)) ;
      temp_42.enterElement (GGS_string ("UInt128.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 767)) ;
      temp_42.enterElement (GGS_string ("UInt128.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 768)) ;
      temp_42.enterElement (GGS_string ("chunk-U16.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 769)) ;
      temp_42.enterElement (GGS_string ("chunk-U32.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 770)) ;
      temp_42.enterElement (GGS_string ("chunk-U64.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 771)) ;
      temp_42.enterElement (GGS_string ("chunk-U8.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 772)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Big Integers"), GGS_string ("big-integers"), temp_42, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 732)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 782)) ;
      {
      GGS_stringset temp_43 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 792)) ;
      temp_43.enterElement (GGS_string ("main.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 788)) ;
      temp_43.enterElement (GGS_string ("PMCancelButtonForPanel.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 789)) ;
      temp_43.enterElement (GGS_string ("PMCancelButtonForPanel.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 790)) ;
      temp_43.enterElement (GGS_string ("PMOkButtonForPanel.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 791)) ;
      temp_43.enterElement (GGS_string ("PMOkButtonForPanel.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 792)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Cocoa Utilities"), GGS_string ("cocoa_utilities"), temp_43, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 784)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 802)) ;
      {
      GGS_stringset temp_44 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 858)) ;
      temp_44.enterElement (GGS_string ("Base.lproj/OC_GGS_Document.xib"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 808)) ;
      temp_44.enterElement (GGS_string ("Base.lproj/PMDebug.xib"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 809)) ;
      temp_44.enterElement (GGS_string ("Base.lproj/MainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 810)) ;
      temp_44.enterElement (GGS_string ("enterDefaultCommandLineOptions.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 811)) ;
      temp_44.enterElement (GGS_string ("enterDefaultCommandLineOptions.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 812)) ;
      temp_44.enterElement (GGS_string ("F_CocoaWrapperForGalgas.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 813)) ;
      temp_44.enterElement (GGS_string ("I_Stop.tiff"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 814)) ;
      temp_44.enterElement (GGS_string ("NSString+identifierRepresentation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 815)) ;
      temp_44.enterElement (GGS_string ("NSString+identifierRepresentation.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 816)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_ApplicationDelegate.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 817)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_ApplicationDelegate.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 818)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_BuildTask.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 819)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_BuildTask.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 820)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_ColorTransformer.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 821)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_ColorTransformer.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 822)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_CommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 823)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_CommandLineOption.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 824)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_Document.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 825)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_Document.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 826)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_DocumentData.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 827)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_DocumentData.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 828)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_RulerViewForBuildOutput.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 829)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_RulerViewForBuildOutput.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 830)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_RulerViewForTextView.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 831)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_RulerViewForTextView.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 832)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_Scroller.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 833)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_Scroller.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 834)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_TextDisplayDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 835)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_TextDisplayDescriptor.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 836)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_TextSyntaxColoring.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 837)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_TextSyntaxColoring.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 838)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_TextView.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 839)) ;
      temp_44.enterElement (GGS_string ("OC_GGS_TextView.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 840)) ;
      temp_44.enterElement (GGS_string ("OC_Lexique.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 841)) ;
      temp_44.enterElement (GGS_string ("OC_Lexique.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 842)) ;
      temp_44.enterElement (GGS_string ("OC_Token.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 843)) ;
      temp_44.enterElement (GGS_string ("OC_Token.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 844)) ;
      temp_44.enterElement (GGS_string ("PMDebug.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 845)) ;
      temp_44.enterElement (GGS_string ("PMDebug.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 846)) ;
      temp_44.enterElement (GGS_string ("PMFontButton.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 847)) ;
      temp_44.enterElement (GGS_string ("PMFontButton.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 848)) ;
      temp_44.enterElement (GGS_string ("PMIssueDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 849)) ;
      temp_44.enterElement (GGS_string ("PMIssueDescriptor.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 850)) ;
      temp_44.enterElement (GGS_string ("PMIssueInRuler.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 851)) ;
      temp_44.enterElement (GGS_string ("PMIssueInRuler.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 852)) ;
      temp_44.enterElement (GGS_string ("PMSearchResultDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 853)) ;
      temp_44.enterElement (GGS_string ("PMSearchResultDescriptor.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 854)) ;
      temp_44.enterElement (GGS_string ("PMTableViewHandlesContextualMenu.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 855)) ;
      temp_44.enterElement (GGS_string ("PMTableViewHandlesContextualMenu.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 856)) ;
      temp_44.enterElement (GGS_string ("PMUndoManager.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 857)) ;
      temp_44.enterElement (GGS_string ("PMUndoManager.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 858)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Cocoa Objc GALGAS"), GGS_string ("cocoa_objc_galgas"), temp_44, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 804)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 868)) ;
      {
      GGS_stringset temp_45 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 876)) ;
      temp_45.enterElement (GGS_string ("TC_Array.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 874)) ;
      temp_45.enterElement (GGS_string ("TC_UniqueArray.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 875)) ;
      temp_45.enterElement (GGS_string ("TC_UniqueArray2.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 876)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Generic Arraies"), GGS_string ("generic-arraies"), temp_45, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 870)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 886)) ;
      {
      GGS_stringset temp_46 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 907)) ;
      temp_46.enterElement (GGS_string ("F_mainForLIBPM.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 892)) ;
      temp_46.enterElement (GGS_string ("F_mainForLIBPM.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 893)) ;
      temp_46.enterElement (GGS_string ("builtin-command-line-options.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 894)) ;
      temp_46.enterElement (GGS_string ("builtin-command-line-options.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 895)) ;
      temp_46.enterElement (GGS_string ("analyzeCommandLineOptions.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 896)) ;
      temp_46.enterElement (GGS_string ("analyzeCommandLineOptions.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 897)) ;
      temp_46.enterElement (GGS_string ("AbstractCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 898)) ;
      temp_46.enterElement (GGS_string ("AbstractCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 899)) ;
      temp_46.enterElement (GGS_string ("BoolCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 900)) ;
      temp_46.enterElement (GGS_string ("BoolCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 901)) ;
      temp_46.enterElement (GGS_string ("UIntCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 902)) ;
      temp_46.enterElement (GGS_string ("UIntCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 903)) ;
      temp_46.enterElement (GGS_string ("StringCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 904)) ;
      temp_46.enterElement (GGS_string ("StringCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 905)) ;
      temp_46.enterElement (GGS_string ("StringListCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 906)) ;
      temp_46.enterElement (GGS_string ("StringListCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 907)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Command line Interface"), GGS_string ("command_line_interface"), temp_46, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 888)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 917)) ;
      {
      GGS_stringset temp_47 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 932)) ;
      temp_47.enterElement (GGS_string ("FileManager.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 923)) ;
      temp_47.enterElement (GGS_string ("FileManager.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 924)) ;
      temp_47.enterElement (GGS_string ("AbstractFileHandle.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 925)) ;
      temp_47.enterElement (GGS_string ("AbstractFileHandle.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 926)) ;
      temp_47.enterElement (GGS_string ("BinaryFileWrite.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 927)) ;
      temp_47.enterElement (GGS_string ("BinaryFileWrite.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 928)) ;
      temp_47.enterElement (GGS_string ("TextFileWrite.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 929)) ;
      temp_47.enterElement (GGS_string ("TextFileWrite.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 930)) ;
      temp_47.enterElement (GGS_string ("HTMLFileWrite.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 931)) ;
      temp_47.enterElement (GGS_string ("HTMLFileWrite.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 932)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("File"), GGS_string ("files"), temp_47, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 919)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 942)) ;
      {
      GGS_stringset temp_48 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1046)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_reference_class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 948)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_reference_class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 949)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_value_class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 950)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_value_class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 951)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_enumAssociatedValues.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 952)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_enumAssociatedValues.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 953)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_graph.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 954)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_graph.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 955)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_list.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 956)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_list.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 957)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_map.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 958)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_map.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 959)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_root.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 960)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_root.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 961)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_sortedlist.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 962)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_sortedlist.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 963)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_weak_reference.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 964)) ;
      temp_48.enterElement (GGS_string ("AC_GALGAS_weak_reference.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 965)) ;
      temp_48.enterElement (GGS_string ("acPtr_class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 966)) ;
      temp_48.enterElement (GGS_string ("acPtr_class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 967)) ;
      temp_48.enterElement (GGS_string ("acStrongPtr_class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 968)) ;
      temp_48.enterElement (GGS_string ("acStrongPtr_class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 969)) ;
      temp_48.enterElement (GGS_string ("cPtr_weakReference_proxy.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 970)) ;
      temp_48.enterElement (GGS_string ("cPtr_weakReference_proxy.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 971)) ;
      temp_48.enterElement (GGS_string ("Compiler.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 972)) ;
      temp_48.enterElement (GGS_string ("Compiler.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 973)) ;
      temp_48.enterElement (GGS_string ("C_galgas_class_inspector.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 974)) ;
      temp_48.enterElement (GGS_string ("C_galgas_class_inspector.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 975)) ;
      temp_48.enterElement (GGS_string ("C_galgas_CLI_Options.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 976)) ;
      temp_48.enterElement (GGS_string ("C_galgas_CLI_Options.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 977)) ;
      GGS_string temp_49 ;
      const enumGalgasBool test_50 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_50) {
        temp_49 = GGS_string ("C_galgas_verbose_option.cpp") ;
      }else if (kBoolFalse == test_50) {
        temp_49 = GGS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_48.enterElement (temp_49, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 978)) ;
      GGS_string temp_51 ;
      const enumGalgasBool test_52 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_52) {
        temp_51 = GGS_string ("C_galgas_verbose_option.h") ;
      }else if (kBoolFalse == test_52) {
        temp_51 = GGS_string ("C_galgas_quiet_option.h") ;
      }
      temp_48.enterElement (temp_51, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 979)) ;
      temp_48.enterElement (GGS_string ("F_verbose_output.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 980)) ;
      temp_48.enterElement (GGS_string ("C_galgas_function_descriptor.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 981)) ;
      temp_48.enterElement (GGS_string ("C_galgas_function_descriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 982)) ;
      temp_48.enterElement (GGS_string ("galgas-input-output.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 983)) ;
      temp_48.enterElement (GGS_string ("galgas-input-output.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 984)) ;
      temp_48.enterElement (GGS_string ("C_galgas_type_descriptor.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 985)) ;
      temp_48.enterElement (GGS_string ("C_galgas_type_descriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 986)) ;
      temp_48.enterElement (GGS_string ("IssueWithFixIt.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 987)) ;
      temp_48.enterElement (GGS_string ("IssueWithFixIt.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 988)) ;
      temp_48.enterElement (GGS_string ("Lexique-parsing.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 989)) ;
      temp_48.enterElement (GGS_string ("Lexique.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 990)) ;
      temp_48.enterElement (GGS_string ("Lexique.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 991)) ;
      temp_48.enterElement (GGS_string ("LocationInSource.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 992)) ;
      temp_48.enterElement (GGS_string ("LocationInSource.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 993)) ;
      temp_48.enterElement (GGS_string ("SourceTextInString.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 994)) ;
      temp_48.enterElement (GGS_string ("SourceTextInString.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 995)) ;
      temp_48.enterElement (GGS_string ("capCollectionElement.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 996)) ;
      temp_48.enterElement (GGS_string ("capCollectionElement.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 997)) ;
      temp_48.enterElement (GGS_string ("capCollectionElementArray.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 998)) ;
      temp_48.enterElement (GGS_string ("capCollectionElementArray.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 999)) ;
      temp_48.enterElement (GGS_string ("capSortedListElement.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1000)) ;
      temp_48.enterElement (GGS_string ("capSortedListElement.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1001)) ;
      temp_48.enterElement (GGS_string ("cCollectionElement.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1002)) ;
      temp_48.enterElement (GGS_string ("cCollectionElement.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1003)) ;
      temp_48.enterElement (GGS_string ("cEnumerator_range.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1004)) ;
      temp_48.enterElement (GGS_string ("cEnumerator_range.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1005)) ;
      temp_48.enterElement (GGS_string ("cGenericAbstractEnumerator.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1006)) ;
      temp_48.enterElement (GGS_string ("cGenericAbstractEnumerator.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1007)) ;
      temp_48.enterElement (GGS_string ("cIndexingDictionary.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1008)) ;
      temp_48.enterElement (GGS_string ("cIndexingDictionary.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1009)) ;
      temp_48.enterElement (GGS_string ("cIssueDescriptor.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1010)) ;
      temp_48.enterElement (GGS_string ("cIssueDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1011)) ;
      temp_48.enterElement (GGS_string ("cLexiqueIntrospection.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1012)) ;
      temp_48.enterElement (GGS_string ("cLexiqueIntrospection.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1013)) ;
      temp_48.enterElement (GGS_string ("cObjectArray.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1014)) ;
      temp_48.enterElement (GGS_string ("cObjectArray.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1015)) ;
      temp_48.enterElement (GGS_string ("cProductionNameDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      temp_48.enterElement (GGS_string ("cPtr_object.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1017)) ;
      temp_48.enterElement (GGS_string ("cPtr_object.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1018)) ;
      temp_48.enterElement (GGS_string ("cSortedListElement.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1019)) ;
      temp_48.enterElement (GGS_string ("cSortedListElement.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1020)) ;
      temp_48.enterElement (GGS_string ("TemplateDelimiter.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1021)) ;
      temp_48.enterElement (GGS_string ("GALGAS_application.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1022)) ;
      temp_48.enterElement (GGS_string ("GALGAS_binaryset.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1023)) ;
      temp_48.enterElement (GGS_string ("GALGAS_bigint.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1024)) ;
      temp_48.enterElement (GGS_string ("GALGAS_bool.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1025)) ;
      temp_48.enterElement (GGS_string ("GALGAS_char.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1026)) ;
      temp_48.enterElement (GGS_string ("GALGAS_data.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1027)) ;
      temp_48.enterElement (GGS_string ("GALGAS_double.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1028)) ;
      temp_48.enterElement (GGS_string ("GALGAS_filewrapper.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1029)) ;
      temp_48.enterElement (GGS_string ("GALGAS_function.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1030)) ;
      temp_48.enterElement (GGS_string ("GALGAS_location.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1031)) ;
      temp_48.enterElement (GGS_string ("GALGAS_object.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1032)) ;
      temp_48.enterElement (GGS_string ("GALGAS_sint_36__34_.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1033)) ;
      temp_48.enterElement (GGS_string ("GALGAS_sint.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1034)) ;
      temp_48.enterElement (GGS_string ("GALGAS_string.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1035)) ;
      temp_48.enterElement (GGS_string ("GALGAS_string-getters.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1036)) ;
      temp_48.enterElement (GGS_string ("GALGAS_stringset.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1037)) ;
      temp_48.enterElement (GGS_string ("GALGAS_timer.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1038)) ;
      temp_48.enterElement (GGS_string ("GALGAS_type.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1039)) ;
      temp_48.enterElement (GGS_string ("GALGAS_uint_36__34_.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1040)) ;
      temp_48.enterElement (GGS_string ("GALGAS_uint.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1041)) ;
      temp_48.enterElement (GGS_string ("scanner_actions.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1042)) ;
      temp_48.enterElement (GGS_string ("scanner_actions.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1043)) ;
      temp_48.enterElement (GGS_string ("ComparisonResult.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1044)) ;
      temp_48.enterElement (GGS_string ("ComparisonKind.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1045)) ;
      temp_48.enterElement (GGS_string ("EnumerationOrder.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1046)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Galgas"), GGS_string ("galgas"), temp_48, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 944)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1056)) ;
      {
      GGS_stringset temp_53 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1067)) ;
      temp_53.enterElement (GGS_string ("AbstractOutputStream.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1062)) ;
      temp_53.enterElement (GGS_string ("AbstractOutputStream.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1063)) ;
      temp_53.enterElement (GGS_string ("ConsoleOut.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1064)) ;
      temp_53.enterElement (GGS_string ("ConsoleOut.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1065)) ;
      temp_53.enterElement (GGS_string ("ColoredConsole.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1066)) ;
      temp_53.enterElement (GGS_string ("ColoredConsole.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1067)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Streams"), GGS_string ("streams"), temp_53, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1058)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1077)) ;
      {
      GGS_stringset temp_54 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      temp_54.enterElement (GGS_string ("String-class-getters.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1083)) ;
      temp_54.enterElement (GGS_string ("String-class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1084)) ;
      temp_54.enterElement (GGS_string ("String-class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1085)) ;
      temp_54.enterElement (GGS_string ("cUnicodeData.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1086)) ;
      temp_54.enterElement (GGS_string ("string_encodings.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1087)) ;
      temp_54.enterElement (GGS_string ("unicode_character_base.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1088)) ;
      temp_54.enterElement (GGS_string ("unicode_character_cpp.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1089)) ;
      temp_54.enterElement (GGS_string ("unicode_character_cpp.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1090)) ;
      temp_54.enterElement (GGS_string ("unicode_character_implementation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1091)) ;
      temp_54.enterElement (GGS_string ("unicode_character_m.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1092)) ;
      temp_54.enterElement (GGS_string ("unicode_character_m.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1093)) ;
      temp_54.enterElement (GGS_string ("print.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1094)) ;
      temp_54.enterElement (GGS_string ("print.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Strings"), GGS_string ("strings"), temp_54, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1079)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1105)) ;
      {
      GGS_stringset temp_55 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1114)) ;
      temp_55.enterElement (GGS_string ("DateTime.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1111)) ;
      temp_55.enterElement (GGS_string ("DateTime.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1112)) ;
      temp_55.enterElement (GGS_string ("Timer.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1113)) ;
      temp_55.enterElement (GGS_string ("Timer.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1114)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Time"), GGS_string ("time"), temp_55, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1107)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1124)) ;
      {
      GGS_stringset temp_56 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1161)) ;
      temp_56.enterElement (GGS_string ("basic-allocation.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1130)) ;
      temp_56.enterElement (GGS_string ("basic-allocation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1131)) ;
      temp_56.enterElement (GGS_string ("U8Data.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1132)) ;
      temp_56.enterElement (GGS_string ("U8Data.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1133)) ;
      temp_56.enterElement (GGS_string ("DirectedGraph.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1134)) ;
      temp_56.enterElement (GGS_string ("DirectedGraph.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1135)) ;
      temp_56.enterElement (GGS_string ("PrologueEpilogue.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1136)) ;
      temp_56.enterElement (GGS_string ("PrologueEpilogue.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1137)) ;
      temp_56.enterElement (GGS_string ("SharedObject.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1138)) ;
      temp_56.enterElement (GGS_string ("SharedObject.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1139)) ;
      temp_56.enterElement (GGS_string ("UInt32Set.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1140)) ;
      temp_56.enterElement (GGS_string ("UInt32Set.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1141)) ;
      temp_56.enterElement (GGS_string ("cpp-allocation.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1142)) ;
      temp_56.enterElement (GGS_string ("cpp-allocation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1143)) ;
      temp_56.enterElement (GGS_string ("F_DisplayException.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1144)) ;
      temp_56.enterElement (GGS_string ("F_DisplayException.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1145)) ;
      temp_56.enterElement (GGS_string ("F_GetPrime.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1146)) ;
      temp_56.enterElement (GGS_string ("F_GetPrime.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1147)) ;
      temp_56.enterElement (GGS_string ("M_machine.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1148)) ;
      temp_56.enterElement (GGS_string ("M_SourceLocation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1149)) ;
      temp_56.enterElement (GGS_string ("md5.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1150)) ;
      temp_56.enterElement (GGS_string ("md5.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1151)) ;
      temp_56.enterElement (GGS_string ("SHA256.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1152)) ;
      temp_56.enterElement (GGS_string ("SHA256.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1153)) ;
      temp_56.enterElement (GGS_string ("macroAssert.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1154)) ;
      temp_56.enterElement (GGS_string ("macroAssert.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1155)) ;
      temp_56.enterElement (GGS_string ("MF_MemoryControl.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1156)) ;
      temp_56.enterElement (GGS_string ("MF_MemoryControl.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1157)) ;
      temp_56.enterElement (GGS_string ("switch-fallthrough.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1158)) ;
      temp_56.enterElement (GGS_string ("TF_Swap.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1159)) ;
      temp_56.enterElement (GGS_string ("galgas-random.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1160)) ;
      temp_56.enterElement (GGS_string ("galgas-random.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1161)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Utilities"), GGS_string ("utilities"), temp_56, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_groupRef_33996, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1126)) ;
      }
      var_libpmReferenceGroupList_34093.addAssign_operation (var_groupRef_33996  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1171)) ;
      GGS_string var_libpmGroupRef_49467 ;
      {
      extensionSetter_addGroup (var_xcodeProject_26828, GGS_string ("libpm"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)), var_libpmReferenceGroupList_34093, var_libpmGroupRef_49467, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_libpmGroupRef_49467, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1174)) ;
      }
      GGS_string var_resourcesGroupRef_49980 ;
      {
      GGS_stringset temp_57 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1179)) ;
      temp_57.enterElement (GGS_string ("Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1179)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Resources"), GGS_string ("."), temp_57, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_resourcesGroupRef_49980, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1176)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_resourcesGroupRef_49980, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1188)) ;
      }
      GGS_string var_userResourcesGroupRef_50558 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("User Resources"), GGS_string ("userResources"), GGS_stringset::class_func_setWithStringList (var_resourceFiles_26462  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1193)), var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_userResourcesGroupRef_50558, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1190)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_userResourcesGroupRef_50558, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1202)) ;
      }
      GGS_string var_frameworkGroupRef_51184 ;
      {
      GGS_stringset temp_58 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1209)) ;
      temp_58.enterElement (GGS_string ("AppKit.framework"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1208)) ;
      temp_58.enterElement (GGS_string ("Cocoa.framework"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1209)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26828, GGS_string ("Frameworks for App"), GGS_string ("/System/Library/Frameworks"), temp_58, var_buildCFileRefListForTool_31795, var_buildCppFileRefListForTool_31846, var_m_5F_FileRefList_31899, var_mm_5F_FileRefList_31939, var_frameworksFileRefList_31980, var_resourceFileBuildRefs_32028, var_frameworkGroupRef_51184, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1204)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26828, var_frameworkGroupRef_51184, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1219)) ;
      }
      GGS_stringlist var_codeSigningSettingList_51329 ;
      enumGalgasBool test_59 = kBoolTrue ;
      if (kBoolTrue == test_59) {
        test_59 = GGS_bool (ComparisonKind::equal, var_macCodeSign_18115.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_59) {
          GGS_stringlist temp_60 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1223)) ;
          temp_60.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"-\""), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1223)) ;
          var_codeSigningSettingList_51329 = temp_60 ;
        }
      }
      if (kBoolFalse == test_59) {
        GGS_stringlist var_components_51474 = var_macCodeSign_18115.readProperty_string ().getter_componentsSeparatedByString (GGS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1225)) ;
        enumGalgasBool test_61 = kBoolTrue ;
        if (kBoolTrue == test_61) {
          test_61 = GGS_bool (ComparisonKind::notEqual, var_components_51474.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1226)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
          if (kBoolTrue == test_61) {
            TC_Array <FixItDescription> fixItArray62 ;
            inCompiler->emitSemanticError (var_macCodeSign_18115.readProperty_location (), GGS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray62  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1227)) ;
            var_codeSigningSettingList_51329.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_61) {
          enumGalgasBool test_63 = kBoolTrue ;
          if (kBoolTrue == test_63) {
            test_63 = GGS_bool (ComparisonKind::equal, var_components_51474.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1228)).objectCompare (GGS_string ("MacDeveloper"))).boolEnum () ;
            if (kBoolTrue == test_63) {
              GGS_stringlist temp_64 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)) ;
              temp_64.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\""), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1230)) ;
              temp_64.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_51474.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)) ;
              var_codeSigningSettingList_51329 = temp_64 ;
            }
          }
          if (kBoolFalse == test_63) {
            enumGalgasBool test_65 = kBoolTrue ;
            if (kBoolTrue == test_65) {
              test_65 = GGS_bool (ComparisonKind::equal, var_components_51474.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1233)).objectCompare (GGS_string ("Certificate"))).boolEnum () ;
              if (kBoolTrue == test_65) {
                GGS_stringlist temp_66 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)) ;
                temp_66.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_51474.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)) ;
                var_codeSigningSettingList_51329 = temp_66 ;
              }
            }
            if (kBoolFalse == test_65) {
              TC_Array <FixItDescription> fixItArray67 ;
              inCompiler->emitSemanticError (var_macCodeSign_18115.readProperty_location (), GGS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray67  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1236)) ;
              var_codeSigningSettingList_51329.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GGS_stringlist temp_68 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)) ;
      temp_68.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 2"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1241)) ;
      temp_68.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1242)) ;
      temp_68.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1243)) ;
      temp_68.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_24994, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)).add_operation (GGS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)) ;
      GGS_stringlist var_settingList_52353 = temp_68.add_operation (var_codeSigningSettingList_51329, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1245)) ;
      enumGalgasBool test_69 = kBoolTrue ;
      if (kBoolTrue == test_69) {
        test_69 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1246)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_69) {
          GGS_string var_s_52716 = GGS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_52749 (constinArgument_inHandCodedLinkToolFileList, EnumerationOrder::up) ;
          while (enumerator_52749.hasCurrentObject ()) {
            var_s_52716.plusAssign_operation(GGS_string ("\"").add_operation (enumerator_52749.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)) ;
            if (enumerator_52749.hasNextObject ()) {
              var_s_52716.plusAssign_operation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1250)) ;
            }
            enumerator_52749.gotoNextObject () ;
          }
          var_s_52716.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1252)) ;
          var_settingList_52353.addAssign_operation (var_s_52716  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1253)) ;
        }
      }
      GGS_string var_releaseTargetRef_53226 ;
      GGS_string var_releaseProductFileRef_53269 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_26828, constinArgument_inTargetName.add_operation (GGS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1256)), constinArgument_inTargetName, var_buildCFileRefListForTool_31795.add_operation (var_buildCppFileRefListForTool_31846, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1258)).add_operation (var_mm_5F_FileRefList_31939, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1258)), var_toolFrameworksFileRefList_32791, var_settingList_52353, var_releaseTargetRef_53226, var_releaseProductFileRef_53269, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1255)) ;
      }
      GGS_stringlist temp_70 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)) ;
      temp_70.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1266)) ;
      temp_70.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1267)) ;
      temp_70.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1268)) ;
      temp_70.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1269)) ;
      temp_70.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_24994, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)).add_operation (GGS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)) ;
      var_settingList_52353 = temp_70.add_operation (var_codeSigningSettingList_51329, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1271)) ;
      enumGalgasBool test_71 = kBoolTrue ;
      if (kBoolTrue == test_71) {
        test_71 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1272)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_71) {
          GGS_string var_s_53725 = GGS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_53758 (constinArgument_inHandCodedLinkToolFileList, EnumerationOrder::up) ;
          while (enumerator_53758.hasCurrentObject ()) {
            var_s_53725.plusAssign_operation(GGS_string ("\"").add_operation (enumerator_53758.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)) ;
            if (enumerator_53758.hasNextObject ()) {
              var_s_53725.plusAssign_operation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1276)) ;
            }
            enumerator_53758.gotoNextObject () ;
          }
          var_s_53725.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1278)) ;
          var_settingList_52353.addAssign_operation (var_s_53725  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1279)) ;
        }
      }
      GGS_string var_debugTargetRef_54250 ;
      GGS_string var_debugProductFileRef_54291 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_26828, constinArgument_inTargetName.add_operation (GGS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1282)), constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1283)), var_buildCFileRefListForTool_31795.add_operation (var_buildCppFileRefListForTool_31846, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1284)).add_operation (var_mm_5F_FileRefList_31939, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1284)), var_toolFrameworksFileRefList_32791, var_settingList_52353, var_debugTargetRef_54250, var_debugProductFileRef_54291, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1281)) ;
      }
      GGS_stringlist temp_72 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)) ;
      temp_72.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1292)) ;
      temp_72.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)) ;
      GGS_stringlist var_cocoaConfigurationSettingList_54362 = temp_72.add_operation (var_codeSigningSettingList_51329, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1294)) ;
      {
      GGS_stringlist temp_73 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1302)) ;
      temp_73.enterElement (GGS_stringlist_2E_element::init_21_ (var_releaseTargetRef_53226, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1302)) ;
      temp_73.enterElement (GGS_stringlist_2E_element::init_21_ (var_debugTargetRef_54250, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1302)) ;
      GGS__32_stringlist temp_74 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)) ;
      temp_74.enterElement (GGS__32_stringlist_2E_element::init_21__21_ (var_releaseProductFileRef_53269, constinArgument_inTargetName, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)) ;
      temp_74.enterElement (GGS__32_stringlist_2E_element::init_21__21_ (var_debugProductFileRef_54291, constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)) ;
      GGS_string joker_55155 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_26828, GGS_string ("Cocoa ").add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1296)), GGS_string ("Cocoa").add_operation (constinArgument_inTargetName.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas", 1297)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1297)), var_m_5F_FileRefList_31899.add_operation (var_m_5F_HandCodedSourceFileRefForAppList_30337, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1298)), var_frameworksFileRefList_31980.add_operation (var_appFrameworksFileRefList_31117, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1299)), var_resourceFileBuildRefs_32028.add_operation (var_m_5F_HandCodedResourceFileRefForAppList_30398, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1300)), var_cocoaConfigurationSettingList_54362, temp_73, temp_74, joker_55155, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1295)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_26828, var_dir_24893.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1308)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1308)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1308)), var_newIntermediateFilePath_26574, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1307)) ;
    }
  }
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "galgas",
  "ggs",
  "galgasTemplate",
  "galgasProject",
  "ggsproject",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS 3 source file",
  "a GALGAS 4 source file",
  "a GALGAS Template source file",
  "a GALGAS project source file",
  "a GALGAS project source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "3.8.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GGS_string var_creationProjectName_1414 = GGS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.readProperty_value ()) ;
    {
    routine_projectCreation_3F_ (var_creationProjectName_1414, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 27)) ;
    }
  }
  {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 34)) ;
        }
      }
    }
  }
  {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, GGS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_updateLIBPMatPath_3F_ (GGS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 42)) ;
        }
      }
    }
  }
  {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_checkBigInteger (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 52)) ;
        }
      }
    }
  }
  {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_displayUnicodeLexicalTestFunctions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 62)) ;
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
  GGS_string var_parentDirectory_3012 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 77)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 77)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("galgasProject"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  GGS_stringlist var_candidateProjectFiles_3128 = var_parentDirectory_3012.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_3128.getter_count (SOURCE_FILE ("galgasProgram.galgas", 79)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 80)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3128.getter_count (SOURCE_FILE ("galgasProgram.galgas", 81)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string var_s_3405 = GGS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_3475 (var_candidateProjectFiles_3128, EnumerationOrder::up) ;
        while (enumerator_3475.hasCurrentObject ()) {
          var_s_3405.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_3475.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 84)) ;
          enumerator_3475.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3405, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 86)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GGS_string var_projectFilePath_3590 = var_parentDirectory_3012.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)).add_operation (var_candidateProjectFiles_3128.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_3590, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), GGS_bool (false), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 89)) ;
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
  GGS_string var_parentDirectory_4182 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 103)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 103)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("ggsProject"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  GGS_stringlist var_candidateProjectFiles_4298 = var_parentDirectory_4182.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_4298.getter_count (SOURCE_FILE ("galgasProgram.galgas", 105)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 106)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_4298.getter_count (SOURCE_FILE ("galgasProgram.galgas", 107)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string var_s_4572 = GGS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_4642 (var_candidateProjectFiles_4298, EnumerationOrder::up) ;
        while (enumerator_4642.hasCurrentObject ()) {
          var_s_4572.plusAssign_operation(GGS_string ("\n  - ").add_operation (enumerator_4642.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 110)) ;
          enumerator_4642.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_4572, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 112)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GGS_string var_projectFilePath_4757 = var_parentDirectory_4182.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)).add_operation (var_candidateProjectFiles_4298.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_4757, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), GGS_bool (true), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 115)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST joker_5340 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5340  COMMA_SOURCE_FILE ("galgasProgram.galgas", 129)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_3'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__33_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (constinArgument_inProjectSourceFile, GGS_bool (false), GGS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 142)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_4'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__34_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (constinArgument_inProjectSourceFile, GGS_bool (true), GGS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 151)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <String> sourceFilesArray ;
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
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "galgas") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_Grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_Grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "ggs") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
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
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
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
        }else if (fileExtension == "galgasProject") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__33_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_ProjectGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "ggsproject") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__34_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_ProjectGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
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
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
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

