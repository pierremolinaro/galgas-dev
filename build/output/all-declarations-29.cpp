#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GALGAS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapper var_fw_1534 = GALGAS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  cEnumerator_stringlist enumerator_1601 (var_fw_1534.getter_allDirectoryPathes (SOURCE_FILE ("libpmHandling.galgas", 33)), kENUMERATION_UP) ;
  while (enumerator_1601.hasCurrentObject ()) {
    GALGAS_string var_actualDirectory_1653 = constinArgument_inLIBPMPath.add_operation (enumerator_1601.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 34)) ;
    var_actualDirectory_1653.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 35)) ;
    enumerator_1601.gotoNextObject () ;
  }
  GALGAS_stringset var_allNeededFileSet_1772 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("libpmHandling.galgas", 38)) ;
  cEnumerator_stringlist enumerator_1801 (var_fw_1534.getter_allTextFilePathes (SOURCE_FILE ("libpmHandling.galgas", 39)), kENUMERATION_UP) ;
  while (enumerator_1801.hasCurrentObject ()) {
    GALGAS_string var_contents_1844 = var_fw_1534.getter_textFileContentsAtPath (enumerator_1801.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 40)) ;
    GALGAS_string var_actualFilePath_1897 = constinArgument_inLIBPMPath.add_operation (enumerator_1801.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 41)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_actualFilePath_1897.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas", 42)).objectCompare (GALGAS_string ("py"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_bool joker_2059 ; // Joker input parameter
        var_contents_1844.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1897, joker_2059, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 43)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool joker_2137 ; // Joker input parameter
      var_contents_1844.method_writeToFileWhenDifferentContents (var_actualFilePath_1897, joker_2137, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 45)) ;
    }
    var_allNeededFileSet_1772.addAssign_operation (enumerator_1801.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 47)) ;
    enumerator_1801.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_2217 (var_fw_1534.getter_allBinaryFilePathes (SOURCE_FILE ("libpmHandling.galgas", 50)), kENUMERATION_UP) ;
  while (enumerator_2217.hasCurrentObject ()) {
    GALGAS_data var_contents_2264 = var_fw_1534.getter_binaryFileContentsAtPath (enumerator_2217.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 51)) ;
    GALGAS_string var_actualFilePath_2321 = constinArgument_inLIBPMPath.add_operation (enumerator_2217.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)) ;
    GALGAS_bool joker_2422 ; // Joker input parameter
    var_contents_2264.method_writeToFileWhenDifferentContents (var_actualFilePath_2321, joker_2422, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 53)) ;
    var_allNeededFileSet_1772.addAssign_operation (enumerator_2217.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 54)) ;
    enumerator_2217.gotoNextObject () ;
  }
  GALGAS_stringset var_allActualFileSet_2507 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("libpmHandling.galgas", 57)) ;
  cEnumerator_stringlist enumerator_2536 (constinArgument_inLIBPMPath.getter_regularFiles (GALGAS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas", 58)), kENUMERATION_UP) ;
  while (enumerator_2536.hasCurrentObject ()) {
    var_allActualFileSet_2507.addAssign_operation (GALGAS_string ("/").add_operation (enumerator_2536.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 59))  COMMA_SOURCE_FILE ("libpmHandling.galgas", 59)) ;
    enumerator_2536.gotoNextObject () ;
  }
  GALGAS_stringset var_uselessFileSet_2633 = var_allActualFileSet_2507.substract_operation (var_allNeededFileSet_1772, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 61)) ;
  cEnumerator_stringset enumerator_2693 (var_uselessFileSet_2633, kENUMERATION_UP) ;
  while (enumerator_2693.hasCurrentObject ()) {
    {
    GALGAS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2693.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 63)) ;
    }
    enumerator_2693.gotoNextObject () ;
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
  GALGAS_commandLineOptionListAST var_options_2402 = GALGAS_commandLineOptionListAST::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 39)) ;
  cEnumerator__32_stringlist enumerator_2442 (GALGAS_application::class_func_boolOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 40)), kENUMERATION_UP) ;
  while (enumerator_2442.hasCurrentObject ()) {
    var_options_2402.addAssign_operation (GALGAS_string ("bool").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 42)), GALGAS_lstring::class_func_new (enumerator_2442.current (HERE).readProperty_mValue_31_ (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 43)), GALGAS_lchar::class_func_new (GALGAS_application::class_func_boolOptionInvocationCharacter (enumerator_2442.current (HERE).readProperty_mValue_30_ (), enumerator_2442.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), GALGAS_application::class_func_boolOptionInvocationString (enumerator_2442.current (HERE).readProperty_mValue_30_ (), enumerator_2442.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)), GALGAS_application::class_func_boolOptionCommentString (enumerator_2442.current (HERE).readProperty_mValue_30_ (), enumerator_2442.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)), GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 41)) ;
    enumerator_2442.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2883 (GALGAS_application::class_func_uintOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 50)), kENUMERATION_UP) ;
  while (enumerator_2883.hasCurrentObject ()) {
    var_options_2402.addAssign_operation (GALGAS_string ("uint").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 52)), GALGAS_lstring::class_func_new (enumerator_2883.current (HERE).readProperty_mValue_31_ (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 53)), GALGAS_lchar::class_func_new (GALGAS_application::class_func_uintOptionInvocationCharacter (enumerator_2883.current (HERE).readProperty_mValue_30_ (), enumerator_2883.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), GALGAS_application::class_func_uintOptionInvocationString (enumerator_2883.current (HERE).readProperty_mValue_30_ (), enumerator_2883.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)), GALGAS_application::class_func_uintOptionCommentString (enumerator_2883.current (HERE).readProperty_mValue_30_ (), enumerator_2883.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)), GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 51)) ;
    enumerator_2883.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_3330 (GALGAS_application::class_func_stringOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 60)), kENUMERATION_UP) ;
  while (enumerator_3330.hasCurrentObject ()) {
    var_options_2402.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 62)), GALGAS_lstring::class_func_new (enumerator_3330.current (HERE).readProperty_mValue_31_ (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 63)), GALGAS_lchar::class_func_new (GALGAS_application::class_func_stringOptionInvocationCharacter (enumerator_3330.current (HERE).readProperty_mValue_30_ (), enumerator_3330.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), GALGAS_application::class_func_stringOptionInvocationString (enumerator_3330.current (HERE).readProperty_mValue_30_ (), enumerator_3330.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)), GALGAS_application::class_func_stringOptionCommentString (enumerator_3330.current (HERE).readProperty_mValue_30_ (), enumerator_3330.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 67)), GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 68))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 61)) ;
    enumerator_3330.gotoNextObject () ;
  }
  var_semanticDeclarationListWithPredefinedTypes_2159.addAssign_operation (GALGAS_optionComponentDeclarationAST::class_func_new (GALGAS_bool (true), GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 72)), var_options_2402  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 70))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 70)) ;
  GALGAS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3949 = function_optionNameForUsefulEntitiesGraph (GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3949  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 76)) ;
  GALGAS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_4368 ;
  {
  routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (var_semanticDeclarationListWithPredefinedTypes_2159, constinArgument_inEndOfProjectSourceFile, constinArgument_inGalgas_34_, outArgument_outSemanticContext, outArgument_outTypeMap, var_sortedSemanticDeclarationListAST_4368, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 78)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_println_3F_ (GALGAS_string ("*** Semantic analysis"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 88)) ;
      }
    }
  }
  cEnumerator_lstringlist enumerator_4578 (extensionGetter_unsolvedEntryList (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 91)), kENUMERATION_UP) ;
  while (enumerator_4578.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (enumerator_4578.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_4578.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)).add_operation (GALGAS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)) ;
    enumerator_4578.gotoNextObject () ;
  }
  outArgument_outSemanticDeclarationSortedListForGeneration = GALGAS_semanticDeclarationListForGeneration::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 95)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 96)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_predefinedTypes var_predefinedTypes_4798 = function_buildPredefinedTypes (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 97)) ;
      cEnumerator_semanticDeclarationListAST enumerator_4874 (var_sortedSemanticDeclarationListAST_4368, kENUMERATION_UP) ;
      while (enumerator_4874.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((cPtr_semanticDeclarationAST *) enumerator_4874.current (HERE).readProperty_mSemanticDeclaration ().ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, outArgument_outTypeMap, var_predefinedTypes_4798, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 99)) ;
        enumerator_4874.gotoNextObject () ;
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
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList_6074 = constinArgument_inSemanticDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_6147 (constinArgument_inSemanticDeclarationList, kENUMERATION_UP) ;
  while (enumerator_6147.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((cPtr_semanticDeclarationAST *) enumerator_6147.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticDeclarationList_6074, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 127)) ;
    enumerator_6147.gotoNextObject () ;
  }
  GALGAS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_6488 = GALGAS_semanticTypePrecedenceGraph::class_func_emptyGraph (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 133)) ;
  GALGAS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6574 = GALGAS_extensionMethodMapForBuildingContext::class_func_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 134)) ;
  GALGAS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6660 = GALGAS_extensionGetterMapForBuildingContext::class_func_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 135)) ;
  GALGAS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6746 = GALGAS_extensionSetterMapForBuildingContext::class_func_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 136)) ;
  GALGAS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6822 = GALGAS_semanticDeclarationListAST::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 137)) ;
  cEnumerator_semanticDeclarationListAST enumerator_6880 (var_semanticDeclarationList_6074, kENUMERATION_UP) ;
  while (enumerator_6880.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((cPtr_semanticDeclarationAST *) enumerator_6880.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticTypePrecedenceGraph_6488, var_extensionMethodMapForBuildingContext_6574, var_extensionGetterMapForBuildingContext_6660, var_extensionSetterMapForBuildingContext_6746, var_extensionOverrideDefinitionList_6822, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 139)) ;
    enumerator_6880.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_7292 (var_semanticTypePrecedenceGraph_6488.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 148)), kENUMERATION_UP) ;
  while (enumerator_7292.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_7292.current (HERE).readProperty_mValue ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 149)).objectCompare (GALGAS_char (TO_UNICODE (63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        routine_println_3F_ (GALGAS_string ("Optional '").add_operation (enumerator_7292.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 150)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 150)) ;
        }
      }
    }
    enumerator_7292.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_semanticTypePrecedenceGraph_6488.getter_undefinedNodeCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_7547 (var_semanticTypePrecedenceGraph_6488.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 155)), kENUMERATION_UP) ;
      while (enumerator_7547.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7547.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_7547.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 156)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 156)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 156)) ;
        enumerator_7547.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GALGAS_string ("semantic analysis not performed, due to undefined type error(s)"), fixItArray3  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
      outArgument_outTypeMap.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_7966 ;
    GALGAS_lstringlist joker_7924 ; // Joker input parameter
    GALGAS_lstringlist joker_8007 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_6488.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_7924, var_unsortedSemanticDeclarationListAST_7966, joker_8007, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 162)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_7966.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 168)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_s_8085 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_7966.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 169)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 169)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 169)) ;
        cEnumerator_semanticDeclarationListAST enumerator_8259 (var_unsortedSemanticDeclarationListAST_7966, kENUMERATION_UP) ;
        while (enumerator_8259.hasCurrentObject ()) {
          var_s_8085.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_8259.current (HERE).readProperty_mSemanticDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)) ;
          enumerator_8259.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_8085, fixItArray5  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
        outArgument_outTypeMap.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssign_operation(var_extensionOverrideDefinitionList_6822, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 176)) ;
      outArgument_outTypeMap = GALGAS_unifiedTypeMap::class_func_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 178)) ;
      outArgument_outSemanticContext = GALGAS_semanticContext::class_func_new (constinArgument_inGalgas_34_, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 179)) ;
      cEnumerator_semanticDeclarationListAST enumerator_8779 (outArgument_outSortedSemanticDeclarationListAST, kENUMERATION_UP) ;
      while (enumerator_8779.hasCurrentObject ()) {
        callExtensionMethod_enterDeclarationInSemanticContext ((cPtr_semanticDeclarationAST *) enumerator_8779.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_extensionMethodMapForBuildingContext_6574, var_extensionGetterMapForBuildingContext_6660, var_extensionSetterMapForBuildingContext_6746, outArgument_outTypeMap, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 182)) ;
        enumerator_8779.gotoNextObject () ;
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
  cEnumerator_semanticDeclarationListForGeneration enumerator_9796 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9796.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((cPtr_semanticDeclarationForGeneration *) enumerator_9796.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioCocoaProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 210)) ;
    enumerator_9796.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 217)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 218)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 219)) ;
          }
          {
          routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 225)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 232)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 232)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 233)) ;
            }
            {
            routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 239)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 246)).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 246)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 247)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 253)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 260)).boolEnum () ;
              if (kBoolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 261)) ;
                }
              }
            }
            if (kBoolFalse == test_4) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 270)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 276)) ;
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
  GALGAS_stringlist var_headerInclusionList_31__12687 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 296)) ;
  GALGAS_stringlist var_headerInclusionList_32__12731 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 297)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_12778 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_12778.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 299)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 299)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset var_inclusionSet_31__12903 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 300)) ;
        GALGAS_string var_headerDef_31__13002 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__12903, var_headerDef_31__13002, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 301)) ;
        GALGAS_string var_headerIncludes_31__13024 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_31__12903.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_println_3F_ (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 304)).add_operation (GALGAS_string ("headers 1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 304)) ;
            }
          }
        }
        cEnumerator_stringset enumerator_13217 (var_inclusionSet_31__12903, kENUMERATION_UP) ;
        while (enumerator_13217.hasCurrentObject ()) {
          var_headerIncludes_31__13024.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13217.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 307)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 307)) ;
          enumerator_13217.gotoNextObject () ;
        }
        var_headerIncludes_31__13024.plusAssign_operation(var_headerDef_31__13002, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 309)) ;
        GALGAS_stringset var_inclusionSet_32__13363 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)) ;
        GALGAS_string var_headerDef_32__13482 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__13363, var_headerDef_32__13482, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)) ;
        GALGAS_string var_headerIncludes_32__13504 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_inclusionSet_32__13363.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_println_3F_ (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)).add_operation (GALGAS_string ("headers 2"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)) ;
            }
          }
        }
        cEnumerator_stringset enumerator_13697 (var_inclusionSet_32__13363, kENUMERATION_UP) ;
        while (enumerator_13697.hasCurrentObject ()) {
          var_headerIncludes_32__13504.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13697.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 317)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 317)) ;
          enumerator_13697.gotoNextObject () ;
        }
        var_headerIncludes_32__13504.plusAssign_operation(var_headerDef_32__13482, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 319)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)).enumValue ()) {
        case GALGAS_headerKind::kNotBuilt:
          break ;
        case GALGAS_headerKind::kEnum_noHeader:
          {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsNotEqual, var_headerIncludes_31__13024.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)).readProperty_location (), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12778.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 325)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 325)), fixItArray4  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)) ;
              }
            }
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__13504.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 328)).readProperty_location (), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12778.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 329)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 329)), fixItArray6  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 328)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_oneHeader:
          {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, var_headerIncludes_31__13024.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 333)).readProperty_location (), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12778.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 334)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 334)), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 333)) ;
              }
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__13504.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 337)).readProperty_location (), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12778.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 338)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 338)), fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 337)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_twoHeaders:
          {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_headerIncludes_31__13024.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 342)).readProperty_location (), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12778.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 343)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 343)), fixItArray12  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 342)) ;
              }
            }
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, var_headerIncludes_32__13504.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <C_FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 346)).readProperty_location (), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12778.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 347)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 347)), fixItArray14  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 346)) ;
              }
            }
          }
          break ;
        }
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 351)).objectCompare (GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 351)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            GALGAS_string var_headerString_15321 = GALGAS_string ("#pragma once\n") ;
            var_headerString_15321.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)) ;
            var_headerString_15321.plusAssign_operation(GALGAS_string ("#include \"all-predefined-types.h\"\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)) ;
            var_headerString_15321.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 355)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 355)) ;
            var_headerString_15321.plusAssign_operation(var_headerIncludes_31__13024, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)) ;
            var_headerString_15321.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 357)) ;
            var_headerString_15321.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)) ;
            GALGAS_string temp_16 ;
            const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              temp_16 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_17) {
              temp_16 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_15752 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 359)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 359)) ;
            var_headerInclusionList_31__12687.addAssign_operation (var_headerFileName_15752  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_15752.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_15752.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15752.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 366)), var_headerString_15321, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 364)) ;
            }
          }
        }
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_string var_headerString_16326 = GALGAS_string ("#ifndef ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)).add_operation (GALGAS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)) ;
            var_headerString_16326.plusAssign_operation(GALGAS_string ("#define ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)).add_operation (GALGAS_string ("_DEFINED\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)) ;
            var_headerString_16326.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)) ;
            var_headerString_16326.plusAssign_operation(GALGAS_string ("#include \"").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)).add_operation (GALGAS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)) ;
            var_headerString_16326.plusAssign_operation(GALGAS_string ("\n//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)) ;
            var_headerString_16326.plusAssign_operation(var_headerIncludes_32__13504, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)) ;
            var_headerString_16326.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)) ;
            var_headerString_16326.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::class_func_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)) ;
            var_headerString_16326.plusAssign_operation(GALGAS_string ("#endif\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)) ;
            var_headerInclusionList_32__12731.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12778.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)), var_headerString_16326, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384)) ;
            }
          }
        }
      }
    }
    enumerator_12778.gotoNextObject () ;
  }
  GALGAS_string var_headerString_17574 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), var_headerInclusionList_31__12687.add_operation (var_headerInclusionList_32__12731, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 395)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 393))) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 397)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 398)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_17574, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 399)) ;
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
  GALGAS_string var_headerString_18261 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 415)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 413))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_18415 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_18415.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18415.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 419)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 419)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset joker_18570 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 420)) ;
        GALGAS_string var_headerString_31__18587 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18415.current (HERE).readProperty_mDeclaration ().ptr (), joker_18570, var_headerString_31__18587, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 420)) ;
        var_headerString_18261.plusAssign_operation(var_headerString_31__18587, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 421)) ;
      }
    }
    enumerator_18415.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_18692 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_18692.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18692.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset joker_18867 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 427)) ;
        GALGAS_string var_headerString_32__18884 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18692.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, joker_18867, var_headerString_32__18884, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 427)) ;
        var_headerString_18261.plusAssign_operation(var_headerString_32__18884, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 428)) ;
      }
    }
    enumerator_18692.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 431)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 432)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_18261, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 433)) ;
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
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 466)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 466)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 467)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 467)) ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 468)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_stringset var_inclusionSet_20414 ;
          GALGAS_string var_headerString_20448 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 470)), var_inclusionSet_20414, var_headerString_20448, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 469)) ;
          cEnumerator_stringset enumerator_20480 (var_inclusionSet_20414, kENUMERATION_UP) ;
          while (enumerator_20480.hasCurrentObject ()) {
            {
            routine_buildHeader_3F__3F__3F__26__26_ (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20480.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 475)) ;
            }
            enumerator_20480.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssign_operation(var_headerString_20448, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 483)) ;
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssign_operation(GALGAS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 485)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 485)) ;
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
  GALGAS_bool var_useOneHugeHeader_21378 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  GALGAS_bigint var_n_21491 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 508)) ;
  GALGAS_bigint var_fileIdx_21503 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 509)) ;
  GALGAS_string var_implementationString_21521 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_21564 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 511)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_21603 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21603.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21603.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 513)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 513)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_code_21814 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_21603.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21564, var_code_21814, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 514)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_21564.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_println_3F_ (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21603.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)).add_operation (GALGAS_string (" cpp headers"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)) ;
            }
          }
        }
        var_implementationString_21521.plusAssign_operation(var_code_21814, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 518)) ;
        var_implementationString_21521.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21603.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)) ;
        var_n_21491.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsSupOrEqual, var_n_21491.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)).getter_bigint (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_useOneHugeHeader_21378.boolEnum () ;
              if (kBoolTrue == test_3) {
                GALGAS_stringset temp_4 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)) ;
                temp_4.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)) ;
                var_inclusionSet_21564 = temp_4 ;
              }
            }
            GALGAS_string var_header_22268 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21564.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525))) ;
            GALGAS_string var_fileName_22407 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21503.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)) ;
            GALGAS_stringlist temp_5 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 529)) ;
            temp_5.addAssign_operation (var_fileName_22407  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 529)) ;
            ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 529)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_22407  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 530)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22407, var_header_22268.add_operation (var_implementationString_21521, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 531)) ;
            }
            var_n_21491 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            var_fileIdx_21503.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 537)) ;
            var_implementationString_21521 = GALGAS_string::makeEmptyString () ;
            var_inclusionSet_21564 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 539)) ;
          }
        }
      }
    }
    enumerator_21603.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_implementationString_21521.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_useOneHugeHeader_21378.boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_stringset temp_8 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 546)) ;
          temp_8.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 546)) ;
          var_inclusionSet_21564 = temp_8 ;
        }
      }
      GALGAS_string var_header_22968 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21564.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 549)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 548))) ;
      GALGAS_string var_fileName_23095 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21503.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551)) ;
      GALGAS_stringlist temp_9 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 552)) ;
      temp_9.addAssign_operation (var_fileName_23095  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 552)) ;
      ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 552)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_23095  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 553)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_23095, var_header_22968.add_operation (var_implementationString_21521, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 554)) ;
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
  GALGAS_headerCompositionMap var_headerCompositionMap_23840 = GALGAS_headerCompositionMap::class_func_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 571)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_23887 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_23887.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 573)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 573)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset var_inclusionSet_31__24012 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 574)) ;
        GALGAS_string var_headerString_31__24111 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__24012, var_headerString_31__24111, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 575)) ;
        GALGAS_stringset var_inclusionSet_32__24147 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 576)) ;
        GALGAS_string var_headerString_32__24266 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__24147, var_headerString_32__24266, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 577)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 578)).objectCompare (GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 578)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string temp_2 ;
            const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              temp_2 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_3) {
              temp_2 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_24358 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)) ;
            {
            var_headerCompositionMap_23840.setter_insertKey (var_headerFileName_24358.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 581)), var_inclusionSet_31__24012, var_headerString_31__24111, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 580)) ;
            }
          }
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            GALGAS_stringset temp_5 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)) ;
            temp_5.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)) ;
            var_headerCompositionMap_23840.setter_insertKey (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23887.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 588)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 588)), var_inclusionSet_32__24147.operator_or (temp_5 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)), var_headerString_32__24266, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 587)) ;
            }
          }
        }
      }
    }
    enumerator_23887.gotoNextObject () ;
  }
  GALGAS_headerRepartitionMap var_headerRepartitionMap_25027 = GALGAS_headerRepartitionMap::class_func_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 595)) ;
  GALGAS_bigint var_fileIdx_25059 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)) ;
  GALGAS_string var_implementationString_25077 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_headerString_25109 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_25144 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 599)) ;
  GALGAS_string var_headerFileName_25168 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 600)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_25236 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_25236.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 602)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 602)).boolEnum () ;
      if (kBoolTrue == test_6) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 604)).objectCompare (GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 604)))).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_23840, var_headerFileName_25168, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)), var_headerRepartitionMap_25027, var_headerString_25109, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)) ;
                }
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_23840, var_headerFileName_25168, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 606)), var_headerRepartitionMap_25027, var_headerString_25109, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 606)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)).objectCompare (GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  {
                  routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_23840, var_headerFileName_25168, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)), var_headerRepartitionMap_25027, var_headerString_25109, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)) ;
                  }
                }
              }
            }
          }
        }
        GALGAS_string var_code_26135 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_25144, var_code_26135, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)) ;
        cEnumerator_stringset enumerator_26152 (var_inclusionSet_25144, kENUMERATION_UP) ;
        while (enumerator_26152.hasCurrentObject ()) {
          {
          routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_23840, var_headerFileName_25168, enumerator_26152.current_key (HERE), var_headerRepartitionMap_25027, var_headerString_25109, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)) ;
          }
          enumerator_26152.gotoNextObject () ;
        }
        var_implementationString_25077.plusAssign_operation(var_code_26135, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)) ;
        var_implementationString_25077.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_25236.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 616)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsStrictSup, var_implementationString_25077.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 617)).objectCompare (GALGAS_uint (uint32_t (786432U)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_stringset temp_11 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)) ;
            temp_11.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)) ;
            var_inclusionSet_25144 = temp_11 ;
            GALGAS_string var_cppHeader_26529 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_25144.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 619))) ;
            GALGAS_string var_fileName_26671 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)) ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
            temp_12.addAssign_operation (var_fileName_26671  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
            ioArgument_ioToolProductFileList = temp_12.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_26671  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 624)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_26671, var_cppHeader_26529.add_operation (var_implementationString_25077, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)) ;
            }
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25168.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 631))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 631)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25168.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)) ;
            GALGAS_stringlist temp_13 ;
            const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_fileIdx_25059.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              temp_13 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)) ;
            }else if (kBoolFalse == test_14) {
              GALGAS_stringlist temp_15 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)) ;
              temp_15.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)) ;
              temp_13 = temp_15 ;
            }
            GALGAS_string var_startOfHeader_27108 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25168, temp_13 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 633))) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25168.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 639)), var_startOfHeader_27108.add_operation (var_headerString_25109, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 637)) ;
            }
            var_fileIdx_25059.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 643)) ;
            var_implementationString_25077 = GALGAS_string::makeEmptyString () ;
            var_headerString_25109 = GALGAS_string::makeEmptyString () ;
            var_headerFileName_25168 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 646)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 646)) ;
            var_inclusionSet_25144 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 647)) ;
          }
        }
      }
    }
    enumerator_25236.gotoNextObject () ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsNotEqual, var_implementationString_25077.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_stringlist temp_17 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)) ;
      temp_17.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)) ;
      GALGAS_string var_header_27704 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_17 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653))) ;
      GALGAS_string var_fileName_27838 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 656)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 656)) ;
      GALGAS_stringlist temp_18 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)) ;
      temp_18.addAssign_operation (var_fileName_27838  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)) ;
      ioArgument_ioToolProductFileList = temp_18.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_27838  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 658)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_27838, var_header_27704.add_operation (var_implementationString_25077, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)) ;
      }
      ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25168.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665)) ;
      ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25168.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
      GALGAS_stringlist temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, var_fileIdx_25059.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)) ;
      }else if (kBoolFalse == test_20) {
        GALGAS_stringlist temp_21 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)) ;
        temp_21.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)) ;
        temp_19 = temp_21 ;
      }
      GALGAS_string var_startOfHeader_28228 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25168, temp_19 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 667))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25168.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 673)), var_startOfHeader_28228.add_operation (var_headerString_25109, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 671)) ;
      }
    }
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 679)) ;
  GALGAS_stringlist temp_22 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682)) ;
  temp_22.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25059.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682)) ;
  GALGAS_string var_startOfAllDeclarationsHeader_28671 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), temp_22 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 680))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_28671, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 684)) ;
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
  GALGAS_bool var_useOneHugeHeader_29336 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_29444 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_29444.hasCurrentObject ()) {
    GALGAS_stringset var_inclusionSet_29511 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 703)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_29444.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 704)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 704)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_implementationString_29692 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_29444.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_29511, var_implementationString_29692, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 705)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_29444.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 706)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_inclusionSet_29511.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29444.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 707))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 707)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_useOneHugeHeader_29336.boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_stringset temp_3 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 710)) ;
            temp_3.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 710)) ;
            var_inclusionSet_29511 = temp_3 ;
          }
        }
        GALGAS_string var_header_29955 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_29511.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 712))) ;
        var_implementationString_29692.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29444.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715)) ;
        GALGAS_string var_fileName_30177 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29444.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 716)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 716)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_30177  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 717)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_30177, var_header_29955.add_operation (var_implementationString_29692, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 718)) ;
        }
        ioArgument_ioToolProductFileList.addAssign_operation (var_fileName_30177  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 723)) ;
      }
    }
    enumerator_29444.gotoNextObject () ;
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
    cEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_552 (in_C_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_937 (in_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_1324 (in_M_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_1710 (in_MM_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_2105 (in_HEADER_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_2496 (in_FRAMEWORK_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator_XCodeToolTargetList enumerator_3069 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator_XCodeAppTargetList enumerator_3665 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_3994 (in_PLIST_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_4358 (in_XIB_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_4724 (in_TIFF_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator__32_stringlist enumerator_5063 (in_ICNS_5F_FILE_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator_XCodeToolTargetList enumerator_5714 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5714.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5714.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5714.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GALGAS_uint index_5953_ (0) ;
        if (enumerator_5714.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_5953 (enumerator_5714.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
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
    cEnumerator_XCodeAppTargetList enumerator_6391 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6391.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6391.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GALGAS_uint index_6575_ (0) ;
      if (enumerator_6391.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6575 (enumerator_6391.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
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
    cEnumerator_XCodeGroupList enumerator_6851 (in_GROUPS, kENUMERATION_UP) ;
    while (enumerator_6851.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6851.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6851.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GALGAS_uint index_6978_ (0) ;
      if (enumerator_6851.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6978 (enumerator_6851.current_mChildrenRefs (HERE), kENUMERATION_UP) ;
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
    cEnumerator_stringlist enumerator_7330 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kENUMERATION_UP) ;
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
    cEnumerator_XCodeToolTargetList enumerator_7744 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
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
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_7744.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
    cEnumerator_XCodeAppTargetList enumerator_8701 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
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
        cEnumerator__32_stringlist enumerator_9090 (enumerator_8701.current_mDependentTargets (HERE), kENUMERATION_UP) ;
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
    cEnumerator_XCodeToolTargetList enumerator_10114 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator_XCodeAppTargetList enumerator_10453 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator_XCodeAppTargetList enumerator_10905 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10905.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_10905.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GALGAS_uint index_11088_ (0) ;
      if (enumerator_10905.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11088 (enumerator_10905.current_mResourceFileBuildRefs (HERE), kENUMERATION_UP) ;
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
    cEnumerator_XCodeToolTargetList enumerator_11538 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11538.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11538.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GALGAS_uint index_11705_ (0) ;
      if (enumerator_11538.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11705 (enumerator_11538.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
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
    cEnumerator_XCodeAppTargetList enumerator_12111 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12111.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_12111.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GALGAS_uint index_12278_ (0) ;
      if (enumerator_12111.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_12278 (enumerator_12111.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
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
    cEnumerator_XCodeAppTargetList enumerator_12785 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12785.hasCurrentObject ()) {
      GALGAS_uint index_12833_ (0) ;
      if (enumerator_12785.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_12833 (enumerator_12785.current_mDependentTargets (HERE), kENUMERATION_UP) ;
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
    cEnumerator_stringlist enumerator_13357 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator_XCodeToolTargetList enumerator_13672 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13672.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13672.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        ONLY_ACTIVE_ARCH = YES;\n") ;
      GALGAS_uint index_13876_ (0) ;
      if (enumerator_13672.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13876 (enumerator_13672.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
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
    cEnumerator_XCodeAppTargetList enumerator_14351 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14351.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14351.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GALGAS_uint index_14519_ (0) ;
      if (enumerator_14351.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_14519 (enumerator_14351.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
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
    cEnumerator_XCodeToolTargetList enumerator_15478 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
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
    cEnumerator_XCodeAppTargetList enumerator_16060 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
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
  result.appendString ("/galgas2\" />\n   <Add directory=\"") ;
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
  GALGAS_uint index_2820_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_2820 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET, kENUMERATION_UP) ;
    while (enumerator_2820.hasCurrentObject ()) {
      result.appendString ("  <Add directory=\"") ;
      result.appendString (enumerator_2820.current_key (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      index_2820_.increment () ;
      enumerator_2820.gotoNextObject () ;
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
    result.appendString ("/galgas2/C_galgas_verbose_option.cpp\" />\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  <Unit filename=\"") ;
    result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
    result.appendString ("/galgas2/C_galgas_quiet_option.cpp\" />\n") ;
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_3221_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3221 (in_TOOL_5F_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3221.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
      result.appendString ("/output/") ;
      result.appendString (enumerator_3221.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      index_3221_.increment () ;
      enumerator_3221.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3341_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3341 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3341.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (enumerator_3341.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      index_3341_.increment () ;
      enumerator_3341.gotoNextObject () ;
    }
  }
  result.appendString ("   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/C_CommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/C_BoolCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/C_UIntCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/C_StringCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/C_StringListCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/C_builtin_CLI_Options.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/F_Analyze_CLI_Options.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("/bdd/C_BDD.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/C_RelationSingleType.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/C_RelationConfiguration.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/C_Relation.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("/streams/C_ColoredConsole.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/C_ConsoleOut.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/C_ErrorOut.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("/galgas2/C_galgas_CLI_Options.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/typeComparisonResult.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/Compiler.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/Lexique.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/Lexique-parsing.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/LocationInSource.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/SourceTextInString.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/C_galgas_type_descriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/C_galgas_function_descriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/C_galgas_io.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/C_galgas_class_inspector.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/C_IssueWithFixIt.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cObjectArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cCollectionElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/capCollectionElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/capCollectionElementArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cSortedListElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/capSortedListElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cGenericAbstractEnumerator.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cEnumerator_range.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cIndexingDictionary.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cIssueDescriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cLexiqueIntrospection.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_root.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_list.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_sortedlist.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_map.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_reference_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_value_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_graph.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_enumAssociatedValues.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/acPtr_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/acStrongPtr_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cPtr_weakReference_proxy.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/AC_GALGAS_weak_reference.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/cPtr_object.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/scanner_actions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_application.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_bigint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_binaryset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_bool.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_char.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_data.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_double.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_filewrapper.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_function.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_location.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_sint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_sint_36__34_.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_string.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_string-getters.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_stringset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_type.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_object.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_uint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_timer.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas2/GALGAS_uint_36__34_.cpp\" />\n  <Extensions>\n   <code_completion />\n   <envvars />\n   <debugger />\n   <lib_finder disable_auto=\"1\" />\n  </Extensions>\n </Project>\n</CodeBlocks_project_file>\n") ;
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
    cEnumerator_stringset enumerator_986 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
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
    cEnumerator_stringset enumerator_1662 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
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
  result.appendString ("/galgas2\",\n                       \"") ;
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
  GALGAS_uint index_822_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_822 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET, kENUMERATION_UP) ;
    while (enumerator_822.hasCurrentObject ()) {
      result.appendString (",\n                       \"") ;
      result.appendString (enumerator_822.current_key (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      index_822_.increment () ;
      enumerator_822.gotoNextObject () ;
    }
  }
  result.appendString ("],\n    \"SOURCES\"  :  [\n") ;
  GALGAS_uint index_935_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_935 (in_MAKEFILE_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_935.hasCurrentObject ()) {
      result.appendString ("        \"") ;
      result.appendString (enumerator_935.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      index_935_.increment () ;
      enumerator_935.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1019_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1019 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1019.hasCurrentObject ()) {
      result.appendString ("        \"") ;
      result.appendString (enumerator_1019.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      index_1019_.increment () ;
      enumerator_1019.gotoNextObject () ;
    }
  }
  result.appendString ("       \"C_CommandLineOption.cpp\",\n       \"C_BoolCommandLineOption.cpp\",\n       \"C_UIntCommandLineOption.cpp\",\n       \"C_StringCommandLineOption.cpp\",\n       \"C_StringListCommandLineOption.cpp\",\n       \"C_builtin_CLI_Options.cpp\",\n       \"F_Analyze_CLI_Options.cpp\",\n       \"F_mainForLIBPM.cpp\",\n       \"C_BDD.cpp\",\n       \"C_RelationSingleType.cpp\",\n       \"C_RelationConfiguration.cpp\",\n       \"C_Relation.cpp\",\n       \"FileManager.cpp\",\n       \"AbstractFileHandle.cpp\",\n       \"TextFileWrite.cpp\",\n       \"HTMLFileWrite.cpp\",\n       \"BinaryFileWrite.cpp\",\n       \"AbstractOutputStream.cpp\",\n       \"C_ColoredConsole.cpp\",\n       \"C_ConsoleOut.cpp\",\n       \"C_ErrorOut.cpp\",\n       \"unicode_character_cpp.cpp\",\n       \"String-class-getters.cpp\",\n       \"String-class.cpp\",\n       \"HTMLString.cpp\",\n       \"print.cpp\",\n       \"Timer.cpp\",\n       \"DateTime.cpp\",\n       \"PrologueEpilogue.cpp\",\n       \"SharedObject.cpp\",\n       \"BigSigned-add.cpp\",\n       \"BigSigned-bit.cpp\",\n       \"BigSigned-chunk-operations.cpp\",\n       \"BigSigned-constructors.cpp\",\n       \"BigSigned-conversions.cpp\",\n       \"BigSigned-divide.cpp\",\n       \"BigSigned-logic-operations.cpp\",\n       \"BigSigned-multiply.cpp\",\n       \"BigSigned-print.cpp\",\n       \"BigSigned-shifts.cpp\",\n       \"BigSigned-subtract.cpp\",\n       \"BigSigned-utilities.cpp\",\n       \"BigSigned.cpp\",\n       \"BigUnsigned-add.cpp\",\n       \"BigUnsigned-bit.cpp\",\n       \"BigUnsigned-chunk-operations.cpp\",\n       \"BigUnsigned-constructors.cpp\",\n       \"BigUnsigned-conversions.cpp\",\n       \"BigUnsigned-divide-naive.cpp\",\n       \"BigUnsigned-divide.cpp\",\n       \"BigUnsigned-logic-operations.cpp\",\n       \"BigUnsigned-multiply.cpp\",\n       \"BigUnsigned-print.cpp\",\n       \"BigUnsigned-shifts.cpp\",\n       \"BigUnsigned-subtract.cpp\",\n       \"BigUnsigned-utilities.cpp\",\n       \"ChunkSharedArray.cpp\",\n       \"UInt128.cpp\",\n       \"U8Data.cpp\",\n       \"F_DisplayException.cpp\",\n       \"macroAssert.cpp\",\n       \"F_GetPrime.cpp\",\n       \"MF_MemoryControl.cpp\",\n       \"cpp-allocation.cpp\",\n       \"basic-allocation.cpp\",\n       \"UInt32Set.cpp\",\n       \"DirectedGraph.cpp\",\n       \"md5.cpp\",\n       \"SHA256.cpp\",\n       \"galgas-random.cpp\",\n       \"C_galgas_CLI_Options.cpp\",\n       \"typeComparisonResult.cpp\",\n       \"Compiler.cpp\",\n       \"Lexique.cpp\",\n       \"Lexique-parsing.cpp\",\n       \"LocationInSource.cpp\",\n       \"SourceTextInString.cpp\",\n       \"C_galgas_type_descriptor.cpp\",\n       \"C_galgas_function_descriptor.cpp\",\n       \"C_galgas_io.cpp\",\n       \"C_galgas_class_inspector.cpp\",\n       \"C_IssueWithFixIt.cpp\",\n       \"cObjectArray.cpp\",\n       \"cCollectionElement.cpp\",\n       \"capCollectionElement.cpp\",\n       \"capCollectionElementArray.cpp\",\n       \"cSortedListElement.cpp\",\n       \"capSortedListElement.cpp\",\n       \"cGenericAbstractEnumerator.cpp\",\n       \"cEnumerator_range.cpp\",\n       \"cIndexingDictionary.cpp\",\n       \"cIssueDescriptor.cpp\",\n       \"cLexiqueIntrospection.cpp\",\n       \"AC_GALGAS_root.cpp\",\n       \"AC_GALGAS_list.cpp\",\n       \"AC_GALGAS_sortedlist.cpp\",\n       \"AC_GALGAS_map.cpp\",\n       \"AC_GALGAS_reference_class.cpp\",\n       \"AC_GALGAS_value_class.cpp\",\n       \"AC_GALGAS_graph.cpp\",\n       \"AC_GALGAS_enumAssociatedValues.cpp\",\n       \"acPtr_class.cpp\",\n       \"acStrongPtr_class.cpp\",\n       \"cPtr_weakReference_proxy.cpp\",\n       \"AC_GALGAS_weak_reference.cpp\",\n       \"cPtr_object.cpp\",\n       \"scanner_actions.cpp\",\n       \"GALGAS_application.cpp\",\n       \"GALGAS_bigint.cpp\",\n       \"GALGAS_binaryset.cpp\",\n       \"GALGAS_bool.cpp\",\n       \"GALGAS_char.cpp\",\n       \"GALGAS_data.cpp\",\n       \"GALGAS_double.cpp\",\n       \"GALGAS_filewrapper.cpp\",\n       \"GALGAS_function.cpp\",\n       \"GALGAS_location.cpp\",\n       \"GALGAS_sint.cpp\",\n       \"GALGAS_sint_36__34_.cpp\",\n       \"GALGAS_string.cpp\",\n       \"GALGAS_string-getters.cpp\",\n       \"GALGAS_stringset.cpp\",\n       \"GALGAS_type.cpp\",\n       \"GALGAS_object.cpp\",\n       \"GALGAS_uint.cpp\",\n       \"GALGAS_timer.cpp\",\n       \"GALGAS_uint_36__34_.cpp\"\n    ],\n    \"USER_LINK_OPTIONS\"  :  [") ;
  GALGAS_uint index_5127_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5127 (in_TOOL_5F_LINK_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5127.hasCurrentObject ()) {
      result.appendString ("\n        \"") ;
      result.appendString (enumerator_5127.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      if (enumerator_5127.hasNextObject ()) {
        result.appendString (",") ;
      }
      index_5127_.increment () ;
      enumerator_5127.gotoNextObject () ;
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
      test_1 = GALGAS_bool (kIsEqual, objectArray_18084->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
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
      test_3 = GALGAS_bool (kIsEqual, objectArray_18480->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
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
      test_5 = GALGAS_bool (kIsEqual, objectArray_18908->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
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
  GALGAS_stringset var_availableGenerationFeatures_19417 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 371)) ;
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
  GALGAS_stringset var_generationFeatures_20026 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 382)) ;
  GALGAS_string var_SDK_20102 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_20118 (constinArgument_inTargetFeatureList, kENUMERATION_UP) ;
  while (enumerator_20118.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_availableGenerationFeatures_19417.getter_hasKey (enumerator_20118.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 386)).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_generationFeatures_20026.getter_hasKey (enumerator_20118.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 387)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_20118.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicate '").add_operation (enumerator_20118.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)), fixItArray9  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 388)) ;
          }
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsEqual, enumerator_20118.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("MacOS"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsNotEqual, var_SDK_20102.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_20118.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated setting"), fixItArray12  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 393)) ;
              }
            }
            var_SDK_20102 = GALGAS_string ("macosx") ;
          }
        }
        if (kBoolFalse == test_10) {
          var_generationFeatures_20026.addAssign_operation (enumerator_20118.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 397)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      GALGAS_stringlist var_s_20592 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 400)) ;
      cEnumerator_stringset enumerator_20610 (var_availableGenerationFeatures_19417, kENUMERATION_UP) ;
      while (enumerator_20610.hasCurrentObject ()) {
        var_s_20592.addAssign_operation (GALGAS_string ("%").add_operation (enumerator_20610.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 402))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 402)) ;
        enumerator_20610.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray13 ;
      appendFixItActions (fixItArray13, kFixItReplace, var_s_20592) ;
      inCompiler->emitSemanticError (enumerator_20118.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown '").add_operation (enumerator_20118.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)), fixItArray13  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 404)) ;
    }
    enumerator_20118.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, var_macCodeSign_18070.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
    if (kBoolTrue == test_15.boolEnum ()) {
      test_15 = GALGAS_bool (kIsEqual, var_SDK_20102.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_14 = test_15.boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (var_macCodeSign_18070.readProperty_location (), GALGAS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%MacOS\""), fixItArray16  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 409)) ;
    }
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (kIsNotEqual, var_SDK_20102.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_17) {
      test_17 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GALGAS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 417)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 417)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticWarning (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 418)), GALGAS_string ("For a Cocoa project, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray18  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 418)) ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = var_generationFeatures_20026.getter_hasKey (GALGAS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 421)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      routine_generateGalgas_33_MakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 422)) ;
      }
    }
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = var_generationFeatures_20026.getter_hasKey (GALGAS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 424)).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      routine_generateGalgas_33_MakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 425)) ;
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_generationFeatures_20026.getter_hasKey (GALGAS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 427)).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 428)) ;
      }
    }
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_generationFeatures_20026.getter_hasKey (GALGAS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 430)).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 431)) ;
      }
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = var_generationFeatures_20026.getter_hasKey (GALGAS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 433)).boolEnum () ;
    if (kBoolTrue == test_23) {
      {
      routine_generateGalgas_33_MinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 434)) ;
      }
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = var_generationFeatures_20026.getter_hasKey (GALGAS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 436)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18896, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 437)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = var_generationFeatures_20026.getter_hasKey (GALGAS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 448)).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18896, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 449)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = var_generationFeatures_20026.getter_hasKey (GALGAS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 460)).boolEnum () ;
    if (kBoolTrue == test_26) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_17360, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18896, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 461)) ;
      }
    }
  }
  GALGAS_stringlist var_linkOptionForLinkingFrameworkWithTool_23491 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 473)) ;
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 474)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_27) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_SDK_20102.objectCompare (GALGAS_string ("macosx"))).boolEnum () ;
        if (kBoolTrue == test_28) {
          var_linkOptionForLinkingFrameworkWithTool_23491.addAssign_operation (GALGAS_string ("-isysroot")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 476)) ;
          var_linkOptionForLinkingFrameworkWithTool_23491.addAssign_operation (GALGAS_string ("/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/").add_operation (var_SDK_20102, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477)).add_operation (GALGAS_string (".sdk"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 477)) ;
        }
      }
      cEnumerator_stringlist enumerator_23835 (constinArgument_inFrameworkToolFileList, kENUMERATION_UP) ;
      while (enumerator_23835.hasCurrentObject ()) {
        var_linkOptionForLinkingFrameworkWithTool_23491.addAssign_operation (GALGAS_string ("-framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 480)) ;
        var_linkOptionForLinkingFrameworkWithTool_23491.addAssign_operation (enumerator_23835.current_mValue (HERE).getter_stringByDeletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 481))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 481)) ;
        enumerator_23835.gotoNextObject () ;
      }
    }
  }
  GALGAS_stringlist var_handCodedSourceToolFileList_24070 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 485)) ;
  cEnumerator_stringlist enumerator_24110 (constinArgument_inHandCodedSourceToolFileList, kENUMERATION_UP) ;
  while (enumerator_24110.hasCurrentObject ()) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, enumerator_24110.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 487)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
      if (kBoolTrue == test_29) {
        var_handCodedSourceToolFileList_24070.addAssign_operation (enumerator_24110.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 488))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 488)) ;
      }
    }
    enumerator_24110.gotoNextObject () ;
  }
  GALGAS_string var_jsonFileListContents_24266 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, constinArgument_inHandCodedSourceDirectorySet, var_handCodedSourceToolFileList_24070, var_toolCppFileList_17794, var_linkOptionForLinkingFrameworkWithTool_23491.add_operation (constinArgument_inHandCodedLinkToolFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 495)), var_libpmPath_18896, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 491))) ;
  GALGAS_string var_jsonFileListPath_24565 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 499)) ;
  GALGAS_bool joker_24711 ; // Joker input parameter
  var_jsonFileListContents_24266.method_writeToFileWhenDifferentContents (var_jsonFileListPath_24565, joker_24711, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 500)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 501)) ;
  enumGalgasBool test_30 = kBoolTrue ;
  if (kBoolTrue == test_30) {
    test_30 = GALGAS_bool (kIsNotEqual, var_SDK_20102.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_30) {
      GALGAS_string var_dir_24831 = var_projectDirectory_17360.add_operation (GALGAS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 504)) ;
      var_dir_24831.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 505)) ;
      GALGAS_string var_applicationBundleBase_24931 ;
      const cMapElement_projectQualifiedFeatureMap * objectArray_24957 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("applicationBundleBase")) ;
      if (nullptr != objectArray_24957) {
          macroValidSharedObject (objectArray_24957, cMapElement_projectQualifiedFeatureMap) ;
        var_applicationBundleBase_24931 = objectArray_24957->mProperty_mFeatureValue.readProperty_string () ;
      }else{
        var_applicationBundleBase_24931 = GALGAS_string ("fr.irccyn") ;
      }
      GALGAS_string var_InfoPlistContents_25140 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_24931, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 513))) ;
      GALGAS_bool joker_25450 ; // Joker input parameter
      var_InfoPlistContents_25140.method_writeToFileWhenDifferentContents (var_dir_24831.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 520)), joker_25450, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 520)) ;
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = var_dir_24831.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 522)).boolEnum () ;
        if (kBoolTrue == test_31) {
          GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523))).method_writeToExecutableFile (var_dir_24831.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523)) ;
        }
      }
      var_dir_24831.add_operation (GALGAS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 526)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 526)) ;
      GALGAS_string var_InfoPlist_5F_strings_5F_path_25707 = var_dir_24831.add_operation (GALGAS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 527)) ;
      GALGAS_bool joker_25923 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_25707, joker_25923, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528)) ;
      GALGAS_string var_Credits_5F_rtf_5F_path_25935 = var_dir_24831.add_operation (GALGAS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 529)) ;
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = var_Credits_5F_rtf_5F_path_25935.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 530)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 530)).boolEnum () ;
        if (kBoolTrue == test_32) {
          GALGAS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_25935, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 531)) ;
        }
      }
      GALGAS_string var_userResourceDir_26237 = var_projectDirectory_17360.add_operation (GALGAS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 534)) ;
      var_userResourceDir_26237.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 535)) ;
      GALGAS_stringlist temp_33 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 536)) ;
      temp_33.addAssign_operation (GALGAS_string ("icns")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 536)) ;
      GALGAS_stringlist var_extensionList_26361 = temp_33 ;
      GALGAS_stringlist var_resourceFiles_26395 = var_userResourceDir_26237.getter_regularFilesWithExtensions (GALGAS_bool (false), var_extensionList_26361 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 537)) ;
      GALGAS_string var_newIntermediateFilePath_26506 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 539)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 540)) ;
      GALGAS_XcodeProjectDescriptor var_xcodeProject_26760 = GALGAS_XcodeProjectDescriptor::class_func_new (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 542)) ;
      var_xcodeProject_26760.setter_setMApplicationBundleName (var_applicationBundleBase_24931 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 543)) ;
      var_xcodeProject_26760.setter_setMProjectName (constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 544)) ;
      GALGAS_string var_headerSearchPaths_26920 = GALGAS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 545)).add_operation (GALGAS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (GALGAS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)).add_operation (GALGAS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 548)) ;
      cEnumerator_stringset enumerator_27140 (constinArgument_inHandCodedSourceDirectorySet, kENUMERATION_UP) ;
      while (enumerator_27140.hasCurrentObject ()) {
        var_headerSearchPaths_26920.plusAssign_operation(GALGAS_string (", \"").add_operation (enumerator_27140.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)) ;
        enumerator_27140.gotoNextObject () ;
      }
      var_headerSearchPaths_26920.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 552)) ;
      GALGAS_stringlist temp_34 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 606)) ;
      temp_34.addAssign_operation (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 555)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 557)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 558)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 559)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_COMMA = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 560)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 561)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_EMPTY_BODY = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 562)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_INFINITE_RECURSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 563)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 564)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 565)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 566)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 567)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 568)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_UNREACHABLE_CODE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 570)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 571)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 572)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_NO_COMMON_BLOCKS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 573)) ;
      temp_34.addAssign_operation (GALGAS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 574)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 575)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 576)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 577)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 578)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 579)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 580)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 581)) ;
      temp_34.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 582)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 583)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 584)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 585)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 586)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 587)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 588)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 589)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 590)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 591)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 592)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_SHADOW = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 594)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 595)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 596)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 597)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 598)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 599)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 600)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 601)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 602)) ;
      temp_34.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 603)) ;
      temp_34.addAssign_operation (var_headerSearchPaths_26920  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)) ;
      temp_34.addAssign_operation (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_20102, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      temp_34.addAssign_operation (GALGAS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 606)) ;
      GALGAS_stringlist var_xcodeSettingList_27318 = temp_34 ;
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = GALGAS_bool (kIsEqual, var_SDK_20102.objectCompare (GALGAS_string ("macosx10.6"))).boolEnum () ;
        if (kBoolTrue == test_35) {
          var_xcodeSettingList_27318.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 609)) ;
          var_xcodeSettingList_27318.addAssign_operation (GALGAS_string ("GCC_ENABLE_OBJC_GC = required")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 610)) ;
        }
      }
      if (kBoolFalse == test_35) {
        var_xcodeSettingList_27318.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 612)) ;
      }
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = GALGAS_bool (kIsNotEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_36) {
          var_xcodeSettingList_27318.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18453, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 615)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 615))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 615)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_26760, var_xcodeSettingList_27318, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 617)) ;
      }
      GALGAS_stringlist var_m_5F_HandCodedSourceFileRefForAppList_30213 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 619)) ;
      GALGAS_stringlist var_m_5F_HandCodedResourceFileRefForAppList_30273 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 620)) ;
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 621)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_37) {
          GALGAS_stringlist joker_30567 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 626)) ;
          GALGAS_stringlist joker_30589 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 627)) ;
          GALGAS_stringlist joker_30668 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 629)) ;
          GALGAS_stringlist joker_30691 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 630)) ;
          GALGAS_string var_groupRef_30807 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Hand Coded Sources (App)"), GALGAS_string ("../"), GALGAS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 625)), joker_30567, joker_30589, var_m_5F_HandCodedSourceFileRefForAppList_30213, joker_30668, joker_30691, var_m_5F_HandCodedResourceFileRefForAppList_30273, var_groupRef_30807, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 622)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_groupRef_30807, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 634)) ;
          }
        }
      }
      GALGAS_stringlist var_appFrameworksFileRefList_30954 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 637)) ;
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 638)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_stringlist joker_31240 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 643)) ;
          GALGAS_stringlist joker_31262 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 644)) ;
          GALGAS_stringlist joker_31286 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 645)) ;
          GALGAS_stringlist joker_31308 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 646)) ;
          GALGAS_stringlist joker_31385 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 648)) ;
          GALGAS_string var_frameworkGroupRef_31437 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Frameworks (App)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::class_func_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 642)), joker_31240, joker_31262, joker_31286, joker_31308, var_appFrameworksFileRefList_30954, joker_31385, var_frameworkGroupRef_31437, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 639)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_frameworkGroupRef_31437, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 651)) ;
          }
        }
      }
      GALGAS_stringlist var_buildCFileRefListForTool_31585 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 654)) ;
      GALGAS_stringlist var_buildCppFileRefListForTool_31635 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 655)) ;
      GALGAS_stringlist var_m_5F_FileRefList_31687 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 656)) ;
      GALGAS_stringlist var_mm_5F_FileRefList_31726 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 657)) ;
      GALGAS_stringlist var_frameworksFileRefList_31766 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 658)) ;
      GALGAS_stringlist var_resourceFileBuildRefs_31813 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 659)) ;
      enumGalgasBool test_39 = kBoolTrue ;
      if (kBoolTrue == test_39) {
        test_39 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 661)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_39) {
          GALGAS_string var_groupRef_32425 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Hand Coded Sources (Tool)"), GALGAS_string ("../"), GALGAS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 665)), var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_32425, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 662)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_groupRef_32425, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 674)) ;
          }
        }
      }
      GALGAS_stringlist var_toolFrameworksFileRefList_32573 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 677)) ;
      enumGalgasBool test_40 = kBoolTrue ;
      if (kBoolTrue == test_40) {
        test_40 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 678)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_40) {
          GALGAS_stringlist joker_32862 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 683)) ;
          GALGAS_stringlist joker_32884 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 684)) ;
          GALGAS_stringlist joker_32908 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 685)) ;
          GALGAS_stringlist joker_32930 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 686)) ;
          GALGAS_stringlist joker_33007 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 688)) ;
          GALGAS_string var_frameworkGroupRef_33058 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Frameworks (Tool)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::class_func_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 682)), joker_32862, joker_32884, joker_32908, joker_32930, var_toolFrameworksFileRefList_32573, joker_33007, var_frameworkGroupRef_33058, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 679)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_frameworkGroupRef_33058, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 691)) ;
          }
        }
      }
      GALGAS_string var_groupRef_33731 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Generated by GALGAS"), GALGAS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696)).add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696)), GALGAS_stringset::class_func_setWithStringList (constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 697)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 697))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 697)), var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 694)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 706)) ;
      }
      GALGAS_stringlist var_libpmReferenceGroupList_33828 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 707)) ;
      {
      GALGAS_stringset temp_41 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 721)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_RelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 713)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_RelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 714)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_Relation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 715)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_Relation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 716)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_RelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 717)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_RelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 718)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_BDD-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 719)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_BDD.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 720)) ;
      temp_41.addAssign_operation (GALGAS_string ("C_BDD.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 721)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Binary Decision Diagrams"), GALGAS_string ("bdd"), temp_41, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 709)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 731)) ;
      {
      GALGAS_stringset temp_42 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 773)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 737)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 738)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 739)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 740)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 741)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 742)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 743)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 744)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 745)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 746)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 747)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 748)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 749)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigSigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 750)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 751)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 752)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 753)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 754)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 755)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-divide-naive.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 756)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 757)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 758)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 759)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 760)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 761)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 762)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 763)) ;
      temp_42.addAssign_operation (GALGAS_string ("BigUnsigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 764)) ;
      temp_42.addAssign_operation (GALGAS_string ("ChunkSelectSize.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 765)) ;
      temp_42.addAssign_operation (GALGAS_string ("ChunkSharedArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 766)) ;
      temp_42.addAssign_operation (GALGAS_string ("ChunkSharedArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 767)) ;
      temp_42.addAssign_operation (GALGAS_string ("UInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 768)) ;
      temp_42.addAssign_operation (GALGAS_string ("UInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 769)) ;
      temp_42.addAssign_operation (GALGAS_string ("chunk-U16.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 770)) ;
      temp_42.addAssign_operation (GALGAS_string ("chunk-U32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 771)) ;
      temp_42.addAssign_operation (GALGAS_string ("chunk-U64.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 772)) ;
      temp_42.addAssign_operation (GALGAS_string ("chunk-U8.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 773)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Big Integers"), GALGAS_string ("big-integers"), temp_42, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 733)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 783)) ;
      {
      GALGAS_stringset temp_43 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 793)) ;
      temp_43.addAssign_operation (GALGAS_string ("main.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 789)) ;
      temp_43.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 790)) ;
      temp_43.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 791)) ;
      temp_43.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 792)) ;
      temp_43.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 793)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Cocoa Utilities"), GALGAS_string ("cocoa_utilities"), temp_43, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 785)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 803)) ;
      {
      GALGAS_stringset temp_44 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 859)) ;
      temp_44.addAssign_operation (GALGAS_string ("Base.lproj/OC_GGS_Document.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 809)) ;
      temp_44.addAssign_operation (GALGAS_string ("Base.lproj/PMDebug.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 810)) ;
      temp_44.addAssign_operation (GALGAS_string ("Base.lproj/MainMenu.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 811)) ;
      temp_44.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 812)) ;
      temp_44.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 813)) ;
      temp_44.addAssign_operation (GALGAS_string ("F_CocoaWrapperForGalgas.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 814)) ;
      temp_44.addAssign_operation (GALGAS_string ("I_Stop.tiff")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 815)) ;
      temp_44.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 816)) ;
      temp_44.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 817)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 818)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 819)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 820)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 821)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_ColorTransformer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 822)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_ColorTransformer.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 823)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 824)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 825)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_Document.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 826)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_Document.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 827)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 828)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 829)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 830)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 831)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 832)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 833)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 834)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 835)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 836)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 837)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 838)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 839)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_TextView.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 840)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_GGS_TextView.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 841)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 842)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_Lexique.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 843)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_Token.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 844)) ;
      temp_44.addAssign_operation (GALGAS_string ("OC_Token.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 845)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMDebug.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 846)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMDebug.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 847)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMFontButton.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 848)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMFontButton.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 849)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 850)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMIssueDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 851)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMIssueInRuler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 852)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMIssueInRuler.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 853)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 854)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 855)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMTableViewHandlesContextualMenu.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 856)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMTableViewHandlesContextualMenu.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 857)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMUndoManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 858)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMUndoManager.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 859)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Cocoa Objc GALGAS"), GALGAS_string ("cocoa_objc_galgas"), temp_44, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 805)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 869)) ;
      {
      GALGAS_stringset temp_45 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 877)) ;
      temp_45.addAssign_operation (GALGAS_string ("TC_Array.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 875)) ;
      temp_45.addAssign_operation (GALGAS_string ("TC_UniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 876)) ;
      temp_45.addAssign_operation (GALGAS_string ("TC_UniqueArray2.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 877)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Generic Arraies"), GALGAS_string ("generic-arraies"), temp_45, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 871)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 887)) ;
      {
      GALGAS_stringset temp_46 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 908)) ;
      temp_46.addAssign_operation (GALGAS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 893)) ;
      temp_46.addAssign_operation (GALGAS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 894)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 895)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 896)) ;
      temp_46.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 897)) ;
      temp_46.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 898)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_CommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 899)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 900)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 901)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 902)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 903)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 904)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 905)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 906)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 907)) ;
      temp_46.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 908)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Command line Interface"), GALGAS_string ("command_line_interface"), temp_46, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 889)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 918)) ;
      {
      GALGAS_stringset temp_47 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 933)) ;
      temp_47.addAssign_operation (GALGAS_string ("FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 924)) ;
      temp_47.addAssign_operation (GALGAS_string ("FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 925)) ;
      temp_47.addAssign_operation (GALGAS_string ("AbstractFileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 926)) ;
      temp_47.addAssign_operation (GALGAS_string ("AbstractFileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 927)) ;
      temp_47.addAssign_operation (GALGAS_string ("BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 928)) ;
      temp_47.addAssign_operation (GALGAS_string ("BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 929)) ;
      temp_47.addAssign_operation (GALGAS_string ("TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 930)) ;
      temp_47.addAssign_operation (GALGAS_string ("TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 931)) ;
      temp_47.addAssign_operation (GALGAS_string ("HTMLFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 932)) ;
      temp_47.addAssign_operation (GALGAS_string ("HTMLFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 933)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("File"), GALGAS_string ("files"), temp_47, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 920)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 943)) ;
      {
      GALGAS_stringset temp_48 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1046)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 949)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 950)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_value_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 951)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_value_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 952)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 953)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 954)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 955)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 956)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_list.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 957)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_list.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 958)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_map.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 959)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_map.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 960)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 961)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 962)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 963)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 964)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 965)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 966)) ;
      temp_48.addAssign_operation (GALGAS_string ("acPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 967)) ;
      temp_48.addAssign_operation (GALGAS_string ("acPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 968)) ;
      temp_48.addAssign_operation (GALGAS_string ("acStrongPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 969)) ;
      temp_48.addAssign_operation (GALGAS_string ("acStrongPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 970)) ;
      temp_48.addAssign_operation (GALGAS_string ("cPtr_weakReference_proxy.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 971)) ;
      temp_48.addAssign_operation (GALGAS_string ("cPtr_weakReference_proxy.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 972)) ;
      temp_48.addAssign_operation (GALGAS_string ("Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 973)) ;
      temp_48.addAssign_operation (GALGAS_string ("Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 974)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 975)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 976)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 977)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 978)) ;
      GALGAS_string temp_49 ;
      const enumGalgasBool test_50 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_50) {
        temp_49 = GALGAS_string ("C_galgas_verbose_option.cpp") ;
      }else if (kBoolFalse == test_50) {
        temp_49 = GALGAS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_48.addAssign_operation (temp_49  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 979)) ;
      GALGAS_string temp_51 ;
      const enumGalgasBool test_52 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_52) {
        temp_51 = GALGAS_string ("C_galgas_verbose_option.h") ;
      }else if (kBoolFalse == test_52) {
        temp_51 = GALGAS_string ("C_galgas_quiet_option.h") ;
      }
      temp_48.addAssign_operation (temp_51  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 980)) ;
      temp_48.addAssign_operation (GALGAS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 981)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 982)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 983)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_io.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 984)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_io.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 985)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 986)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 987)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 988)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 989)) ;
      temp_48.addAssign_operation (GALGAS_string ("Lexique-parsing.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 990)) ;
      temp_48.addAssign_operation (GALGAS_string ("Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 991)) ;
      temp_48.addAssign_operation (GALGAS_string ("Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 992)) ;
      temp_48.addAssign_operation (GALGAS_string ("LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 993)) ;
      temp_48.addAssign_operation (GALGAS_string ("LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 994)) ;
      temp_48.addAssign_operation (GALGAS_string ("SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 995)) ;
      temp_48.addAssign_operation (GALGAS_string ("SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 996)) ;
      temp_48.addAssign_operation (GALGAS_string ("capCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 997)) ;
      temp_48.addAssign_operation (GALGAS_string ("capCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 998)) ;
      temp_48.addAssign_operation (GALGAS_string ("capCollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 999)) ;
      temp_48.addAssign_operation (GALGAS_string ("capCollectionElementArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1000)) ;
      temp_48.addAssign_operation (GALGAS_string ("capSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1001)) ;
      temp_48.addAssign_operation (GALGAS_string ("capSortedListElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1002)) ;
      temp_48.addAssign_operation (GALGAS_string ("cCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1003)) ;
      temp_48.addAssign_operation (GALGAS_string ("cCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1004)) ;
      temp_48.addAssign_operation (GALGAS_string ("cEnumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1005)) ;
      temp_48.addAssign_operation (GALGAS_string ("cEnumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1006)) ;
      temp_48.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1007)) ;
      temp_48.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1008)) ;
      temp_48.addAssign_operation (GALGAS_string ("cIndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1009)) ;
      temp_48.addAssign_operation (GALGAS_string ("cIndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1010)) ;
      temp_48.addAssign_operation (GALGAS_string ("cIssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1011)) ;
      temp_48.addAssign_operation (GALGAS_string ("cIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1012)) ;
      temp_48.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1013)) ;
      temp_48.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1014)) ;
      temp_48.addAssign_operation (GALGAS_string ("cObjectArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1015)) ;
      temp_48.addAssign_operation (GALGAS_string ("cObjectArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      temp_48.addAssign_operation (GALGAS_string ("cProductionNameDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1017)) ;
      temp_48.addAssign_operation (GALGAS_string ("cPtr_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1018)) ;
      temp_48.addAssign_operation (GALGAS_string ("cPtr_object.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1019)) ;
      temp_48.addAssign_operation (GALGAS_string ("cSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1020)) ;
      temp_48.addAssign_operation (GALGAS_string ("cSortedListElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1021)) ;
      temp_48.addAssign_operation (GALGAS_string ("cTemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1022)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1023)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1024)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1025)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1026)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1027)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1028)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_double.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1029)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1030)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_function.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1031)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1032)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1033)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_sint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1034)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_sint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1035)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1036)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_string-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1037)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1038)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1039)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_type.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1040)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_uint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1041)) ;
      temp_48.addAssign_operation (GALGAS_string ("GALGAS_uint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1042)) ;
      temp_48.addAssign_operation (GALGAS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1043)) ;
      temp_48.addAssign_operation (GALGAS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1044)) ;
      temp_48.addAssign_operation (GALGAS_string ("typeComparisonResult.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1045)) ;
      temp_48.addAssign_operation (GALGAS_string ("typeComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1046)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Galgas 2"), GALGAS_string ("galgas2"), temp_48, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 945)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1056)) ;
      {
      GALGAS_stringset temp_53 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1069)) ;
      temp_53.addAssign_operation (GALGAS_string ("C_ErrorOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1062)) ;
      temp_53.addAssign_operation (GALGAS_string ("C_ErrorOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1063)) ;
      temp_53.addAssign_operation (GALGAS_string ("AbstractOutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1064)) ;
      temp_53.addAssign_operation (GALGAS_string ("AbstractOutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1065)) ;
      temp_53.addAssign_operation (GALGAS_string ("C_ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1066)) ;
      temp_53.addAssign_operation (GALGAS_string ("C_ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1067)) ;
      temp_53.addAssign_operation (GALGAS_string ("C_ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1068)) ;
      temp_53.addAssign_operation (GALGAS_string ("C_ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1069)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Streams"), GALGAS_string ("streams"), temp_53, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1058)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1079)) ;
      {
      GALGAS_stringset temp_54 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1097)) ;
      temp_54.addAssign_operation (GALGAS_string ("String-class-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1085)) ;
      temp_54.addAssign_operation (GALGAS_string ("String-class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1086)) ;
      temp_54.addAssign_operation (GALGAS_string ("String-class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1087)) ;
      temp_54.addAssign_operation (GALGAS_string ("cUnicodeData.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1088)) ;
      temp_54.addAssign_operation (GALGAS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1089)) ;
      temp_54.addAssign_operation (GALGAS_string ("unicode_character_base.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1090)) ;
      temp_54.addAssign_operation (GALGAS_string ("unicode_character_cpp.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1091)) ;
      temp_54.addAssign_operation (GALGAS_string ("unicode_character_cpp.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1092)) ;
      temp_54.addAssign_operation (GALGAS_string ("unicode_character_implementation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1093)) ;
      temp_54.addAssign_operation (GALGAS_string ("unicode_character_m.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1094)) ;
      temp_54.addAssign_operation (GALGAS_string ("unicode_character_m.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      temp_54.addAssign_operation (GALGAS_string ("print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1096)) ;
      temp_54.addAssign_operation (GALGAS_string ("print.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1097)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Strings"), GALGAS_string ("strings"), temp_54, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1081)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1107)) ;
      {
      GALGAS_stringset temp_55 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1116)) ;
      temp_55.addAssign_operation (GALGAS_string ("DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1113)) ;
      temp_55.addAssign_operation (GALGAS_string ("DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1114)) ;
      temp_55.addAssign_operation (GALGAS_string ("Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1115)) ;
      temp_55.addAssign_operation (GALGAS_string ("Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1116)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Time"), GALGAS_string ("time"), temp_55, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1109)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1126)) ;
      {
      GALGAS_stringset temp_56 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1163)) ;
      temp_56.addAssign_operation (GALGAS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1132)) ;
      temp_56.addAssign_operation (GALGAS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1133)) ;
      temp_56.addAssign_operation (GALGAS_string ("U8Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1134)) ;
      temp_56.addAssign_operation (GALGAS_string ("U8Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1135)) ;
      temp_56.addAssign_operation (GALGAS_string ("DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1136)) ;
      temp_56.addAssign_operation (GALGAS_string ("DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1137)) ;
      temp_56.addAssign_operation (GALGAS_string ("PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1138)) ;
      temp_56.addAssign_operation (GALGAS_string ("PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1139)) ;
      temp_56.addAssign_operation (GALGAS_string ("SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1140)) ;
      temp_56.addAssign_operation (GALGAS_string ("SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1141)) ;
      temp_56.addAssign_operation (GALGAS_string ("UInt32Set.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1142)) ;
      temp_56.addAssign_operation (GALGAS_string ("UInt32Set.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1143)) ;
      temp_56.addAssign_operation (GALGAS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1144)) ;
      temp_56.addAssign_operation (GALGAS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1145)) ;
      temp_56.addAssign_operation (GALGAS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1146)) ;
      temp_56.addAssign_operation (GALGAS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1147)) ;
      temp_56.addAssign_operation (GALGAS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1148)) ;
      temp_56.addAssign_operation (GALGAS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1149)) ;
      temp_56.addAssign_operation (GALGAS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1150)) ;
      temp_56.addAssign_operation (GALGAS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1151)) ;
      temp_56.addAssign_operation (GALGAS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1152)) ;
      temp_56.addAssign_operation (GALGAS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1153)) ;
      temp_56.addAssign_operation (GALGAS_string ("SHA256.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1154)) ;
      temp_56.addAssign_operation (GALGAS_string ("SHA256.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1155)) ;
      temp_56.addAssign_operation (GALGAS_string ("macroAssert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1156)) ;
      temp_56.addAssign_operation (GALGAS_string ("macroAssert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1157)) ;
      temp_56.addAssign_operation (GALGAS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1158)) ;
      temp_56.addAssign_operation (GALGAS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1159)) ;
      temp_56.addAssign_operation (GALGAS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1160)) ;
      temp_56.addAssign_operation (GALGAS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1161)) ;
      temp_56.addAssign_operation (GALGAS_string ("galgas-random.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1162)) ;
      temp_56.addAssign_operation (GALGAS_string ("galgas-random.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1163)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Utilities"), GALGAS_string ("utilities"), temp_56, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_groupRef_33731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1128)) ;
      }
      var_libpmReferenceGroupList_33828.addAssign_operation (var_groupRef_33731  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)) ;
      GALGAS_string var_libpmGroupRef_49301 ;
      {
      extensionSetter_addGroup (var_xcodeProject_26760, GALGAS_string ("libpm"), GALGAS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1175)).add_operation (GALGAS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1175)), var_libpmReferenceGroupList_33828, var_libpmGroupRef_49301, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1175)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_libpmGroupRef_49301, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1176)) ;
      }
      GALGAS_string var_resourcesGroupRef_49828 ;
      {
      GALGAS_stringset temp_57 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1182)) ;
      temp_57.addAssign_operation (GALGAS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1182)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Resources"), GALGAS_string ("."), temp_57, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_resourcesGroupRef_49828, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1178)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_resourcesGroupRef_49828, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1192)) ;
      }
      GALGAS_string var_userResourcesGroupRef_50405 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("User Resources"), GALGAS_string ("userResources"), GALGAS_stringset::class_func_setWithStringList (var_resourceFiles_26395  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1197)), var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_userResourcesGroupRef_50405, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1194)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_userResourcesGroupRef_50405, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1206)) ;
      }
      GALGAS_string var_frameworkGroupRef_51030 ;
      {
      GALGAS_stringset temp_58 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1213)) ;
      temp_58.addAssign_operation (GALGAS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1212)) ;
      temp_58.addAssign_operation (GALGAS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1213)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26760, GALGAS_string ("Frameworks for App"), GALGAS_string ("/System/Library/Frameworks"), temp_58, var_buildCFileRefListForTool_31585, var_buildCppFileRefListForTool_31635, var_m_5F_FileRefList_31687, var_mm_5F_FileRefList_31726, var_frameworksFileRefList_31766, var_resourceFileBuildRefs_31813, var_frameworkGroupRef_51030, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1208)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26760, var_frameworkGroupRef_51030, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1223)) ;
      }
      GALGAS_stringlist var_codeSigningSettingList_51174 ;
      enumGalgasBool test_59 = kBoolTrue ;
      if (kBoolTrue == test_59) {
        test_59 = GALGAS_bool (kIsEqual, var_macCodeSign_18070.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_59) {
          GALGAS_stringlist temp_60 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1227)) ;
          temp_60.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"-\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1227)) ;
          var_codeSigningSettingList_51174 = temp_60 ;
        }
      }
      if (kBoolFalse == test_59) {
        GALGAS_stringlist var_components_51316 = var_macCodeSign_18070.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1229)) ;
        enumGalgasBool test_61 = kBoolTrue ;
        if (kBoolTrue == test_61) {
          test_61 = GALGAS_bool (kIsNotEqual, var_components_51316.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1230)).objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
          if (kBoolTrue == test_61) {
            TC_Array <C_FixItDescription> fixItArray62 ;
            inCompiler->emitSemanticError (var_macCodeSign_18070.readProperty_location (), GALGAS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray62  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)) ;
            var_codeSigningSettingList_51174.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_61) {
          enumGalgasBool test_63 = kBoolTrue ;
          if (kBoolTrue == test_63) {
            test_63 = GALGAS_bool (kIsEqual, var_components_51316.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1232)).objectCompare (GALGAS_string ("MacDeveloper"))).boolEnum () ;
            if (kBoolTrue == test_63) {
              GALGAS_stringlist temp_64 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1235)) ;
              temp_64.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)) ;
              temp_64.addAssign_operation (GALGAS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_51316.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1235)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1235)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1235))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1235)) ;
              var_codeSigningSettingList_51174 = temp_64 ;
            }
          }
          if (kBoolFalse == test_63) {
            enumGalgasBool test_65 = kBoolTrue ;
            if (kBoolTrue == test_65) {
              test_65 = GALGAS_bool (kIsEqual, var_components_51316.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1237)).objectCompare (GALGAS_string ("Certificate"))).boolEnum () ;
              if (kBoolTrue == test_65) {
                GALGAS_stringlist temp_66 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1238)) ;
                temp_66.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_51316.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1238)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1238)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1238))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1238)) ;
                var_codeSigningSettingList_51174 = temp_66 ;
              }
            }
            if (kBoolFalse == test_65) {
              TC_Array <C_FixItDescription> fixItArray67 ;
              inCompiler->emitSemanticError (var_macCodeSign_18070.readProperty_location (), GALGAS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray67  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1240)) ;
              var_codeSigningSettingList_51174.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GALGAS_stringlist temp_68 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1248)) ;
      temp_68.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 2")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1245)) ;
      temp_68.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1246)) ;
      temp_68.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1247)) ;
      temp_68.addAssign_operation (GALGAS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_24931, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1248)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1248)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1248)).add_operation (GALGAS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1248))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1248)) ;
      GALGAS_stringlist var_settingList_52186 = temp_68.add_operation (var_codeSigningSettingList_51174, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)) ;
      enumGalgasBool test_69 = kBoolTrue ;
      if (kBoolTrue == test_69) {
        test_69 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1250)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_69) {
          GALGAS_string var_s_52540 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_52573 (constinArgument_inHandCodedLinkToolFileList, kENUMERATION_UP) ;
          while (enumerator_52573.hasCurrentObject ()) {
            var_s_52540.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_52573.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1253)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1253)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1253)) ;
            if (enumerator_52573.hasNextObject ()) {
              var_s_52540.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1254)) ;
            }
            enumerator_52573.gotoNextObject () ;
          }
          var_s_52540.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1256)) ;
          var_settingList_52186.addAssign_operation (var_s_52540  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1257)) ;
        }
      }
      GALGAS_string var_releaseTargetRef_53050 ;
      GALGAS_string var_releaseProductFileRef_53093 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_26760, constinArgument_inTargetName.add_operation (GALGAS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1260)), constinArgument_inTargetName, var_buildCFileRefListForTool_31585.add_operation (var_buildCppFileRefListForTool_31635, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1262)).add_operation (var_mm_5F_FileRefList_31726, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1262)), var_toolFrameworksFileRefList_32573, var_settingList_52186, var_releaseTargetRef_53050, var_releaseProductFileRef_53093, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1259)) ;
      }
      GALGAS_stringlist temp_70 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1274)) ;
      temp_70.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)) ;
      temp_70.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1271)) ;
      temp_70.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1272)) ;
      temp_70.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1273)) ;
      temp_70.addAssign_operation (GALGAS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_24931, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1274)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1274)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1274)).add_operation (GALGAS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1274))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1274)) ;
      var_settingList_52186 = temp_70.add_operation (var_codeSigningSettingList_51174, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)) ;
      enumGalgasBool test_71 = kBoolTrue ;
      if (kBoolTrue == test_71) {
        test_71 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1276)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_71) {
          GALGAS_string var_s_53537 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_53570 (constinArgument_inHandCodedLinkToolFileList, kENUMERATION_UP) ;
          while (enumerator_53570.hasCurrentObject ()) {
            var_s_53537.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_53570.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1279)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1279)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1279)) ;
            if (enumerator_53570.hasNextObject ()) {
              var_s_53537.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1280)) ;
            }
            enumerator_53570.gotoNextObject () ;
          }
          var_s_53537.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1282)) ;
          var_settingList_52186.addAssign_operation (var_s_53537  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1283)) ;
        }
      }
      GALGAS_string var_debugTargetRef_54062 ;
      GALGAS_string var_debugProductFileRef_54103 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_26760, constinArgument_inTargetName.add_operation (GALGAS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1286)), constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1287)), var_buildCFileRefListForTool_31585.add_operation (var_buildCppFileRefListForTool_31635, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1288)).add_operation (var_mm_5F_FileRefList_31726, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1288)), var_toolFrameworksFileRefList_32573, var_settingList_52186, var_debugTargetRef_54062, var_debugProductFileRef_54103, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1285)) ;
      }
      GALGAS_stringlist temp_72 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1297)) ;
      temp_72.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1296)) ;
      temp_72.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1297)) ;
      GALGAS_stringlist var_cocoaConfigurationSettingList_54173 = temp_72.add_operation (var_codeSigningSettingList_51174, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1298)) ;
      {
      GALGAS_stringlist temp_73 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1306)) ;
      temp_73.addAssign_operation (var_releaseTargetRef_53050  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1306)) ;
      temp_73.addAssign_operation (var_debugTargetRef_54062  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1306)) ;
      GALGAS__32_stringlist temp_74 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1307)) ;
      temp_74.addAssign_operation (var_releaseProductFileRef_53093, constinArgument_inTargetName  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1307)) ;
      temp_74.addAssign_operation (var_debugProductFileRef_54103, constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1307))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1307)) ;
      GALGAS_string joker_54948 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_26760, GALGAS_string ("Cocoa ").add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1300)), GALGAS_string ("Cocoa").add_operation (constinArgument_inTargetName.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas", 1301)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1301)), var_m_5F_FileRefList_31687.add_operation (var_m_5F_HandCodedSourceFileRefForAppList_30213, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1302)), var_frameworksFileRefList_31766.add_operation (var_appFrameworksFileRefList_30954, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)), var_resourceFileBuildRefs_31813.add_operation (var_m_5F_HandCodedResourceFileRefForAppList_30273, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1304)), var_cocoaConfigurationSettingList_54173, temp_73, temp_74, joker_54948, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1299)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_26760, var_dir_24831.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1312)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1312)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1312)), var_newIntermediateFilePath_26506, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1311)) ;
    }
  }
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "F_Analyze_CLI_Options.h"
#include "C_builtin_CLI_Options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
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
  return "3.7.1" ;
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
      test_1 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
  GALGAS_stringlist temp_0 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  temp_0.addAssign_operation (GALGAS_string ("galgasProject")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  GALGAS_stringlist var_candidateProjectFiles_3103 = var_parentDirectory_2987.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles_3103.getter_count (SOURCE_FILE ("galgasProgram.galgas", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 80)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles_3103.getter_count (SOURCE_FILE ("galgasProgram.galgas", 81)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3377 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_3447 (var_candidateProjectFiles_3103, kENUMERATION_UP) ;
        while (enumerator_3447.hasCurrentObject ()) {
          var_s_3377.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_3447.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 84)) ;
          enumerator_3447.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3377, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 86)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_3562 = var_parentDirectory_2987.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)).add_operation (var_candidateProjectFiles_3103.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GALGAS_lstring::class_func_new (var_projectFilePath_3562, constinArgument_inSourceFile.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 89)), GALGAS_bool (false), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 89)) ;
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
  GALGAS_string var_parentDirectory_4158 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 103)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 103)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  temp_0.addAssign_operation (GALGAS_string ("ggsProject")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  GALGAS_stringlist var_candidateProjectFiles_4274 = var_parentDirectory_4158.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles_4274.getter_count (SOURCE_FILE ("galgasProgram.galgas", 105)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 106)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles_4274.getter_count (SOURCE_FILE ("galgasProgram.galgas", 107)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_4545 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_4615 (var_candidateProjectFiles_4274, kENUMERATION_UP) ;
        while (enumerator_4615.hasCurrentObject ()) {
          var_s_4545.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_4615.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 110)) ;
          enumerator_4615.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_4545, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 112)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_4730 = var_parentDirectory_4158.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)).add_operation (var_candidateProjectFiles_4274.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GALGAS_lstring::class_func_new (var_projectFilePath_4730, constinArgument_inSourceFile.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 115)), GALGAS_bool (true), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 115)) ;
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
  GALGAS_templateInstructionListAST joker_5318 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5318  COMMA_SOURCE_FILE ("galgasProgram.galgas", 129)) ;
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
  F_Analyze_CLI_Options (inArgc, inArgv,
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

