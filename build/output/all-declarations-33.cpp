#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-33.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GGS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapper var_fw_1495 = GGS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  UpEnumerator_stringlist enumerator_1563 (var_fw_1495.getter_allDirectoryPathes (SOURCE_FILE ("libpmHandling.galgas", 32))) ;
  while (enumerator_1563.hasCurrentObject ()) {
    GGS_string var_actualDirectory_1615 = constinArgument_inLIBPMPath.add_operation (enumerator_1563.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 33)) ;
    var_actualDirectory_1615.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 34)) ;
    enumerator_1563.gotoNextObject () ;
  }
  GGS_stringset var_allNeededFileSet_1735 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_1765 (var_fw_1495.getter_allTextFilePathes (SOURCE_FILE ("libpmHandling.galgas", 38))) ;
  while (enumerator_1765.hasCurrentObject ()) {
    GGS_string var_contents_1808 = var_fw_1495.getter_textFileContentsAtPath (enumerator_1765.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 39)) ;
    GGS_string var_actualFilePath_1861 = constinArgument_inLIBPMPath.add_operation (enumerator_1765.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 40)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_actualFilePath_1861.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas", 41)).objectCompare (GGS_string ("py"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_bool joker_2023 ; // Joker input parameter
        var_contents_1808.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1861, joker_2023, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 42)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool joker_2101 ; // Joker input parameter
      var_contents_1808.method_writeToFileWhenDifferentContents (var_actualFilePath_1861, joker_2101, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 44)) ;
    }
    var_allNeededFileSet_1735.plusPlusAssignOperation (enumerator_1765.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 46)) ;
    enumerator_1765.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_2182 (var_fw_1495.getter_allBinaryFilePathes (SOURCE_FILE ("libpmHandling.galgas", 49))) ;
  while (enumerator_2182.hasCurrentObject ()) {
    GGS_data var_contents_2228 = var_fw_1495.getter_binaryFileContentsAtPath (enumerator_2182.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 50)) ;
    GGS_string var_actualFilePath_2284 = constinArgument_inLIBPMPath.add_operation (enumerator_2182.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 51)) ;
    GGS_bool joker_2384 ; // Joker input parameter
    var_contents_2228.method_writeToFileWhenDifferentContents (var_actualFilePath_2284, joker_2384, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)) ;
    var_allNeededFileSet_1735.plusPlusAssignOperation (enumerator_2182.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 53)) ;
    enumerator_2182.gotoNextObject () ;
  }
  GGS_stringset var_allActualFileSet_2469 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_2499 (constinArgument_inLIBPMPath.getter_regularFiles (GGS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas", 57))) ;
  while (enumerator_2499.hasCurrentObject ()) {
    var_allActualFileSet_2469.plusPlusAssignOperation (GGS_string ("/").add_operation (enumerator_2499.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 58))  COMMA_SOURCE_FILE ("libpmHandling.galgas", 58)) ;
    enumerator_2499.gotoNextObject () ;
  }
  GGS_stringset var_uselessFileSet_2594 = var_allActualFileSet_2469.substract_operation (var_allNeededFileSet_1735, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 60)) ;
  UpEnumerator_stringset enumerator_2654 (var_uselessFileSet_2594) ;
  while (enumerator_2654.hasCurrentObject ()) {
    {
    GGS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2654.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 62)) ;
    }
    enumerator_2654.gotoNextObject () ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 32)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Building semantic context"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 33)) ;
      }
    }
  }
  GGS_galgasDeclarationAST var_semanticDeclarations_2145 = constinArgument_inSemanticDeclarations ;
  {
  routine_appendPredefinedTypesASTs_26__26_ (var_semanticDeclarations_2145.mProperty_mDeclarationList, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37)) ;
  }
  GGS_commandLineOptionListAST var_options_2358 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  UpEnumerator__32_stringlist enumerator_2399 (GGS_application::class_func_boolOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 40))) ;
  while (enumerator_2399.hasCurrentObject ()) {
    var_options_2358.addAssignOperation (GGS_string ("bool").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 42)), GGS_lstring::init_21__21_ (enumerator_2399.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 43)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_boolOptionInvocationCharacter (enumerator_2399.current (HERE).readProperty_mValue_30_ (), enumerator_2399.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), inCompiler COMMA_HERE), GGS_application::class_func_boolOptionInvocationString (enumerator_2399.current (HERE).readProperty_mValue_30_ (), enumerator_2399.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)), GGS_application::class_func_boolOptionCommentString (enumerator_2399.current (HERE).readProperty_mValue_30_ (), enumerator_2399.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 41)) ;
    enumerator_2399.gotoNextObject () ;
  }
  UpEnumerator__32_stringlist enumerator_2832 (GGS_application::class_func_uintOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 50))) ;
  while (enumerator_2832.hasCurrentObject ()) {
    var_options_2358.addAssignOperation (GGS_string ("uint").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 52)), GGS_lstring::init_21__21_ (enumerator_2832.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 53)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_uintOptionInvocationCharacter (enumerator_2832.current (HERE).readProperty_mValue_30_ (), enumerator_2832.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), inCompiler COMMA_HERE), GGS_application::class_func_uintOptionInvocationString (enumerator_2832.current (HERE).readProperty_mValue_30_ (), enumerator_2832.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)), GGS_application::class_func_uintOptionCommentString (enumerator_2832.current (HERE).readProperty_mValue_30_ (), enumerator_2832.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 51)) ;
    enumerator_2832.gotoNextObject () ;
  }
  UpEnumerator__32_stringlist enumerator_3271 (GGS_application::class_func_stringOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 60))) ;
  while (enumerator_3271.hasCurrentObject ()) {
    var_options_2358.addAssignOperation (GGS_string ("string").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 62)), GGS_lstring::init_21__21_ (enumerator_3271.current (HERE).readProperty_mValue_31_ (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 63)), inCompiler COMMA_HERE), GGS_lchar::init_21__21_ (GGS_application::class_func_stringOptionInvocationCharacter (enumerator_3271.current (HERE).readProperty_mValue_30_ (), enumerator_3271.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), inCompiler COMMA_HERE), GGS_application::class_func_stringOptionInvocationString (enumerator_3271.current (HERE).readProperty_mValue_30_ (), enumerator_3271.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)), GGS_application::class_func_stringOptionCommentString (enumerator_3271.current (HERE).readProperty_mValue_30_ (), enumerator_3271.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 66)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 67)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 68))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 61)) ;
    enumerator_3271.gotoNextObject () ;
  }
  var_semanticDeclarations_2145.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (true), GGS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 72)), var_options_2358, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 70)) ;
  GGS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3874 = function_optionNameForUsefulEntitiesGraph (GGS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 75)) ;
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3874  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 76)) ;
  GGS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_4271 ;
  {
  routine_buildGalgasSemanticContext_3F__3F__3F_galgas_34__21__21__21_ (var_semanticDeclarations_2145, constinArgument_inEndOfProjectSourceFile, constinArgument_inGalgas_34_, outArgument_outSemanticContext, outArgument_outTypeMap, var_sortedSemanticDeclarationListAST_4271, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 78)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 87)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      routine_println_3F_ (GGS_string ("*** Semantic analysis"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 88)) ;
      }
    }
  }
  UpEnumerator_lstringlist enumerator_4482 (extensionGetter_unsolvedEntryList (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 91))) ;
  while (enumerator_4482.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (enumerator_4482.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("the '@").add_operation (enumerator_4482.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)).add_operation (GGS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 92)) ;
    enumerator_4482.gotoNextObject () ;
  }
  outArgument_outSemanticDeclarationSortedListForGeneration = GGS_semanticDeclarationListForGeneration::init (inCompiler COMMA_HERE) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 96)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_predefinedTypes var_predefinedTypes_4703 = function_buildPredefinedTypes (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 97)) ;
      UpEnumerator_semanticDeclarationListAST enumerator_4778 (var_sortedSemanticDeclarationListAST_4271) ;
      while (enumerator_4778.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((cPtr_semanticDeclarationAST *) enumerator_4778.current (HERE).readProperty_mSemanticDeclaration ().ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, outArgument_outTypeMap, var_predefinedTypes_4703, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 99)) ;
        enumerator_4778.gotoNextObject () ;
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
  GGS_galgasDeclarationAST var_semanticDeclarations_5947 = constinArgument_inDeclarations ;
  UpEnumerator_semanticDeclarationListAST enumerator_6021 (constinArgument_inDeclarations.readProperty_mDeclarationList ()) ;
  while (enumerator_6021.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((cPtr_semanticDeclarationAST *) enumerator_6021.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticDeclarations_5947, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 127)) ;
    enumerator_6021.gotoNextObject () ;
  }
  GGS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_6324 = GGS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  GGS_extensionInitializerForBuildingContext var_extensionInitializerForBuildingContext_6432 = GGS_extensionInitializerForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_equatableExtensionMap var_equatableExtensionMap_6506 = GGS_equatableExtensionMap::init (inCompiler COMMA_HERE) ;
  GGS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6578 = GGS_extensionMethodMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6665 = GGS_extensionGetterMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6752 = GGS_extensionSetterMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6829 = GGS_semanticDeclarationListAST::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListAST enumerator_6909 (var_semanticDeclarations_5947.readProperty_mDeclarationList ()) ;
  while (enumerator_6909.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((cPtr_semanticDeclarationAST *) enumerator_6909.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticTypePrecedenceGraph_6324, var_equatableExtensionMap_6506, var_extensionInitializerForBuildingContext_6432, var_extensionMethodMapForBuildingContext_6578, var_extensionGetterMapForBuildingContext_6665, var_extensionSetterMapForBuildingContext_6752, var_extensionOverrideDefinitionList_6829, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 141)) ;
    enumerator_6909.gotoNextObject () ;
  }
  UpEnumerator_lstringlist enumerator_7392 (var_semanticTypePrecedenceGraph_6324.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 152))) ;
  while (enumerator_7392.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_7392.current (HERE).readProperty_mValue ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 153)).objectCompare (GGS_char (utf32 (63)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_println_3F_ (GGS_string ("Optional '").add_operation (enumerator_7392.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 154)) ;
        }
      }
    }
    enumerator_7392.gotoNextObject () ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_semanticTypePrecedenceGraph_6324.getter_undefinedNodeCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator_lstringlist enumerator_7648 (var_semanticTypePrecedenceGraph_6324.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159))) ;
      while (enumerator_7648.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7648.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_7648.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)).add_operation (GGS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 160)) ;
        enumerator_7648.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GGS_string ("semantic analysis not performed, due to undefined type error(s)"), fixItArray3  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 162)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
      outArgument_outTypeMap.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_8067 ;
    GGS_lstringlist joker_8025 ; // Joker input parameter
    GGS_lstringlist joker_8108 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_6324.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_8025, var_unsortedSemanticDeclarationListAST_8067, joker_8108, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 166)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_8067.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 172)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string var_s_8186 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_8067.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)) ;
        UpEnumerator_semanticDeclarationListAST enumerator_8360 (var_unsortedSemanticDeclarationListAST_8067) ;
        while (enumerator_8360.hasCurrentObject ()) {
          var_s_8186.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_8360.current (HERE).readProperty_mSemanticDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)) ;
          enumerator_8360.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_8186, fixItArray5  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 177)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
        outArgument_outTypeMap.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssignOperation(var_extensionOverrideDefinitionList_6829, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 180)) ;
      outArgument_outTypeMap = GGS_unifiedTypeMap::init (inCompiler COMMA_HERE) ;
      outArgument_outSemanticContext = GGS_semanticContext::init_21_galgas_34_ (constinArgument_inGalgas_34_, inCompiler COMMA_HERE) ;
      UpEnumerator_semanticDeclarationListAST enumerator_8873 (outArgument_outSortedSemanticDeclarationListAST) ;
      while (enumerator_8873.hasCurrentObject ()) {
        callExtensionMethod_enterDeclarationInSemanticContext ((cPtr_semanticDeclarationAST *) enumerator_8873.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_equatableExtensionMap_6506, var_extensionInitializerForBuildingContext_6432, var_extensionMethodMapForBuildingContext_6578, var_extensionGetterMapForBuildingContext_6665, var_extensionSetterMapForBuildingContext_6752, outArgument_outTypeMap, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 186)) ;
        enumerator_8873.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3???&swift&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26_swift_26__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                      const GGS_string constinArgument_inProductDirectory,
                                                                                      const GGS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                      GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                                      GGS_stringlist & ioArgument_ioToolProductFileList,
                                                                                      GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                                                      GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_semanticDeclarationListForGeneration enumerator_9991 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_9991.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((cPtr_semanticDeclarationForGeneration *) enumerator_9991.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioSwiftAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 216)) ;
    enumerator_9991.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 224)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 225)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 226)) ;
          }
          {
          routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 232)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 239)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 239)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 240)) ;
            }
            {
            routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 246)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 253)).operator_and (GGS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 253)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 254)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 260)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 267)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 268)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 277)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 283)) ;
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
  GGS_stringlist var_headerInclusionList_31__12937 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_headerInclusionList_32__12982 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_13030 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_13030.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset var_inclusionSet_31__13155 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerDef_31__13255 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__13155, var_headerDef_31__13255, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 308)) ;
        GGS_string var_headerIncludes_31__13277 = GGS_string::makeEmptyString () ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_inclusionSet_31__13155.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)).add_operation (GGS_string ("headers 1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 311)) ;
            }
          }
        }
        UpEnumerator_stringset enumerator_13473 (var_inclusionSet_31__13155) ;
        while (enumerator_13473.hasCurrentObject ()) {
          var_headerIncludes_31__13277.plusAssignOperation(GGS_string ("#include \"").add_operation (enumerator_13473.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 314)) ;
          enumerator_13473.gotoNextObject () ;
        }
        var_headerIncludes_31__13277.plusAssignOperation(var_headerDef_31__13255, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 316)) ;
        GGS_stringset var_inclusionSet_32__13619 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerDef_32__13739 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__13619, var_headerDef_32__13739, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 318)) ;
        GGS_string var_headerIncludes_32__13761 = GGS_string::makeEmptyString () ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_inclusionSet_32__13619.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 320)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)).add_operation (GGS_string ("headers 2"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)) ;
            }
          }
        }
        UpEnumerator_stringset enumerator_13957 (var_inclusionSet_32__13619) ;
        while (enumerator_13957.hasCurrentObject ()) {
          var_headerIncludes_32__13761.plusAssignOperation(GGS_string ("#include \"").add_operation (enumerator_13957.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)) ;
          enumerator_13957.gotoNextObject () ;
        }
        var_headerIncludes_32__13761.plusAssignOperation(var_headerDef_32__13739, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 326)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 328)).enumValue ()) {
        case GGS_headerKind::Enumeration::invalid:
          break ;
        case GGS_headerKind::Enumeration::enum_noHeader:
          {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_31__13277.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 331)).readProperty_location (), GGS_string ("'noHeader' setting for the '").add_operation (enumerator_13030.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 332)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 332)), fixItArray4  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 331)) ;
              }
            }
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13761.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 335)).readProperty_location (), GGS_string ("'noHeader' setting for the '").add_operation (enumerator_13030.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 336)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 336)), fixItArray6  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 335)) ;
              }
            }
          }
          break ;
        case GGS_headerKind::Enumeration::enum_oneHeader:
          {
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, var_headerIncludes_31__13277.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 340)).readProperty_location (), GGS_string ("'oneHeader' setting for the '").add_operation (enumerator_13030.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 341)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 341)), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 340)) ;
              }
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13761.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 344)).readProperty_location (), GGS_string ("'oneHeader' setting for the '").add_operation (enumerator_13030.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 345)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 345)), fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 344)) ;
              }
            }
          }
          break ;
        case GGS_headerKind::Enumeration::enum_twoHeaders:
          {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, var_headerIncludes_31__13277.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GenericArray <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)).readProperty_location (), GGS_string ("'twoHeaders' setting for the '").add_operation (enumerator_13030.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)), fixItArray12  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)) ;
              }
            }
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = GGS_bool (ComparisonKind::equal, var_headerIncludes_32__13761.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GenericArray <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)).readProperty_location (), GGS_string ("'twoHeaders' setting for the '").add_operation (enumerator_13030.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)), fixItArray14  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)) ;
              }
            }
          }
          break ;
        }
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          test_15 = GGS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)).objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            GGS_string var_headerString_15583 = GGS_string ("#pragma once\n") ;
            var_headerString_15583.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)) ;
            var_headerString_15583.plusAssignOperation(GGS_string ("#include \"all-predefined-types.h\"\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)) ;
            var_headerString_15583.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)) ;
            var_headerString_15583.plusAssignOperation(var_headerIncludes_31__13277, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)) ;
            var_headerString_15583.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 364)) ;
            var_headerString_15583.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)) ;
            GGS_string temp_16 ;
            const GalgasBool test_17 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              temp_16 = GGS_string ("-1") ;
            }else if (GalgasBool::boolFalse == test_17) {
              temp_16 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_headerFileName_16014 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 366)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 366)) ;
            var_headerInclusionList_31__12937.addAssignOperation (var_headerFileName_16014  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 368)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_16014.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)) ;
            ioArgument_ioToolHeaderFileList.addAssignOperation (var_headerFileName_16014.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_16014.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)), var_headerString_15583, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)) ;
            }
          }
        }
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_string var_headerString_16592 = GGS_string ("#ifndef ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)).add_operation (GGS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)) ;
            var_headerString_16592.plusAssignOperation(GGS_string ("#define ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)).add_operation (GGS_string ("_DEFINED\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)) ;
            var_headerString_16592.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)) ;
            var_headerString_16592.plusAssignOperation(GGS_string ("#include \"").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)).add_operation (GGS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)) ;
            var_headerString_16592.plusAssignOperation(GGS_string ("\n//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)) ;
            var_headerString_16592.plusAssignOperation(var_headerIncludes_32__13761, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 384)) ;
            var_headerString_16592.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 385)) ;
            var_headerString_16592.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 386)) ;
            var_headerString_16592.plusAssignOperation(GGS_string ("#endif\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 387)) ;
            var_headerInclusionList_32__12982.addAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 388))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 388)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389)) ;
            ioArgument_ioToolHeaderFileList.addAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 390)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 390))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 390)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_13030.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 393)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 393)), var_headerString_16592, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 391)) ;
            }
          }
        }
      }
    }
    enumerator_13030.gotoNextObject () ;
  }
  GGS_string var_headerString_17861 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), var_headerInclusionList_31__12937.add_operation (var_headerInclusionList_32__12982, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 402)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 400))) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 404)) ;
  ioArgument_ioToolHeaderFileList.addAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 405)) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_headerString_17861, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 406)) ;
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
  GGS_string var_headerString_18550 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), GGS_stringlist::init (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 420))) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_18706 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_18706.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18706.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset joker_18861 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_31__18887 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18706.current (HERE).readProperty_mDeclaration ().ptr (), joker_18861, var_headerString_31__18887, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 427)) ;
        var_headerString_18550.plusAssignOperation(var_headerString_31__18887, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 428)) ;
      }
    }
    enumerator_18706.gotoNextObject () ;
  }
  UpEnumerator_semanticDeclarationListForGeneration enumerator_18993 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_18993.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18993.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 433)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 433)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_stringset joker_19168 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__19194 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18993.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, joker_19168, var_headerString_32__19194, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 434)) ;
        var_headerString_18550.plusAssignOperation(var_headerString_32__19194, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 435)) ;
      }
    }
    enumerator_18993.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 438)) ;
  ioArgument_ioToolHeaderFileList.addAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 439)) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_headerString_18550, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 440)) ;
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 473)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 473)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 474)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 474)) ;
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 475)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_stringset var_inclusionSet_20731 ;
          GGS_string var_headerString_20765 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 477)), var_inclusionSet_20731, var_headerString_20765, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 476)) ;
          UpEnumerator_stringset enumerator_20797 (var_inclusionSet_20731) ;
          while (enumerator_20797.hasCurrentObject ()) {
            {
            routine_buildHeader_3F__3F__3F__26__26_ (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20797.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 482)) ;
            }
            enumerator_20797.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssignOperation(var_headerString_20765, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 490)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssignOperation(GGS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 492)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 492)) ;
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

