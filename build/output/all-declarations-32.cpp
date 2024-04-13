#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-32.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GALGAS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapper var_fw_1534 = GALGAS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  cEnumerator_stringlist enumerator_1601 (var_fw_1534.getter_allDirectoryPathes (SOURCE_FILE ("libpmHandling.galgas", 33)), EnumerationOrder::up) ;
  while (enumerator_1601.hasCurrentObject ()) {
    GALGAS_string var_actualDirectory_1653 = constinArgument_inLIBPMPath.add_operation (enumerator_1601.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 34)) ;
    var_actualDirectory_1653.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 35)) ;
    enumerator_1601.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 38)) ;
  GALGAS_stringset var_allNeededFileSet_1772 = temp_0 ;
  cEnumerator_stringlist enumerator_1802 (var_fw_1534.getter_allTextFilePathes (SOURCE_FILE ("libpmHandling.galgas", 39)), EnumerationOrder::up) ;
  while (enumerator_1802.hasCurrentObject ()) {
    GALGAS_string var_contents_1845 = var_fw_1534.getter_textFileContentsAtPath (enumerator_1802.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 40)) ;
    GALGAS_string var_actualFilePath_1898 = constinArgument_inLIBPMPath.add_operation (enumerator_1802.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 41)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, var_actualFilePath_1898.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas", 42)).objectCompare (GALGAS_string ("py"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_bool joker_2060 ; // Joker input parameter
        var_contents_1845.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1898, joker_2060, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 43)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_bool joker_2138 ; // Joker input parameter
      var_contents_1845.method_writeToFileWhenDifferentContents (var_actualFilePath_1898, joker_2138, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 45)) ;
    }
    var_allNeededFileSet_1772.addAssign_operation (enumerator_1802.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 47)) ;
    enumerator_1802.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_2218 (var_fw_1534.getter_allBinaryFilePathes (SOURCE_FILE ("libpmHandling.galgas", 50)), EnumerationOrder::up) ;
  while (enumerator_2218.hasCurrentObject ()) {
    GALGAS_data var_contents_2265 = var_fw_1534.getter_binaryFileContentsAtPath (enumerator_2218.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 51)) ;
    GALGAS_string var_actualFilePath_2322 = constinArgument_inLIBPMPath.add_operation (enumerator_2218.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)) ;
    GALGAS_bool joker_2423 ; // Joker input parameter
    var_contents_2265.method_writeToFileWhenDifferentContents (var_actualFilePath_2322, joker_2423, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 53)) ;
    var_allNeededFileSet_1772.addAssign_operation (enumerator_2218.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 54)) ;
    enumerator_2218.gotoNextObject () ;
  }
  GALGAS_stringset temp_2 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 57)) ;
  GALGAS_stringset var_allActualFileSet_2508 = temp_2 ;
  cEnumerator_stringlist enumerator_2538 (constinArgument_inLIBPMPath.getter_regularFiles (GALGAS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas", 58)), EnumerationOrder::up) ;
  while (enumerator_2538.hasCurrentObject ()) {
    var_allActualFileSet_2508.addAssign_operation (GALGAS_string ("/").add_operation (enumerator_2538.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 59))  COMMA_SOURCE_FILE ("libpmHandling.galgas", 59)) ;
    enumerator_2538.gotoNextObject () ;
  }
  GALGAS_stringset var_uselessFileSet_2635 = var_allActualFileSet_2508.substract_operation (var_allNeededFileSet_1772, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 61)) ;
  cEnumerator_stringset enumerator_2695 (var_uselessFileSet_2635, EnumerationOrder::up) ;
  while (enumerator_2695.hasCurrentObject ()) {
    {
    GALGAS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2695.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 63)) ;
    }
    enumerator_2695.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas&&?galgas4???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas_26__26__3F_galgas_34__3F__3F__3F__21__21__21_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GALGAS_bool constinArgument_inGalgas_34_,
                                                                                              const GALGAS_string constinArgument_inProductDirectory,
                                                                                              const GALGAS_location constinArgument_inEndOfProjectSourceFile,
                                                                                              const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                                                                              GALGAS_semanticContext & outArgument_outSemanticContext,
                                                                                              GALGAS_unifiedTypeMap & outArgument_outTypeMap,
                                                                                              GALGAS_semanticDeclarationListForGeneration & outArgument_outSemanticDeclarationSortedListForGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSemanticDeclarationSortedListForGeneration.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 32)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println_3F_ (GALGAS_string ("*** Building semantic context"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 33)) ;
      }
    }
  }
  GALGAS_semanticDeclarationListAST var_semanticDeclarationListWithPredefinedTypes_2159 = constinArgument_inSemanticDeclarationList ;
  {
  routine_appendPredefinedTypesASTs_26__26_ (var_semanticDeclarationListWithPredefinedTypes_2159, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37)) ;
  }
  GALGAS_commandLineOptionListAST temp_1 = GALGAS_commandLineOptionListAST::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 39)) ;
  GALGAS_commandLineOptionListAST var_options_2402 = temp_1 ;
  cEnumerator__32_stringlist enumerator_2443 (GALGAS_application::class_func_boolOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 40)), EnumerationOrder::up) ;
  while (enumerator_2443.hasCurrentObject ()) {
    var_options_2402.addAssign_operation (GALGAS_string ("bool").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 42)), GALGAS_lstring::init_21__21_ (enumerator_2443.current (HERE).readProperty_mValue_31_ (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 43)), inCompiler COMMA_HERE), GALGAS_lchar::init_21__21_ (GALGAS_application::class_func_boolOptionInvocationCharacter (enumerator_2443.current (HERE).readProperty_mValue_30_ (), enumerator_2443.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), inCompiler COMMA_HERE), GALGAS_application::class_func_boolOptionInvocationString (enumerator_2443.current (HERE).readProperty_mValue_30_ (), enumerator_2443.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)), GALGAS_application::class_func_boolOptionCommentString (enumerator_2443.current (HERE).readProperty_mValue_30_ (), enumerator_2443.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)), GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 41)) ;
    enumerator_2443.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2886 (GALGAS_application::class_func_uintOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 50)), EnumerationOrder::up) ;
  while (enumerator_2886.hasCurrentObject ()) {
    var_options_2402.addAssign_operation (GALGAS_string ("uint").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 52)), GALGAS_lstring::init_21__21_ (enumerator_2886.current (HERE).readProperty_mValue_31_ (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 53)), inCompiler COMMA_HERE), GALGAS_lchar::init_21__21_ (GALGAS_application::class_func_uintOptionInvocationCharacter (enumerator_2886.current (HERE).readProperty_mValue_30_ (), enumerator_2886.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), inCompiler COMMA_HERE), GALGAS_application::class_func_uintOptionInvocationString (enumerator_2886.current (HERE).readProperty_mValue_30_ (), enumerator_2886.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)), GALGAS_application::class_func_uintOptionCommentString (enumerator_2886.current (HERE).readProperty_mValue_30_ (), enumerator_2886.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)), GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 51)) ;
    enumerator_2886.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_3330 (GALGAS_application::class_func_stringOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 60)), EnumerationOrder::up) ;
  while (enumerator_3330.hasCurrentObject ()) {
    var_options_2402.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 62)), GALGAS_lstring::init_21__21_ (enumerator_3330.current (HERE).readProperty_mValue_31_ (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 63)), inCompiler COMMA_HERE), GALGAS_lchar::init_21__21_ (GALGAS_application::class_func_stringOptionInvocationCharacter (enumerator_3330.current (HERE).readProperty_mValue_30_ (), enumerator_3330.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), inCompiler COMMA_HERE), GALGAS_application::class_func_stringOptionInvocationString (enumerator_3330.current (HERE).readProperty_mValue_30_ (), enumerator_3330.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)), GALGAS_application::class_func_stringOptionCommentString (enumerator_3330.current (HERE).readProperty_mValue_30_ (), enumerator_3330.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 67)), GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 68))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 61)) ;
    enumerator_3330.gotoNextObject () ;
  }
  var_semanticDeclarationListWithPredefinedTypes_2159.addAssign_operation (GALGAS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (true), GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 72)), var_options_2402, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 70)) ;
  GALGAS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3942 = function_optionNameForUsefulEntitiesGraph (GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3942  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 76)) ;
  GALGAS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_4361 ;
  {
  routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (var_semanticDeclarationListWithPredefinedTypes_2159, constinArgument_inEndOfProjectSourceFile, constinArgument_inGalgas_34_, outArgument_outSemanticContext, outArgument_outTypeMap, var_sortedSemanticDeclarationListAST_4361, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 78)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_println_3F_ (GALGAS_string ("*** Semantic analysis"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 88)) ;
      }
    }
  }
  cEnumerator_lstringlist enumerator_4571 (extensionGetter_unsolvedEntryList (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 91)), EnumerationOrder::up) ;
  while (enumerator_4571.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (enumerator_4571.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_4571.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)).add_operation (GALGAS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)), fixItArray3  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)) ;
    enumerator_4571.gotoNextObject () ;
  }
  GALGAS_semanticDeclarationListForGeneration temp_4 = GALGAS_semanticDeclarationListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 95)) ;
  outArgument_outSemanticDeclarationSortedListForGeneration = temp_4 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 96)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_predefinedTypes var_predefinedTypes_4792 = function_buildPredefinedTypes (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 97)) ;
      cEnumerator_semanticDeclarationListAST enumerator_4867 (var_sortedSemanticDeclarationListAST_4361, EnumerationOrder::up) ;
      while (enumerator_4867.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((cPtr_semanticDeclarationAST *) enumerator_4867.current (HERE).readProperty_mSemanticDeclaration ().ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, outArgument_outTypeMap, var_predefinedTypes_4792, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 99)) ;
        enumerator_4867.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgasSemanticContext???galgas4!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                                                           const GALGAS_location constinArgument_inEndOfProjectSourceFile,
                                                                           const GALGAS_bool constinArgument_inGalgas_34_,
                                                                           GALGAS_semanticContext & outArgument_outSemanticContext,
                                                                           GALGAS_unifiedTypeMap & outArgument_outTypeMap,
                                                                           GALGAS_semanticDeclarationListAST & outArgument_outSortedSemanticDeclarationListAST,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList_6067 = constinArgument_inSemanticDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_6140 (constinArgument_inSemanticDeclarationList, EnumerationOrder::up) ;
  while (enumerator_6140.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((cPtr_semanticDeclarationAST *) enumerator_6140.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticDeclarationList_6067, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 127)) ;
    enumerator_6140.gotoNextObject () ;
  }
  GALGAS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_6452 = GALGAS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  GALGAS_extensionInitializerForBuildingContext temp_0 = GALGAS_extensionInitializerForBuildingContext::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 134)) ;
  GALGAS_extensionInitializerForBuildingContext var_extensionInitializerForBuildingContext_6560 = temp_0 ;
  GALGAS_extensionMethodMapForBuildingContext temp_1 = GALGAS_extensionMethodMapForBuildingContext::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 135)) ;
  GALGAS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6649 = temp_1 ;
  GALGAS_extensionGetterMapForBuildingContext temp_2 = GALGAS_extensionGetterMapForBuildingContext::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 136)) ;
  GALGAS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6736 = temp_2 ;
  GALGAS_extensionSetterMapForBuildingContext temp_3 = GALGAS_extensionSetterMapForBuildingContext::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 137)) ;
  GALGAS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6823 = temp_3 ;
  GALGAS_semanticDeclarationListAST temp_4 = GALGAS_semanticDeclarationListAST::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 138)) ;
  GALGAS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6900 = temp_4 ;
  cEnumerator_semanticDeclarationListAST enumerator_6959 (var_semanticDeclarationList_6067, EnumerationOrder::up) ;
  while (enumerator_6959.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((cPtr_semanticDeclarationAST *) enumerator_6959.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticTypePrecedenceGraph_6452, var_extensionInitializerForBuildingContext_6560, var_extensionMethodMapForBuildingContext_6649, var_extensionGetterMapForBuildingContext_6736, var_extensionSetterMapForBuildingContext_6823, var_extensionOverrideDefinitionList_6900, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 140)) ;
    enumerator_6959.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_7418 (var_semanticTypePrecedenceGraph_6452.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 150)), EnumerationOrder::up) ;
  while (enumerator_7418.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_7418.current (HERE).readProperty_mValue ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 151)).objectCompare (GALGAS_char (TO_UNICODE (63)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        routine_println_3F_ (GALGAS_string ("Optional '").add_operation (enumerator_7418.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 152)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 152)) ;
        }
      }
    }
    enumerator_7418.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_semanticTypePrecedenceGraph_6452.getter_undefinedNodeCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_lstringlist enumerator_7673 (var_semanticTypePrecedenceGraph_6452.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 157)), EnumerationOrder::up) ;
      while (enumerator_7673.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_7673.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_7673.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)), fixItArray7  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)) ;
        enumerator_7673.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GALGAS_string ("semantic analysis not performed, due to undefined type error(s)"), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
      outArgument_outTypeMap.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_6) {
    GALGAS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_8092 ;
    GALGAS_lstringlist joker_8050 ; // Joker input parameter
    GALGAS_lstringlist joker_8133 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_6452.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_8050, var_unsortedSemanticDeclarationListAST_8092, joker_8133, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 164)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = GALGAS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_8092.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 170)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_string var_s_8211 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_8092.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)) ;
        cEnumerator_semanticDeclarationListAST enumerator_8385 (var_unsortedSemanticDeclarationListAST_8092, EnumerationOrder::up) ;
        while (enumerator_8385.hasCurrentObject ()) {
          var_s_8211.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_8385.current (HERE).readProperty_mSemanticDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)) ;
          enumerator_8385.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_8211, fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
        outArgument_outTypeMap.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_9) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssign_operation(var_extensionOverrideDefinitionList_6900, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 178)) ;
      GALGAS_unifiedTypeMap temp_11 = GALGAS_unifiedTypeMap::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 180)) ;
      outArgument_outTypeMap = temp_11 ;
      outArgument_outSemanticContext = GALGAS_semanticContext::init_21_galgas_34_ (constinArgument_inGalgas_34_, inCompiler COMMA_HERE) ;
      cEnumerator_semanticDeclarationListAST enumerator_8896 (outArgument_outSortedSemanticDeclarationListAST, EnumerationOrder::up) ;
      while (enumerator_8896.hasCurrentObject ()) {
        callExtensionMethod_enterDeclarationInSemanticContext ((cPtr_semanticDeclarationAST *) enumerator_8896.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_extensionInitializerForBuildingContext_6560, var_extensionMethodMapForBuildingContext_6649, var_extensionGetterMapForBuildingContext_6736, var_extensionSetterMapForBuildingContext_6823, outArgument_outTypeMap, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 184)) ;
        enumerator_8896.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3???&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26__26__26__26_ (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                 const GALGAS_string constinArgument_inProductDirectory,
                                                                                 const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                 GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                                 GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                                                                 GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_semanticDeclarationListForGeneration enumerator_9963 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_9963.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((cPtr_semanticDeclarationForGeneration *) enumerator_9963.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioCocoaProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 213)) ;
    enumerator_9963.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 220)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 221)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 222)) ;
          }
          {
          routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 228)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 235)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 235)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 236)) ;
            }
            {
            routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 242)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 249)).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 249)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 250)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 256)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 263)).boolEnum () ;
              if (kBoolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 264)) ;
                }
              }
            }
            if (kBoolFalse == test_4) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 273)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 279)) ;
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