static const GALGAS_TypeDescriptor * functionArgs_definitionGroupAmount [1] = {
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
  GGS_bool var_useOneHugeHeader_21699 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  GGS_bigint var_n_21812 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515)) ;
  GGS_bigint var_fileIdx_21824 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)) ;
  GGS_string var_implementationString_21842 = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_21885 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_21925 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_21925.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21925.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_code_22136 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_21925.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21885, var_code_22136, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_inclusionSet_21885.getter_hasKey (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 522)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21925.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)).add_operation (GGS_string (" cpp headers"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 523)) ;
            }
          }
        }
        var_implementationString_21842.plusAssignOperation(var_code_22136, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525)) ;
        var_implementationString_21842.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21925.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)) ;
        var_n_21812.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 527)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_n_21812.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)).getter_bigint (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_useOneHugeHeader_21699.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 530)) ;
                temp_4.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 530)) ;
                var_inclusionSet_21885 = temp_4 ;
              }
            }
            GGS_string var_header_22593 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21885.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 533)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 532))) ;
            GGS_string var_fileName_22732 = GGS_string ("all-declarations-").add_operation (var_fileIdx_21824.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)) ;
            GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_fileName_22732, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_22732  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 537)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22732, var_header_22593.add_operation (var_implementationString_21842, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 538)) ;
            }
            var_n_21812 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 543)) ;
            var_fileIdx_21824.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 544)) ;
            var_implementationString_21842 = GGS_string::makeEmptyString () ;
            var_inclusionSet_21885 = GGS_stringset::init (inCompiler COMMA_HERE) ;
          }
        }
      }
    }
    enumerator_21925.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_implementationString_21842.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_useOneHugeHeader_21699.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 553)) ;
          temp_8.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 553)) ;
          var_inclusionSet_21885 = temp_8 ;
        }
      }
      GGS_string var_header_23298 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21885.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 556)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 555))) ;
      GGS_string var_fileName_23425 = GGS_string ("all-declarations-").add_operation (var_fileIdx_21824.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 558)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 558)) ;
      GGS_stringlist temp_9 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 559)) ;
      temp_9.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_fileName_23425, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 559)) ;
      ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 559)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_23425  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 560)) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_23425, var_header_23298.add_operation (var_implementationString_21842, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 561)) ;
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
  GGS_headerCompositionMap var_headerCompositionMap_24175 = GGS_headerCompositionMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_24223 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_24223.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 580)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 580)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset var_inclusionSet_31__24348 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_31__24448 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__24348, var_headerString_31__24448, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 582)) ;
        GGS_stringset var_inclusionSet_32__24484 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__24604 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__24484, var_headerString_32__24604, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 584)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 585)).objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 585)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string temp_2 ;
            const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              temp_2 = GGS_string ("-1") ;
            }else if (GalgasBool::boolFalse == test_3) {
              temp_2 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_headerFileName_24696 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)) ;
            {
            var_headerCompositionMap_24175.setter_insertKey (var_headerFileName_24696.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 588)), var_inclusionSet_31__24348, var_headerString_31__24448, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 587)) ;
            }
          }
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 593)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 593)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)) ;
            temp_5.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)).add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)) ;
            var_headerCompositionMap_24175.setter_insertKey (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24223.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 595)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 595)), var_inclusionSet_32__24484.operator_or (temp_5 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)), var_headerString_32__24604, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 594)) ;
            }
          }
        }
      }
    }
    enumerator_24223.gotoNextObject () ;
  }
  GGS_headerRepartitionMap var_headerRepartitionMap_25374 = GGS_headerRepartitionMap::init (inCompiler COMMA_HERE) ;
  GGS_bigint var_fileIdx_25407 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)) ;
  GGS_string var_implementationString_25425 = GGS_string::makeEmptyString () ;
  GGS_string var_headerString_25457 = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_25492 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_headerFileName_25517 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_25585 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_25585.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 609)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 609)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24175, var_headerFileName_25517, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)).add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)), var_headerRepartitionMap_25374, var_headerString_25457, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)) ;
                }
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24175, var_headerFileName_25517, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)), var_headerRepartitionMap_25374, var_headerString_25457, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_8) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 614)).objectCompare (GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 614)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  {
                  routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24175, var_headerFileName_25517, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)), var_headerRepartitionMap_25374, var_headerString_25457, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)) ;
                  }
                }
              }
            }
          }
        }
        GGS_string var_code_26493 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_25492, var_code_26493, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)) ;
        UpEnumerator_stringset enumerator_26510 (var_inclusionSet_25492) ;
        while (enumerator_26510.hasCurrentObject ()) {
          {
          routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_24175, var_headerFileName_25517, enumerator_26510.current_key (HERE), var_headerRepartitionMap_25374, var_headerString_25457, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)) ;
          }
          enumerator_26510.gotoNextObject () ;
        }
        var_implementationString_25425.plusAssignOperation(var_code_26493, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)) ;
        var_implementationString_25425.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_25585.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::greaterThan, var_implementationString_25425.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 624)).objectCompare (GGS_uint (uint32_t (786432U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)) ;
            temp_11.plusPlusAssignOperation (GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)) ;
            var_inclusionSet_25492 = temp_11 ;
            GGS_string var_cppHeader_26887 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_25492.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 627)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 626))) ;
            GGS_string var_fileName_27029 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629)) ;
            GGS_stringlist temp_12 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 630)) ;
            temp_12.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_fileName_27029, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 630)) ;
            ioArgument_ioToolProductFileList = temp_12.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 630)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_27029  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 631)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_27029, var_cppHeader_26887.add_operation (var_implementationString_25425, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)) ;
            }
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_25517.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 638)) ;
            ioArgument_ioToolHeaderFileList.addAssignOperation (var_headerFileName_25517.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 639))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 639)) ;
            GGS_stringlist temp_13 ;
            const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, var_fileIdx_25407.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_14) {
              temp_13 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
            }else if (GalgasBool::boolFalse == test_14) {
              GGS_stringlist temp_15 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)) ;
              temp_15.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 642)) ;
              temp_13 = temp_15 ;
            }
            GGS_string var_startOfHeader_27470 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25517, temp_13 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640))) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25517.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 646)), var_startOfHeader_27470.add_operation (var_headerString_25457, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 644)) ;
            }
            var_fileIdx_25407.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 650)) ;
            var_implementationString_25425 = GGS_string::makeEmptyString () ;
            var_headerString_25457 = GGS_string::makeEmptyString () ;
            var_headerFileName_25517 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653)) ;
            var_inclusionSet_25492 = GGS_stringset::init (inCompiler COMMA_HERE) ;
          }
        }
      }
    }
    enumerator_25585.gotoNextObject () ;
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::notEqual, var_implementationString_25425.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      GGS_stringlist temp_17 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 661)) ;
      temp_17.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 661)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 661)) ;
      GGS_string var_header_28073 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_17 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 660))) ;
      GGS_string var_fileName_28210 = GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)) ;
      GGS_stringlist temp_18 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 664)) ;
      temp_18.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_fileName_28210, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 664)) ;
      ioArgument_ioToolProductFileList = temp_18.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 664)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_28210  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665)) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_28210, var_header_28073.add_operation (var_implementationString_25425, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
      }
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_25517.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 672)) ;
      ioArgument_ioToolHeaderFileList.addAssignOperation (var_headerFileName_25517.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 673))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 673)) ;
      GGS_stringlist temp_19 ;
      const GalgasBool test_20 = GGS_bool (ComparisonKind::equal, var_fileIdx_25407.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        temp_19 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      }else if (GalgasBool::boolFalse == test_20) {
        GGS_stringlist temp_21 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)) ;
        temp_21.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)) ;
        temp_19 = temp_21 ;
      }
      GGS_string var_startOfHeader_28604 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25517, temp_19 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674))) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25517.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 680)), var_startOfHeader_28604.add_operation (var_headerString_25457, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)) ;
      }
    }
  }
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 685)) ;
  ioArgument_ioToolHeaderFileList.addAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 686)) ;
  GGS_stringlist temp_22 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 689)) ;
  temp_22.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-declarations-").add_operation (var_fileIdx_25407.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 689)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 689)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 689)) ;
  GGS_string var_startOfAllDeclarationsHeader_29052 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), temp_22 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 687))) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_29052, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 691)) ;
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
  GGS_bool var_useOneHugeHeader_29722 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  UpEnumerator_semanticDeclarationListForGeneration enumerator_29831 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_29831.hasCurrentObject ()) {
    GGS_stringset var_inclusionSet_29898 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_29831.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 711)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 711)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_implementationString_30080 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_29831.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_29898, var_implementationString_30080, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 712)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_29831.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_inclusionSet_29898.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29831.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 714))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 714)) ;
          }
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_useOneHugeHeader_29722.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 717)) ;
            temp_3.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 717)) ;
            var_inclusionSet_29898 = temp_3 ;
          }
        }
        GGS_string var_header_30346 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_29898.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 720)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 719))) ;
        var_implementationString_30080.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29831.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 722)) ;
        GGS_string var_fileName_30568 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29831.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 723)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 723)) ;
        ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_30568  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 724)) ;
        {
        GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_30568, var_header_30346.add_operation (var_implementationString_30080, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 725)) ;
        }
        ioArgument_ioToolProductFileList.addAssignOperation (var_fileName_30568  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 730)) ;
      }
    }
    enumerator_29831.gotoNextObject () ;
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
                                                                            const GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
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
    UpEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST) ;
    while (enumerator_249.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_249.current_mBuildReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_249.current_mFileName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_249.current_mFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      enumerator_249.gotoNextObject () ;
      index_249_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_552_ (0) ;
  if (in_C_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_552 (in_C_5F_FILE_5F_LIST) ;
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
      enumerator_552.gotoNextObject () ;
      index_552_.increment () ;
    }
  }
  GGS_uint index_937_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_937 (in_CPP_5F_FILE_5F_LIST) ;
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
      enumerator_937.gotoNextObject () ;
      index_937_.increment () ;
    }
  }
  GGS_uint index_1328_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1328 (in_SWIFT_5F_FILE_5F_LIST) ;
    while (enumerator_1328.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1328.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1328.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1328.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1328.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1328.gotoNextObject () ;
      index_1328_.increment () ;
    }
  }
  GGS_uint index_1713_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1713 (in_M_5F_FILE_5F_LIST) ;
    while (enumerator_1713.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1713.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1713.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_1713.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1713.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1713.gotoNextObject () ;
      index_1713_.increment () ;
    }
  }
  GGS_uint index_2099_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2099 (in_MM_5F_FILE_5F_LIST) ;
    while (enumerator_2099.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2099.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2099.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_2099.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2099.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2099.gotoNextObject () ;
      index_2099_.increment () ;
    }
  }
  GGS_uint index_2494_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2494 (in_HEADER_5F_FILE_5F_LIST) ;
    while (enumerator_2494.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2494.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2494.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_2494.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2494.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2494.gotoNextObject () ;
      index_2494_.increment () ;
    }
  }
  GGS_uint index_2885_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2885 (in_FRAMEWORK_5F_FILE_5F_LIST) ;
    while (enumerator_2885.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2885.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2885.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2885.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2885.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2885.gotoNextObject () ;
      index_2885_.increment () ;
    }
  }
  GGS_uint index_3458_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_3458 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_3458.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3458.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3458.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 94)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_3458.gotoNextObject () ;
      index_3458_.increment () ;
    }
  }
  GGS_uint index_4054_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_4054 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_4054.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4054.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_4054.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_4054.gotoNextObject () ;
      index_4054_.increment () ;
    }
  }
  GGS_uint index_4383_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4383 (in_PLIST_5F_FILE_5F_LIST) ;
    while (enumerator_4383.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4383.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_4383.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4383.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4383.gotoNextObject () ;
      index_4383_.increment () ;
    }
  }
  GGS_uint index_4747_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4747 (in_XIB_5F_FILE_5F_LIST) ;
    while (enumerator_4747.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4747.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4747.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4747.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 123)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4747.gotoNextObject () ;
      index_4747_.increment () ;
    }
  }
  GGS_uint index_5113_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_5113 (in_TIFF_5F_FILE_5F_LIST) ;
    while (enumerator_5113.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5113.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_5113.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_5113.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 132)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_5113.gotoNextObject () ;
      index_5113_.increment () ;
    }
  }
  GGS_uint index_5452_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_5452 (in_ICNS_5F_FILE_5F_LIST) ;
    while (enumerator_5452.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5452.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_5452.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 140)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 140)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_5452.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 141)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_5452.gotoNextObject () ;
      index_5452_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_6103_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_6103 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_6103.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_6103.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 149)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_6103.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_6342_ (0) ;
        if (enumerator_6103.current_mFrameworksFileRefList (HERE).isValid ()) {
          UpEnumerator_stringlist enumerator_6342 (enumerator_6103.current_mFrameworksFileRefList (HERE)) ;
          while (enumerator_6342.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_6342.current_mValue (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            enumerator_6342.gotoNextObject () ;
            index_6342_.increment () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_6103.gotoNextObject () ;
      index_6103_.increment () ;
    }
  }
  GGS_uint index_6780_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_6780 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_6780.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6780.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6964_ (0) ;
      if (enumerator_6780.current_mFrameworksFileRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_6964 (enumerator_6780.current_mFrameworksFileRefList (HERE)) ;
        while (enumerator_6964.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6964.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_6964.gotoNextObject () ;
          index_6964_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_6780.gotoNextObject () ;
      index_6780_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_7240_ (0) ;
  if (in_GROUPS.isValid ()) {
    UpEnumerator_XCodeGroupList enumerator_7240 (in_GROUPS) ;
    while (enumerator_7240.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7240.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7240.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_7367_ (0) ;
      if (enumerator_7240.current_mChildrenRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_7367 (enumerator_7240.current_mChildrenRefs (HERE)) ;
        while (enumerator_7367.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_7367.current_mValue (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          enumerator_7367.gotoNextObject () ;
          index_7367_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_7240.current_mGroupName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 184)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_7240.current_mGroupPath (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 185)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      enumerator_7240.gotoNextObject () ;
      index_7240_.increment () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_7719_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    UpEnumerator_stringlist enumerator_7719 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS) ;
    while (enumerator_7719.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_7719.current_mValue (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_7719.gotoNextObject () ;
      index_7719_.increment () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_8133_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_8133 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_8133.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8133.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8133.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_8133.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_8133.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" ,\n") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_8133.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_8133.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_8133.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_8133.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 220)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_8133.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      enumerator_8133.gotoNextObject () ;
      index_8133_.increment () ;
    }
  }
  GGS_uint index_9090_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_9090 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_9090.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_9090.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_9090.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_9090.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_9090.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_9090.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_9090.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_9479_ (0) ;
      if (enumerator_9090.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_9479 (enumerator_9090.current_mDependentTargets (HERE)) ;
        while (enumerator_9479.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_9479.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" ,\n") ;
          enumerator_9479.gotoNextObject () ;
          index_9479_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_9090.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 244)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_9090.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 246)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_9090.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      enumerator_9090.gotoNextObject () ;
      index_9090_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_10503_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_10503 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_10503.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10503.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_10503.gotoNextObject () ;
      index_10503_.increment () ;
    }
  }
  GGS_uint index_10842_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10842 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10842.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10842.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_10842.gotoNextObject () ;
      index_10842_.increment () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_11294_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_11294 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_11294.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_11294.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_11477_ (0) ;
      if (enumerator_11294.current_mResourceFileBuildRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_11477 (enumerator_11294.current_mResourceFileBuildRefs (HERE)) ;
        while (enumerator_11477.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_11477.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11477.gotoNextObject () ;
          index_11477_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_11294.gotoNextObject () ;
      index_11294_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_11927_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_11927 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_11927.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11927.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_12094_ (0) ;
      if (enumerator_11927.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_12094 (enumerator_11927.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_12094.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_12094.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_12094.gotoNextObject () ;
          index_12094_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11927.gotoNextObject () ;
      index_11927_.increment () ;
    }
  }
  GGS_uint index_12500_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_12500 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_12500.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_12500.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_12667_ (0) ;
      if (enumerator_12500.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_12667 (enumerator_12500.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_12667.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_12667.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_12667.gotoNextObject () ;
          index_12667_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_12500.gotoNextObject () ;
      index_12500_.increment () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_13174_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_13174 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_13174.hasCurrentObject ()) {
      GGS_uint index_13222_ (0) ;
      if (enumerator_13174.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_13222 (enumerator_13174.current_mDependentTargets (HERE)) ;
        while (enumerator_13222.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_13222.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_13222.current_mValue_31_ (HERE).stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          enumerator_13222.gotoNextObject () ;
          index_13222_.increment () ;
        }
      }
      enumerator_13174.gotoNextObject () ;
      index_13174_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        CLANG_CXX_LANGUAGE_STANDARD = \"c++17\";\n        SWIFT_APPROACHABLE_CONCURRENCY = YES;\n        SWIFT_DEFAULT_ACTOR_ISOLATION = MainActor;\n        SWIFT_OPTIMIZATION_LEVEL = \"-Onone\";\n        SWIFT_STRICT_CONCURRENCY = complete;\n        SWIFT_VERSION = 6.0;\n") ;
  GGS_uint index_13962_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_13962 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST) ;
    while (enumerator_13962.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_13962.current_mValue (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_13962.gotoNextObject () ;
      index_13962_.increment () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_14277_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_14277 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_14277.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14277.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        ONLY_ACTIVE_ARCH = NO;\n") ;
      GGS_uint index_14480_ (0) ;
      if (enumerator_14277.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_14480 (enumerator_14277.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_14480.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_14480.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_14480.gotoNextObject () ;
          index_14480_.increment () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_14277.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_14277.gotoNextObject () ;
      index_14277_.increment () ;
    }
  }
  GGS_uint index_14955_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_14955 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_14955.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14955.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_15123_ (0) ;
      if (enumerator_14955.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_15123 (enumerator_14955.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_15123.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_15123.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_15123.gotoNextObject () ;
          index_15123_.increment () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = \"Info.plist\";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_14955.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_BUNDLE_IDENTIFIER = \"") ;
      result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
      result.appendString (".") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString ("\";\n      SWIFT_ACTIVE_COMPILATION_CONDITIONS = \"CONFIGURATION_IS_DEBUG $(inherited)\";\n      SWIFT_VERSION = 6.0;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_14955.gotoNextObject () ;
      index_14955_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_16200_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_16200 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_16200.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_16200.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_16200.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_16200.gotoNextObject () ;
      index_16200_.increment () ;
    }
  }
  GGS_uint index_16782_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_16782 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_16782.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_16782.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_16782.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_16782.gotoNextObject () ;
      index_16782_.increment () ;
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
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
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
  result.appendString ("/output\" />\n") ;
  GGS_uint index_2819_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_2819 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET) ;
    while (enumerator_2819.hasCurrentObject ()) {
      result.appendString ("  <Add directory=\"") ;
      result.appendString (enumerator_2819.current_key (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_2819.gotoNextObject () ;
      index_2819_.increment () ;
    }
  }
  result.appendString ("  </Compiler>\n  <Linker>\n") ;
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
  GGS_uint index_3218_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_3218 (in_TOOL_5F_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_3218.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
      result.appendString ("/output/") ;
      result.appendString (enumerator_3218.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_3218.gotoNextObject () ;
      index_3218_.increment () ;
    }
  }
  GGS_uint index_3338_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_3338 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST) ;
    while (enumerator_3338.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (enumerator_3338.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_3338.gotoNextObject () ;
      index_3338_.increment () ;
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
  result.appendString ("/galgas/cGenericAbstractEnumerator.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("/galgas/GGS_function.cpp\" />\n   <Unit filename=\"") ;
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
  result.appendString ("       \"AbstractCommandLineOption.cpp\",\n       \"BoolCommandLineOption.cpp\",\n       \"UIntCommandLineOption.cpp\",\n       \"StringCommandLineOption.cpp\",\n       \"StringListCommandLineOption.cpp\",\n       \"builtin-command-line-options.cpp\",\n       \"analyzeCommandLineOptions.cpp\",\n       \"F_mainForLIBPM.cpp\",\n       \"BinaryDecisionDiagram.cpp\",\n       \"BinaryDecisionDiagramRelationSingleType.cpp\",\n       \"BinaryDecisionDiagramRelationConfiguration.cpp\",\n       \"BinaryDecisionDiagramRelation.cpp\",\n       \"FileManager.cpp\",\n       \"AbstractFileHandle.cpp\",\n       \"TextFileWrite.cpp\",\n       \"HTMLFileWrite.cpp\",\n       \"BinaryFileWrite.cpp\",\n       \"AbstractOutputStream.cpp\",\n       \"ColoredConsole.cpp\",\n       \"ConsoleOut.cpp\",\n       \"utf32.cpp\",\n       \"String-class-getters.cpp\",\n       \"String-class.cpp\",\n       \"HTMLString.cpp\",\n       \"print.cpp\",\n       \"Timer.cpp\",\n       \"DateTime.cpp\",\n       \"PrologueEpilogue.cpp\",\n       \"SharedObject.cpp\",\n       \"BigSigned-add.cpp\",\n       \"BigSigned-bit.cpp\",\n       \"BigSigned-chunk-operations.cpp\",\n       \"BigSigned-constructors.cpp\",\n       \"BigSigned-conversions.cpp\",\n       \"BigSigned-divide.cpp\",\n       \"BigSigned-logic-operations.cpp\",\n       \"BigSigned-multiply.cpp\",\n       \"BigSigned-print.cpp\",\n       \"BigSigned-shifts.cpp\",\n       \"BigSigned-subtract.cpp\",\n       \"BigSigned-utilities.cpp\",\n       \"BigSigned.cpp\",\n       \"BigUnsigned-add.cpp\",\n       \"BigUnsigned-bit.cpp\",\n       \"BigUnsigned-chunk-operations.cpp\",\n       \"BigUnsigned-constructors.cpp\",\n       \"BigUnsigned-conversions.cpp\",\n       \"BigUnsigned-divide-naive.cpp\",\n       \"BigUnsigned-divide.cpp\",\n       \"BigUnsigned-logic-operations.cpp\",\n       \"BigUnsigned-multiply.cpp\",\n       \"BigUnsigned-print.cpp\",\n       \"BigUnsigned-shifts.cpp\",\n       \"BigUnsigned-subtract.cpp\",\n       \"BigUnsigned-utilities.cpp\",\n       \"ChunkSharedArray.cpp\",\n       \"UInt128.cpp\",\n       \"U8Data.cpp\",\n       \"F_DisplayException.cpp\",\n       \"macroAssert.cpp\",\n       \"F_GetPrime.cpp\",\n       \"MF_MemoryControl.cpp\",\n       \"cpp-allocation.cpp\",\n       \"basic-allocation.cpp\",\n       \"UInt32Set.cpp\",\n       \"DirectedGraph.cpp\",\n       \"md5.cpp\",\n       \"SHA256.cpp\",\n       \"galgas-random.cpp\",\n       \"C_galgas_CLI_Options.cpp\",\n       \"Compiler.cpp\",\n       \"Lexique.cpp\",\n       \"Lexique-parsing.cpp\",\n       \"LocationInSource.cpp\",\n       \"SourceTextInString.cpp\",\n       \"GALGAS_TypeDescriptor.cpp\",\n       \"C_galgas_function_descriptor.cpp\",\n       \"galgas-input-output.cpp\",\n       \"C_galgas_class_inspector.cpp\",\n       \"IssueWithFixIt.cpp\",\n       \"cObjectArray.cpp\",\n       \"cCollectionElement.cpp\",\n       \"capCollectionElement.cpp\",\n       \"capCollectionElementArray.cpp\",\n       \"cGenericAbstractEnumerator.cpp\",\n       \"Enumerator_range.cpp\",\n       \"IndexingDictionary.cpp\",\n       \"IssueDescriptor.cpp\",\n       \"LexiqueIntrospection.cpp\",\n       \"AC_GALGAS_root.cpp\",\n       \"AC_GALGAS_reference_class.cpp\",\n       \"AC_GALGAS_value_class.cpp\",\n       \"AC_GALGAS_graph.cpp\",\n       \"AC_GALGAS_enumAssociatedValues.cpp\",\n       \"acPtr_class.cpp\",\n       \"acStrongPtr_class.cpp\",\n       \"cPtr_weakReference_proxy.cpp\",\n       \"AC_GALGAS_weak_reference.cpp\",\n       \"cPtr_object.cpp\",\n       \"scanner_actions.cpp\",\n       \"GGS_application.cpp\",\n       \"GGS_bigint.cpp\",\n       \"GGS_binaryset.cpp\",\n       \"GGS_bool.cpp\",\n       \"GGS_char.cpp\",\n       \"GGS_data.cpp\",\n       \"GGS_double.cpp\",\n       \"GGS_filewrapper.cpp\",\n       \"GGS_function.cpp\",\n       \"GGS_location.cpp\",\n       \"GGS_sint.cpp\",\n       \"GGS_sint64.cpp\",\n       \"GGS_string.cpp\",\n       \"GGS_string-getters.cpp\",\n       \"GGS_stringset.cpp\",\n       \"GGS_type.cpp\",\n       \"GGS_object.cpp\",\n       \"GGS_uint.cpp\",\n       \"GGS_timer.cpp\",\n       \"GGS_uint64.cpp\"\n    ],\n    \"USER_LINK_OPTIONS\"  :  [") ;
  GGS_uint index_4895_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_4895 (in_TOOL_5F_LINK_5F_LIST) ;
    while (enumerator_4895.hasCurrentObject ()) {
      result.appendString ("\n        \"") ;
      result.appendString (enumerator_4895.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_4895.gotoNextObject () ;
      if (enumerator_4895.hasCurrentObject ()) {
        result.appendString (",") ;
      }
      index_4895_.increment () ;
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
  GGS_string var_dir_6733 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 114)) ;
  var_dir_6733.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 115)) ;
  GGS_string var_s_6826 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GGS_bool (true), GGS_string ("Windows"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 116))) ;
  GGS_bool joker_7221 ; // Joker input parameter
  var_s_6826.method_writeToFileWhenDifferentContents (var_dir_6733.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 127)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 127)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 127)), joker_7221, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 127)) ;
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
  GGS_string var_dir_7703 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 142)) ;
  var_dir_7703.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 143)) ;
  GGS_string var_s_7796 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 144))) ;
  GGS_bool joker_8189 ; // Joker input parameter
  var_s_7796.method_writeToFileWhenDifferentContents (var_dir_7703.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 155)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 155)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 155)), joker_8189, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 155)) ;
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
  GGS_string var_dir_8672 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 170)) ;
  var_dir_8672.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 171)) ;
  GGS_string var_s_8765 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 172))) ;
  GGS_bool joker_9158 ; // Joker input parameter
  var_s_8765.method_writeToFileWhenDifferentContents (var_dir_8672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)), joker_9158, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)) ;
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
  GGS_string var_dir_9445 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 192)) ;
  var_dir_9445.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193)) ;
  GGS_bool joker_9691 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194))).method_writeToExecutableFileWhenDifferentContents (var_dir_9445.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194)), joker_9691, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194)) ;
  GGS_bool joker_9843 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195))).method_writeToExecutableFileWhenDifferentContents (var_dir_9445.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195)), joker_9843, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195)) ;
  GGS_bool joker_9987 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196))).method_writeToExecutableFileWhenDifferentContents (var_dir_9445.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196)), joker_9987, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196)) ;
  GGS_bool joker_10135 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197))).method_writeToExecutableFileWhenDifferentContents (var_dir_9445.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197)), joker_10135, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197)) ;
  GGS_bool joker_10287 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 198))).method_writeToExecutableFileWhenDifferentContents (var_dir_9445.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 198)), joker_10287, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 198)) ;
  GGS_bool joker_10446 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 199))).method_writeToExecutableFileWhenDifferentContents (var_dir_9445.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 200)), joker_10446, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 199)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_9445.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 203)) ;
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
  GGS_string var_dir_10777 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 212)) ;
  var_dir_10777.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213)) ;
  GGS_bool joker_11004 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214))).method_writeToExecutableFileWhenDifferentContents (var_dir_10777.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214)), joker_11004, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214)) ;
  GGS_bool joker_11148 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215))).method_writeToExecutableFileWhenDifferentContents (var_dir_10777.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)), joker_11148, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)) ;
  GGS_bool joker_11284 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216))).method_writeToExecutableFileWhenDifferentContents (var_dir_10777.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)), joker_11284, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)) ;
  GGS_bool joker_11424 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217))).method_writeToExecutableFileWhenDifferentContents (var_dir_10777.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)), joker_11424, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)) ;
  GGS_bool joker_11568 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218))).method_writeToExecutableFileWhenDifferentContents (var_dir_10777.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)), joker_11568, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)) ;
  GGS_bool joker_11700 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219))).method_writeToExecutableFileWhenDifferentContents (var_dir_10777.add_operation (GGS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)), joker_11700, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)) ;
  GGS_bool joker_11843 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220))).method_writeToExecutableFileWhenDifferentContents (var_dir_10777.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220)), joker_11843, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_10777.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 221)) ;
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
  GGS_string var_dir_12170 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 230)) ;
  var_dir_12170.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 231)) ;
  GGS_bool joker_12401 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232))).method_writeToExecutableFileWhenDifferentContents (var_dir_12170.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232)), joker_12401, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232)) ;
  GGS_bool joker_12547 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233))).method_writeToExecutableFileWhenDifferentContents (var_dir_12170.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233)), joker_12547, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233)) ;
  GGS_bool joker_12685 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234))).method_writeToExecutableFileWhenDifferentContents (var_dir_12170.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234)), joker_12685, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234)) ;
  GGS_bool joker_12827 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235))).method_writeToExecutableFileWhenDifferentContents (var_dir_12170.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)), joker_12827, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)) ;
  GGS_bool joker_12973 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236))).method_writeToExecutableFileWhenDifferentContents (var_dir_12170.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)), joker_12973, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)) ;
  GGS_bool joker_13118 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237))).method_writeToExecutableFileWhenDifferentContents (var_dir_12170.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237)), joker_13118, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_12170.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238)) ;
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
  GGS_string var_dir_13457 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 247)) ;
  var_dir_13457.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 248)) ;
  GGS_bool joker_13713 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249))).method_writeToExecutableFileWhenDifferentContents (var_dir_13457.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249)), joker_13713, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249)) ;
  GGS_bool joker_13870 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250))).method_writeToExecutableFileWhenDifferentContents (var_dir_13457.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250)), joker_13870, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250)) ;
  GGS_bool joker_14019 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251))).method_writeToExecutableFileWhenDifferentContents (var_dir_13457.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251)), joker_14019, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251)) ;
  GGS_bool joker_14172 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252))).method_writeToExecutableFileWhenDifferentContents (var_dir_13457.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252)), joker_14172, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252)) ;
  GGS_bool joker_14329 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253))).method_writeToExecutableFileWhenDifferentContents (var_dir_13457.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253)), joker_14329, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253)) ;
  GGS_bool joker_14485 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254))).method_writeToExecutableFileWhenDifferentContents (var_dir_13457.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254)), joker_14485, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_13457.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255)) ;
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
  GGS_string var_dir_14824 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 264)) ;
  var_dir_14824.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 265)) ;
  GGS_bool joker_15080 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266))).method_writeToExecutableFileWhenDifferentContents (var_dir_14824.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266)), joker_15080, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266)) ;
  GGS_bool joker_15237 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267))).method_writeToExecutableFileWhenDifferentContents (var_dir_14824.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267)), joker_15237, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267)) ;
  GGS_bool joker_15386 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 268))).method_writeToExecutableFileWhenDifferentContents (var_dir_14824.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 268)), joker_15386, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 268)) ;
  GGS_bool joker_15539 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 269))).method_writeToExecutableFileWhenDifferentContents (var_dir_14824.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 269)), joker_15539, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 269)) ;
  GGS_bool joker_15696 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 270))).method_writeToExecutableFileWhenDifferentContents (var_dir_14824.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 270)), joker_15696, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 270)) ;
  GGS_bool joker_15852 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271))).method_writeToExecutableFileWhenDifferentContents (var_dir_14824.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271)), joker_15852, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_14824.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272)) ;
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
  GGS_string var_dir_16272 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-arm64-linux-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 280)) ;
  var_dir_16272.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 281)) ;
  GGS_bool joker_16530 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282))).method_writeToExecutableFileWhenDifferentContents (var_dir_16272.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282)), joker_16530, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282)) ;
  GGS_bool joker_16688 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 283))).method_writeToExecutableFileWhenDifferentContents (var_dir_16272.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 283)), joker_16688, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 283)) ;
  GGS_bool joker_16838 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 284))).method_writeToExecutableFileWhenDifferentContents (var_dir_16272.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 284)), joker_16838, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 284)) ;
  GGS_bool joker_16992 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 285))).method_writeToExecutableFileWhenDifferentContents (var_dir_16272.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 285)), joker_16992, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 285)) ;
  GGS_bool joker_17150 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 286))).method_writeToExecutableFileWhenDifferentContents (var_dir_16272.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 286)), joker_17150, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 286)) ;
  GGS_bool joker_17307 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 287))).method_writeToExecutableFileWhenDifferentContents (var_dir_16272.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 287)), joker_17307, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 287)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_16272.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets?absoluteBuildDir?buildDirName??????????appProductFileList?swiftAppProductFileList????&???'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_appProductFileList_3F_swiftAppProductFileList_3F__3F__3F__3F__26__3F__3F__3F_ (const GGS_string constinArgument_inAbsoluteBuildDirectory,
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
                                                                                                                                                                                           const GGS_stringlist constinArgument_inSwiftAppProductFileList,
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
  ioArgument_ioAllProductFileSet.plusAssignOperation(GGS_stringset::class_func_setWithStringList (constinArgument_inSwiftAppProductFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 323)) ;
  GGS_string var_projectDirectory_18773 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 324)) ;
  GGS_bool joker_19067 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 326))).method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 327)), joker_19067, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 326)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 330)) ;
  GGS_stringlist var_toolCppFileList_19208 = constinArgument_inToolCppFileList ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_toolCppFileList_19208.addAssignOperation (GGS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 334)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_toolCppFileList_19208.addAssignOperation (GGS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 336)) ;
  }
  GGS_lstring var_macCodeSign_19484 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_19505 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("macCodeSign"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("macCodeSign"), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_entry_19505.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_entry_19505.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the %macCodeSign attribute should not be empty"), fixItArray3  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 342)) ;
          var_macCodeSign_19484.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_macCodeSign_19484 = var_entry_19505.readProperty_mFeatureValue () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    var_macCodeSign_19484 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 347)) ;
  }
  GGS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19896 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_19930 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("MacOSDeployment"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("MacOSDeployment"), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_entry_19930.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (var_entry_19930.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the %MacOSDeployment attribute should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 353)) ;
          var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19896.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19896 = var_entry_19930.readProperty_mFeatureValue ().readProperty_string () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19896 = GGS_string ("14.6").getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 358)).readProperty_string () ;
  }
  GGS_string var_libpmPath_20367 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_20386 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("libpmAtPath"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("libpmAtPath"), inCompiler COMMA_HERE).isValuated ()) {
      test_7 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_7) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, var_entry_20386.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_entry_20386.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the libpm path should not be empty"), fixItArray9  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 364)) ;
          var_libpmPath_20367.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        var_libpmPath_20367 = var_entry_20386.readProperty_mFeatureValue ().readProperty_string () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    {
    routine_updateLIBPMatPath_3F_ (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 369)) ;
    }
    var_libpmPath_20367 = GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 370)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 370)) ;
  }
  GGS_stringset var_availableGenerationFeatures_20918 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 375)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 376)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 377)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 378)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 379)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 380)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 381)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 382)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("makefile-arm64-linux-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 383)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 384)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("MacOS")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 385)) ;
  var_availableGenerationFeatures_20918.plusPlusAssignOperation (GGS_string ("MacSwiftApp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 386)) ;
  GGS_stringset var_generationFeatures_21643 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_xcodeProject var_xcodeProject_21713 = GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas", 389)) ;
  UpEnumerator_lstringlist enumerator_21754 (constinArgument_inTargetFeatureList) ;
  while (enumerator_21754.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_availableGenerationFeatures_20918.getter_hasKey (enumerator_21754.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 391)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = var_generationFeatures_21643.getter_hasKey (enumerator_21754.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 392)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_21754.current_mValue (HERE).readProperty_location (), GGS_string ("duplicate '").add_operation (enumerator_21754.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 393)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 393)), fixItArray12  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 393)) ;
          }
        }
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = GGS_bool (ComparisonKind::equal, enumerator_21754.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("MacSwiftApp"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_21713.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas", 397)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_21754.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated XCode setting"), fixItArray15  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 398)) ;
              }
            }
            var_xcodeProject_21713 = GGS_xcodeProject::class_func_swiftApp (SOURCE_FILE ("galgasTargetGeneration.galgas", 400)) ;
          }
        }
        if (GalgasBool::boolFalse == test_13) {
          var_generationFeatures_21643.plusPlusAssignOperation (enumerator_21754.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 402)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GGS_stringlist var_s_22261 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      UpEnumerator_stringset enumerator_22280 (var_availableGenerationFeatures_20918) ;
      while (enumerator_22280.hasCurrentObject ()) {
        var_s_22261.addAssignOperation (GGS_string ("%").add_operation (enumerator_22280.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 407))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 407)) ;
        enumerator_22280.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray16 ;
      appendFixItActions (fixItArray16, EnumFixItKind::fixItReplace, var_s_22261) ;
      inCompiler->emitSemanticError (enumerator_21754.current_mValue (HERE).readProperty_location (), GGS_string ("unknown '").add_operation (enumerator_21754.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 409)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 409)), fixItArray16  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 409)) ;
    }
    enumerator_21754.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    GGS_bool test_18 = GGS_bool (ComparisonKind::notEqual, var_macCodeSign_19484.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    if (GalgasBool::boolTrue == test_18.boolEnum ()) {
      test_18 = GGS_bool (ComparisonKind::equal, var_xcodeProject_21713.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas", 413)))) ;
    }
    test_17 = test_18.boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (var_macCodeSign_19484.readProperty_location (), GGS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%MacOS\""), fixItArray19  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 414)) ;
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_21713.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas", 418)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GGS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 418)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 418)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 419)), GGS_string ("For a MacOS target, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray21  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 419)) ;
      }
    }
  }
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = var_generationFeatures_21643.getter_hasKey (GGS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 422)).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      {
      routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 423)) ;
      }
    }
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = var_generationFeatures_21643.getter_hasKey (GGS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 425)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 426)) ;
      }
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = var_generationFeatures_21643.getter_hasKey (GGS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 428)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 429)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = var_generationFeatures_21643.getter_hasKey (GGS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 431)).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 432)) ;
      }
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = var_generationFeatures_21643.getter_hasKey (GGS_string ("makefile-arm64-linux-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 434)).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      {
      routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 435)) ;
      }
    }
  }
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = var_generationFeatures_21643.getter_hasKey (GGS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 437)).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      {
      routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 438)) ;
      }
    }
  }
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    test_28 = var_generationFeatures_21643.getter_hasKey (GGS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 440)).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_20367, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 441)) ;
      }
    }
  }
  GalgasBool test_29 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_29) {
    test_29 = var_generationFeatures_21643.getter_hasKey (GGS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 452)).boolEnum () ;
    if (GalgasBool::boolTrue == test_29) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_20367, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 453)) ;
      }
    }
  }
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    test_30 = var_generationFeatures_21643.getter_hasKey (GGS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 464)).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_18773, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_20367, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 465)) ;
      }
    }
  }
  GGS_stringlist var_linkOptionForLinkingFrameworkWithTool_25163 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_25214 (constinArgument_inFrameworkToolFileList) ;
  while (enumerator_25214.hasCurrentObject ()) {
    var_linkOptionForLinkingFrameworkWithTool_25163.addAssignOperation (GGS_string ("-framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 479)) ;
    var_linkOptionForLinkingFrameworkWithTool_25163.addAssignOperation (enumerator_25214.current_mValue (HERE).getter_deletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 480))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 480)) ;
    enumerator_25214.gotoNextObject () ;
  }
  GGS_stringlist var_handCodedSourceToolFileList_25430 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_25471 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_25471.hasCurrentObject ()) {
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = GGS_bool (ComparisonKind::notEqual, enumerator_25471.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 485)).objectCompare (GGS_string ("h"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        var_handCodedSourceToolFileList_25430.addAssignOperation (enumerator_25471.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 486))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 486)) ;
      }
    }
    enumerator_25471.gotoNextObject () ;
  }
  GGS_string var_jsonFileListContents_25627 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, constinArgument_inHandCodedSourceDirectorySet, var_handCodedSourceToolFileList_25430, var_toolCppFileList_19208, var_linkOptionForLinkingFrameworkWithTool_25163.add_operation (constinArgument_inHandCodedLinkToolFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 493)), var_libpmPath_20367, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 489))) ;
  GGS_string var_jsonFileListPath_25926 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 497)) ;
  GGS_bool joker_26072 ; // Joker input parameter
  var_jsonFileListContents_25627.method_writeToFileWhenDifferentContents (var_jsonFileListPath_25926, joker_26072, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 498)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 499)) ;
  switch (var_xcodeProject_21713.enumValue ()) {
  case GGS_xcodeProject::Enumeration::invalid:
    break ;
  case GGS_xcodeProject::Enumeration::enum_none:
    break ;
  case GGS_xcodeProject::Enumeration::enum_swiftApp:
    {
      GGS_string var_dir_26227 = var_projectDirectory_18773.add_operation (GGS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 504)) ;
      var_dir_26227.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 505)) ;
      GGS_string var_applicationBundleBase_26328 ;
      GalgasBool test_32 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_32) {
        const GGS_projectQualifiedFeatureMap_2E_element var_entry_26361 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("applicationBundleBase"), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("applicationBundleBase"), inCompiler COMMA_HERE).isValuated ()) {
          test_32 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_32) {
          var_applicationBundleBase_26328 = var_entry_26361.readProperty_mFeatureValue ().readProperty_string () ;
        }
      }
      if (GalgasBool::boolFalse == test_32) {
        var_applicationBundleBase_26328 = GGS_string ("unknown.unknown") ;
      }
      GGS_string var_InfoPlistContents_26560 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_26328, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19896, GGS_string ("$(PRODUCT_MODULE_NAME).ProjectDocument") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 513))) ;
      GGS_bool joker_26918 ; // Joker input parameter
      var_InfoPlistContents_26560.method_writeToFileWhenDifferentContents (var_dir_26227.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 521)), joker_26918, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 521)) ;
      GalgasBool test_33 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_33) {
        test_33 = var_dir_26227.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 523)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 523)).boolEnum () ;
        if (GalgasBool::boolTrue == test_33) {
          GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524))).method_writeToExecutableFile (var_dir_26227.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524)) ;
        }
      }
      var_dir_26227.add_operation (GGS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 527)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 527)) ;
      GGS_string var_InfoPlist_5F_strings_5F_path_27176 = var_dir_26227.add_operation (GGS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528)) ;
      GGS_bool joker_27392 ; // Joker input parameter
      GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 529))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_27176, joker_27392, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 529)) ;
      GGS_string var_Credits_5F_rtf_5F_path_27404 = var_dir_26227.add_operation (GGS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 530)) ;
      GalgasBool test_34 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_34) {
        test_34 = var_Credits_5F_rtf_5F_path_27404.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 531)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 531)).boolEnum () ;
        if (GalgasBool::boolTrue == test_34) {
          GGS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_27404, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 532)) ;
        }
      }
      GGS_string var_userResourceDir_27707 = var_projectDirectory_18773.add_operation (GGS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 535)) ;
      var_userResourceDir_27707.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 536)) ;
      GGS_stringlist temp_35 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 537)) ;
      temp_35.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("icns"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 537)) ;
      GGS_stringlist var_extensionList_27831 = temp_35 ;
      GGS_stringlist var_resourceFiles_27868 = var_userResourceDir_27707.getter_regularFilesWithExtensions (GGS_bool (false), var_extensionList_27831 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 538)) ;
      GGS_string var_newIntermediateFilePath_27980 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 540)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 541)) ;
      GGS_XcodeProjectDescriptor var_xcodeProject_28230 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
      var_xcodeProject_28230.mProperty_mApplicationBundleName = var_applicationBundleBase_26328 ;
      var_xcodeProject_28230.mProperty_mProjectName = constinArgument_inTargetName ;
      GGS_string var_headerSearchPaths_28389 = GGS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)).add_operation (GGS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)).add_operation (GGS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 548)).add_operation (GGS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 549)) ;
      UpEnumerator_stringset enumerator_28609 (constinArgument_inHandCodedSourceDirectorySet) ;
      while (enumerator_28609.hasCurrentObject ()) {
        var_headerSearchPaths_28389.plusAssignOperation(GGS_string (", \"").add_operation (enumerator_28609.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 551)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 551)) ;
        enumerator_28609.gotoNextObject () ;
      }
      var_headerSearchPaths_28389.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 553)) ;
      GGS_stringlist temp_36 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 629)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 556)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 557)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 558)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 559)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_COMMA = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 560)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 561)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_EMPTY_BODY = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 562)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_INFINITE_RECURSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 563)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 564)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 565)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 566)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 567)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 568)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_UNREACHABLE_CODE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 570)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 571)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 572)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_NO_COMMON_BLOCKS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 573)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 574)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 575)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 576)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 577)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 578)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 579)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 580)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 581)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 582)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 583)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 584)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 585)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 586)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 587)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 588)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 589)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 590)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 591)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 592)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 594)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 595)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 596)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 597)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 598)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 599)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 600)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 601)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 602)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 603)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_headerSearchPaths_28389, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = macosx"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 606)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 607)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_DISABLE_SAFETY_CHECKS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 608)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENABLE_BARE_SLASH_REGEX = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 609)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENABLE_EMIT_CONST_VALUES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 610)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENFORCE_EXCLUSIVE_ACCESS = off"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 611)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_INSTALL_MODULE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 612)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_INSTALL_OBJC_HEADER = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 613)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_PRECOMPILE_BRIDGING_HEADER = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_REFLECTION_METADATA_LEVEL = all"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 615)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_STRICT_CONCURRENCY = complete"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 616)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_TREAT_WARNINGS_AS_ERRORS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 617)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_CONCISE_MAGIC_FILE = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 618)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_DEPRECATE_APPLICATION_MAIN = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 619)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_DISABLE_OUTWARD_ACTOR_ISOLATION = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 620)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_EXISTENTIAL_ANY = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 621)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_FORWARD_TRAILING_CLOSURES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 622)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_GLOBAL_CONCURRENCY = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 623)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPLICIT_OPEN_EXISTENTIALS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 624)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPORT_OBJC_FORWARD_DECLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 625)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_INFER_SENDABLE_FROM_CAPTURES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 626)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_ISOLATED_DEFAULT_VALUES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 627)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_REGION_BASED_ISOLATION = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 628)) ;
      temp_36.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_VERSION = 5.0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 629)) ;
      GGS_stringlist var_xcodeSettingList_28788 = temp_36 ;
      GalgasBool test_37 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_37) {
        test_37 = GGS_bool (ComparisonKind::notEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19896.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_37) {
          var_xcodeSettingList_28788.addAssignOperation (GGS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19896, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 632)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 632))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 632)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_28230, var_xcodeSettingList_28788, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 634)) ;
      }
      GGS_stringlist var_m_5F_handCodedSourceFileRefForAppList_32765 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_resource_5F_handCodedResourceFileRefForAppList_32826 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 638)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GGS_stringlist joker_33128 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33159 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33248 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33280 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33315 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_groupRef_33448 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Hand Coded Sources (App)"), GGS_string ("../"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 642)), joker_33128, joker_33159, var_m_5F_handCodedSourceFileRefForAppList_32765, joker_33248, joker_33280, joker_33315, var_resource_5F_handCodedResourceFileRefForAppList_32826, var_groupRef_33448, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 639)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_groupRef_33448, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 652)) ;
          }
        }
      }
      GGS_stringlist var_appFrameworksFileRefList_33596 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_39 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_39) {
        test_39 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 656)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_39) {
          GGS_stringlist joker_33883 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33914 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33947 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_33978 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_34010 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_34099 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_34160 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Frameworks (App)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 660)), joker_33883, joker_33914, joker_33947, joker_33978, joker_34010, var_appFrameworksFileRefList_33596, joker_34099, var_frameworkGroupRef_34160, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 657)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_frameworkGroupRef_34160, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 670)) ;
          }
        }
      }
      GGS_stringlist var_buildCFileRefListForTool_34309 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_buildCppFileRefListForTool_34360 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_m_5F_FileRefList_34413 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_mm_5F_FileRefList_34453 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_swift_5F_FileRefList_34494 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_frameworksFileRefList_34538 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_resourceFileBuildRefs_34586 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_40 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_40) {
        test_40 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 681)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_40) {
          GGS_string var_groupRef_35244 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Hand Coded Sources (Tool)"), GGS_string ("../"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 685)), var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_35244, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 682)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_groupRef_35244, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 695)) ;
          }
        }
      }
      GGS_stringlist var_toolFrameworksFileRefList_35393 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_41 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_41) {
        test_41 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 699)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_41) {
          GGS_stringlist joker_35683 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_35714 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_35747 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_35778 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_35810 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_35899 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_35959 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Frameworks (Tool)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 703)), joker_35683, joker_35714, joker_35747, joker_35778, joker_35810, var_toolFrameworksFileRefList_35393, joker_35899, var_frameworkGroupRef_35959, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 700)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_frameworkGroupRef_35959, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 713)) ;
          }
        }
      }
      GGS_stringlist var_outputGroupFileList_36114 = constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 716)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 716)) ;
      var_outputGroupFileList_36114.plusAssignOperation(constinArgument_inSwiftAppProductFileList, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 717)) ;
      GGS_string var_groupRef_36770 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Generated by GALGAS"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 720)).add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 720)), GGS_stringset::class_func_setWithStringList (var_outputGroupFileList_36114  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 721)), var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 718)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 731)) ;
      }
      GGS_stringlist var_libpmReferenceGroupList_36867 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      {
      GGS_stringset temp_42 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 746)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 738)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 739)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 740)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 741)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 742)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 743)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 744)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 745)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 746)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Binary Decision Diagrams"), GGS_string ("bdd"), temp_42, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 734)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 757)) ;
      {
      GGS_stringset temp_43 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 799)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 763)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 764)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 765)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 766)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 767)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 768)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 769)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 770)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 771)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 772)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 773)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 774)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 775)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigSigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 776)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 777)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 778)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 779)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 780)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 781)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide-naive.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 782)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 783)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 784)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 785)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 786)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 787)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 788)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 789)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BigUnsigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 790)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("ChunkSelectSize.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 791)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 792)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 793)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("UInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 794)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("UInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 795)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("chunk-U16.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 796)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("chunk-U32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 797)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("chunk-U64.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 798)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("chunk-U8.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 799)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Big Integers"), GGS_string ("big-integers"), temp_43, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 759)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 810)) ;
      {
      GGS_stringset temp_44 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 997)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("AbstractScanner.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 958)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("AllocationDebugView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 959)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("Application.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 960)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ASCII.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 961)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("Color+RawRepresentable.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 962)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("CommandLineOption.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 963)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("common-command-line-options.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 964)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("CompilationIssue.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 965)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("CompileLogView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 966)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("CustomFont.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 967)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("CustomFontPicker.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 968)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("FocusedValues+extension.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 969)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("IdentifiableAttributedString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 970)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("IndexingOperation.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 971)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("lexical-functions.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 972)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("LexicalToken.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 973)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("Notification+names.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 974)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ProjectCompiler.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 975)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ProjectDocument.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 976)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ProjectDocumentView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 977)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+compile.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 978)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+populateContextualMenu.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 979)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+search.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 980)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ProjectWindowManagerView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 981)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("RootDirectoryNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 982)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("ScrollSourceToLineNotification.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 983)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("SearchResultItem.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 984)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("SearchResultItemView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 985)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("SearchResultNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 986)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("SearchResultNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 987)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("SharedTextModel.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 988)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("SourceFileNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 989)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("SourceFileNodeID.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 990)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("SourceFileNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 991)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("String+LineAndColumn.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 992)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("String+LineRangeForLineNumber.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 993)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("String+LineStartAndEndLocations.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 994)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 995)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("TextSyntaxColoringView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 996)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("UInt64+displayString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 997)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Swift App"), GGS_string ("swiftui-app"), temp_44, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 933)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1008)) ;
      {
      GGS_stringset temp_45 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GenericArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1014)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GenericUniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1015)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GenericUniqueMatrix.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Generic Arraies"), GGS_string ("generic-arraies"), temp_45, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1010)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1027)) ;
      {
      GGS_stringset temp_46 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1048)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1033)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1034)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("builtin-command-line-options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1035)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("builtin-command-line-options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1036)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1037)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1038)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1039)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1040)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1041)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1042)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1043)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1044)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1045)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1046)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("StringListCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1047)) ;
      temp_46.plusPlusAssignOperation (GGS_string ("StringListCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1048)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Command line Interface"), GGS_string ("command_line_interface"), temp_46, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1029)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1059)) ;
      {
      GGS_stringset temp_47 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1074)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1065)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1066)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1067)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1068)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1069)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1070)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1071)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1072)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1073)) ;
      temp_47.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1074)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("File"), GGS_string ("files"), temp_47, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1061)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1085)) ;
      {
      GGS_stringset temp_48 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1183)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1091)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1092)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_value_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1093)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_value_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1094)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1096)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_graph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1097)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_graph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1098)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1099)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1100)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1101)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1102)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("acPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1103)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("acPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1104)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("acStrongPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1105)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("acStrongPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1106)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cPtr_weakReference_proxy.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1107)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cPtr_weakReference_proxy.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1108)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1109)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1110)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1111)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1112)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1113)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1114)) ;
      GGS_string temp_49 ;
      const GalgasBool test_50 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (GalgasBool::boolTrue == test_50) {
        temp_49 = GGS_string ("C_galgas_verbose_option.cpp") ;
      }else if (GalgasBool::boolFalse == test_50) {
        temp_49 = GGS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_48.plusPlusAssignOperation (temp_49  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1115)) ;
      GGS_string temp_51 ;
      const GalgasBool test_52 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (GalgasBool::boolTrue == test_52) {
        temp_51 = GGS_string ("C_galgas_verbose_option.h") ;
      }else if (GalgasBool::boolFalse == test_52) {
        temp_51 = GGS_string ("C_galgas_quiet_option.h") ;
      }
      temp_48.plusPlusAssignOperation (temp_51  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1116)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1117)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("C_galgas_function_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1118)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("C_galgas_function_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1119)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("galgas-input-output.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1120)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("galgas-input-output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1121)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1122)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1123)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1124)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1125)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("Lexique-parsing.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1126)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1127)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1128)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1129)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1130)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1131)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1132)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("capCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1133)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("capCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1134)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("capCollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1135)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("capCollectionElementArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1136)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1137)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1138)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("Enumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1139)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("Enumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1140)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cGenericAbstractEnumerator.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1141)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cGenericAbstractEnumerator.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1142)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("IndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1143)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("IndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1144)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("IssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1145)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("IssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1146)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1147)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1148)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cObjectArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1149)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cObjectArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1150)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cPtr_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1151)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("cPtr_object.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1152)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1153)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1154)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1155)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1156)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1157)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1158)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1159)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_double.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1160)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1161)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_function.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1162)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1163)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1164)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_sint64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1165)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_sint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1166)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1167)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_string-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1168)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1169)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1170)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_type.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1171)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_uint64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1172)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GGS_uint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1174)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1175)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("ComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1176)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("ComparisonKind.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1177)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("EnumerationOrder.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1178)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GALGAS_GenericDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1179)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("GALGAS_GenericMapRoot.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("SharedGenericPtrWithValueSemantics.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1181)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1182)) ;
      temp_48.plusPlusAssignOperation (GGS_string ("SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1183)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Galgas"), GGS_string ("galgas"), temp_48, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1087)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1194)) ;
      {
      GGS_stringset temp_53 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1205)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1200)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1201)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1202)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1203)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1204)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1205)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Streams"), GGS_string ("streams"), temp_53, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1196)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1216)) ;
      {
      GGS_stringset temp_54 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1230)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("String-class-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1222)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("String-class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1223)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("String-class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1224)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1225)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("unicode-data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1226)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("utf32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1227)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("utf32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1228)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1229)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("print.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1230)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Strings"), GGS_string ("strings"), temp_54, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1218)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1241)) ;
      {
      GGS_stringset temp_55 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1250)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1247)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1248)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1250)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Time"), GGS_string ("time"), temp_55, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1243)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1261)) ;
      {
      GGS_stringset temp_56 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1296)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1267)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1268)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("U8Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1269)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("U8Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1271)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1272)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1273)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1274)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("UInt32Set.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("UInt32Set.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1276)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1277)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1278)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1279)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1280)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1281)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1282)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1283)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1284)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1285)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1286)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("SHA256.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1287)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("SHA256.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1288)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("macroAssert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1289)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("macroAssert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1290)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1291)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1292)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1294)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("galgas-random.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1295)) ;
      temp_56.plusPlusAssignOperation (GGS_string ("galgas-random.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1296)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Utilities"), GGS_string ("utilities"), temp_56, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_groupRef_36770, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1263)) ;
      }
      var_libpmReferenceGroupList_36867.addAssignOperation (var_groupRef_36770  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1307)) ;
      GGS_string var_libpmGroupRef_58901 ;
      {
      extensionSetter_addGroup (var_xcodeProject_28230, GGS_string ("libpm"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1309)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1309)), var_libpmReferenceGroupList_36867, var_libpmGroupRef_58901, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1309)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_libpmGroupRef_58901, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1310)) ;
      }
      GGS_string var_resourcesGroupRef_59456 ;
      {
      GGS_stringset temp_57 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1315)) ;
      temp_57.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1315)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Resources"), GGS_string ("."), temp_57, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_resourcesGroupRef_59456, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1312)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_resourcesGroupRef_59456, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1325)) ;
      }
      GGS_string var_userResourcesGroupRef_60073 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("User Resources"), GGS_string ("userResources"), GGS_stringset::class_func_setWithStringList (var_resourceFiles_27868  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1330)), var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_userResourcesGroupRef_60073, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1327)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_userResourcesGroupRef_60073, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1340)) ;
      }
      GGS_string var_frameworkGroupRef_60746 ;
      {
      GGS_stringset temp_58 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1347)) ;
      temp_58.plusPlusAssignOperation (GGS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1346)) ;
      temp_58.plusPlusAssignOperation (GGS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1347)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28230, GGS_string ("Frameworks for App"), GGS_string ("/System/Library/Frameworks"), temp_58, var_buildCFileRefListForTool_34309, var_buildCppFileRefListForTool_34360, var_m_5F_FileRefList_34413, var_mm_5F_FileRefList_34453, var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538, var_resourceFileBuildRefs_34586, var_frameworkGroupRef_60746, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1342)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28230, var_frameworkGroupRef_60746, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1358)) ;
      }
      GGS_stringlist var_codeSigningSettingList_60891 ;
      GalgasBool test_59 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_59) {
        test_59 = GGS_bool (ComparisonKind::equal, var_macCodeSign_19484.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_59) {
          GGS_stringlist temp_60 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1362)) ;
          temp_60.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"-\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1362)) ;
          var_codeSigningSettingList_60891 = temp_60 ;
        }
      }
      if (GalgasBool::boolFalse == test_59) {
        GGS_stringlist var_components_61036 = var_macCodeSign_19484.readProperty_string ().getter_componentsSeparatedByString (GGS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1364)) ;
        GalgasBool test_61 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_61) {
          test_61 = GGS_bool (ComparisonKind::notEqual, var_components_61036.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1365)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_61) {
            GenericArray <FixItDescription> fixItArray62 ;
            inCompiler->emitSemanticError (var_macCodeSign_19484.readProperty_location (), GGS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray62  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1366)) ;
            var_codeSigningSettingList_60891.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_61) {
          GalgasBool test_63 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_63) {
            test_63 = GGS_bool (ComparisonKind::equal, var_components_61036.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1367)).objectCompare (GGS_string ("MacDeveloper"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_63) {
              GGS_stringlist temp_64 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1370)) ;
              temp_64.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1369)) ;
              temp_64.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_61036.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1370)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1370)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1370)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1370)) ;
              var_codeSigningSettingList_60891 = temp_64 ;
            }
          }
          if (GalgasBool::boolFalse == test_63) {
            GalgasBool test_65 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_65) {
              test_65 = GGS_bool (ComparisonKind::equal, var_components_61036.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1372)).objectCompare (GGS_string ("Certificate"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_65) {
                GGS_stringlist temp_66 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1373)) ;
                temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_61036.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1373)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1373)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1373)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1373)) ;
                var_codeSigningSettingList_60891 = temp_66 ;
              }
            }
            if (GalgasBool::boolFalse == test_65) {
              GenericArray <FixItDescription> fixItArray67 ;
              inCompiler->emitSemanticError (var_macCodeSign_19484.readProperty_location (), GGS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray67  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1375)) ;
              var_codeSigningSettingList_60891.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GGS_stringlist temp_68 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1383)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1380)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1381)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1382)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_26328, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1383)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1383)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1383)).add_operation (GGS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1383)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1383)) ;
      GGS_stringlist var_settingList_61915 = temp_68.add_operation (var_codeSigningSettingList_60891, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1384)) ;
      GalgasBool test_69 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_69) {
        test_69 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1385)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_69) {
          GGS_string var_s_62278 = GGS_string ("OTHER_LDFLAGS=(") ;
          UpEnumerator_stringlist enumerator_62311 (constinArgument_inHandCodedLinkToolFileList) ;
          while (enumerator_62311.hasCurrentObject ()) {
            var_s_62278.plusAssignOperation(GGS_string ("\"").add_operation (enumerator_62311.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1388)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1388)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1388)) ;
            enumerator_62311.gotoNextObject () ;
            if (enumerator_62311.hasCurrentObject ()) {
              var_s_62278.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1389)) ;
            }
          }
          var_s_62278.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1391)) ;
          var_settingList_61915.addAssignOperation (var_s_62278  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1392)) ;
        }
      }
      GGS_string var_releaseTargetRef_62788 ;
      GGS_string var_releaseProductFileRef_62831 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_28230, constinArgument_inTargetName.add_operation (GGS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1395)), constinArgument_inTargetName, var_buildCFileRefListForTool_34309.add_operation (var_buildCppFileRefListForTool_34360, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1397)).add_operation (var_mm_5F_FileRefList_34453, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1397)), var_toolFrameworksFileRefList_35393, var_settingList_61915, var_releaseTargetRef_62788, var_releaseProductFileRef_62831, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1394)) ;
      }
      GGS_stringlist temp_70 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1409)) ;
      temp_70.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1405)) ;
      temp_70.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1406)) ;
      temp_70.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1407)) ;
      temp_70.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1408)) ;
      temp_70.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_26328, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1409)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1409)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1409)).add_operation (GGS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1409)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1409)) ;
      var_settingList_61915 = temp_70.add_operation (var_codeSigningSettingList_60891, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1410)) ;
      GalgasBool test_71 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_71) {
        test_71 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1411)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_71) {
          GGS_string var_s_63287 = GGS_string ("OTHER_LDFLAGS=(") ;
          UpEnumerator_stringlist enumerator_63320 (constinArgument_inHandCodedLinkToolFileList) ;
          while (enumerator_63320.hasCurrentObject ()) {
            var_s_63287.plusAssignOperation(GGS_string ("\"").add_operation (enumerator_63320.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1414)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1414)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1414)) ;
            enumerator_63320.gotoNextObject () ;
            if (enumerator_63320.hasCurrentObject ()) {
              var_s_63287.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1415)) ;
            }
          }
          var_s_63287.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1417)) ;
          var_settingList_61915.addAssignOperation (var_s_63287  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1418)) ;
        }
      }
      GGS_string var_debugTargetRef_63812 ;
      GGS_string var_debugProductFileRef_63853 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_28230, constinArgument_inTargetName.add_operation (GGS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1421)), constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1422)), var_buildCFileRefListForTool_34309.add_operation (var_buildCppFileRefListForTool_34360, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1423)).add_operation (var_mm_5F_FileRefList_34453, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1423)), var_toolFrameworksFileRefList_35393, var_settingList_61915, var_debugTargetRef_63812, var_debugProductFileRef_63853, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1420)) ;
      }
      GGS_stringlist temp_72 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1432)) ;
      temp_72.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1431)) ;
      temp_72.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1432)) ;
      GGS_stringlist var_cocoaConfigurationSettingList_63924 = temp_72.add_operation (var_codeSigningSettingList_60891, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1433)) ;
      {
      GGS_stringlist temp_73 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1441)) ;
      temp_73.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_releaseTargetRef_62788, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1441)) ;
      temp_73.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_debugTargetRef_63812, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1441)) ;
      GGS__32_stringlist temp_74 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1442)) ;
      temp_74.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_releaseProductFileRef_62831, constinArgument_inTargetName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1442)) ;
      temp_74.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_debugProductFileRef_63853, constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1442)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1442)) ;
      GGS_string joker_64685 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_28230, constinArgument_inTargetName.add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1435)), constinArgument_inTargetName.getter_capitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas", 1436)).add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1436)), var_swift_5F_FileRefList_34494, var_frameworksFileRefList_34538.add_operation (var_appFrameworksFileRefList_33596, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1438)), var_resourceFileBuildRefs_34586.add_operation (var_resource_5F_handCodedResourceFileRefForAppList_32826, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1439)), var_cocoaConfigurationSettingList_63924, temp_73, temp_74, joker_64685, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1434)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_28230, var_dir_26227.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1447)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1447)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1447)), var_newIntermediateFilePath_27980, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1446)) ;
    }
    break ;
  }
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
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
    GGS_string var_creationProjectName_1418 = GGS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.readProperty_value ()) ;
    {
    routine_projectCreation_3F_ (var_creationProjectName_1418, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 27)) ;
    }
  }
  {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 34)) ;
        }
      }
    }
  }
  {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, GGS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        routine_updateLIBPMatPath_3F_ (GGS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 42)) ;
        }
      }
    }
  }
  {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        routine_checkBigInteger (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 52)) ;
        }
      }
    }
  }
  {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
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
  GGS_string var_parentDirectory_3028 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 77)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 77)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("galgasProject"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  GGS_stringlist var_candidateProjectFiles_3144 = var_parentDirectory_3028.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 78)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_3144.getter_count (SOURCE_FILE ("galgasProgram.galgas", 79)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 80)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3144.getter_count (SOURCE_FILE ("galgasProgram.galgas", 81)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_3421 = GGS_string ("several project files in source file parent directory:") ;
        UpEnumerator_stringlist enumerator_3491 (var_candidateProjectFiles_3144) ;
        while (enumerator_3491.hasCurrentObject ()) {
          var_s_3421.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_3491.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 84)) ;
          enumerator_3491.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3421, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 86)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_projectFilePath_3606 = var_parentDirectory_3028.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)).add_operation (var_candidateProjectFiles_3144.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 88)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_3606, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), GGS_bool (false), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 89)) ;
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
  GGS_string var_parentDirectory_4202 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 103)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 103)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ggsProject"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  GGS_stringlist var_candidateProjectFiles_4318 = var_parentDirectory_4202.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 104)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_4318.getter_count (SOURCE_FILE ("galgasProgram.galgas", 105)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 106)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_4318.getter_count (SOURCE_FILE ("galgasProgram.galgas", 107)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_4592 = GGS_string ("several project files in source file parent directory:") ;
        UpEnumerator_stringlist enumerator_4662 (var_candidateProjectFiles_4318) ;
        while (enumerator_4662.hasCurrentObject ()) {
          var_s_4592.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_4662.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 110)) ;
          enumerator_4662.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_4592, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 112)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_projectFilePath_4777 = var_parentDirectory_4202.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)).add_operation (var_candidateProjectFiles_4318.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 114)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_4777, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), GGS_bool (true), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 115)) ;
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
  GGS_templateInstructionListAST joker_5364 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5364  COMMA_SOURCE_FILE ("galgasProgram.galgas", 129)) ;
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