void routine_generateManyHeaders_3F__3F__26__26_ (const GALGAS_string constinArgument_inProductDirectory,
                                                  const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                  GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                  GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist temp_0 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 299)) ;
  GALGAS_stringlist var_headerInclusionList_31__12854 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 300)) ;
  GALGAS_stringlist var_headerInclusionList_32__12899 = temp_1 ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_12947 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_12947.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 302)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 302)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset temp_3 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303)) ;
        GALGAS_stringset var_inclusionSet_31__13072 = temp_3 ;
        GALGAS_string var_headerDef_31__13172 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__13072, var_headerDef_31__13172, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 304)) ;
        GALGAS_string var_headerIncludes_31__13194 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_inclusionSet_31__13072.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            routine_println_3F_ (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 307)).add_operation (GALGAS_string ("headers 1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 307)) ;
            }
          }
        }
        cEnumerator_stringset enumerator_13390 (var_inclusionSet_31__13072, EnumerationOrder::up) ;
        while (enumerator_13390.hasCurrentObject ()) {
          var_headerIncludes_31__13194.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13390.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)) ;
          enumerator_13390.gotoNextObject () ;
        }
        var_headerIncludes_31__13194.plusAssign_operation(var_headerDef_31__13172, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 312)) ;
        GALGAS_stringset temp_5 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313)) ;
        GALGAS_stringset var_inclusionSet_32__13536 = temp_5 ;
        GALGAS_string var_headerDef_32__13656 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__13536, var_headerDef_32__13656, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)) ;
        GALGAS_string var_headerIncludes_32__13678 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_inclusionSet_32__13536.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 316)).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            routine_println_3F_ (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 317)).add_operation (GALGAS_string ("headers 2"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 317)) ;
            }
          }
        }
        cEnumerator_stringset enumerator_13874 (var_inclusionSet_32__13536, EnumerationOrder::up) ;
        while (enumerator_13874.hasCurrentObject ()) {
          var_headerIncludes_32__13678.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13874.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 320)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 320)) ;
          enumerator_13874.gotoNextObject () ;
        }
        var_headerIncludes_32__13678.plusAssign_operation(var_headerDef_32__13656, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 322)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)).enumValue ()) {
        case GALGAS_headerKind::kNotBuilt:
          break ;
        case GALGAS_headerKind::kEnum_noHeader:
          {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (ComparisonKind::notEqual, var_headerIncludes_31__13194.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 327)).readProperty_location (), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12947.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 328)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 328)), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 327)) ;
              }
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13678.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 331)).readProperty_location (), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12947.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 332)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 332)), fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 331)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_oneHeader:
          {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::equal, var_headerIncludes_31__13194.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 336)).readProperty_location (), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12947.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 337)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 337)), fixItArray12  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 336)) ;
              }
            }
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13678.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 340)).readProperty_location (), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12947.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 341)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 341)), fixItArray14  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 340)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_twoHeaders:
          {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = GALGAS_bool (ComparisonKind::equal, var_headerIncludes_31__13194.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 345)).readProperty_location (), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12947.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 346)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 346)), fixItArray16  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 345)) ;
              }
            }
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              test_17 = GALGAS_bool (ComparisonKind::equal, var_headerIncludes_32__13678.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_17) {
                TC_Array <FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)).readProperty_location (), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12947.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)), fixItArray18  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)) ;
              }
            }
          }
          break ;
        }
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)).objectCompare (GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)))).boolEnum () ;
          if (kBoolTrue == test_19) {
            GALGAS_string var_headerString_15498 = GALGAS_string ("#pragma once\n") ;
            var_headerString_15498.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)) ;
            var_headerString_15498.plusAssign_operation(GALGAS_string ("#include \"all-predefined-types.h\"\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 357)) ;
            var_headerString_15498.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)) ;
            var_headerString_15498.plusAssign_operation(var_headerIncludes_31__13194, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 359)) ;
            var_headerString_15498.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)) ;
            var_headerString_15498.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)) ;
            GALGAS_string temp_20 ;
            const enumGalgasBool test_21 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              temp_20 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_21) {
              temp_20 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_15929 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)).add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)) ;
            var_headerInclusionList_31__12854.addAssign_operation (var_headerFileName_15929  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 364)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_15929.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_15929.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 366))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 366)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15929.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)), var_headerString_15498, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367)) ;
            }
          }
        }
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)))).boolEnum () ;
          if (kBoolTrue == test_22) {
            GALGAS_string var_headerString_16506 = GALGAS_string ("#ifndef ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)).add_operation (GALGAS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)) ;
            var_headerString_16506.plusAssign_operation(GALGAS_string ("#define ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)).add_operation (GALGAS_string ("_DEFINED\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)) ;
            var_headerString_16506.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)) ;
            var_headerString_16506.plusAssign_operation(GALGAS_string ("#include \"").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)).add_operation (GALGAS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)) ;
            var_headerString_16506.plusAssign_operation(GALGAS_string ("\n//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)) ;
            var_headerString_16506.plusAssign_operation(var_headerIncludes_32__13678, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)) ;
            var_headerString_16506.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)) ;
            var_headerString_16506.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)) ;
            var_headerString_16506.plusAssign_operation(GALGAS_string ("#endif\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)) ;
            var_headerInclusionList_32__12899.addAssign_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 385)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 385))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 385)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12947.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389)), var_headerString_16506, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 387)) ;
            }
          }
        }
      }
    }
    enumerator_12947.gotoNextObject () ;
  }
  GALGAS_string var_headerString_17775 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), var_headerInclusionList_31__12854.add_operation (var_headerInclusionList_32__12899, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 398)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 396))) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 400)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 401)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_17775, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 402)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateOneBigHeader??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateOneBigHeader_3F__3F__26__26_ (const GALGAS_string constinArgument_inProductDirectory,
                                                   const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                   GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                   GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist temp_0 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 418)) ;
  GALGAS_string var_headerString_18462 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), temp_0 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 416))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_18617 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_18617.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18617.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 422)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 422)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset joker_18772 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
        GALGAS_string var_headerString_31__18791 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18617.current (HERE).readProperty_mDeclaration ().ptr (), joker_18772, var_headerString_31__18791, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 423)) ;
        var_headerString_18462.plusAssign_operation(var_headerString_31__18791, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 424)) ;
      }
    }
    enumerator_18617.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_18896 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_18896.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18896.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 429)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 429)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_19071 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
        GALGAS_string var_headerString_32__19090 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18896.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, joker_19071, var_headerString_32__19090, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 430)) ;
        var_headerString_18462.plusAssign_operation(var_headerString_32__19090, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 431)) ;
      }
    }
    enumerator_18896.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 434)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 435)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_18462, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 436)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildHeader???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildHeader_3F__3F__3F__26__26_ (const GALGAS_headerCompositionMap constinArgument_inHeaderCompositionMap,
                                              const GALGAS_string constinArgument_inHeaderFileName,
                                              const GALGAS_string constinArgument_inDeclarationName,
                                              GALGAS_headerRepartitionMap & ioArgument_ioHeaderRepartitionMap,
                                              GALGAS_string & ioArgument_ioHeaderString,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 469)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 469)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 470)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 470)) ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 471)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_stringset var_inclusionSet_20620 ;
          GALGAS_string var_headerString_20654 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 473)), var_inclusionSet_20620, var_headerString_20654, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 472)) ;
          cEnumerator_stringset enumerator_20686 (var_inclusionSet_20620, EnumerationOrder::up) ;
          while (enumerator_20686.hasCurrentObject ()) {
            {
            routine_buildHeader_3F__3F__3F__26__26_ (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20686.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 478)) ;
            }
            enumerator_20686.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssign_operation(var_headerString_20654, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 486)) ;
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssign_operation(GALGAS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 488)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 488)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'definitionGroupAmount'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_uint onceFunction_definitionGroupAmount (Compiler *
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint (uint32_t (50U)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_definitionGroupAmount = false ;
static GALGAS_uint gOnceFunctionResult_definitionGroupAmount ;

//--------------------------------------------------------------------------------------------------

GALGAS_uint function_definitionGroupAmount (class Compiler * inCompiler
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

static GALGAS_object functionWithGenericHeader_definitionGroupAmount (Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
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

void routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                 const GALGAS_string constinArgument_inProductDirectory,
                                                                 const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                 GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_useOneHugeHeader_21584 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  GALGAS_bigint var_n_21697 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 511)) ;
  GALGAS_bigint var_fileIdx_21709 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 512)) ;
  GALGAS_string var_implementationString_21727 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 514)) ;
  GALGAS_stringset var_inclusionSet_21770 = temp_0 ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_21810 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_21810.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21810.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_code_22021 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_21810.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21770, var_code_22021, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 517)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_inclusionSet_21770.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 518)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_println_3F_ (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21810.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)).add_operation (GALGAS_string (" cpp headers"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)) ;
            }
          }
        }
        var_implementationString_21727.plusAssign_operation(var_code_22021, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)) ;
        var_implementationString_21727.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21810.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 522)) ;
        var_n_21697.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_n_21697.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 524)).getter_bigint (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 524)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_useOneHugeHeader_21584.boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_stringset temp_5 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)) ;
                temp_5.enterElement (GALGAS_string ("all-declarations"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)) ;
                var_inclusionSet_21770 = temp_5 ;
              }
            }
            GALGAS_string var_header_22478 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21770.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 529)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528))) ;
            GALGAS_string var_fileName_22617 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21709.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 531)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 531)) ;
            GALGAS_stringlist temp_6 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 532)) ;
            temp_6.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_fileName_22617, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 532)) ;
            ioArgument_ioToolProductFileList = temp_6.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 532)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_22617  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 533)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22617, var_header_22478.add_operation (var_implementationString_21727, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 534)) ;
            }
            var_n_21697 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 539)) ;
            var_fileIdx_21709.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 540)) ;
            var_implementationString_21727 = GALGAS_string::makeEmptyString () ;
            GALGAS_stringset temp_7 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 542)) ;
            var_inclusionSet_21770 = temp_7 ;
          }
        }
      }
    }
    enumerator_21810.gotoNextObject () ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (ComparisonKind::notEqual, var_implementationString_21727.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_useOneHugeHeader_21584.boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_stringset temp_10 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 549)) ;
          temp_10.enterElement (GALGAS_string ("all-declarations"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 549)) ;
          var_inclusionSet_21770 = temp_10 ;
        }
      }
      GALGAS_string var_header_23187 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21770.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 552)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551))) ;
      GALGAS_string var_fileName_23314 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21709.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 554)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 554)) ;
      GALGAS_stringlist temp_11 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 555)) ;
      temp_11.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_fileName_23314, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 555)) ;
      ioArgument_ioToolProductFileList = temp_11.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 555)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_23314  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 556)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_23314, var_header_23187.add_operation (var_implementationString_21727, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 557)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFilesWithFewHeaders???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                   const GALGAS_string constinArgument_inProductDirectory,
                                                                                   const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                   GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                                                                   GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                                   GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerCompositionMap temp_0 = GALGAS_headerCompositionMap::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 574)) ;
  GALGAS_headerCompositionMap var_headerCompositionMap_24067 = temp_0 ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_24115 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_24115.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 576)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 576)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset temp_2 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 577)) ;
        GALGAS_stringset var_inclusionSet_31__24240 = temp_2 ;
        GALGAS_string var_headerString_31__24340 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__24240, var_headerString_31__24340, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 578)) ;
        GALGAS_stringset temp_3 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)) ;
        GALGAS_stringset var_inclusionSet_32__24376 = temp_3 ;
        GALGAS_string var_headerString_32__24496 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__24376, var_headerString_32__24496, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 580)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 581)).objectCompare (GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 581)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_string temp_5 ;
            const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 582)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 582)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              temp_5 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_6) {
              temp_5 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_24588 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 582)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 582)) ;
            {
            var_headerCompositionMap_24067.setter_insertKey (var_headerFileName_24588.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 584)), var_inclusionSet_31__24240, var_headerString_31__24340, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 583)) ;
            }
          }
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            GALGAS_stringset temp_8 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 592)) ;
            temp_8.enterElement (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 592)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 592)) ;
            var_headerCompositionMap_24067.setter_insertKey (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24115.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 591)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 591)), var_inclusionSet_32__24376.operator_or (temp_8 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 592)), var_headerString_32__24496, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 590)) ;
            }
          }
        }
      }
    }
    enumerator_24115.gotoNextObject () ;
  }
  GALGAS_headerRepartitionMap temp_9 = GALGAS_headerRepartitionMap::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 598)) ;
  GALGAS_headerRepartitionMap var_headerRepartitionMap_25266 = temp_9 ;
  GALGAS_bigint var_fileIdx_25299 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 599)) ;
  GALGAS_string var_implementationString_25317 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_headerString_25349 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset temp_10 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 602)) ;
  GALGAS_stringset var_inclusionSet_25384 = temp_10 ;
  GALGAS_string var_headerFileName_25409 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_25477 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_25477.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)).boolEnum () ;
      if (kBoolTrue == test_11) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 606)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 606)).boolEnum () ;
          if (kBoolTrue == test_12) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)))).boolEnum () ;
              if (kBoolTrue == test_13) {
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24067, var_headerFileName_25409, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)), var_headerRepartitionMap_25266, var_headerString_25349, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)) ;
                }
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24067, var_headerFileName_25409, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 609)), var_headerRepartitionMap_25266, var_headerString_25349, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 609)) ;
                }
              }
            }
            if (kBoolFalse == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)).objectCompare (GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)))).boolEnum () ;
                if (kBoolTrue == test_14) {
                  {
                  routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24067, var_headerFileName_25409, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)), var_headerRepartitionMap_25266, var_headerString_25349, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)) ;
                  }
                }
              }
            }
          }
        }
        GALGAS_string var_code_26385 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_25384, var_code_26385, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 614)) ;
        cEnumerator_stringset enumerator_26402 (var_inclusionSet_25384, EnumerationOrder::up) ;
        while (enumerator_26402.hasCurrentObject ()) {
          {
          routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24067, var_headerFileName_25409, enumerator_26402.current_key (HERE), var_headerRepartitionMap_25266, var_headerString_25349, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 616)) ;
          }
          enumerator_26402.gotoNextObject () ;
        }
        var_implementationString_25317.plusAssign_operation(var_code_26385, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)) ;
        var_implementationString_25317.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_25477.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 619)) ;
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (ComparisonKind::greaterThan, var_implementationString_25317.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)).objectCompare (GALGAS_uint (uint32_t (786432U)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            GALGAS_stringset temp_16 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 621)) ;
            temp_16.enterElement (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 621)) ;
            var_inclusionSet_25384 = temp_16 ;
            GALGAS_string var_cppHeader_26779 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_25384.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622))) ;
            GALGAS_string var_fileName_26921 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)) ;
            GALGAS_stringlist temp_17 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 626)) ;
            temp_17.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_fileName_26921, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 626)) ;
            ioArgument_ioToolProductFileList = temp_17.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 626)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_26921  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 627)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_26921, var_cppHeader_26779.add_operation (var_implementationString_25317, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 628)) ;
            }
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25409.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 634))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 634)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25409.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)) ;
            GALGAS_stringlist temp_18 ;
            const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::equal, var_fileIdx_25299.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)))).boolEnum () ;
            if (kBoolTrue == test_19) {
              GALGAS_stringlist temp_20 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)) ;
              temp_18 = temp_20 ;
            }else if (kBoolFalse == test_19) {
              GALGAS_stringlist temp_21 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)) ;
              temp_21.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)) ;
              temp_18 = temp_21 ;
            }
            GALGAS_string var_startOfHeader_27366 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25409, temp_18 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 636))) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25409.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)), var_startOfHeader_27366.add_operation (var_headerString_25349, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)) ;
            }
            var_fileIdx_25299.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 646)) ;
            var_implementationString_25317 = GALGAS_string::makeEmptyString () ;
            var_headerString_25349 = GALGAS_string::makeEmptyString () ;
            var_headerFileName_25409 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 649)) ;
            GALGAS_stringset temp_22 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 650)) ;
            var_inclusionSet_25384 = temp_22 ;
          }
        }
      }
    }
    enumerator_25477.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (ComparisonKind::notEqual, var_implementationString_25317.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_stringlist temp_24 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)) ;
      temp_24.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)) ;
      GALGAS_string var_header_27972 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_24 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 656))) ;
      GALGAS_string var_fileName_28114 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)) ;
      GALGAS_stringlist temp_25 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 660)) ;
      temp_25.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_fileName_28114, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 660)) ;
      ioArgument_ioToolProductFileList = temp_25.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 660)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_28114  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 661)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_28114, var_header_27972.add_operation (var_implementationString_25317, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662)) ;
      }
      ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25409.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 668))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 668)) ;
      ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25409.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)) ;
      GALGAS_stringlist temp_26 ;
      const enumGalgasBool test_27 = GALGAS_bool (ComparisonKind::equal, var_fileIdx_25299.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)))).boolEnum () ;
      if (kBoolTrue == test_27) {
        GALGAS_stringlist temp_28 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)) ;
        temp_26 = temp_28 ;
      }else if (kBoolFalse == test_27) {
        GALGAS_stringlist temp_29 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)) ;
        temp_29.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)) ;
        temp_26 = temp_29 ;
      }
      GALGAS_string var_startOfHeader_28512 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25409, temp_26 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 670))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25409.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)), var_startOfHeader_28512.add_operation (var_headerString_25349, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)) ;
      }
    }
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 681)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682)) ;
  GALGAS_stringlist temp_30 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 685)) ;
  temp_30.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25299.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 685)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 685)) ;
  GALGAS_string var_startOfAllDeclarationsHeader_28964 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), temp_30 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 683))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_28964, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 687)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                  const GALGAS_string constinArgument_inProductDirectory,
                                                                  const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                  GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                                                  GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_useOneHugeHeader_29637 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_29745 (constinArgument_inSemanticDeclarationSortedListForGeneration, EnumerationOrder::up) ;
  while (enumerator_29745.hasCurrentObject ()) {
    GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 706)) ;
    GALGAS_stringset var_inclusionSet_29812 = temp_0 ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_29745.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 707)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 707)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_implementationString_29994 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_29745.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_29812, var_implementationString_29994, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 708)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_29745.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 709)).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_inclusionSet_29812.addAssign_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29745.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 710))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 710)) ;
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_useOneHugeHeader_29637.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_stringset temp_4 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)) ;
            temp_4.enterElement (GALGAS_string ("all-declarations"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)) ;
            var_inclusionSet_29812 = temp_4 ;
          }
        }
        GALGAS_string var_header_30260 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_29812.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 716)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715))) ;
        var_implementationString_29994.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29745.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 718)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 718)) ;
        GALGAS_string var_fileName_30482 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29745.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 719)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 719)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_30482  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 720)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_30482, var_header_30260.add_operation (var_implementationString_29994, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 721)) ;
        }
        ioArgument_ioToolProductFileList.addAssign_operation (var_fileName_30482  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 726)) ;
      }
    }
    enumerator_29745.gotoNextObject () ;
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

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_REF,
                                                                               const GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_C_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                               const GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GALGAS_uint index_249_ (0) ;
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
  GALGAS_uint index_552_ (0) ;
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
  GALGAS_uint index_937_ (0) ;
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
  GALGAS_uint index_1324_ (0) ;
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
  GALGAS_uint index_1710_ (0) ;
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
  GALGAS_uint index_2105_ (0) ;
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
  GALGAS_uint index_2496_ (0) ;
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
  GALGAS_uint index_3069_ (0) ;
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
  GALGAS_uint index_3665_ (0) ;
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
  GALGAS_uint index_3994_ (0) ;
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
  GALGAS_uint index_4358_ (0) ;
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
  GALGAS_uint index_4724_ (0) ;
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
  GALGAS_uint index_5063_ (0) ;
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
  GALGAS_uint index_5714_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5714 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5714.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_5714.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5714.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GALGAS_uint index_5953_ (0) ;
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
  GALGAS_uint index_6391_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_6391 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6391.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6391.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GALGAS_uint index_6575_ (0) ;
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
  GALGAS_uint index_6851_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_6851 (in_GROUPS, EnumerationOrder::up) ;
    while (enumerator_6851.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6851.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6851.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GALGAS_uint index_6978_ (0) ;
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
  GALGAS_uint index_7330_ (0) ;
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
  GALGAS_uint index_7744_ (0) ;
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
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_7744.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
  GALGAS_uint index_8701_ (0) ;
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
      GALGAS_uint index_9090_ (0) ;
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
  GALGAS_uint index_10114_ (0) ;
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
  GALGAS_uint index_10453_ (0) ;
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
  GALGAS_uint index_10905_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10905 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10905.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_10905.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GALGAS_uint index_11088_ (0) ;
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
  GALGAS_uint index_11538_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_11538 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11538.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11538.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GALGAS_uint index_11705_ (0) ;
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
  GALGAS_uint index_12111_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12111 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12111.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_12111.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GALGAS_uint index_12278_ (0) ;
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
  GALGAS_uint index_12785_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12785 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12785.hasCurrentObject ()) {
      GALGAS_uint index_12833_ (0) ;
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
  GALGAS_uint index_13357_ (0) ;
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
  GALGAS_uint index_13672_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_13672 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13672.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13672.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        ONLY_ACTIVE_ARCH = YES;\n") ;
      GALGAS_uint index_13876_ (0) ;
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
  GALGAS_uint index_14351_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_14351 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14351.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14351.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GALGAS_uint index_14519_ (0) ;
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
  GALGAS_uint index_15478_ (0) ;
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
  GALGAS_uint index_16060_ (0) ;
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
  return GALGAS_string (result) ;
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

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (Compiler * /* inCompiler */,
                                                                                         const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_macosx'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (Compiler * /* inCompiler */,
                                                                                         const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                         const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom macosx_gcc_tools import buildForMacOS\n#----------------------------------------------------------------- Build\nbuildForMacOS (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_macosx'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_macosx'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_macosx'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_macosx'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n#! /usr/bin/python3\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_unix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_unix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                       const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom unix_gcc_tools import buildForUnix\n#----------------------------------------------------------------- Build\nbuildForUnix (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_unix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_unix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_unix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_unix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n#! /usr/bin/python3\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper install_unix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"install-release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                                      const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_32 import buildForLinux32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                                      const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_64 import buildForLinux64OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux64OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                           const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                           const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                           const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom mingw32_on_macosx_gcc_tools import buildForWin32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForWin32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper codeblocks_project'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (Compiler * /* inCompiler */,
                                                                                               const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                               const GALGAS_stringlist & in_TOOL_5F_CPP_5F_FILE_5F_LIST,
                                                                                               const GALGAS_string & in_LIBPM_5F_PATH,
                                                                                               const GALGAS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST,
                                                                                               const GALGAS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET,
                                                                                               const GALGAS_bool & in_GENERATE_5F_FOR_5F_WINDOWS,
                                                                                               const GALGAS_string & in_PLATFORM,
                                                                                               const GALGAS_bool & in_VERBOSE_5F_OPTION,
                                                                                               const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
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
    result.appendString (GALGAS_string (".exe").stringValue ()) ;
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
    result.appendString (GALGAS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
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
    result.appendString (GALGAS_string (".exe").stringValue ()) ;
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
    result.appendString (GALGAS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
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
  GALGAS_uint index_2819_ (0) ;
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
    result.appendString (GALGAS_string ("   <Add option=\"-static\" />\n   <Add library=\"Comdlg32\" />\n").stringValue ()) ;
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
  GALGAS_uint index_3218_ (0) ;
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
  GALGAS_uint index_3338_ (0) ;
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                   const GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                                                   const GALGAS_string & in_VERSION_5F_STRING,
                                                                                                   const GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET,
                                                                                                   const GALGAS_string & in_MACOSX_5F_DEPLOYMENT_5F_TARGET
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
  GALGAS_uint index_986_ (0) ;
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
  GALGAS_uint index_1662_ (0) ;
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_build_xcode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#!/bin/sh\ncd `dirname $0` && xcodebuild -alltargets -configuration Default\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist_strings'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (Compiler * /* inCompiler */,
                                                                                                              const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("/* Localized versions of Info.plist keys */\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper json_file_list'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (Compiler * /* inCompiler */,
                                                                                              const GALGAS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET,
                                                                                              const GALGAS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST,
                                                                                              const GALGAS_stringlist & in_MAKEFILE_5F_FILE_5F_LIST,
                                                                                              const GALGAS_stringlist & in_TOOL_5F_LINK_5F_LIST,
                                                                                              const GALGAS_string & in_LIBPM_5F_DIRECTORY_5F_PATH,
                                                                                              const GALGAS_string & in_RELATIVE_5F_BUILD_5F_DIR
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
  GALGAS_uint index_821_ (0) ;
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
  GALGAS_uint index_934_ (0) ;
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
  GALGAS_uint index_1018_ (0) ;
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
  GALGAS_uint index_5150_ (0) ;
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper project_header'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (Compiler * /* inCompiler */,
                                                                                           const GALGAS_string & in_VERSION_5F_STRING
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     Project common header file                                                                \n//\n//--------------------------------------------------------------------------------------------------\n\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#define PROJECT_VERSION_STRING \"") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("\"\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksWindowsTarget??buildDirName???libpmPath???'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (const GALGAS_string constinArgument_inProjectDirectory,
                                                                                                         const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                                                         const GALGAS_string constinArgument_inProjectName,
                                                                                                         const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                                                                         const GALGAS_string constinArgument_inLIBPMpath,
                                                                                                         const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                         const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                         const GALGAS_bool constinArgument_inVerboseOption,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_6065 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 107)) ;
  var_dir_6065.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 108)) ;
  GALGAS_string var_s_6158 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (true), GALGAS_string ("Windows"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 109))) ;
  GALGAS_bool joker_6553 ; // Joker input parameter
  var_s_6158.method_writeToFileWhenDifferentContents (var_dir_6065.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)), joker_6553, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxI686Target??buildDirName??????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (const GALGAS_string constinArgument_inProjectDirectory,
                                                                                                           const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                                                           const GALGAS_string constinArgument_inProjectName,
                                                                                                           const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                                                                           const GALGAS_string constinArgument_inLIBPMpath,
                                                                                                           const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                           const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                           const GALGAS_bool constinArgument_inVerboseOption,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_8012 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 163)) ;
  var_dir_8012.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 164)) ;
  GALGAS_string var_s_8105 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 165))) ;
  GALGAS_bool joker_8498 ; // Joker input parameter
  var_s_8105.method_writeToFileWhenDifferentContents (var_dir_8012.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 176)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 176)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 176)), joker_8498, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 176)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxX86_64Target??buildDirName??????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (const GALGAS_string constinArgument_inProjectDirectory,
                                                                                                                   const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                                                                   const GALGAS_string constinArgument_inProjectName,
                                                                                                                   const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                                                                                   const GALGAS_string constinArgument_inLIBPMpath,
                                                                                                                   const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                                   const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                                   const GALGAS_bool constinArgument_inVerboseOption,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_8979 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 191)) ;
  var_dir_8979.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 192)) ;
  GALGAS_string var_s_9072 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193))) ;
  GALGAS_bool joker_9465 ; // Joker input parameter
  var_s_9072.method_writeToFileWhenDifferentContents (var_dir_8979.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)), joker_9465, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MinGWOnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (const GALGAS_string constinArgument_inProjectDirectory,
                                                                            const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                            const GALGAS_string constinArgument_inProjectName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_9749 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213)) ;
  var_dir_9749.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214)) ;
  GALGAS_bool joker_9995 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215))).method_writeToExecutableFileWhenDifferentContents (var_dir_9749.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)), joker_9995, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)) ;
  GALGAS_bool joker_10147 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216))).method_writeToExecutableFileWhenDifferentContents (var_dir_9749.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)), joker_10147, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)) ;
  GALGAS_bool joker_10291 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217))).method_writeToExecutableFileWhenDifferentContents (var_dir_9749.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)), joker_10291, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)) ;
  GALGAS_bool joker_10439 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218))).method_writeToExecutableFileWhenDifferentContents (var_dir_9749.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)), joker_10439, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)) ;
  GALGAS_bool joker_10591 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219))).method_writeToExecutableFileWhenDifferentContents (var_dir_9749.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)), joker_10591, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)) ;
  GALGAS_bool joker_10750 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220))).method_writeToExecutableFileWhenDifferentContents (var_dir_9749.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 221)), joker_10750, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_9749.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 224)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MakefileUnixTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MakefileUnixTarget_3F__3F_buildDirName_3F_ (const GALGAS_string constinArgument_inProjectDirectory,
                                                                           const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                           const GALGAS_string constinArgument_inProjectName,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_11086 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233)) ;
  var_dir_11086.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234)) ;
  GALGAS_bool joker_11313 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235))).method_writeToExecutableFileWhenDifferentContents (var_dir_11086.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)), joker_11313, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)) ;
  GALGAS_bool joker_11457 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236))).method_writeToExecutableFileWhenDifferentContents (var_dir_11086.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)), joker_11457, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)) ;
  GALGAS_bool joker_11593 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237))).method_writeToExecutableFileWhenDifferentContents (var_dir_11086.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237)), joker_11593, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237)) ;
  GALGAS_bool joker_11733 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238))).method_writeToExecutableFileWhenDifferentContents (var_dir_11086.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238)), joker_11733, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238)) ;
  GALGAS_bool joker_11877 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 239))).method_writeToExecutableFileWhenDifferentContents (var_dir_11086.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 239)), joker_11877, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 239)) ;
  GALGAS_bool joker_12009 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 240))).method_writeToExecutableFileWhenDifferentContents (var_dir_11086.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 240)), joker_12009, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 240)) ;
  GALGAS_bool joker_12152 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 241))).method_writeToExecutableFileWhenDifferentContents (var_dir_11086.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 241)), joker_12152, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 241)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_11086.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 242)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MakefileMacTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MakefileMacTarget_3F__3F_buildDirName_3F_ (const GALGAS_string constinArgument_inProjectDirectory,
                                                                          const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                          const GALGAS_string constinArgument_inProjectName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_12484 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251)) ;
  var_dir_12484.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252)) ;
  GALGAS_bool joker_12715 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253))).method_writeToExecutableFileWhenDifferentContents (var_dir_12484.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253)), joker_12715, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253)) ;
  GALGAS_bool joker_12861 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254))).method_writeToExecutableFileWhenDifferentContents (var_dir_12484.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254)), joker_12861, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254)) ;
  GALGAS_bool joker_12999 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255))).method_writeToExecutableFileWhenDifferentContents (var_dir_12484.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255)), joker_12999, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255)) ;
  GALGAS_bool joker_13141 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 256))).method_writeToExecutableFileWhenDifferentContents (var_dir_12484.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 256)), joker_13141, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 256)) ;
  GALGAS_bool joker_13287 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 257))).method_writeToExecutableFileWhenDifferentContents (var_dir_12484.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 257)), joker_13287, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 257)) ;
  GALGAS_bool joker_13567 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 259))).method_writeToExecutableFileWhenDifferentContents (var_dir_12484.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 259)), joker_13567, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 259)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_12484.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 260)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3Linux32OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GALGAS_string constinArgument_inProjectDirectory,
                                                                                    const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                                    const GALGAS_string constinArgument_inProjectName,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_13903 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 269)) ;
  var_dir_13903.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 270)) ;
  GALGAS_bool joker_14159 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271))).method_writeToExecutableFileWhenDifferentContents (var_dir_13903.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271)), joker_14159, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271)) ;
  GALGAS_bool joker_14316 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272))).method_writeToExecutableFileWhenDifferentContents (var_dir_13903.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272)), joker_14316, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272)) ;
  GALGAS_bool joker_14465 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 273))).method_writeToExecutableFileWhenDifferentContents (var_dir_13903.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 273)), joker_14465, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 273)) ;
  GALGAS_bool joker_14618 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 274))).method_writeToExecutableFileWhenDifferentContents (var_dir_13903.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 274)), joker_14618, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 274)) ;
  GALGAS_bool joker_14775 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 275))).method_writeToExecutableFileWhenDifferentContents (var_dir_13903.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 275)), joker_14775, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 275)) ;
  GALGAS_bool joker_14931 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 276))).method_writeToExecutableFileWhenDifferentContents (var_dir_13903.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 276)), joker_14931, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 276)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_13903.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 277)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3Linux64OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GALGAS_string constinArgument_inProjectDirectory,
                                                                                    const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                                    const GALGAS_string constinArgument_inProjectName,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_15267 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 286)) ;
  var_dir_15267.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 287)) ;
  GALGAS_bool joker_15523 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288))).method_writeToExecutableFileWhenDifferentContents (var_dir_15267.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288)), joker_15523, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288)) ;
  GALGAS_bool joker_15680 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 289))).method_writeToExecutableFileWhenDifferentContents (var_dir_15267.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 289)), joker_15680, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 289)) ;
  GALGAS_bool joker_15829 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 290))).method_writeToExecutableFileWhenDifferentContents (var_dir_15267.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 290)), joker_15829, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 290)) ;
  GALGAS_bool joker_15982 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 291))).method_writeToExecutableFileWhenDifferentContents (var_dir_15267.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 291)), joker_15982, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 291)) ;
  GALGAS_bool joker_16139 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 292))).method_writeToExecutableFileWhenDifferentContents (var_dir_15267.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 292)), joker_16139, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 292)) ;
  GALGAS_bool joker_16295 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 293))).method_writeToExecutableFileWhenDifferentContents (var_dir_15267.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 293)), joker_16295, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 293)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_15267.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 294)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets?absoluteBuildDir?buildDirName??????????????&???'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__3F__3F_ (const GALGAS_string constinArgument_inAbsoluteBuildDirectory,
                                                                                                                                              const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                                                                                              const GALGAS_string constinArgument_inProjectSourceFilePath,
                                                                                                                                              const GALGAS_string constinArgument_inTargetName,
                                                                                                                                              const GALGAS_location /* constinArgument_inEndOfProjectSourceFile */,
                                                                                                                                              const GALGAS_string constinArgument_inProjectVersionString,
                                                                                                                                              const GALGAS_projectQualifiedFeatureMap constinArgument_inProjectQualifiedFeatureMap,
                                                                                                                                              const GALGAS_lstringlist constinArgument_inTargetFeatureList,
                                                                                                                                              const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                                                                                                              const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                                                                                                              const GALGAS_stringlist constinArgument_inToolHeaderFileList,
                                                                                                                                              const GALGAS_stringlist constinArgument_inAppProductFileList,
                                                                                                                                              const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                                                              const GALGAS_stringlist constinArgument_inFrameworkToolFileList,
                                                                                                                                              const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                                                              const GALGAS_stringset constinArgument_inHandledExtensionSet,
                                                                                                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                                                                                              const GALGAS_stringlist constinArgument_inHandCodedSourceAppFileList,
                                                                                                                                              const GALGAS_stringlist constinArgument_inHandCodedLinkAppFileList,
                                                                                                                                              const GALGAS_stringlist constinArgument_inHandCodedLinkToolFileList,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectDirectory_17360 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 321)) ;
  GALGAS_bool joker_17653 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 323))).method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 324)), joker_17653, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 323)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 327)) ;
  GALGAS_stringlist var_toolCppFileList_17794 = constinArgument_inToolCppFileList ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_toolCppFileList_17794.addAssign_operation (GALGAS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 331)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_toolCppFileList_17794.addAssign_operation (GALGAS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 333)) ;
  }
  GALGAS_lstring var_macCodeSign_18070 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18084 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("macCodeSign")) ;
  if (nullptr != objectArray_18084) {
      macroValidSharedObject (objectArray_18084, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, objectArray_18084->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (objectArray_18084->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the %macCodeSign attribute should not be empty"), fixItArray2  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 339)) ;
        var_macCodeSign_18070.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_1) {
      var_macCodeSign_18070 = objectArray_18084->mProperty_mFeatureValue ;
    }
  }else{
    var_macCodeSign_18070 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 344)) ;
  }
  GALGAS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18480 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("MacOSDeployment")) ;
  if (nullptr != objectArray_18480) {
      macroValidSharedObject (objectArray_18480, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::equal, objectArray_18480->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (objectArray_18480->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the %MacOSDeployment attribute should not be empty"), fixItArray4  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 350)) ;
        var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453 = objectArray_18480->mProperty_mFeatureValue.readProperty_string () ;
    }
  }else{
    var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453 = GALGAS_string ("10.13").getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 355)).readProperty_string () ;
  }
  GALGAS_string var_libpmPath_18896 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18908 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("libpmAtPath")) ;
  if (nullptr != objectArray_18908) {
      macroValidSharedObject (objectArray_18908, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::equal, objectArray_18908->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (objectArray_18908->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the libpm path should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 361)) ;
        var_libpmPath_18896.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      var_libpmPath_18896 = objectArray_18908->mProperty_mFeatureValue.readProperty_string () ;
    }
  }else{
    {
    routine_updateLIBPMatPath_3F_ (constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 366)) ;
    }
    var_libpmPath_18896 = GALGAS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 367)).add_operation (GALGAS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 367)) ;
  }
  GALGAS_stringset temp_7 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 371)) ;
  GALGAS_stringset var_availableGenerationFeatures_19417 = temp_7 ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 372)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 373)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 374)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 375)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 376)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 377)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 378)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 379)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 380)) ;
  var_availableGenerationFeatures_19417.addAssign_operation (GALGAS_string ("MacOS")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 381)) ;
  GALGAS_stringset temp_8 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 382)) ;
  GALGAS_stringset var_generationFeatures_20027 = temp_8 ;
  GALGAS_string var_SDK_20104 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_20120 (constinArgument_inTargetFeatureList, EnumerationOrder::up) ;
  while (enumerator_20120.hasCurrentObject ()) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_availableGenerationFeatures_19417.getter_hasKey (enumerator_20120.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 386)).boolEnum () ;
      if (kBoolTrue == test_9) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_generationFeatures_20027.getter_hasKey (enumerator_20120.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 387)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_20120.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicate '").add_operation (enumerator_20120.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)), fixItArray11  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)) ;
          }
        }
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (ComparisonKind::equal, enumerator_20120.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("MacOS"))).boolEnum () ;
          if (kBoolTrue == test_12) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (ComparisonKind::notEqual, var_SDK_20104.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticError (enumerator_20120.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated setting"), fixItArray14  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 393)) ;
              }
            }
            var_SDK_20104 = GALGAS_string ("macosx") ;
          }
        }
        if (kBoolFalse == test_12) {
          var_generationFeatures_20027.addAssign_operation (enumerator_20120.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 397)) ;
        }
      }
    }
    if (kBoolFalse == test_9) {
      GALGAS_stringlist temp_15 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 400)) ;
      GALGAS_stringlist var_s_20594 = temp_15 ;
      cEnumerator_stringset enumerator_20613 (var_availableGenerationFeatures_19417, EnumerationOrder::up) ;
      while (enumerator_20613.hasCurrentObject ()) {
        var_s_20594.addAssign_operation (GALGAS_string ("%").add_operation (enumerator_20613.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 402))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 402)) ;
        enumerator_20613.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray16 ;
      appendFixItActions (fixItArray16, kFixItReplace, var_s_20594) ;
      inCompiler->emitSemanticError (enumerator_20120.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown '").add_operation (enumerator_20120.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)), fixItArray16  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)) ;
    }
    enumerator_20120.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    GALGAS_bool test_18 = GALGAS_bool (ComparisonKind::notEqual, var_macCodeSign_18070.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
    if (kBoolTrue == test_18.boolEnum ()) {
      test_18 = GALGAS_bool (ComparisonKind::equal, var_SDK_20104.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_17 = test_18.boolEnum () ;
    if (kBoolTrue == test_17) {
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (var_macCodeSign_18070.readProperty_location (), GALGAS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%MacOS\""), fixItArray19  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 409)) ;
    }
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (ComparisonKind::notEqual, var_SDK_20104.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_20) {
      test_20 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GALGAS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 417)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 417)).boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticWarning (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 418)), GALGAS_string ("For a Cocoa project, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray21  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 418)) ;
      }
    }
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_generationFeatures_20027.getter_hasKey (GALGAS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 421)).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      routine_generateGalgas_33_MakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 422)) ;
      }
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = var_generationFeatures_20027.getter_hasKey (GALGAS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 424)).boolEnum () ;
    if (kBoolTrue == test_23) {
      {
      routine_generateGalgas_33_MakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 425)) ;
      }
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = var_generationFeatures_20027.getter_hasKey (GALGAS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 427)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 428)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = var_generationFeatures_20027.getter_hasKey (GALGAS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 430)).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 431)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = var_generationFeatures_20027.getter_hasKey (GALGAS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 433)).boolEnum () ;
    if (kBoolTrue == test_26) {
      {
      routine_generateGalgas_33_MinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 434)) ;
      }
    }
  }
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = var_generationFeatures_20027.getter_hasKey (GALGAS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 436)).boolEnum () ;
    if (kBoolTrue == test_27) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18896, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 437)) ;
      }
    }
  }
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    test_28 = var_generationFeatures_20027.getter_hasKey (GALGAS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 448)).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18896, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 449)) ;
      }
    }
  }
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = var_generationFeatures_20027.getter_hasKey (GALGAS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 460)).boolEnum () ;
    if (kBoolTrue == test_29) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18896, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 461)) ;
      }
    }
  }
  GALGAS_stringlist temp_30 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 473)) ;
  GALGAS_stringlist var_linkOptionForLinkingFrameworkWithTool_23494 = temp_30 ;
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 474)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_31) {
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = GALGAS_bool (ComparisonKind::notEqual, var_SDK_20104.objectCompare (GALGAS_string ("macosx"))).boolEnum () ;
        if (kBoolTrue == test_32) {
          var_linkOptionForLinkingFrameworkWithTool_23494.addAssign_operation (GALGAS_string ("-isysroot")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 476)) ;
          var_linkOptionForLinkingFrameworkWithTool_23494.addAssign_operation (GALGAS_string ("/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/").add_operation (var_SDK_20104, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477)).add_operation (GALGAS_string (".sdk"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477)) ;
        }
      }
      cEnumerator_stringlist enumerator_23839 (constinArgument_inFrameworkToolFileList, EnumerationOrder::up) ;
      while (enumerator_23839.hasCurrentObject ()) {
        var_linkOptionForLinkingFrameworkWithTool_23494.addAssign_operation (GALGAS_string ("-framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 480)) ;
        var_linkOptionForLinkingFrameworkWithTool_23494.addAssign_operation (enumerator_23839.current_mValue (HERE).getter_stringByDeletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 481))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 481)) ;
        enumerator_23839.gotoNextObject () ;
      }
    }
  }
  GALGAS_stringlist temp_33 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 485)) ;
  GALGAS_stringlist var_handCodedSourceToolFileList_24074 = temp_33 ;
  cEnumerator_stringlist enumerator_24115 (constinArgument_inHandCodedSourceToolFileList, EnumerationOrder::up) ;
  while (enumerator_24115.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = GALGAS_bool (ComparisonKind::notEqual, enumerator_24115.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 487)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
      if (kBoolTrue == test_34) {
        var_handCodedSourceToolFileList_24074.addAssign_operation (enumerator_24115.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 488))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 488)) ;
      }
    }
    enumerator_24115.gotoNextObject () ;
  }
  GALGAS_string var_jsonFileListContents_24271 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, constinArgument_inHandCodedSourceDirectorySet, var_handCodedSourceToolFileList_24074, var_toolCppFileList_17794, var_linkOptionForLinkingFrameworkWithTool_23494.add_operation (constinArgument_inHandCodedLinkToolFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 495)), var_libpmPath_18896, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 491))) ;
  GALGAS_string var_jsonFileListPath_24570 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 499)) ;
  GALGAS_bool joker_24716 ; // Joker input parameter
  var_jsonFileListContents_24271.method_writeToFileWhenDifferentContents (var_jsonFileListPath_24570, joker_24716, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 500)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 501)) ;
  enumGalgasBool test_35 = kBoolTrue ;
  if (kBoolTrue == test_35) {
    test_35 = GALGAS_bool (ComparisonKind::notEqual, var_SDK_20104.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_35) {
      GALGAS_string var_dir_24836 = var_projectDirectory_17360.add_operation (GALGAS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 504)) ;
      var_dir_24836.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 505)) ;
      GALGAS_string var_applicationBundleBase_24936 ;
      const cMapElement_projectQualifiedFeatureMap * objectArray_24962 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("applicationBundleBase")) ;
      if (nullptr != objectArray_24962) {
          macroValidSharedObject (objectArray_24962, cMapElement_projectQualifiedFeatureMap) ;
        var_applicationBundleBase_24936 = objectArray_24962->mProperty_mFeatureValue.readProperty_string () ;
      }else{
        var_applicationBundleBase_24936 = GALGAS_string ("fr.irccyn") ;
      }
      GALGAS_string var_InfoPlistContents_25145 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_24936, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 513))) ;
      GALGAS_bool joker_25455 ; // Joker input parameter
      var_InfoPlistContents_25145.method_writeToFileWhenDifferentContents (var_dir_24836.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 520)), joker_25455, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 520)) ;
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = var_dir_24836.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).boolEnum () ;
        if (kBoolTrue == test_36) {
          GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523))).method_writeToExecutableFile (var_dir_24836.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523)) ;
        }
      }
      var_dir_24836.add_operation (GALGAS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 526)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 526)) ;
      GALGAS_string var_InfoPlist_5F_strings_5F_path_25712 = var_dir_24836.add_operation (GALGAS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 527)) ;
      GALGAS_bool joker_25928 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_25712, joker_25928, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528)) ;
      GALGAS_string var_Credits_5F_rtf_5F_path_25940 = var_dir_24836.add_operation (GALGAS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 529)) ;
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = var_Credits_5F_rtf_5F_path_25940.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 530)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 530)).boolEnum () ;
        if (kBoolTrue == test_37) {
          GALGAS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_25940, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 531)) ;
        }
      }
      GALGAS_string var_userResourceDir_26242 = var_projectDirectory_17360.add_operation (GALGAS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 534)) ;
      var_userResourceDir_26242.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 535)) ;
      GALGAS_stringlist temp_38 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 536)) ;
      temp_38.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("icns"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 536)) ;
      GALGAS_stringlist var_extensionList_26366 = temp_38 ;
      GALGAS_stringlist var_resourceFiles_26407 = var_userResourceDir_26242.getter_regularFilesWithExtensions (GALGAS_bool (false), var_extensionList_26366 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 537)) ;
      GALGAS_string var_newIntermediateFilePath_26518 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 539)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 540)) ;
      GALGAS_XcodeProjectDescriptor var_xcodeProject_26772 = GALGAS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
      var_xcodeProject_26772.mProperty_mApplicationBundleName = var_applicationBundleBase_24936 ;
      var_xcodeProject_26772.mProperty_mProjectName = constinArgument_inTargetName ;
      GALGAS_string var_headerSearchPaths_26931 = GALGAS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 545)).add_operation (GALGAS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (GALGAS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)).add_operation (GALGAS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 548)) ;
      cEnumerator_stringset enumerator_27151 (constinArgument_inHandCodedSourceDirectorySet, EnumerationOrder::up) ;
      while (enumerator_27151.hasCurrentObject ()) {
        var_headerSearchPaths_26931.plusAssign_operation(GALGAS_string (", \"").add_operation (enumerator_27151.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)) ;
        enumerator_27151.gotoNextObject () ;
      }
      var_headerSearchPaths_26931.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 552)) ;
      GALGAS_stringlist temp_39 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 555)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\""), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 556)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 557)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 558)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_COMMA = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 559)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 560)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_EMPTY_BODY = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 561)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_INFINITE_RECURSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 562)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 563)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 564)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 565)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 566)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 567)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 568)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_UNREACHABLE_CODE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 570)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 571)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_NO_COMMON_BLOCKS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 572)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 573)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 574)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 575)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 576)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 577)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 578)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 579)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 580)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 581)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 582)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 583)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 584)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 585)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 586)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 587)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 588)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 589)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 590)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 591)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 592)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_SHADOW = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 594)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 595)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 596)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 597)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 598)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 599)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 600)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 601)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 602)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_headerSearchPaths_26931, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 603)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_20104, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)) ;
      temp_39.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      GALGAS_stringlist var_xcodeSettingList_27329 = temp_39 ;
      enumGalgasBool test_40 = kBoolTrue ;
      if (kBoolTrue == test_40) {
        test_40 = GALGAS_bool (ComparisonKind::equal, var_SDK_20104.objectCompare (GALGAS_string ("macosx10.6"))).boolEnum () ;
        if (kBoolTrue == test_40) {
          var_xcodeSettingList_27329.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 608)) ;
          var_xcodeSettingList_27329.addAssign_operation (GALGAS_string ("GCC_ENABLE_OBJC_GC = required")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 609)) ;
        }
      }
      if (kBoolFalse == test_40) {
        var_xcodeSettingList_27329.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 611)) ;
      }
      enumGalgasBool test_41 = kBoolTrue ;
      if (kBoolTrue == test_41) {
        test_41 = GALGAS_bool (ComparisonKind::notEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_41) {
          var_xcodeSettingList_27329.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_26772, var_xcodeSettingList_27329, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 616)) ;
      }
      GALGAS_stringlist temp_42 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 618)) ;
      GALGAS_stringlist var_m_5F_HandCodedSourceFileRefForAppList_30534 = temp_42 ;
      GALGAS_stringlist temp_43 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 619)) ;
      GALGAS_stringlist var_m_5F_HandCodedResourceFileRefForAppList_30595 = temp_43 ;
      enumGalgasBool test_44 = kBoolTrue ;
      if (kBoolTrue == test_44) {
        test_44 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 620)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_44) {
          GALGAS_stringlist joker_30890 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_30914 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_30995 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_31020 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_string var_groupRef_31138 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Hand Coded Sources (App)"), GALGAS_string ("../"), GALGAS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 624)), joker_30890, joker_30914, var_m_5F_HandCodedSourceFileRefForAppList_30534, joker_30995, joker_31020, var_m_5F_HandCodedResourceFileRefForAppList_30595, var_groupRef_31138, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 621)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_groupRef_31138, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 633)) ;
          }
        }
      }
      GALGAS_stringlist temp_45 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 636)) ;
      GALGAS_stringlist var_appFrameworksFileRefList_31285 = temp_45 ;
      enumGalgasBool test_46 = kBoolTrue ;
      if (kBoolTrue == test_46) {
        test_46 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 637)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_46) {
          GALGAS_stringlist joker_31572 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_31596 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_31622 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_31646 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_31725 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_string var_frameworkGroupRef_31779 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Frameworks (App)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::class_func_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 641)), joker_31572, joker_31596, joker_31622, joker_31646, var_appFrameworksFileRefList_31285, joker_31725, var_frameworkGroupRef_31779, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 638)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_frameworkGroupRef_31779, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 650)) ;
          }
        }
      }
      GALGAS_stringlist temp_47 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 653)) ;
      GALGAS_stringlist var_buildCFileRefListForTool_31927 = temp_47 ;
      GALGAS_stringlist temp_48 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 654)) ;
      GALGAS_stringlist var_buildCppFileRefListForTool_31978 = temp_48 ;
      GALGAS_stringlist temp_49 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 655)) ;
      GALGAS_stringlist var_m_5F_FileRefList_32031 = temp_49 ;
      GALGAS_stringlist temp_50 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 656)) ;
      GALGAS_stringlist var_mm_5F_FileRefList_32071 = temp_50 ;
      GALGAS_stringlist temp_51 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 657)) ;
      GALGAS_stringlist var_frameworksFileRefList_32112 = temp_51 ;
      GALGAS_stringlist temp_52 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 658)) ;
      GALGAS_stringlist var_resourceFileBuildRefs_32160 = temp_52 ;
      enumGalgasBool test_53 = kBoolTrue ;
      if (kBoolTrue == test_53) {
        test_53 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 660)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_53) {
          GALGAS_string var_groupRef_32773 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Hand Coded Sources (Tool)"), GALGAS_string ("../"), GALGAS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 664)), var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_32773, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 661)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_groupRef_32773, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 673)) ;
          }
        }
      }
      GALGAS_stringlist temp_54 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 676)) ;
      GALGAS_stringlist var_toolFrameworksFileRefList_32921 = temp_54 ;
      enumGalgasBool test_55 = kBoolTrue ;
      if (kBoolTrue == test_55) {
        test_55 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 677)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_55) {
          GALGAS_stringlist joker_33211 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_33235 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_33261 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_33285 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_stringlist joker_33364 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_string var_frameworkGroupRef_33417 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Frameworks (Tool)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::class_func_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 681)), joker_33211, joker_33235, joker_33261, joker_33285, var_toolFrameworksFileRefList_32921, joker_33364, var_frameworkGroupRef_33417, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 678)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_frameworkGroupRef_33417, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 690)) ;
          }
        }
      }
      GALGAS_string var_groupRef_34090 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Generated by GALGAS"), GALGAS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 695)).add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 695)), GALGAS_stringset::class_func_setWithStringList (constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696)), var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 693)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 705)) ;
      }
      GALGAS_stringlist temp_56 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 706)) ;
      GALGAS_stringlist var_libpmReferenceGroupList_34187 = temp_56 ;
      {
      GALGAS_stringset temp_57 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 720)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagramRelationConfiguration.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 712)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagramRelationConfiguration.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 713)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagramRelation.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 714)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagramRelation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 715)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagramRelationSingleType.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 716)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagramRelationSingleType.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 717)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagram-node.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 718)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagram.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 719)) ;
      temp_57.enterElement (GALGAS_string ("BinaryDecisionDiagram.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 720)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Binary Decision Diagrams"), GALGAS_string ("bdd"), temp_57, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 708)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 730)) ;
      {
      GALGAS_stringset temp_58 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 772)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-add.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 736)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-bit.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 737)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-chunk-operations.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 738)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-constructors.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 739)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-conversions.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 740)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-divide.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 741)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-logic-operations.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 742)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-multiply.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 743)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-print.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 744)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-shifts.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 745)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-subtract.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 746)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned-utilities.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 747)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 748)) ;
      temp_58.enterElement (GALGAS_string ("BigSigned.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 749)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-add.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 750)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-bit.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 751)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-chunk-operations.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 752)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-constructors.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 753)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-conversions.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 754)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-divide-naive.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 755)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-divide.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 756)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-logic-operations.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 757)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-multiply.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 758)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-print.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 759)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-shifts.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 760)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-subtract.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 761)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned-utilities.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 762)) ;
      temp_58.enterElement (GALGAS_string ("BigUnsigned.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 763)) ;
      temp_58.enterElement (GALGAS_string ("ChunkSelectSize.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 764)) ;
      temp_58.enterElement (GALGAS_string ("ChunkSharedArray.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 765)) ;
      temp_58.enterElement (GALGAS_string ("ChunkSharedArray.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 766)) ;
      temp_58.enterElement (GALGAS_string ("UInt128.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 767)) ;
      temp_58.enterElement (GALGAS_string ("UInt128.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 768)) ;
      temp_58.enterElement (GALGAS_string ("chunk-U16.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 769)) ;
      temp_58.enterElement (GALGAS_string ("chunk-U32.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 770)) ;
      temp_58.enterElement (GALGAS_string ("chunk-U64.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 771)) ;
      temp_58.enterElement (GALGAS_string ("chunk-U8.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 772)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Big Integers"), GALGAS_string ("big-integers"), temp_58, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 732)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 782)) ;
      {
      GALGAS_stringset temp_59 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 792)) ;
      temp_59.enterElement (GALGAS_string ("main.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 788)) ;
      temp_59.enterElement (GALGAS_string ("PMCancelButtonForPanel.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 789)) ;
      temp_59.enterElement (GALGAS_string ("PMCancelButtonForPanel.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 790)) ;
      temp_59.enterElement (GALGAS_string ("PMOkButtonForPanel.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 791)) ;
      temp_59.enterElement (GALGAS_string ("PMOkButtonForPanel.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 792)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Cocoa Utilities"), GALGAS_string ("cocoa_utilities"), temp_59, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 784)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 802)) ;
      {
      GALGAS_stringset temp_60 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 858)) ;
      temp_60.enterElement (GALGAS_string ("Base.lproj/OC_GGS_Document.xib"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 808)) ;
      temp_60.enterElement (GALGAS_string ("Base.lproj/PMDebug.xib"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 809)) ;
      temp_60.enterElement (GALGAS_string ("Base.lproj/MainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 810)) ;
      temp_60.enterElement (GALGAS_string ("enterDefaultCommandLineOptions.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 811)) ;
      temp_60.enterElement (GALGAS_string ("enterDefaultCommandLineOptions.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 812)) ;
      temp_60.enterElement (GALGAS_string ("F_CocoaWrapperForGalgas.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 813)) ;
      temp_60.enterElement (GALGAS_string ("I_Stop.tiff"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 814)) ;
      temp_60.enterElement (GALGAS_string ("NSString+identifierRepresentation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 815)) ;
      temp_60.enterElement (GALGAS_string ("NSString+identifierRepresentation.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 816)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_ApplicationDelegate.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 817)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_ApplicationDelegate.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 818)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_BuildTask.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 819)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_BuildTask.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 820)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_ColorTransformer.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 821)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_ColorTransformer.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 822)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_CommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 823)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_CommandLineOption.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 824)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_Document.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 825)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_Document.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 826)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_DocumentData.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 827)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_DocumentData.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 828)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 829)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 830)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_RulerViewForTextView.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 831)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_RulerViewForTextView.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 832)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_Scroller.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 833)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_Scroller.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 834)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_TextDisplayDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 835)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_TextDisplayDescriptor.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 836)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_TextSyntaxColoring.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 837)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_TextSyntaxColoring.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 838)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_TextView.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 839)) ;
      temp_60.enterElement (GALGAS_string ("OC_GGS_TextView.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 840)) ;
      temp_60.enterElement (GALGAS_string ("OC_Lexique.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 841)) ;
      temp_60.enterElement (GALGAS_string ("OC_Lexique.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 842)) ;
      temp_60.enterElement (GALGAS_string ("OC_Token.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 843)) ;
      temp_60.enterElement (GALGAS_string ("OC_Token.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 844)) ;
      temp_60.enterElement (GALGAS_string ("PMDebug.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 845)) ;
      temp_60.enterElement (GALGAS_string ("PMDebug.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 846)) ;
      temp_60.enterElement (GALGAS_string ("PMFontButton.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 847)) ;
      temp_60.enterElement (GALGAS_string ("PMFontButton.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 848)) ;
      temp_60.enterElement (GALGAS_string ("PMIssueDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 849)) ;
      temp_60.enterElement (GALGAS_string ("PMIssueDescriptor.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 850)) ;
      temp_60.enterElement (GALGAS_string ("PMIssueInRuler.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 851)) ;
      temp_60.enterElement (GALGAS_string ("PMIssueInRuler.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 852)) ;
      temp_60.enterElement (GALGAS_string ("PMSearchResultDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 853)) ;
      temp_60.enterElement (GALGAS_string ("PMSearchResultDescriptor.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 854)) ;
      temp_60.enterElement (GALGAS_string ("PMTableViewHandlesContextualMenu.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 855)) ;
      temp_60.enterElement (GALGAS_string ("PMTableViewHandlesContextualMenu.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 856)) ;
      temp_60.enterElement (GALGAS_string ("PMUndoManager.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 857)) ;
      temp_60.enterElement (GALGAS_string ("PMUndoManager.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 858)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Cocoa Objc GALGAS"), GALGAS_string ("cocoa_objc_galgas"), temp_60, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 804)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 868)) ;
      {
      GALGAS_stringset temp_61 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 876)) ;
      temp_61.enterElement (GALGAS_string ("TC_Array.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 874)) ;
      temp_61.enterElement (GALGAS_string ("TC_UniqueArray.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 875)) ;
      temp_61.enterElement (GALGAS_string ("TC_UniqueArray2.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 876)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Generic Arraies"), GALGAS_string ("generic-arraies"), temp_61, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 870)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 886)) ;
      {
      GALGAS_stringset temp_62 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 907)) ;
      temp_62.enterElement (GALGAS_string ("F_mainForLIBPM.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 892)) ;
      temp_62.enterElement (GALGAS_string ("F_mainForLIBPM.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 893)) ;
      temp_62.enterElement (GALGAS_string ("builtin-command-line-options.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 894)) ;
      temp_62.enterElement (GALGAS_string ("builtin-command-line-options.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 895)) ;
      temp_62.enterElement (GALGAS_string ("analyzeCommandLineOptions.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 896)) ;
      temp_62.enterElement (GALGAS_string ("analyzeCommandLineOptions.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 897)) ;
      temp_62.enterElement (GALGAS_string ("AbstractCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 898)) ;
      temp_62.enterElement (GALGAS_string ("AbstractCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 899)) ;
      temp_62.enterElement (GALGAS_string ("BoolCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 900)) ;
      temp_62.enterElement (GALGAS_string ("BoolCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 901)) ;
      temp_62.enterElement (GALGAS_string ("UIntCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 902)) ;
      temp_62.enterElement (GALGAS_string ("UIntCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 903)) ;
      temp_62.enterElement (GALGAS_string ("StringCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 904)) ;
      temp_62.enterElement (GALGAS_string ("StringCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 905)) ;
      temp_62.enterElement (GALGAS_string ("StringListCommandLineOption.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 906)) ;
      temp_62.enterElement (GALGAS_string ("StringListCommandLineOption.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 907)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Command line Interface"), GALGAS_string ("command_line_interface"), temp_62, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 888)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 917)) ;
      {
      GALGAS_stringset temp_63 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 932)) ;
      temp_63.enterElement (GALGAS_string ("FileManager.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 923)) ;
      temp_63.enterElement (GALGAS_string ("FileManager.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 924)) ;
      temp_63.enterElement (GALGAS_string ("AbstractFileHandle.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 925)) ;
      temp_63.enterElement (GALGAS_string ("AbstractFileHandle.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 926)) ;
      temp_63.enterElement (GALGAS_string ("BinaryFileWrite.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 927)) ;
      temp_63.enterElement (GALGAS_string ("BinaryFileWrite.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 928)) ;
      temp_63.enterElement (GALGAS_string ("TextFileWrite.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 929)) ;
      temp_63.enterElement (GALGAS_string ("TextFileWrite.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 930)) ;
      temp_63.enterElement (GALGAS_string ("HTMLFileWrite.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 931)) ;
      temp_63.enterElement (GALGAS_string ("HTMLFileWrite.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 932)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("File"), GALGAS_string ("files"), temp_63, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 919)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 942)) ;
      {
      GALGAS_stringset temp_64 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1046)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_reference_class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 948)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_reference_class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 949)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_value_class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 950)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_value_class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 951)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_enumAssociatedValues.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 952)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_enumAssociatedValues.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 953)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_graph.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 954)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_graph.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 955)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_list.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 956)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_list.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 957)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_map.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 958)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_map.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 959)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_root.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 960)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_root.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 961)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_sortedlist.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 962)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_sortedlist.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 963)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_weak_reference.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 964)) ;
      temp_64.enterElement (GALGAS_string ("AC_GALGAS_weak_reference.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 965)) ;
      temp_64.enterElement (GALGAS_string ("acPtr_class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 966)) ;
      temp_64.enterElement (GALGAS_string ("acPtr_class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 967)) ;
      temp_64.enterElement (GALGAS_string ("acStrongPtr_class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 968)) ;
      temp_64.enterElement (GALGAS_string ("acStrongPtr_class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 969)) ;
      temp_64.enterElement (GALGAS_string ("cPtr_weakReference_proxy.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 970)) ;
      temp_64.enterElement (GALGAS_string ("cPtr_weakReference_proxy.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 971)) ;
      temp_64.enterElement (GALGAS_string ("Compiler.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 972)) ;
      temp_64.enterElement (GALGAS_string ("Compiler.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 973)) ;
      temp_64.enterElement (GALGAS_string ("C_galgas_class_inspector.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 974)) ;
      temp_64.enterElement (GALGAS_string ("C_galgas_class_inspector.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 975)) ;
      temp_64.enterElement (GALGAS_string ("C_galgas_CLI_Options.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 976)) ;
      temp_64.enterElement (GALGAS_string ("C_galgas_CLI_Options.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 977)) ;
      GALGAS_string temp_65 ;
      const enumGalgasBool test_66 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_66) {
        temp_65 = GALGAS_string ("C_galgas_verbose_option.cpp") ;
      }else if (kBoolFalse == test_66) {
        temp_65 = GALGAS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_64.enterElement (temp_65, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 978)) ;
      GALGAS_string temp_67 ;
      const enumGalgasBool test_68 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_68) {
        temp_67 = GALGAS_string ("C_galgas_verbose_option.h") ;
      }else if (kBoolFalse == test_68) {
        temp_67 = GALGAS_string ("C_galgas_quiet_option.h") ;
      }
      temp_64.enterElement (temp_67, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 979)) ;
      temp_64.enterElement (GALGAS_string ("F_verbose_output.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 980)) ;
      temp_64.enterElement (GALGAS_string ("C_galgas_function_descriptor.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 981)) ;
      temp_64.enterElement (GALGAS_string ("C_galgas_function_descriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 982)) ;
      temp_64.enterElement (GALGAS_string ("galgas-input-output.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 983)) ;
      temp_64.enterElement (GALGAS_string ("galgas-input-output.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 984)) ;
      temp_64.enterElement (GALGAS_string ("C_galgas_type_descriptor.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 985)) ;
      temp_64.enterElement (GALGAS_string ("C_galgas_type_descriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 986)) ;
      temp_64.enterElement (GALGAS_string ("IssueWithFixIt.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 987)) ;
      temp_64.enterElement (GALGAS_string ("IssueWithFixIt.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 988)) ;
      temp_64.enterElement (GALGAS_string ("Lexique-parsing.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 989)) ;
      temp_64.enterElement (GALGAS_string ("Lexique.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 990)) ;
      temp_64.enterElement (GALGAS_string ("Lexique.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 991)) ;
      temp_64.enterElement (GALGAS_string ("LocationInSource.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 992)) ;
      temp_64.enterElement (GALGAS_string ("LocationInSource.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 993)) ;
      temp_64.enterElement (GALGAS_string ("SourceTextInString.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 994)) ;
      temp_64.enterElement (GALGAS_string ("SourceTextInString.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 995)) ;
      temp_64.enterElement (GALGAS_string ("capCollectionElement.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 996)) ;
      temp_64.enterElement (GALGAS_string ("capCollectionElement.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 997)) ;
      temp_64.enterElement (GALGAS_string ("capCollectionElementArray.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 998)) ;
      temp_64.enterElement (GALGAS_string ("capCollectionElementArray.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 999)) ;
      temp_64.enterElement (GALGAS_string ("capSortedListElement.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1000)) ;
      temp_64.enterElement (GALGAS_string ("capSortedListElement.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1001)) ;
      temp_64.enterElement (GALGAS_string ("cCollectionElement.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1002)) ;
      temp_64.enterElement (GALGAS_string ("cCollectionElement.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1003)) ;
      temp_64.enterElement (GALGAS_string ("cEnumerator_range.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1004)) ;
      temp_64.enterElement (GALGAS_string ("cEnumerator_range.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1005)) ;
      temp_64.enterElement (GALGAS_string ("cGenericAbstractEnumerator.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1006)) ;
      temp_64.enterElement (GALGAS_string ("cGenericAbstractEnumerator.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1007)) ;
      temp_64.enterElement (GALGAS_string ("cIndexingDictionary.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1008)) ;
      temp_64.enterElement (GALGAS_string ("cIndexingDictionary.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1009)) ;
      temp_64.enterElement (GALGAS_string ("cIssueDescriptor.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1010)) ;
      temp_64.enterElement (GALGAS_string ("cIssueDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1011)) ;
      temp_64.enterElement (GALGAS_string ("cLexiqueIntrospection.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1012)) ;
      temp_64.enterElement (GALGAS_string ("cLexiqueIntrospection.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1013)) ;
      temp_64.enterElement (GALGAS_string ("cObjectArray.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1014)) ;
      temp_64.enterElement (GALGAS_string ("cObjectArray.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1015)) ;
      temp_64.enterElement (GALGAS_string ("cProductionNameDescriptor.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      temp_64.enterElement (GALGAS_string ("cPtr_object.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1017)) ;
      temp_64.enterElement (GALGAS_string ("cPtr_object.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1018)) ;
      temp_64.enterElement (GALGAS_string ("cSortedListElement.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1019)) ;
      temp_64.enterElement (GALGAS_string ("cSortedListElement.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1020)) ;
      temp_64.enterElement (GALGAS_string ("TemplateDelimiter.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1021)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_application.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1022)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_binaryset.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1023)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_bigint.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1024)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_bool.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1025)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_char.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1026)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_data.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1027)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_double.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1028)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_filewrapper.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1029)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_function.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1030)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_location.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1031)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_object.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1032)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_sint_36__34_.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1033)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_sint.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1034)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_string.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1035)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_string-getters.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1036)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_stringset.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1037)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_timer.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1038)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_type.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1039)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_uint_36__34_.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1040)) ;
      temp_64.enterElement (GALGAS_string ("GALGAS_uint.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1041)) ;
      temp_64.enterElement (GALGAS_string ("scanner_actions.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1042)) ;
      temp_64.enterElement (GALGAS_string ("scanner_actions.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1043)) ;
      temp_64.enterElement (GALGAS_string ("ComparisonResult.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1044)) ;
      temp_64.enterElement (GALGAS_string ("ComparisonKind.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1045)) ;
      temp_64.enterElement (GALGAS_string ("EnumerationOrder.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1046)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Galgas"), GALGAS_string ("galgas"), temp_64, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 944)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1056)) ;
      {
      GALGAS_stringset temp_69 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1067)) ;
      temp_69.enterElement (GALGAS_string ("AbstractOutputStream.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1062)) ;
      temp_69.enterElement (GALGAS_string ("AbstractOutputStream.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1063)) ;
      temp_69.enterElement (GALGAS_string ("ConsoleOut.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1064)) ;
      temp_69.enterElement (GALGAS_string ("ConsoleOut.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1065)) ;
      temp_69.enterElement (GALGAS_string ("ColoredConsole.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1066)) ;
      temp_69.enterElement (GALGAS_string ("ColoredConsole.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1067)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Streams"), GALGAS_string ("streams"), temp_69, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1058)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1077)) ;
      {
      GALGAS_stringset temp_70 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      temp_70.enterElement (GALGAS_string ("String-class-getters.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1083)) ;
      temp_70.enterElement (GALGAS_string ("String-class.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1084)) ;
      temp_70.enterElement (GALGAS_string ("String-class.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1085)) ;
      temp_70.enterElement (GALGAS_string ("cUnicodeData.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1086)) ;
      temp_70.enterElement (GALGAS_string ("string_encodings.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1087)) ;
      temp_70.enterElement (GALGAS_string ("unicode_character_base.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1088)) ;
      temp_70.enterElement (GALGAS_string ("unicode_character_cpp.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1089)) ;
      temp_70.enterElement (GALGAS_string ("unicode_character_cpp.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1090)) ;
      temp_70.enterElement (GALGAS_string ("unicode_character_implementation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1091)) ;
      temp_70.enterElement (GALGAS_string ("unicode_character_m.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1092)) ;
      temp_70.enterElement (GALGAS_string ("unicode_character_m.m"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1093)) ;
      temp_70.enterElement (GALGAS_string ("print.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1094)) ;
      temp_70.enterElement (GALGAS_string ("print.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Strings"), GALGAS_string ("strings"), temp_70, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1079)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1105)) ;
      {
      GALGAS_stringset temp_71 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1114)) ;
      temp_71.enterElement (GALGAS_string ("DateTime.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1111)) ;
      temp_71.enterElement (GALGAS_string ("DateTime.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1112)) ;
      temp_71.enterElement (GALGAS_string ("Timer.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1113)) ;
      temp_71.enterElement (GALGAS_string ("Timer.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1114)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Time"), GALGAS_string ("time"), temp_71, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1107)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1124)) ;
      {
      GALGAS_stringset temp_72 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1161)) ;
      temp_72.enterElement (GALGAS_string ("basic-allocation.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1130)) ;
      temp_72.enterElement (GALGAS_string ("basic-allocation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1131)) ;
      temp_72.enterElement (GALGAS_string ("U8Data.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1132)) ;
      temp_72.enterElement (GALGAS_string ("U8Data.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1133)) ;
      temp_72.enterElement (GALGAS_string ("DirectedGraph.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1134)) ;
      temp_72.enterElement (GALGAS_string ("DirectedGraph.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1135)) ;
      temp_72.enterElement (GALGAS_string ("PrologueEpilogue.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1136)) ;
      temp_72.enterElement (GALGAS_string ("PrologueEpilogue.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1137)) ;
      temp_72.enterElement (GALGAS_string ("SharedObject.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1138)) ;
      temp_72.enterElement (GALGAS_string ("SharedObject.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1139)) ;
      temp_72.enterElement (GALGAS_string ("UInt32Set.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1140)) ;
      temp_72.enterElement (GALGAS_string ("UInt32Set.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1141)) ;
      temp_72.enterElement (GALGAS_string ("cpp-allocation.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1142)) ;
      temp_72.enterElement (GALGAS_string ("cpp-allocation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1143)) ;
      temp_72.enterElement (GALGAS_string ("F_DisplayException.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1144)) ;
      temp_72.enterElement (GALGAS_string ("F_DisplayException.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1145)) ;
      temp_72.enterElement (GALGAS_string ("F_GetPrime.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1146)) ;
      temp_72.enterElement (GALGAS_string ("F_GetPrime.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1147)) ;
      temp_72.enterElement (GALGAS_string ("M_machine.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1148)) ;
      temp_72.enterElement (GALGAS_string ("M_SourceLocation.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1149)) ;
      temp_72.enterElement (GALGAS_string ("md5.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1150)) ;
      temp_72.enterElement (GALGAS_string ("md5.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1151)) ;
      temp_72.enterElement (GALGAS_string ("SHA256.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1152)) ;
      temp_72.enterElement (GALGAS_string ("SHA256.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1153)) ;
      temp_72.enterElement (GALGAS_string ("macroAssert.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1154)) ;
      temp_72.enterElement (GALGAS_string ("macroAssert.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1155)) ;
      temp_72.enterElement (GALGAS_string ("MF_MemoryControl.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1156)) ;
      temp_72.enterElement (GALGAS_string ("MF_MemoryControl.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1157)) ;
      temp_72.enterElement (GALGAS_string ("switch-fallthrough.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1158)) ;
      temp_72.enterElement (GALGAS_string ("TF_Swap.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1159)) ;
      temp_72.enterElement (GALGAS_string ("galgas-random.cpp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1160)) ;
      temp_72.enterElement (GALGAS_string ("galgas-random.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1161)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Utilities"), GALGAS_string ("utilities"), temp_72, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_groupRef_34090, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1126)) ;
      }
      var_libpmReferenceGroupList_34187.addAssign_operation (var_groupRef_34090  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1171)) ;
      GALGAS_string var_libpmGroupRef_49548 ;
      {
      extensionSetter_addGroup (var_xcodeProject_26772, GALGAS_string ("libpm"), GALGAS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)).add_operation (GALGAS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)), var_libpmReferenceGroupList_34187, var_libpmGroupRef_49548, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_libpmGroupRef_49548, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1174)) ;
      }
      GALGAS_string var_resourcesGroupRef_50060 ;
      {
      GALGAS_stringset temp_73 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1179)) ;
      temp_73.enterElement (GALGAS_string ("Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1179)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Resources"), GALGAS_string ("."), temp_73, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_resourcesGroupRef_50060, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1176)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_resourcesGroupRef_50060, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1188)) ;
      }
      GALGAS_string var_userResourcesGroupRef_50637 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("User Resources"), GALGAS_string ("userResources"), GALGAS_stringset::class_func_setWithStringList (var_resourceFiles_26407  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1193)), var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_userResourcesGroupRef_50637, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1190)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_userResourcesGroupRef_50637, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1202)) ;
      }
      GALGAS_string var_frameworkGroupRef_51262 ;
      {
      GALGAS_stringset temp_74 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1209)) ;
      temp_74.enterElement (GALGAS_string ("AppKit.framework"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1208)) ;
      temp_74.enterElement (GALGAS_string ("Cocoa.framework"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1209)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26772, GALGAS_string ("Frameworks for App"), GALGAS_string ("/System/Library/Frameworks"), temp_74, var_buildCFileRefListForTool_31927, var_buildCppFileRefListForTool_31978, var_m_5F_FileRefList_32031, var_mm_5F_FileRefList_32071, var_frameworksFileRefList_32112, var_resourceFileBuildRefs_32160, var_frameworkGroupRef_51262, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1204)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26772, var_frameworkGroupRef_51262, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1219)) ;
      }
      GALGAS_stringlist var_codeSigningSettingList_51406 ;
      enumGalgasBool test_75 = kBoolTrue ;
      if (kBoolTrue == test_75) {
        test_75 = GALGAS_bool (ComparisonKind::equal, var_macCodeSign_18070.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_75) {
          GALGAS_stringlist temp_76 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1223)) ;
          temp_76.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CODE_SIGN_IDENTITY = \"-\""), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1223)) ;
          var_codeSigningSettingList_51406 = temp_76 ;
        }
      }
      if (kBoolFalse == test_75) {
        GALGAS_stringlist var_components_51556 = var_macCodeSign_18070.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1225)) ;
        enumGalgasBool test_77 = kBoolTrue ;
        if (kBoolTrue == test_77) {
          test_77 = GALGAS_bool (ComparisonKind::notEqual, var_components_51556.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1226)).objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
          if (kBoolTrue == test_77) {
            TC_Array <FixItDescription> fixItArray78 ;
            inCompiler->emitSemanticError (var_macCodeSign_18070.readProperty_location (), GALGAS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray78  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1227)) ;
            var_codeSigningSettingList_51406.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_77) {
          enumGalgasBool test_79 = kBoolTrue ;
          if (kBoolTrue == test_79) {
            test_79 = GALGAS_bool (ComparisonKind::equal, var_components_51556.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1228)).objectCompare (GALGAS_string ("MacDeveloper"))).boolEnum () ;
            if (kBoolTrue == test_79) {
              GALGAS_stringlist temp_80 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)) ;
              temp_80.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\""), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1230)) ;
              temp_80.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_51556.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)) ;
              var_codeSigningSettingList_51406 = temp_80 ;
            }
          }
          if (kBoolFalse == test_79) {
            enumGalgasBool test_81 = kBoolTrue ;
            if (kBoolTrue == test_81) {
              test_81 = GALGAS_bool (ComparisonKind::equal, var_components_51556.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1233)).objectCompare (GALGAS_string ("Certificate"))).boolEnum () ;
              if (kBoolTrue == test_81) {
                GALGAS_stringlist temp_82 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)) ;
                temp_82.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_51556.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)) ;
                var_codeSigningSettingList_51406 = temp_82 ;
              }
            }
            if (kBoolFalse == test_81) {
              TC_Array <FixItDescription> fixItArray83 ;
              inCompiler->emitSemanticError (var_macCodeSign_18070.readProperty_location (), GALGAS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray83  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1236)) ;
              var_codeSigningSettingList_51406.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GALGAS_stringlist temp_84 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)) ;
      temp_84.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 2"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1241)) ;
      temp_84.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1242)) ;
      temp_84.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1243)) ;
      temp_84.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_24936, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)).add_operation (GALGAS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)) ;
      GALGAS_stringlist var_settingList_52449 = temp_84.add_operation (var_codeSigningSettingList_51406, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1245)) ;
      enumGalgasBool test_85 = kBoolTrue ;
      if (kBoolTrue == test_85) {
        test_85 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1246)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_85) {
          GALGAS_string var_s_52832 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_52865 (constinArgument_inHandCodedLinkToolFileList, EnumerationOrder::up) ;
          while (enumerator_52865.hasCurrentObject ()) {
            var_s_52832.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_52865.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)) ;
            if (enumerator_52865.hasNextObject ()) {
              var_s_52832.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1250)) ;
            }
            enumerator_52865.gotoNextObject () ;
          }
          var_s_52832.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1252)) ;
          var_settingList_52449.addAssign_operation (var_s_52832  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1253)) ;
        }
      }
      GALGAS_string var_releaseTargetRef_53342 ;
      GALGAS_string var_releaseProductFileRef_53385 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_26772, constinArgument_inTargetName.add_operation (GALGAS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1256)), constinArgument_inTargetName, var_buildCFileRefListForTool_31927.add_operation (var_buildCppFileRefListForTool_31978, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1258)).add_operation (var_mm_5F_FileRefList_32071, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1258)), var_toolFrameworksFileRefList_32921, var_settingList_52449, var_releaseTargetRef_53342, var_releaseProductFileRef_53385, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1255)) ;
      }
      GALGAS_stringlist temp_86 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)) ;
      temp_86.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1266)) ;
      temp_86.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1267)) ;
      temp_86.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1268)) ;
      temp_86.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1269)) ;
      temp_86.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_24936, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)).add_operation (GALGAS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)) ;
      var_settingList_52449 = temp_86.add_operation (var_codeSigningSettingList_51406, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1271)) ;
      enumGalgasBool test_87 = kBoolTrue ;
      if (kBoolTrue == test_87) {
        test_87 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1272)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_87) {
          GALGAS_string var_s_53865 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_53898 (constinArgument_inHandCodedLinkToolFileList, EnumerationOrder::up) ;
          while (enumerator_53898.hasCurrentObject ()) {
            var_s_53865.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_53898.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)) ;
            if (enumerator_53898.hasNextObject ()) {
              var_s_53865.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1276)) ;
            }
            enumerator_53898.gotoNextObject () ;
          }
          var_s_53865.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1278)) ;
          var_settingList_52449.addAssign_operation (var_s_53865  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1279)) ;
        }
      }
      GALGAS_string var_debugTargetRef_54390 ;
      GALGAS_string var_debugProductFileRef_54431 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_26772, constinArgument_inTargetName.add_operation (GALGAS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1282)), constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1283)), var_buildCFileRefListForTool_31927.add_operation (var_buildCppFileRefListForTool_31978, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1284)).add_operation (var_mm_5F_FileRefList_32071, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1284)), var_toolFrameworksFileRefList_32921, var_settingList_52449, var_debugTargetRef_54390, var_debugProductFileRef_54431, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1281)) ;
      }
      GALGAS_stringlist temp_88 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)) ;
      temp_88.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1292)) ;
      temp_88.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)) ;
      GALGAS_stringlist var_cocoaConfigurationSettingList_54501 = temp_88.add_operation (var_codeSigningSettingList_51406, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1294)) ;
      {
      GALGAS_stringlist temp_89 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1302)) ;
      temp_89.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_releaseTargetRef_53342, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1302)) ;
      temp_89.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_debugTargetRef_54390, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1302)) ;
      GALGAS__32_stringlist temp_90 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)) ;
      temp_90.enterElement (GALGAS__32_stringlist_2D_element::init_21__21_ (var_releaseProductFileRef_53385, constinArgument_inTargetName, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)) ;
      temp_90.enterElement (GALGAS__32_stringlist_2D_element::init_21__21_ (var_debugProductFileRef_54431, constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)) ;
      GALGAS_string joker_55324 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_26772, GALGAS_string ("Cocoa ").add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1296)), GALGAS_string ("Cocoa").add_operation (constinArgument_inTargetName.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas", 1297)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1297)), var_m_5F_FileRefList_32031.add_operation (var_m_5F_HandCodedSourceFileRefForAppList_30534, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1298)), var_frameworksFileRefList_32112.add_operation (var_appFrameworksFileRefList_31285, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1299)), var_resourceFileBuildRefs_32160.add_operation (var_m_5F_HandCodedResourceFileRefForAppList_30595, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1300)), var_cocoaConfigurationSettingList_54501, temp_89, temp_90, joker_55324, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1295)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_26772, var_dir_24836.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1308)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1308)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1308)), var_newIntermediateFilePath_26518, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1307)) ;
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
  return "3.7.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_string var_creationProjectName_1392 = GALGAS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.readProperty_value ()) ;
    {
    routine_projectCreation_3F_ (var_creationProjectName_1392, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 27)) ;
    }
  }
  {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.readProperty_value ()).boolEnum () ;
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
      test_1 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_updateLIBPMatPath_3F_ (GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 42)) ;
        }
      }
    }
  }
  {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int.readProperty_value ()).boolEnum () ;
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
      test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions.readProperty_value ()).boolEnum () ;
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

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_parentDirectory_2987 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 77)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 77)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  temp_0.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("galgasProject"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  GALGAS_stringlist var_candidateProjectFiles_3103 = var_parentDirectory_2987.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, var_candidateProjectFiles_3103.getter_count (SOURCE_FILE ("galgasProgram.galgas", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 80)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3103.getter_count (SOURCE_FILE ("galgasProgram.galgas", 81)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3385 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_3455 (var_candidateProjectFiles_3103, EnumerationOrder::up) ;
        while (enumerator_3455.hasCurrentObject ()) {
          var_s_3385.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_3455.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 84)) ;
          enumerator_3455.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3385, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 86)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_3570 = var_parentDirectory_2987.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)).add_operation (var_candidateProjectFiles_3103.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GALGAS_lstring::init_21__21_ (var_projectFilePath_3570, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), GALGAS_bool (false), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 89)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_parentDirectory_4167 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 103)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 103)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  temp_0.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("ggsProject"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  GALGAS_stringlist var_candidateProjectFiles_4283 = var_parentDirectory_4167.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, var_candidateProjectFiles_4283.getter_count (SOURCE_FILE ("galgasProgram.galgas", 105)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 106)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_4283.getter_count (SOURCE_FILE ("galgasProgram.galgas", 107)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_4562 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_4632 (var_candidateProjectFiles_4283, EnumerationOrder::up) ;
        while (enumerator_4632.hasCurrentObject ()) {
          var_s_4562.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_4632.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 110)) ;
          enumerator_4632.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_4562, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 112)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_4747 = var_parentDirectory_4167.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)).add_operation (var_candidateProjectFiles_4283.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GALGAS_lstring::init_21__21_ (var_projectFilePath_4747, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), GALGAS_bool (true), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 115)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST joker_5336 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5336  COMMA_SOURCE_FILE ("galgasProgram.galgas", 129)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_3'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__33_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (constinArgument_inProjectSourceFile, GALGAS_bool (false), GALGAS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 142)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_4'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__34_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (constinArgument_inProjectSourceFile, GALGAS_bool (true), GALGAS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 151)) ;
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
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
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

