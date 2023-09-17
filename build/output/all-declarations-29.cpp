#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath (const GALGAS_string constinArgument_inLIBPMPath,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapper var_fw_999 = GALGAS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  cEnumerator_stringlist enumerator_1066 (var_fw_999.getter_allDirectoryPathes (SOURCE_FILE ("libpmHandling.galgas", 22)), kENUMERATION_UP) ;
  while (enumerator_1066.hasCurrentObject ()) {
    GALGAS_string var_actualDirectory_1118 = constinArgument_inLIBPMPath.add_operation (enumerator_1066.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 23)) ;
    var_actualDirectory_1118.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 24)) ;
    enumerator_1066.gotoNextObject () ;
  }
  GALGAS_stringset var_allNeededFileSet_1237 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("libpmHandling.galgas", 27)) ;
  cEnumerator_stringlist enumerator_1266 (var_fw_999.getter_allTextFilePathes (SOURCE_FILE ("libpmHandling.galgas", 28)), kENUMERATION_UP) ;
  while (enumerator_1266.hasCurrentObject ()) {
    GALGAS_string var_contents_1309 = var_fw_999.getter_textFileContentsAtPath (enumerator_1266.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 29)) ;
    GALGAS_string var_actualFilePath_1362 = constinArgument_inLIBPMPath.add_operation (enumerator_1266.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 30)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_actualFilePath_1362.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas", 31)).objectCompare (GALGAS_string ("py"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_bool joker_1524 ; // Joker input parameter
        var_contents_1309.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1362, joker_1524, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 32)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool joker_1602 ; // Joker input parameter
      var_contents_1309.method_writeToFileWhenDifferentContents (var_actualFilePath_1362, joker_1602, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 34)) ;
    }
    var_allNeededFileSet_1237.addAssign_operation (enumerator_1266.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 36)) ;
    enumerator_1266.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_1682 (var_fw_999.getter_allBinaryFilePathes (SOURCE_FILE ("libpmHandling.galgas", 39)), kENUMERATION_UP) ;
  while (enumerator_1682.hasCurrentObject ()) {
    GALGAS_data var_contents_1729 = var_fw_999.getter_binaryFileContentsAtPath (enumerator_1682.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 40)) ;
    GALGAS_string var_actualFilePath_1786 = constinArgument_inLIBPMPath.add_operation (enumerator_1682.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 41)) ;
    GALGAS_bool joker_1887 ; // Joker input parameter
    var_contents_1729.method_writeToFileWhenDifferentContents (var_actualFilePath_1786, joker_1887, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 42)) ;
    var_allNeededFileSet_1237.addAssign_operation (enumerator_1682.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 43)) ;
    enumerator_1682.gotoNextObject () ;
  }
  GALGAS_stringset var_allActualFileSet_1972 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("libpmHandling.galgas", 46)) ;
  cEnumerator_stringlist enumerator_2001 (constinArgument_inLIBPMPath.getter_regularFiles (GALGAS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas", 47)), kENUMERATION_UP) ;
  while (enumerator_2001.hasCurrentObject ()) {
    var_allActualFileSet_1972.addAssign_operation (GALGAS_string ("/").add_operation (enumerator_2001.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 48))  COMMA_SOURCE_FILE ("libpmHandling.galgas", 48)) ;
    enumerator_2001.gotoNextObject () ;
  }
  GALGAS_stringset var_uselessFileSet_2098 = var_allActualFileSet_1972.substract_operation (var_allNeededFileSet_1237, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 50)) ;
  cEnumerator_stringset enumerator_2158 (var_uselessFileSet_2098, kENUMERATION_UP) ;
  while (enumerator_2158.hasCurrentObject ()) {
    {
    GALGAS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2158.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)) ;
    }
    enumerator_2158.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                const GALGAS_string constinArgument_inProductDirectory,
                                                const GALGAS_location constinArgument_inEndOfProjectSourceFile,
                                                const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                                GALGAS_semanticContext & outArgument_outSemanticContext,
                                                GALGAS_unifiedTypeMap & outArgument_outTypeMap,
                                                GALGAS_semanticDeclarationListForGeneration & outArgument_outSemanticDeclarationSortedListForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSemanticDeclarationSortedListForGeneration.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 24)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** Building semantic context\n")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 25)) ;
    }
  }
  GALGAS_semanticDeclarationListAST var_semanticDeclarationListWithPredefinedTypes_1789 = constinArgument_inSemanticDeclarationList ;
  {
  routine_appendPredefinedTypesASTs (var_semanticDeclarationListWithPredefinedTypes_1789, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 29)) ;
  }
  GALGAS_commandLineOptionListAST var_options_2032 = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 31)) ;
  cEnumerator__32_stringlist enumerator_2072 (GALGAS_application::constructor_boolOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 32)), kENUMERATION_UP) ;
  while (enumerator_2072.hasCurrentObject ()) {
    var_options_2032.addAssign_operation (GALGAS_string ("bool").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 34)), GALGAS_lstring::constructor_new (enumerator_2072.current (HERE).readProperty_mValue_31_ (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 35))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 35)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_boolOptionInvocationCharacter (enumerator_2072.current (HERE).readProperty_mValue_30_ (), enumerator_2072.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 36)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 36))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 36)), GALGAS_application::constructor_boolOptionInvocationString (enumerator_2072.current (HERE).readProperty_mValue_30_ (), enumerator_2072.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37)), GALGAS_application::constructor_boolOptionCommentString (enumerator_2072.current (HERE).readProperty_mValue_30_ (), enumerator_2072.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 38)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 38)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 39)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 40))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 33)) ;
    enumerator_2072.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2513 (GALGAS_application::constructor_uintOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 42)), kENUMERATION_UP) ;
  while (enumerator_2513.hasCurrentObject ()) {
    var_options_2032.addAssign_operation (GALGAS_string ("uint").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)), GALGAS_lstring::constructor_new (enumerator_2513.current (HERE).readProperty_mValue_31_ (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_uintOptionInvocationCharacter (enumerator_2513.current (HERE).readProperty_mValue_30_ (), enumerator_2513.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)), GALGAS_application::constructor_uintOptionInvocationString (enumerator_2513.current (HERE).readProperty_mValue_30_ (), enumerator_2513.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)), GALGAS_application::constructor_uintOptionCommentString (enumerator_2513.current (HERE).readProperty_mValue_30_ (), enumerator_2513.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 49)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 50))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 43)) ;
    enumerator_2513.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2960 (GALGAS_application::constructor_stringOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 52)), kENUMERATION_UP) ;
  while (enumerator_2960.hasCurrentObject ()) {
    var_options_2032.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)), GALGAS_lstring::constructor_new (enumerator_2960.current (HERE).readProperty_mValue_31_ (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_stringOptionInvocationCharacter (enumerator_2960.current (HERE).readProperty_mValue_30_ (), enumerator_2960.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)), GALGAS_application::constructor_stringOptionInvocationString (enumerator_2960.current (HERE).readProperty_mValue_30_ (), enumerator_2960.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)), GALGAS_application::constructor_stringOptionCommentString (enumerator_2960.current (HERE).readProperty_mValue_30_ (), enumerator_2960.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 59)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 60))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 53)) ;
    enumerator_2960.gotoNextObject () ;
  }
  var_semanticDeclarationListWithPredefinedTypes_1789.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 64)), var_options_2032  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 62))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 62)) ;
  GALGAS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3565 = function_optionNameForUsefulEntitiesGraph (GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 67)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3565  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 68)) ;
  GALGAS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_3960 ;
  {
  routine_buildGalgasSemanticContext (var_semanticDeclarationListWithPredefinedTypes_1789, constinArgument_inEndOfProjectSourceFile, outArgument_outSemanticContext, outArgument_outTypeMap, var_sortedSemanticDeclarationListAST_3960, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 70)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->printMessage (GALGAS_string ("*** Semantic analysis\n")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 79)) ;
    }
  }
  cEnumerator_lstringlist enumerator_4169 (extensionGetter_unsolvedEntryList (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 82)), kENUMERATION_UP) ;
  while (enumerator_4169.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (enumerator_4169.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_4169.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 83)).add_operation (GALGAS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 83)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 83)) ;
    enumerator_4169.gotoNextObject () ;
  }
  outArgument_outSemanticDeclarationSortedListForGeneration = GALGAS_semanticDeclarationListForGeneration::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 86)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 87)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_predefinedTypes var_predefinedTypes_4389 = function_buildPredefinedTypes (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 88)) ;
      cEnumerator_semanticDeclarationListAST enumerator_4465 (var_sortedSemanticDeclarationListAST_3960, kENUMERATION_UP) ;
      while (enumerator_4465.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((cPtr_semanticDeclarationAST *) enumerator_4465.current (HERE).readProperty_mSemanticDeclaration ().ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, outArgument_outTypeMap, var_predefinedTypes_4389, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 90)) ;
        enumerator_4465.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgasSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildGalgasSemanticContext (const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                         const GALGAS_location constinArgument_inEndOfProjectSourceFile,
                                         GALGAS_semanticContext & outArgument_outSemanticContext,
                                         GALGAS_unifiedTypeMap & outArgument_outTypeMap,
                                         GALGAS_semanticDeclarationListAST & outArgument_outSortedSemanticDeclarationListAST,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList_5726 = constinArgument_inSemanticDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_5799 (constinArgument_inSemanticDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5799.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((cPtr_semanticDeclarationAST *) enumerator_5799.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticDeclarationList_5726, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 117)) ;
    enumerator_5799.gotoNextObject () ;
  }
  GALGAS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_6140 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 123)) ;
  GALGAS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6226 = GALGAS_extensionMethodMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 124)) ;
  GALGAS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6312 = GALGAS_extensionGetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 125)) ;
  GALGAS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6398 = GALGAS_extensionSetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 126)) ;
  GALGAS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6474 = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 127)) ;
  cEnumerator_semanticDeclarationListAST enumerator_6532 (var_semanticDeclarationList_5726, kENUMERATION_UP) ;
  while (enumerator_6532.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((cPtr_semanticDeclarationAST *) enumerator_6532.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticTypePrecedenceGraph_6140, var_extensionMethodMapForBuildingContext_6226, var_extensionGetterMapForBuildingContext_6312, var_extensionSetterMapForBuildingContext_6398, var_extensionOverrideDefinitionList_6474, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 129)) ;
    enumerator_6532.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_6946 (var_semanticTypePrecedenceGraph_6140.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 138)), kENUMERATION_UP) ;
  while (enumerator_6946.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_6946.current (HERE).readProperty_mValue ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 139)).objectCompare (GALGAS_char (TO_UNICODE (63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->printMessage (GALGAS_string ("Optional '").add_operation (enumerator_6946.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 140)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 140))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 140)) ;
      }
    }
    enumerator_6946.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_semanticTypePrecedenceGraph_6140.getter_undefinedNodeCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 144)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_7200 (var_semanticTypePrecedenceGraph_6140.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 145)), kENUMERATION_UP) ;
      while (enumerator_7200.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7200.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_7200.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 146)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 146)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 146)) ;
        enumerator_7200.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GALGAS_string ("semantic analysis not performed, due to undefined type error(s)"), fixItArray3  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 148)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
      outArgument_outTypeMap.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_7619 ;
    GALGAS_lstringlist joker_7577 ; // Joker input parameter
    GALGAS_lstringlist joker_7660 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_6140.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_7577, var_unsortedSemanticDeclarationListAST_7619, joker_7660, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 152)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_7619.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_s_7738 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_7619.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)) ;
        cEnumerator_semanticDeclarationListAST enumerator_7912 (var_unsortedSemanticDeclarationListAST_7619, kENUMERATION_UP) ;
        while (enumerator_7912.hasCurrentObject ()) {
          var_s_7738.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_7912.current (HERE).readProperty_mSemanticDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 161)) ;
          enumerator_7912.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_7738, fixItArray5  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 163)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
        outArgument_outTypeMap.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssign_operation(var_extensionOverrideDefinitionList_6474, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 166)) ;
      outArgument_outTypeMap = GALGAS_unifiedTypeMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 168)) ;
      outArgument_outSemanticContext = GALGAS_semanticContext::constructor_new (GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)), GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 172)), GALGAS_filewrapperMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)), GALGAS_grammarMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 174)), GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)), GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 176)), GALGAS_syntaxComponentMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 177))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 169)) ;
      cEnumerator_semanticDeclarationListAST enumerator_8712 (outArgument_outSortedSemanticDeclarationListAST, kENUMERATION_UP) ;
      while (enumerator_8712.hasCurrentObject ()) {
        callExtensionMethod_enterDeclarationInSemanticContext ((cPtr_semanticDeclarationAST *) enumerator_8712.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_extensionMethodMapForBuildingContext_6226, var_extensionGetterMapForBuildingContext_6312, var_extensionSetterMapForBuildingContext_6398, outArgument_outTypeMap, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 181)) ;
        enumerator_8712.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33_ (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                     const GALGAS_string constinArgument_inProductDirectory,
                                                     const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                     GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                     GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                                     GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                     GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_semanticDeclarationListForGeneration enumerator_9773 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9773.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((cPtr_semanticDeclarationForGeneration *) enumerator_9773.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioCocoaProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 209)) ;
    enumerator_9773.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 216)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 217)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_generateOneBigHeader (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 218)) ;
          }
          {
          routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 224)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 231)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 231)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_generateOneBigHeader (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 232)) ;
            }
            {
            routine_generateFewImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 238)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 245)).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 245)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_generateManyHeaders (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 246)) ;
              }
              {
              routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 252)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 259)).boolEnum () ;
              if (kBoolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 260)) ;
                }
              }
            }
            if (kBoolFalse == test_4) {
              {
              routine_generateManyHeaders (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 269)) ;
              }
              {
              routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 275)) ;
              }
            }
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateManyHeaders'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateManyHeaders (const GALGAS_string constinArgument_inProductDirectory,
                                  const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                  GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                  GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_headerInclusionList_31__12686 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 295)) ;
  GALGAS_stringlist var_headerInclusionList_32__12730 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 296)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_12777 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_12777.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 298)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 298)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset var_inclusionSet_31__12902 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 299)) ;
        GALGAS_string var_headerDef_31__13001 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__12902, var_headerDef_31__13001, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 300)) ;
        GALGAS_string var_headerIncludes_31__13023 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_31__12902.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 302)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303)).add_operation (GALGAS_string ("headers 1\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303)) ;
          }
        }
        cEnumerator_stringset enumerator_13215 (var_inclusionSet_31__12902, kENUMERATION_UP) ;
        while (enumerator_13215.hasCurrentObject ()) {
          var_headerIncludes_31__13023.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13215.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)) ;
          enumerator_13215.gotoNextObject () ;
        }
        var_headerIncludes_31__13023.plusAssign_operation(var_headerDef_31__13001, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 308)) ;
        GALGAS_stringset var_inclusionSet_32__13361 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 309)) ;
        GALGAS_string var_headerDef_32__13480 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__13361, var_headerDef_32__13480, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)) ;
        GALGAS_string var_headerIncludes_32__13502 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_inclusionSet_32__13361.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 312)).boolEnum () ;
          if (kBoolTrue == test_2) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313)).add_operation (GALGAS_string ("headers 2\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313)) ;
          }
        }
        cEnumerator_stringset enumerator_13694 (var_inclusionSet_32__13361, kENUMERATION_UP) ;
        while (enumerator_13694.hasCurrentObject ()) {
          var_headerIncludes_32__13502.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13694.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 316)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 316)) ;
          enumerator_13694.gotoNextObject () ;
        }
        var_headerIncludes_32__13502.plusAssign_operation(var_headerDef_32__13480, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 318)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 320)).enumValue ()) {
        case GALGAS_headerKind::kNotBuilt:
          break ;
        case GALGAS_headerKind::kEnum_noHeader:
          {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsNotEqual, var_headerIncludes_31__13023.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 323)).readProperty_location (), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12777.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)), fixItArray4  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 323)) ;
              }
            }
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__13502.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 327)).readProperty_location (), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12777.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 328)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 328)), fixItArray6  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 327)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_oneHeader:
          {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, var_headerIncludes_31__13023.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 332)).readProperty_location (), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12777.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 333)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 333)), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 332)) ;
              }
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__13502.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 336)).readProperty_location (), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12777.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 337)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 337)), fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 336)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_twoHeaders:
          {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_headerIncludes_31__13023.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 341)).readProperty_location (), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12777.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 342)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 342)), fixItArray12  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 341)) ;
              }
            }
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, var_headerIncludes_32__13502.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <C_FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 345)).readProperty_location (), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12777.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 346)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 346)), fixItArray14  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 345)) ;
              }
            }
          }
          break ;
        }
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            GALGAS_string var_headerString_15300 = GALGAS_string ("#pragma once\n") ;
            var_headerString_15300.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 352)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 352)) ;
            var_headerString_15300.plusAssign_operation(GALGAS_string ("#include \"all-predefined-types.h\"\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)) ;
            var_headerString_15300.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)) ;
            var_headerString_15300.plusAssign_operation(var_headerIncludes_31__13023, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 355)) ;
            var_headerString_15300.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)) ;
            var_headerString_15300.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 357)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 357)) ;
            GALGAS_string temp_16 ;
            const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 359)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 359)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              temp_16 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_17) {
              temp_16 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_15731 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)) ;
            var_headerInclusionList_31__12686.addAssign_operation (var_headerFileName_15731  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_15731.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 361)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_15731.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15731.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 365)), var_headerString_15300, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 363)) ;
            }
          }
        }
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_string var_headerString_16305 = GALGAS_string ("#ifndef ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)).add_operation (GALGAS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)) ;
            var_headerString_16305.plusAssign_operation(GALGAS_string ("#define ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)).add_operation (GALGAS_string ("_DEFINED\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)) ;
            var_headerString_16305.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)) ;
            var_headerString_16305.plusAssign_operation(GALGAS_string ("#include \"").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)).add_operation (GALGAS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)) ;
            var_headerString_16305.plusAssign_operation(GALGAS_string ("\n//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)) ;
            var_headerString_16305.plusAssign_operation(var_headerIncludes_32__13502, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)) ;
            var_headerString_16305.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)) ;
            var_headerString_16305.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)) ;
            var_headerString_16305.plusAssign_operation(GALGAS_string ("#endif\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)) ;
            var_headerInclusionList_32__12730.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 381)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12777.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 385)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 385)), var_headerString_16305, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 383)) ;
            }
          }
        }
      }
    }
    enumerator_12777.gotoNextObject () ;
  }
  GALGAS_string var_headerString_17553 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), var_headerInclusionList_31__12686.add_operation (var_headerInclusionList_32__12730, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 394)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 392))) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 396)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 397)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_17553, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 398)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateOneBigHeader'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateOneBigHeader (const GALGAS_string constinArgument_inProductDirectory,
                                   const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                   GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                   GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_headerString_18262 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 414)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 412))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_18416 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_18416.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18416.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 418)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 418)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset joker_18571 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 419)) ;
        GALGAS_string var_headerString_31__18588 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18416.current (HERE).readProperty_mDeclaration ().ptr (), joker_18571, var_headerString_31__18588, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 419)) ;
        var_headerString_18262.plusAssign_operation(var_headerString_31__18588, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 420)) ;
      }
    }
    enumerator_18416.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_18693 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_18693.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18693.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 425)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 425)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset joker_18868 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)) ;
        GALGAS_string var_headerString_32__18885 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18693.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, joker_18868, var_headerString_32__18885, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 426)) ;
        var_headerString_18262.plusAssign_operation(var_headerString_32__18885, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 427)) ;
      }
    }
    enumerator_18693.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 430)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 431)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_18262, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 432)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildHeader'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildHeader (const GALGAS_headerCompositionMap constinArgument_inHeaderCompositionMap,
                          const GALGAS_string constinArgument_inHeaderFileName,
                          const GALGAS_string constinArgument_inDeclarationName,
                          GALGAS_headerRepartitionMap & ioArgument_ioHeaderRepartitionMap,
                          GALGAS_string & ioArgument_ioHeaderString,
                          C_Compiler * inCompiler
                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 465)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 465)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 466)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 466)) ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 467)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_stringset var_inclusionSet_20481 ;
          GALGAS_string var_headerString_20515 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 469)), var_inclusionSet_20481, var_headerString_20515, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 468)) ;
          cEnumerator_stringset enumerator_20547 (var_inclusionSet_20481, kENUMERATION_UP) ;
          while (enumerator_20547.hasCurrentObject ()) {
            {
            routine_buildHeader (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20547.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 474)) ;
            }
            enumerator_20547.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssign_operation(var_headerString_20515, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 482)) ;
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssign_operation(GALGAS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 484)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 484)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'definitionGroupAmount'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint onceFunction_definitionGroupAmount (C_Compiler *
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint (uint32_t (50U)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_definitionGroupAmount = false ;
static GALGAS_uint gOnceFunctionResult_definitionGroupAmount ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint function_definitionGroupAmount (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_definitionGroupAmount) {
    gOnceFunctionResult_definitionGroupAmount = onceFunction_definitionGroupAmount (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_definitionGroupAmount = true ;
  }
  return gOnceFunctionResult_definitionGroupAmount ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_definitionGroupAmount (void) {
  gOnceFunctionResult_definitionGroupAmount.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_definitionGroupAmount (NULL,
                                                                   releaseOnceFunctionResult_definitionGroupAmount) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_definitionGroupAmount [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_definitionGroupAmount (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_definitionGroupAmount (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_definitionGroupAmount ("definitionGroupAmount",
                                                                       functionWithGenericHeader_definitionGroupAmount,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_definitionGroupAmount) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFiles (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inProductDirectory,
                                             const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                             GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                             GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_useOneHugeHeader_21489 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  GALGAS_bigint var_n_21602 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 507)) ;
  GALGAS_bigint var_fileIdx_21614 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 508)) ;
  GALGAS_string var_implementationString_21632 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_21675 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 510)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_21714 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21714.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21714.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 512)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 512)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_code_21925 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_21714.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21675, var_code_21925, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 513)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_21675.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 514)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21714.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515)).add_operation (GALGAS_string (" cpp headers\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515)) ;
          }
        }
        var_implementationString_21632.plusAssign_operation(var_code_21925, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 517)) ;
        var_implementationString_21632.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21714.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 518)) ;
        var_n_21602.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsSupOrEqual, var_n_21602.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)).getter_bigint (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 520)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_useOneHugeHeader_21489.boolEnum () ;
              if (kBoolTrue == test_3) {
                GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 522)) ;
                temp_4.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 522)) ;
                var_inclusionSet_21675 = temp_4 ;
              }
            }
            GALGAS_string var_header_22378 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21675.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 524))) ;
            GALGAS_string var_fileName_22517 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21614.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 527)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 527)) ;
            GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)) ;
            temp_5.addAssign_operation (var_fileName_22517  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)) ;
            ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 528)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_22517  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 529)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22517, var_header_22378.add_operation (var_implementationString_21632, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 530)) ;
            }
            var_n_21602 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)) ;
            var_fileIdx_21614.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 536)) ;
            var_implementationString_21632 = GALGAS_string::makeEmptyString () ;
            var_inclusionSet_21675 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 538)) ;
          }
        }
      }
    }
    enumerator_21714.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_implementationString_21632.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_useOneHugeHeader_21489.boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_stringset temp_8 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 545)) ;
          temp_8.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 545)) ;
          var_inclusionSet_21675 = temp_8 ;
        }
      }
      GALGAS_string var_header_23078 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21675.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 548)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 547))) ;
      GALGAS_string var_fileName_23205 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21614.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 550)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 550)) ;
      GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551)) ;
      temp_9.addAssign_operation (var_fileName_23205  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551)) ;
      ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 551)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_23205  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 552)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_23205, var_header_23078.add_operation (var_implementationString_21632, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 553)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFilesWithFewHeaders'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFilesWithFewHeaders (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                           const GALGAS_string constinArgument_inProductDirectory,
                                                           const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                           GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                                           GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                           GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerCompositionMap var_headerCompositionMap_23972 = GALGAS_headerCompositionMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 571)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_24019 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_24019.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 573)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 573)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset var_inclusionSet_31__24144 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 574)) ;
        GALGAS_string var_headerString_31__24243 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__24144, var_headerString_31__24243, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 575)) ;
        GALGAS_stringset var_inclusionSet_32__24279 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 576)) ;
        GALGAS_string var_headerString_32__24398 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__24279, var_headerString_32__24398, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 577)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 578)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 578)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string temp_2 ;
            const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              temp_2 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_3) {
              temp_2 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_24490 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 579)) ;
            {
            var_headerCompositionMap_23972.setter_insertKey (var_headerFileName_24490.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 581)), var_inclusionSet_31__24144, var_headerString_31__24243, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 580)) ;
            }
          }
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)) ;
            temp_5.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)) ;
            var_headerCompositionMap_23972.setter_insertKey (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24019.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 588)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 588)), var_inclusionSet_32__24279.operator_or (temp_5 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 589)), var_headerString_32__24398, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 587)) ;
            }
          }
        }
      }
    }
    enumerator_24019.gotoNextObject () ;
  }
  GALGAS_headerRepartitionMap var_headerRepartitionMap_25159 = GALGAS_headerRepartitionMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 595)) ;
  GALGAS_bigint var_fileIdx_25191 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)) ;
  GALGAS_string var_implementationString_25209 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_headerString_25241 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_25276 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 599)) ;
  GALGAS_string var_headerFileName_25300 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 600)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_25368 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_25368.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 602)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 602)).boolEnum () ;
      if (kBoolTrue == test_6) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 604)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 604)))).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                routine_buildHeader (var_headerCompositionMap_23972, var_headerFileName_25300, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)), var_headerRepartitionMap_25159, var_headerString_25241, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)) ;
                }
                {
                routine_buildHeader (var_headerCompositionMap_23972, var_headerFileName_25300, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 606)), var_headerRepartitionMap_25159, var_headerString_25241, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 606)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)).objectCompare (GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 607)))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  {
                  routine_buildHeader (var_headerCompositionMap_23972, var_headerFileName_25300, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)), var_headerRepartitionMap_25159, var_headerString_25241, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)) ;
                  }
                }
              }
            }
          }
        }
        GALGAS_string var_code_26267 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_25276, var_code_26267, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 611)) ;
        cEnumerator_stringset enumerator_26284 (var_inclusionSet_25276, kENUMERATION_UP) ;
        while (enumerator_26284.hasCurrentObject ()) {
          {
          routine_buildHeader (var_headerCompositionMap_23972, var_headerFileName_25300, enumerator_26284.current_key (HERE), var_headerRepartitionMap_25159, var_headerString_25241, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)) ;
          }
          enumerator_26284.gotoNextObject () ;
        }
        var_implementationString_25209.plusAssign_operation(var_code_26267, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)) ;
        var_implementationString_25209.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_25368.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 616)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsStrictSup, var_implementationString_25209.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 617)).objectCompare (GALGAS_uint (uint32_t (786432U)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_stringset temp_11 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)) ;
            temp_11.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 618)) ;
            var_inclusionSet_25276 = temp_11 ;
            GALGAS_string var_cppHeader_26676 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_25276.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 619))) ;
            GALGAS_string var_fileName_26818 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)) ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
            temp_12.addAssign_operation (var_fileName_26818  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
            ioArgument_ioToolProductFileList = temp_12.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 623)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_26818  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 624)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_26818, var_cppHeader_26676.add_operation (var_implementationString_25209, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)) ;
            }
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25300.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 631))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 631)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25300.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)) ;
            GALGAS_stringlist temp_13 ;
            const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_fileIdx_25191.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              temp_13 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)) ;
            }else if (kBoolFalse == test_14) {
              GALGAS_stringlist temp_15 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)) ;
              temp_15.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 635)) ;
              temp_13 = temp_15 ;
            }
            GALGAS_string var_startOfHeader_27255 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25300, temp_13 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 633))) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25300.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 639)), var_startOfHeader_27255.add_operation (var_headerString_25241, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 637)) ;
            }
            var_fileIdx_25191.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 643)) ;
            var_implementationString_25209 = GALGAS_string::makeEmptyString () ;
            var_headerString_25241 = GALGAS_string::makeEmptyString () ;
            var_headerFileName_25300 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 646)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 646)) ;
            var_inclusionSet_25276 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 647)) ;
          }
        }
      }
    }
    enumerator_25368.gotoNextObject () ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsNotEqual, var_implementationString_25209.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_stringlist temp_17 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)) ;
      temp_17.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)) ;
      GALGAS_string var_header_27851 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_17 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653))) ;
      GALGAS_string var_fileName_27985 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 656)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 656)) ;
      GALGAS_stringlist temp_18 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)) ;
      temp_18.addAssign_operation (var_fileName_27985  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)) ;
      ioArgument_ioToolProductFileList = temp_18.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 657)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_27985  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 658)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_27985, var_header_27851.add_operation (var_implementationString_25209, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)) ;
      }
      ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25300.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 665)) ;
      ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25300.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
      GALGAS_stringlist temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, var_fileIdx_25191.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)) ;
      }else if (kBoolFalse == test_20) {
        GALGAS_stringlist temp_21 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)) ;
        temp_21.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 669)) ;
        temp_19 = temp_21 ;
      }
      GALGAS_string var_startOfHeader_28375 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25300, temp_19 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 667))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25300.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 673)), var_startOfHeader_28375.add_operation (var_headerString_25241, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 671)) ;
      }
    }
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 678)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 679)) ;
  GALGAS_stringlist temp_22 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682)) ;
  temp_22.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25191.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 682)) ;
  GALGAS_string var_startOfAllDeclarationsHeader_28818 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), temp_22 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 680))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_28818, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 684)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateManyImplementationFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateManyImplementationFiles (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                              const GALGAS_string constinArgument_inProductDirectory,
                                              const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                              GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_useOneHugeHeader_29505 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_29613 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_29613.hasCurrentObject ()) {
    GALGAS_stringset var_inclusionSet_29680 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 703)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_29613.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 704)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 704)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_implementationString_29861 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_29613.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_29680, var_implementationString_29861, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 705)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_29613.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 706)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_inclusionSet_29680.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29613.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 707))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 707)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_useOneHugeHeader_29505.boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 710)) ;
            temp_3.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 710)) ;
            var_inclusionSet_29680 = temp_3 ;
          }
        }
        GALGAS_string var_header_30124 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_29680.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 712))) ;
        var_implementationString_29861.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29613.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715)) ;
        GALGAS_string var_fileName_30346 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29613.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 716)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 716)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_30346  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 717)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_30346, var_header_30124.add_operation (var_implementationString_29861, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 718)) ;
        }
        ioArgument_ioToolProductFileList.addAssign_operation (var_fileName_30346  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 723)) ;
      }
    }
    enumerator_29613.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'Base.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'Base.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [2] = {
  & gWrapperDirectory_1_xcodeProjectGenerationFilewrapper,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  1,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (C_Compiler * /* inCompiler */,
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
  C_String result ;
  result << "// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n" ;
  GALGAS_uint index_249_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_249.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_249.current_mBuildReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_249.current_mFileName (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXBuildFile;\n    fileRef = " ;
      result << enumerator_249.current_mFileReference (HERE).stringValue () ;
      result << " ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n" ;
      index_249_.increment () ;
      enumerator_249.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFileReference */\n" ;
  GALGAS_uint index_552_ (0) ;
  if (in_C_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_552 (in_C_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_552.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_552.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_552.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.c;\n    name = " ;
      result << enumerator_552.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_552.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_552_.increment () ;
      enumerator_552.gotoNextObject () ;
    }
  }
  GALGAS_uint index_937_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_937 (in_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_937.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_937.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_937.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = " ;
      result << enumerator_937.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_937.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_937_.increment () ;
      enumerator_937.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1324_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1324 (in_M_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1324.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1324.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1324.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = " ;
      result << enumerator_1324.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_1324.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_1324_.increment () ;
      enumerator_1324.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1710_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1710 (in_MM_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1710.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1710.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1710.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = " ;
      result << enumerator_1710.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_1710.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_1710_.increment () ;
      enumerator_1710.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2105_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2105 (in_HEADER_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2105.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2105.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2105.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = " ;
      result << enumerator_2105.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_2105.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_2105_.increment () ;
      enumerator_2105.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2496_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2496 (in_FRAMEWORK_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2496.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2496.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2496.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = " ;
      result << enumerator_2496.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_2496.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_2496_.increment () ;
      enumerator_2496.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3069_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_3069 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3069.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3069.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = " ;
      result << enumerator_3069.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue () ;
      result << ";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n" ;
      index_3069_.increment () ;
      enumerator_3069.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3665_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_3665 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3665.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3665.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = " ;
      result << enumerator_3665.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue () ;
      result << ";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n" ;
      index_3665_.increment () ;
      enumerator_3665.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3994_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3994 (in_PLIST_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3994.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3994.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = " ;
      result << enumerator_3994.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_3994.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_3994_.increment () ;
      enumerator_3994.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4358_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4358 (in_XIB_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4358.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4358.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = " ;
      result << enumerator_4358.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_4358.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_4358_.increment () ;
      enumerator_4358.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4724_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4724 (in_TIFF_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4724.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4724.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = " ;
      result << enumerator_4724.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_4724.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_4724_.increment () ;
      enumerator_4724.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5063_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_5063 (in_ICNS_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5063.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5063.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = " ;
      result << enumerator_5063.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_5063.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n\n" ;
      index_5063_.increment () ;
      enumerator_5063.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n" ;
  GALGAS_uint index_5714_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5714 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5714.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5714.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  " ;
        result << enumerator_5714.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n" ;
        GALGAS_uint index_5953_ (0) ;
        if (enumerator_5714.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_5953 (enumerator_5714.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
          while (enumerator_5953.hasCurrentObject ()) {
            result << "      " ;
            result << enumerator_5953.current_mValue (HERE).stringValue () ;
            result << ",\n" ;
            index_5953_.increment () ;
            enumerator_5953.gotoNextObject () ;
          }
        }
        result << "    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_5714_.increment () ;
      enumerator_5714.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6391_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_6391 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6391.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6391.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n" ;
      GALGAS_uint index_6575_ (0) ;
      if (enumerator_6391.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6575 (enumerator_6391.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_6575.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6575.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_6575_.increment () ;
          enumerator_6575.gotoNextObject () ;
        }
      }
      result << "    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n" ;
      index_6391_.increment () ;
      enumerator_6391.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXGroup section */\n" ;
  GALGAS_uint index_6851_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_6851 (in_GROUPS, kENUMERATION_UP) ;
    while (enumerator_6851.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6851.current_mGroupReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_6851.current_mGroupName (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXGroup;\n    children = (\n" ;
      GALGAS_uint index_6978_ (0) ;
      if (enumerator_6851.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6978 (enumerator_6851.current_mChildrenRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_6978.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6978.current_mValue (HERE).stringValue () ;
          result << ", \n" ;
          index_6978_.increment () ;
          enumerator_6978.gotoNextObject () ;
        }
      }
      result << "    );\n    name = " ;
      result << enumerator_6851.current_mGroupName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue () ;
      result << ";\n    path = " ;
      result << enumerator_6851.current_mGroupPath (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue () ;
      result << ";\n    sourceTree = \"<group>\";\n  };\n" ;
      index_6851_.increment () ;
      enumerator_6851.gotoNextObject () ;
    }
  }
  result << "\n  " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << " /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n" ;
  GALGAS_uint index_7330_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_7330 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kENUMERATION_UP) ;
    while (enumerator_7330.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_7330.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_7330_.increment () ;
      enumerator_7330.gotoNextObject () ;
    }
  }
  result << "    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n" ;
  GALGAS_uint index_7744_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7744 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7744.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_7744.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_7744.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = " ;
      result << enumerator_7744.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n    buildPhases = (\n      " ;
      result << enumerator_7744.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " ,\n" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_7744.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "      " ;
        result << enumerator_7744.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " , /* Frameworks */\n" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = " ;
      result << enumerator_7744.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue () ;
      result << ";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = " ;
      result << enumerator_7744.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue () ;
      result << ";\n    productReference = " ;
      result << enumerator_7744.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n" ;
      index_7744_.increment () ;
      enumerator_7744.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8701_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8701 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8701.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_8701.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_8701.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = " ;
      result << enumerator_8701.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n    buildPhases = (\n      " ;
      result << enumerator_8701.current_mResourceBuildRef (HERE).stringValue () ;
      result << " , /* Resources */\n      " ;
      result << enumerator_8701.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Frameworks */\n      " ;
      result << enumerator_8701.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n" ;
      GALGAS_uint index_9090_ (0) ;
      if (enumerator_8701.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_9090 (enumerator_8701.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_9090.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_9090.current_mValue_30_ (HERE).stringValue () ;
          result << " ,\n" ;
          index_9090_.increment () ;
          enumerator_9090.gotoNextObject () ;
        }
      }
      result << "    );\n    name = " ;
      result << enumerator_8701.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue () ;
      result << ";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = " ;
      result << enumerator_8701.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue () ;
      result << ";\n    productReference = " ;
      result << enumerator_8701.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n" ;
      index_8701_.increment () ;
      enumerator_8701.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXProject */\n  " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */ = {\n   isa = PBXProject;\n   buildConfigurationList = " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << ";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n" ;
  GALGAS_uint index_10114_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_10114 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10114.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10114.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_10114_.increment () ;
      enumerator_10114.gotoNextObject () ;
    }
  }
  GALGAS_uint index_10453_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10453 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10453.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10453.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_10453_.increment () ;
      enumerator_10453.gotoNextObject () ;
    }
  }
  result << "   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n" ;
  GALGAS_uint index_10905_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10905 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10905.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_10905.current_mResourceBuildRef (HERE).stringValue () ;
      result << " /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n" ;
      GALGAS_uint index_11088_ (0) ;
      if (enumerator_10905.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11088 (enumerator_10905.current_mResourceFileBuildRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_11088.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_11088.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11088_.increment () ;
          enumerator_11088.gotoNextObject () ;
        }
      }
      result << "    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n" ;
      index_10905_.increment () ;
      enumerator_10905.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n" ;
  GALGAS_uint index_11538_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_11538 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11538.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11538.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n" ;
      GALGAS_uint index_11705_ (0) ;
      if (enumerator_11538.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11705 (enumerator_11538.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11705.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11705.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11705_.increment () ;
          enumerator_11705.gotoNextObject () ;
        }
      }
      result << "      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n" ;
      index_11538_.increment () ;
      enumerator_11538.gotoNextObject () ;
    }
  }
  GALGAS_uint index_12111_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12111 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12111.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_12111.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n" ;
      GALGAS_uint index_12278_ (0) ;
      if (enumerator_12111.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_12278 (enumerator_12111.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_12278.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_12278.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_12278_.increment () ;
          enumerator_12278.gotoNextObject () ;
        }
      }
      result << "      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n" ;
      index_12111_.increment () ;
      enumerator_12111.gotoNextObject () ;
    }
  }
  result << "\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n" ;
  GALGAS_uint index_12785_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12785 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12785.hasCurrentObject ()) {
      GALGAS_uint index_12833_ (0) ;
      if (enumerator_12785.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_12833 (enumerator_12785.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_12833.hasCurrentObject ()) {
          result << "  " ;
          result << enumerator_12833.current_mValue_30_ (HERE).stringValue () ;
          result << " = {\n    isa = PBXTargetDependency;\n    target = " ;
          result << enumerator_12833.current_mValue_31_ (HERE).stringValue () ;
          result << ";\n  };\n\n" ;
          index_12833_.increment () ;
          enumerator_12833.gotoNextObject () ;
        }
      }
      index_12785_.increment () ;
      enumerator_12785.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        CLANG_CXX_LANGUAGE_STANDARD = \"c++14\";\n" ;
  GALGAS_uint index_13357_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13357 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13357.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_13357.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_13357_.increment () ;
      enumerator_13357.gotoNextObject () ;
    }
  }
  result << "    };\n    name = Default;\n  };\n\n" ;
  GALGAS_uint index_13672_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_13672 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13672.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13672.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        ONLY_ACTIVE_ARCH = YES;\n" ;
      GALGAS_uint index_13876_ (0) ;
      if (enumerator_13672.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13876 (enumerator_13672.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_13876.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_13876.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_13876_.increment () ;
          enumerator_13876.gotoNextObject () ;
        }
      }
      result << "      PRODUCT_NAME = " ;
      result << enumerator_13672.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 345)).stringValue () ;
      result << " ;\n    };\n    name = Default;\n  };\n\n" ;
      index_13672_.increment () ;
      enumerator_13672.gotoNextObject () ;
    }
  }
  GALGAS_uint index_14351_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_14351 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14351.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_14351.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n" ;
      GALGAS_uint index_14519_ (0) ;
      if (enumerator_14351.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_14519 (enumerator_14351.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_14519.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_14519.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_14519_.increment () ;
          enumerator_14519.gotoNextObject () ;
        }
      }
      result << "      INFOPLIST_FILE = \"Info.plist\";\n      PRODUCT_NAME = " ;
      result << enumerator_14351.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 358)).stringValue () ;
      result << ";\n      PRODUCT_BUNDLE_IDENTIFIER = \"" ;
      result << in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue () ;
      result << "." ;
      result << in_PROJECT_5F_NAME.stringValue () ;
      result << "\";\n    };\n    name = Default;\n  };\n\n" ;
      index_14351_.increment () ;
      enumerator_14351.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n" ;
  GALGAS_uint index_15478_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_15478 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15478.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_15478.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        " ;
      result << enumerator_15478.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n" ;
      index_15478_.increment () ;
      enumerator_15478.gotoNextObject () ;
    }
  }
  GALGAS_uint index_16060_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_16060 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16060.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_16060.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        " ;
      result << enumerator_16060.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n" ;
      index_16060_.increment () ;
      enumerator_16060.gotoNextObject () ;
    }
  }
  result << "/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */;\n}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'targetGalgas3GenerationFileWrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'makefile-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'makefile-unix' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'makefile-win32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'makefile-x86linux32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'makefile-x86linux64-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_6 [1] = {
  NULL
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

const char * gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper = "{\\rtf1\\ansi\\ansicpg1252\\cocoartf1138\\cocoasubrtf510\n{\\fonttbl\\f0\\fnil\\fcharset0 GillSans;\\f1\\fnil\\fcharset128 HiraKakuProN-W3;}\n{\\colortbl;\\red255\\green255\\blue255;}\n\\paperw11900\\paperh16840\\margl1440\\margr1440\\vieww14100\\viewh8520\\viewkind0\n\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n\n\\f0\\fs28 \\cf0 By default, your Cocoa application has no associated icon.\\\n\\\nFor adding an icon for your application and your documents :\\\n\\\n\n\\f1\\b \\'87\\'40\n\\f0  Create an 'userResources' folder in the 'project_xcode' folder.\n\\b0 \\\n\\\n\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n\n\\f1\\b \\cf0 \\'87\\'41\n\\f0  For application icon : \n\\b0 add an icon file named 'application_icns.icns'.\\\n\\\n\n\\f1\\b \\'87\\'42\n\\f0  For every document type : \n\\b0 add an icon file whose name is based upon the source file extension : \n\\i 'extension\n\\i0 _icns.icns'.\\\n\\\n\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n\n\\b \\cf0 So :\\\n\n\\b0 \\\n\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n\\cf0 At the next galgas compilation, theses icons will be added automatically to the Xcode project.\\\n}" ;

const cRegularFileWrapper gWrapperFile_0_targetGalgas_33_GenerationFileWrapper (
  "adding-icons-to-your-application.rtf",
  "rtf",
  true, // Text file
  1274, // Text length
  gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper
) ;

//--- File 'Base.lproj/Credits.rtf'

const char * gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper = "{\\rtf1\\mac\\ansicpg10000\\cocoartf824\\cocoasubrtf380\n{\\fonttbl\\f0\\fswiss\\fcharset77 Helvetica-Bold;}\n{\\colortbl;\\red255\\green255\\blue255;}\n\\vieww9000\\viewh8400\\viewkind0\n\\pard\\tx560\\tx1120\\tx1680\\tx2240\\tx2800\\tx3360\\tx3920\\tx4480\\tx5040\\tx5600\\tx6160\\tx6720\\ql\\qnatural\n\n\\f0\\b\\fs24 \\cf0 GALGAS Cocoa Project\\\n}\n" ;

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
  NULL
} ;

//--- All sub-directories of 'Base.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'project-xcode-objc' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_3 [2] = {
  & gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper,
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0 [7] = {
  & gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_targetGalgas_33_GenerationFileWrapper (
  "",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0,
  6,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_macosx'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (C_Compiler * /* inCompiler */,
                                                                                         const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                         const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom macosx_gcc_tools import buildForMacOSX\n#----------------------------------------------------------------- Build\nbuildForMacOSX (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", \"" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_macosx'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_macosx'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\"/, \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_macosx'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_macosx'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper install_macosx'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_macosx (C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"install-release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_macosx'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (C_Compiler * /* inCompiler */,
                                                                                         const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_unix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_unix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                       const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom unix_gcc_tools import buildForUnix\n#----------------------------------------------------------------- Build\nbuildForUnix (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", \"" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_unix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_unix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_unix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_unix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n#! /usr/bin/python3\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper install_unix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"install-release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                                      const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_32 import buildForLinux32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux32OnMacOSX (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", \"" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux64_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux64_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                                      const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_64 import buildForLinux64OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux64OnMacOSX (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", \"" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux64_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux64_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux64_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux64_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_win32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                           const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_win32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                           const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                           const GALGAS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom mingw32_on_macosx_gcc_tools import buildForWin32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForWin32OnMacOSX (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", \"" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_win32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_win32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_win32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_win32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"/usr/bin/python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper codeblocks_project'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (C_Compiler * /* inCompiler */,
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
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" \?>\n<CodeBlocks_project_file>\n <FileVersion major=\"1\" minor=\"6\" />\n <Project>\n  <Option title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" />\n  <Option pch_mode=\"0\" />\n  <Option compiler=\"gcc\" />\n  <Build>\n   <Target title=\"Release\">\n    <Option platforms=\"" ;
  result << in_PLATFORM.stringValue () ;
  result << ";\" />\n    <Option output=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  const enumGalgasBool test_0 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << GALGAS_string (".exe").stringValue () ;
  }else if (kBoolFalse == test_0) {
  }
  result << "\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-fomit-frame-pointer\" />\n     <Add option=\"-O2\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++14\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     <Add option=\"-DDO_NOT_GENERATE_CHECKINGS\" />\n     " ;
  const enumGalgasBool test_1 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << GALGAS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue () ;
  }else if (kBoolFalse == test_1) {
  }
  result << "    </Compiler>\n   </Target>\n   <Target title=\"Debug\">\n    <Option platforms=\"" ;
  result << in_PLATFORM.stringValue () ;
  result << ";\" />\n    <Option output=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-debug" ;
  const enumGalgasBool test_2 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << GALGAS_string (".exe").stringValue () ;
  }else if (kBoolFalse == test_2) {
  }
  result << "\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects_debug\" />\n    <Option deps_output=\".deps_debug\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-g\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Winline\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++14\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     " ;
  const enumGalgasBool test_3 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << GALGAS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue () ;
  }else if (kBoolFalse == test_3) {
  }
  result << "    </Compiler>\n   </Target>\n  </Build>\n  <VirtualTargets>\n   <Add alias=\"All\" targets=\"Release;Debug;\" />\n  </VirtualTargets>\n  <Compiler>\n   <Add directory=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "\" />\n   <Add directory=\"../" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "/user-headers\" />\n   <Add directory=\"../" ;
  result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
  result << "/output\" />\n" ;
  GALGAS_uint index_2386_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_2386 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET, kENUMERATION_UP) ;
    while (enumerator_2386.hasCurrentObject ()) {
      result << "  <Add directory=\"" ;
      result << enumerator_2386.current_key (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2386_.increment () ;
      enumerator_2386.gotoNextObject () ;
    }
  }
  result << "  </Compiler>\n  <Linker>\n" ;
  const enumGalgasBool test_4 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << GALGAS_string ("   <Add library=\"Ws2_32\" />\n   <Add library=\"Comdlg32\" />\n").stringValue () ;
  }else if (kBoolFalse == test_4) {
  }
  result << "  </Linker>\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/all-libpm.cpp\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/galgas2/all-galgas.cpp\" />\n" ;
  const enumGalgasBool test_5 = in_VERBOSE_5F_OPTION.boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  <Unit filename=\"" ;
    result << in_LIBPM_5F_PATH.stringValue () ;
    result << "/galgas2/C_galgas_verbose_option.cpp\" />\n" ;
  }else if (kBoolFalse == test_5) {
    result << "  <Unit filename=\"" ;
    result << in_LIBPM_5F_PATH.stringValue () ;
    result << "/galgas2/C_galgas_quiet_option.cpp\" />\n" ;
  }
  GALGAS_uint index_2896_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2896 (in_TOOL_5F_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2896.hasCurrentObject ()) {
      result << "  <Unit filename=\"../" ;
      result << in_BUILD_5F_DIR_5F_NAME.stringValue () ;
      result << "/output/" ;
      result << enumerator_2896.current_mValue (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2896_.increment () ;
      enumerator_2896.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3016_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3016 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3016.hasCurrentObject ()) {
      result << "  <Unit filename=\"../" ;
      result << enumerator_3016.current_mValue (HERE).stringValue () ;
      result << "\" />\n" ;
      index_3016_.increment () ;
      enumerator_3016.gotoNextObject () ;
    }
  }
  result << "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/32-mp_bases.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/64-mp_bases.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-add.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-add_1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-add_n.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-addmul_1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-bdiv_dbm1c.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-cmp.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-dcpi1_div_qr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-dive_1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-divrem_1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-divrem_2.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-get_str.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-invertappr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-lshift.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-lshiftc.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mu_div_qr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul_1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul_basecase.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul_fft.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul_n.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mulmod_bnm1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-nussbaumer_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-pre_divrem_1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-rshift.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sbpi1_div_qr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sbpi1_divappr_q.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-set_str.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sqr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sqr_basecase.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sqrmod_bnm1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sub.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sub_1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sub_n.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-submul_1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-tdiv_qr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom22_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom2_sqr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom32_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom33_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom3_sqr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom42_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom43_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom44_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom4_sqr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom53_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom63_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom6_sqr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom6h_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom8_sqr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom8h_mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_couple_handling.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_dgr3_pm1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_dgr3_pm2.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_pm1.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_pm2.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_pm2exp.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_pm2rexp.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_12pts.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_16pts.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_5pts.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_6pts.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_7pts.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_8pts.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-abs.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-add.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-add_ui.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-and.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cdiv_q_ui.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cdiv_qr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cfdiv_q_2exp.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-clear.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-clrbit.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cmp.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cmp_si.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cmp_ui.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-com.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-combit.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-export.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-fdiv_q_ui.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-fdiv_qr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-fits_sint.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-fits_uint.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-get_si.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-get_str.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-get_ui.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-init.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-ior.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-mul.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-mul_2exp.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-mul_ui.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-neg.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-realloc.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-set.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-set_str.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-set_ui.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-setbit.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-sizeinbase.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-sub.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-sub_ui.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-swap.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-tdiv_qr.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-tstbit.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-xor.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-assert.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-errno.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-memory.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-mp_bpl.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-mp_clz_tab.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-mp_dv_tab.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-mp_minv_tab.c\" />\n  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-tal-notreent.c\" />\n  <Extensions>\n   <code_completion />\n   <envvars />\n   <debugger />\n   <lib_finder disable_auto=\"1\" />\n  </Extensions>\n </Project>\n</CodeBlocks_project_file>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                   const GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                                                   const GALGAS_string & in_VERSION_5F_STRING,
                                                                                                   const GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET,
                                                                                                   const GALGAS_string & in_MACOSX_5F_DEPLOYMENT_5F_TARGET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>" ;
  result << in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>LSMinimumSystemVersion</key>\n <string>" ;
  result << in_MACOSX_5F_DEPLOYMENT_5F_TARGET.stringValue () ;
  result << "</string>\n <key>CFBundleShortVersionString</key>\n <string>" ;
  result << in_VERSION_5F_STRING.stringValue () ;
  result << "</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>NSApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n" ;
  GALGAS_uint index_986_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_986 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_986.hasCurrentObject ()) {
      result << "  <dict>\n      <key>CFBundleTypeIconFile</key>\n      <string>" ;
      result << enumerator_986.current_key (HERE).stringValue () ;
      result << "_icns</string>\n      <key>CFBundleTypeIconSystemGenerated</key>\n      <integer>0</integer>\n      <key>CFBundleTypeName</key>\n      <string>" ;
      result << in_PROJECT_5F_NAME.stringValue () ;
      result << " Source</string>\n      <key>CFBundleTypeRole</key>\n      <string>Editor</string>\n      <key>LSHandlerRank</key>\n      <string>Default</string>\n      <key>LSItemContentTypes</key>\n      <array>\n        <string>$(PRODUCT_BUNDLE_IDENTIFIER)." ;
      result << enumerator_986.current_key (HERE).stringValue () ;
      result << "</string>\n      </array>\n      <key>NSDocumentClass</key>\n      <string>OC_GGS_Document</string>\n  </dict>\n" ;
      index_986_.increment () ;
      enumerator_986.gotoNextObject () ;
    }
  }
  result << "\n </array>\n <key>UTExportedTypeDeclarations</key>\n <array>\n" ;
  GALGAS_uint index_1662_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1662 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1662.hasCurrentObject ()) {
      result << "  <dict>\n    <key>UTTypeConformsTo</key>\n    <array>\n      <string>public.text</string>\n    </array>\n    <key>UTTypeDescription</key>\n    <string>" ;
      result << enumerator_1662.current_key (HERE).stringValue () ;
      result << "</string>\n    <key>UTTypeIcons</key>\n    <dict>\n      <key>UTTypeIconBadgeName</key>\n      <string>galgasDocuments</string>\n    </dict>\n    <key>UTTypeIdentifier</key>\n    <string>$(PRODUCT_BUNDLE_IDENTIFIER)." ;
      result << enumerator_1662.current_key (HERE).stringValue () ;
      result << "</string>\n    <key>UTTypeTagSpecification</key>\n    <dict>\n      <key>public.filename-extension</key>\n      <array>\n        <string>" ;
      result << enumerator_1662.current_key (HERE).stringValue () ;
      result << "</string>\n      </array>\n    </dict>\n  </dict>\n" ;
      index_1662_.increment () ;
      enumerator_1662.gotoNextObject () ;
    }
  }
  result << "\n </array>\n</dict>\n</plist>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_build_xcode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#!/bin/sh\ncd `dirname $0` && xcodebuild -alltargets -configuration Default\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist_strings'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (C_Compiler * /* inCompiler */,
                                                                                                              const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "/* Localized versions of Info.plist keys */\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper json_file_list'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (C_Compiler * /* inCompiler */,
                                                                                              const GALGAS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET,
                                                                                              const GALGAS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST,
                                                                                              const GALGAS_stringlist & in_MAKEFILE_5F_FILE_5F_LIST,
                                                                                              const GALGAS_stringlist & in_TOOL_5F_LINK_5F_LIST,
                                                                                              const GALGAS_string & in_LIBPM_5F_DIRECTORY_5F_PATH,
                                                                                              const GALGAS_string & in_RELATIVE_5F_BUILD_5F_DIR
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "{\n    \"LIBPM_DIRECTORY_PATH\"  :  \"" ;
  result << in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue () ;
  result << "\",\n    \"SOURCES_DIR\"  :  [\"../" ;
  result << in_RELATIVE_5F_BUILD_5F_DIR.stringValue () ;
  result << "/output\",  \"../" ;
  result << in_RELATIVE_5F_BUILD_5F_DIR.stringValue () ;
  result << "/user-headers\",  \"" ;
  result << in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue () ;
  result << "\"" ;
  GALGAS_uint index_231_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_231 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET, kENUMERATION_UP) ;
    while (enumerator_231.hasCurrentObject ()) {
      result << ",  \"" ;
      result << enumerator_231.current_key (HERE).stringValue () ;
      result << "\"" ;
      index_231_.increment () ;
      enumerator_231.gotoNextObject () ;
    }
  }
  result << "],\n    \"SOURCES\"  :  [\n        \"all-galgas.cpp\",\n        \"all-libpm.cpp\",\n" ;
  GALGAS_uint index_372_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_372 (in_MAKEFILE_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_372.hasCurrentObject ()) {
      result << "        \"" ;
      result << enumerator_372.current_mValue (HERE).stringValue () ;
      result << "\",\n" ;
      index_372_.increment () ;
      enumerator_372.gotoNextObject () ;
    }
  }
  GALGAS_uint index_456_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_456 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_456.hasCurrentObject ()) {
      result << "        \"" ;
      result << enumerator_456.current_mValue (HERE).stringValue () ;
      result << "\",\n" ;
      index_456_.increment () ;
      enumerator_456.gotoNextObject () ;
    }
  }
  result << "        \"32-mp_bases.c\",\n        \"mpn-invertappr.c\",\n        \"mpn-sub_1.c\",\n        \"mpn-toom_eval_dgr3_pm1.c\",\n        \"mpz-clrbit.c\", \n        \"mpz-set_ui.c\",\n        \"mpn-lshift.c\",\n        \"mpn-sub_n.c\",\n        \"mpn-toom_eval_dgr3_pm2.c\",\n        \"mpz-cmp.c\",\n        \"mpz-setbit.c\",\n        \"64-mp_bases.c\",\n        \"mpn-lshiftc.c\",\n        \"mpn-submul_1.c\",\n        \"mpn-toom_eval_pm1.c\",\n        \"mpz-com.c\",\n        \"mpz-sizeinbase.c\",\n        \"mpn-mu_div_qr.c\",\n        \"mpn-tdiv_qr.c\", \n        \"mpn-toom_eval_pm2.c\",\n        \"mpz-combit.c\", \n        \"mpz-sub.c\",\n        \"mpn-mul.c\",\n        \"mpn-toom22_mul.c\",\n        \"mpn-toom_eval_pm2exp.c\",\n        \"mpz-export.c\",\n        \"mpz-sub_ui.c\",\n        \"mpn-mul_1.c\",\n        \"mpn-toom2_sqr.c\",\n        \"mpn-toom_eval_pm2rexp.c\",\n        \"mpz-fdiv_qr.c\",\n        \"mpz-swap.c\",\n        \"mpn-mul_basecase.c\",\n        \"mpn-toom32_mul.c\",\n        \"mpn-toom_interpolate_12pts.c\",\n        \"mpz-tdiv_qr.c\",\n        \"mpn-mul_fft.c\",\n        \"mpn-toom33_mul.c\",\n        \"mpn-toom_interpolate_16pts.c\",\n        \"mpz-fits_sint.c\",\n        \"mpz-tstbit.c\",\n        \"mpn-mul_n.c\",\n        \"mpn-toom3_sqr.c\",\n        \"mpn-toom_interpolate_5pts.c\",\n        \"mpz-fits_uint.c\",\n        \"mpz-xor.c\",\n        \"mpn-add.c\",\n        \"mpn-mulmod_bnm1.c\",\n        \"mpn-toom42_mul.c\",\n        \"mpn-toom_interpolate_6pts.c\",\n        \"mpz-get_si.c\",\n        \"mpn-add_1.c\",\n        \"mpn-nussbaumer_mul.c\",\n        \"mpn-toom43_mul.c\",\n        \"mpn-toom_interpolate_7pts.c\",\n        \"mpz-get_str.c\",\n        \"root-assert.c\",\n        \"mpn-add_n.c\",\n        \"mpn-pre_divrem_1.c\",\n        \"mpn-toom44_mul.c\",\n        \"mpn-toom_interpolate_8pts.c\",\n        \"mpz-get_ui.c\",\n        \"mpn-addmul_1.c\",\n        \"mpn-rshift.c\",\n        \"mpn-toom4_sqr.c\",\n        \"mpz-abs.c\",\n        \"mpz-init.c\",\n        \"root-errno.c\",\n        \"mpn-bdiv_dbm1c.c\",\n        \"mpn-sbpi1_div_qr.c\",\n        \"mpn-toom53_mul.c\",\n        \"mpz-add.c\",\n        \"mpz-ior.c\",\n        \"root-memory.c\",\n        \"mpn-cmp.c\",\n        \"mpn-sbpi1_divappr_q.c\",\n        \"mpn-toom63_mul.c\",\n        \"mpz-add_ui.c\",\n        \"mpz-mul.c\",\n        \"root-mp_bpl.c\",\n        \"mpn-dcpi1_div_qr.c\",\n        \"mpn-set_str.c\",\n        \"mpn-toom6_sqr.c\",\n        \"mpz-and.c\",\n        \"mpz-mul_2exp.c\",\n        \"root-mp_clz_tab.c\",\n        \"mpn-dive_1.c\",\n        \"mpn-sqr.c\",\n        \"mpn-toom6h_mul.c\",\n        \"mpz-neg.c\",\n        \"root-mp_dv_tab.c\",\n        \"mpn-divrem_1.c\",\n        \"mpn-sqr_basecase.c\",\n        \"mpn-toom8_sqr.c\",\n        \"mpz-cdiv_qr.c\",\n        \"mpz-realloc.c\",\n        \"root-mp_minv_tab.c\",\n        \"mpn-divrem_2.c\",\n        \"mpn-sqrmod_bnm1.c\",\n        \"mpn-toom8h_mul.c\",\n        \"mpz-cfdiv_q_2exp.c\",\n        \"mpz-set.c\",\n        \"root-tal-notreent.c\",\n        \"mpn-get_str.c\",\n        \"mpn-sub.c\",\n        \"mpn-toom_couple_handling.c\",\n        \"mpz-clear.c\",\n        \"mpz-set_str.c\",\n        \"mpz-mul_ui.c\",\n        \"mpz-cmp_ui.c\",\n        \"mpz-cmp_si.c\",\n        \"mpz-fdiv_q_ui.c\",\n        \"mpz-cdiv_q_ui.c\"\n    ],\n    \"USER_LINK_OPTIONS\"  :  [" ;
  GALGAS_uint index_3582_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3582 (in_TOOL_5F_LINK_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3582.hasCurrentObject ()) {
      result << "\n        \"" ;
      result << enumerator_3582.current_mValue (HERE).stringValue () ;
      result << "\"" ;
      if (enumerator_3582.hasNextObject ()) {
        result << "," ;
      }
      index_3582_.increment () ;
      enumerator_3582.gotoNextObject () ;
    }
  }
  result << "\n    ]\n}\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper project_header'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (C_Compiler * /* inCompiler */,
                                                                                           const GALGAS_string & in_VERSION_5F_STRING
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//     Project common header file                                                                \n//\n//----------------------------------------------------------------------------------------------------------------------\n\n#pragma once\n\n//----------------------------------------------------------------------------------------------------------------------\n\n#define PROJECT_VERSION_STRING \"" ;
  result << in_VERSION_5F_STRING.stringValue () ;
  result << "\"\n\n//----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksWindowsTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksWindowsTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                    const GALGAS_string constinArgument_inBuildDirectoryName,
                                                    const GALGAS_string constinArgument_inProjectName,
                                                    const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                    const GALGAS_string constinArgument_inLIBPMpath,
                                                    const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                    const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                    const GALGAS_bool constinArgument_inVerboseOption,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_5529 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 96)) ;
  var_dir_5529.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 97)) ;
  GALGAS_string var_s_5622 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (true), GALGAS_string ("Windows"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 98))) ;
  GALGAS_bool joker_6017 ; // Joker input parameter
  var_s_5622.method_writeToFileWhenDifferentContents (var_dir_5529.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 109)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 109)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 109)), joker_6017, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 109)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksMacTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksMacTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                const GALGAS_string constinArgument_inBuildDirectoryName,
                                                const GALGAS_string constinArgument_inProjectName,
                                                const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                const GALGAS_string constinArgument_inLIBPMpath,
                                                const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                const GALGAS_bool constinArgument_inVerboseOption,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_6512 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-mac"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 124)) ;
  var_dir_6512.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 125)) ;
  GALGAS_string var_s_6601 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Mac"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 126))) ;
  GALGAS_bool joker_6993 ; // Joker input parameter
  var_s_6601.method_writeToFileWhenDifferentContents (var_dir_6512.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 137)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 137)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 137)), joker_6993, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 137)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxI686Target'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target (const GALGAS_string constinArgument_inProjectDirectory,
                                                               const GALGAS_string constinArgument_inBuildDirectoryName,
                                                               const GALGAS_string constinArgument_inProjectName,
                                                               const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                               const GALGAS_string constinArgument_inLIBPMpath,
                                                               const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                               const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                               const GALGAS_bool constinArgument_inVerboseOption,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_7495 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 152)) ;
  var_dir_7495.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 153)) ;
  GALGAS_string var_s_7588 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 154))) ;
  GALGAS_bool joker_7981 ; // Joker input parameter
  var_s_7588.method_writeToFileWhenDifferentContents (var_dir_7495.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 165)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 165)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 165)), joker_7981, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 165)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxX86_64Target'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target (const GALGAS_string constinArgument_inProjectDirectory,
                                                                       const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                       const GALGAS_string constinArgument_inProjectName,
                                                                       const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                                       const GALGAS_string constinArgument_inLIBPMpath,
                                                                       const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                       const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                       const GALGAS_bool constinArgument_inVerboseOption,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_8484 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 180)) ;
  var_dir_8484.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 181)) ;
  GALGAS_string var_s_8577 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 182))) ;
  GALGAS_bool joker_8970 ; // Joker input parameter
  var_s_8577.method_writeToFileWhenDifferentContents (var_dir_8484.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193)), joker_8970, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MinGWOnMacOSXTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MinGWOnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                    const GALGAS_string constinArgument_inBuildDirectoryName,
                                                    const GALGAS_string constinArgument_inProjectName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_9276 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 202)) ;
  var_dir_9276.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 203)) ;
  GALGAS_bool joker_9522 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204))).method_writeToExecutableFileWhenDifferentContents (var_dir_9276.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)), joker_9522, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 204)) ;
  GALGAS_bool joker_9674 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 205))).method_writeToExecutableFileWhenDifferentContents (var_dir_9276.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 205)), joker_9674, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 205)) ;
  GALGAS_bool joker_9818 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 206))).method_writeToExecutableFileWhenDifferentContents (var_dir_9276.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 206)), joker_9818, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 206)) ;
  GALGAS_bool joker_9966 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 207))).method_writeToExecutableFileWhenDifferentContents (var_dir_9276.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 207)), joker_9966, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 207)) ;
  GALGAS_bool joker_10118 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 208))).method_writeToExecutableFileWhenDifferentContents (var_dir_9276.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 208)), joker_10118, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 208)) ;
  GALGAS_bool joker_10277 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 209))).method_writeToExecutableFileWhenDifferentContents (var_dir_9276.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 210)), joker_10277, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 209)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_9276.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MakefileMacOSXTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MakefileMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                     const GALGAS_string constinArgument_inBuildDirectoryName,
                                                     const GALGAS_string constinArgument_inProjectName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_10637 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 222)) ;
  var_dir_10637.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 223)) ;
  GALGAS_bool joker_10868 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 224))).method_writeToExecutableFileWhenDifferentContents (var_dir_10637.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 224)), joker_10868, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 224)) ;
  GALGAS_bool joker_11014 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 225))).method_writeToExecutableFileWhenDifferentContents (var_dir_10637.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 225)), joker_11014, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 225)) ;
  GALGAS_bool joker_11156 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 226))).method_writeToExecutableFileWhenDifferentContents (var_dir_10637.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 226)), joker_11156, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 226)) ;
  GALGAS_bool joker_11302 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 227))).method_writeToExecutableFileWhenDifferentContents (var_dir_10637.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 227)), joker_11302, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 227)) ;
  GALGAS_bool joker_11440 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 228))).method_writeToExecutableFileWhenDifferentContents (var_dir_10637.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 228)), joker_11440, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 228)) ;
  GALGAS_bool joker_11574 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 229))).method_writeToExecutableFileWhenDifferentContents (var_dir_10637.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 229)), joker_11574, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 229)) ;
  GALGAS_bool joker_11719 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 230))).method_writeToExecutableFileWhenDifferentContents (var_dir_10637.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 230)), joker_11719, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 230)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_10637.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 231)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MakefileUnixTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MakefileUnixTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                   const GALGAS_string constinArgument_inBuildDirectoryName,
                                                   const GALGAS_string constinArgument_inProjectName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_12074 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 240)) ;
  var_dir_12074.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 241)) ;
  GALGAS_bool joker_12301 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 242))).method_writeToExecutableFileWhenDifferentContents (var_dir_12074.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 242)), joker_12301, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 242)) ;
  GALGAS_bool joker_12445 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 243))).method_writeToExecutableFileWhenDifferentContents (var_dir_12074.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 243)), joker_12445, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 243)) ;
  GALGAS_bool joker_12581 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 244))).method_writeToExecutableFileWhenDifferentContents (var_dir_12074.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 244)), joker_12581, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 244)) ;
  GALGAS_bool joker_12721 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 245))).method_writeToExecutableFileWhenDifferentContents (var_dir_12074.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 245)), joker_12721, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 245)) ;
  GALGAS_bool joker_12865 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 246))).method_writeToExecutableFileWhenDifferentContents (var_dir_12074.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 246)), joker_12865, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 246)) ;
  GALGAS_bool joker_12997 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 247))).method_writeToExecutableFileWhenDifferentContents (var_dir_12074.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 247)), joker_12997, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 247)) ;
  GALGAS_bool joker_13140 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 248))).method_writeToExecutableFileWhenDifferentContents (var_dir_12074.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 248)), joker_13140, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 248)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_12074.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3Linux32OnMacOSXTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                            const GALGAS_string constinArgument_inBuildDirectoryName,
                                                            const GALGAS_string constinArgument_inProjectName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_13498 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 258)) ;
  var_dir_13498.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 259)) ;
  GALGAS_bool joker_13754 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 260))).method_writeToExecutableFileWhenDifferentContents (var_dir_13498.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 260)), joker_13754, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 260)) ;
  GALGAS_bool joker_13911 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 261))).method_writeToExecutableFileWhenDifferentContents (var_dir_13498.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 261)), joker_13911, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 261)) ;
  GALGAS_bool joker_14060 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 262))).method_writeToExecutableFileWhenDifferentContents (var_dir_13498.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 262)), joker_14060, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 262)) ;
  GALGAS_bool joker_14213 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 263))).method_writeToExecutableFileWhenDifferentContents (var_dir_13498.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 263)), joker_14213, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 263)) ;
  GALGAS_bool joker_14370 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 264))).method_writeToExecutableFileWhenDifferentContents (var_dir_13498.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 264)), joker_14370, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 264)) ;
  GALGAS_bool joker_14526 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 265))).method_writeToExecutableFileWhenDifferentContents (var_dir_13498.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 265)), joker_14526, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 265)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_13498.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3Linux64OnMacOSXTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                            const GALGAS_string constinArgument_inBuildDirectoryName,
                                                            const GALGAS_string constinArgument_inProjectName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_14884 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 275)) ;
  var_dir_14884.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 276)) ;
  GALGAS_bool joker_15140 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 277))).method_writeToExecutableFileWhenDifferentContents (var_dir_14884.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 277)), joker_15140, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 277)) ;
  GALGAS_bool joker_15297 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 278))).method_writeToExecutableFileWhenDifferentContents (var_dir_14884.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 278)), joker_15297, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 278)) ;
  GALGAS_bool joker_15446 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 279))).method_writeToExecutableFileWhenDifferentContents (var_dir_14884.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 279)), joker_15446, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 279)) ;
  GALGAS_bool joker_15599 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 280))).method_writeToExecutableFileWhenDifferentContents (var_dir_14884.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 280)), joker_15599, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 280)) ;
  GALGAS_bool joker_15756 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 281))).method_writeToExecutableFileWhenDifferentContents (var_dir_14884.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 281)), joker_15756, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 281)) ;
  GALGAS_bool joker_15912 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282))).method_writeToExecutableFileWhenDifferentContents (var_dir_14884.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282)), joker_15912, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_14884.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 283)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets (const GALGAS_string constinArgument_inAbsoluteBuildDirectory,
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
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectDirectory_16999 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 310)) ;
  GALGAS_bool joker_17292 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 312))).method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 313)), joker_17292, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 312)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 316)) ;
  GALGAS_stringlist var_toolCppFileList_17433 = constinArgument_inToolCppFileList ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_toolCppFileList_17433.addAssign_operation (GALGAS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 320)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_toolCppFileList_17433.addAssign_operation (GALGAS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 322)) ;
  }
  GALGAS_lstring var_macCodeSign_17710 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_17724 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("macCodeSign")) ;
  if (NULL != objectArray_17724) {
      macroValidSharedObject (objectArray_17724, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, objectArray_17724->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (objectArray_17724->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the %macCodeSign attribute should not be empty"), fixItArray2  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 328)) ;
        var_macCodeSign_17710.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_1) {
      var_macCodeSign_17710 = objectArray_17724->mProperty_mFeatureValue ;
    }
  }else{
    var_macCodeSign_17710 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 333)) ;
  }
  GALGAS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18093 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18120 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("MacOSDeployment")) ;
  if (NULL != objectArray_18120) {
      macroValidSharedObject (objectArray_18120, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, objectArray_18120->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (objectArray_18120->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the %MacOSDeployment attribute should not be empty"), fixItArray4  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 339)) ;
        var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18093.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18093 = objectArray_18120->mProperty_mFeatureValue.readProperty_string () ;
    }
  }else{
    var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18093 = GALGAS_string ("10.13").getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 344)).readProperty_string () ;
  }
  GALGAS_string var_libpmPath_18536 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18548 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("libpmAtPath")) ;
  if (NULL != objectArray_18548) {
      macroValidSharedObject (objectArray_18548, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsEqual, objectArray_18548->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (objectArray_18548->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the libpm path should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 350)) ;
        var_libpmPath_18536.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      var_libpmPath_18536 = objectArray_18548->mProperty_mFeatureValue.readProperty_string () ;
    }
  }else{
    {
    routine_updateLIBPMatPath (constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 355)) ;
    }
    var_libpmPath_18536 = GALGAS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 356)).add_operation (GALGAS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 356)) ;
  }
  GALGAS_stringset var_availableGenerationFeatures_19057 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 360)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 361)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 362)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 363)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 364)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("codeblocks-mac")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 365)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 366)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 367)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 368)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 369)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 370)) ;
  var_availableGenerationFeatures_19057.addAssign_operation (GALGAS_string ("MacOS")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 371)) ;
  GALGAS_stringset var_generationFeatures_19717 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 372)) ;
  GALGAS_string var_SDK_19793 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_19809 (constinArgument_inTargetFeatureList, kENUMERATION_UP) ;
  while (enumerator_19809.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_availableGenerationFeatures_19057.getter_hasKey (enumerator_19809.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 376)).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_generationFeatures_19717.getter_hasKey (enumerator_19809.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 377)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_19809.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicate '").add_operation (enumerator_19809.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 378)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 378)), fixItArray9  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 378)) ;
          }
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsEqual, enumerator_19809.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("MacOS"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsNotEqual, var_SDK_19793.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_19809.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated setting"), fixItArray12  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 383)) ;
              }
            }
            var_SDK_19793 = GALGAS_string ("macosx") ;
          }
        }
        if (kBoolFalse == test_10) {
          var_generationFeatures_19717.addAssign_operation (enumerator_19809.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 387)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      GALGAS_stringlist var_s_20283 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 390)) ;
      cEnumerator_stringset enumerator_20301 (var_availableGenerationFeatures_19057, kENUMERATION_UP) ;
      while (enumerator_20301.hasCurrentObject ()) {
        var_s_20283.addAssign_operation (GALGAS_string ("%").add_operation (enumerator_20301.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 392))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 392)) ;
        enumerator_20301.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray13 ;
      appendFixItActions (fixItArray13, kFixItReplace, var_s_20283) ;
      inCompiler->emitSemanticError (enumerator_19809.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown '").add_operation (enumerator_19809.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 394)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 394)), fixItArray13  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 394)) ;
    }
    enumerator_19809.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, var_macCodeSign_17710.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
    if (kBoolTrue == test_15.boolEnum ()) {
      test_15 = GALGAS_bool (kIsEqual, var_SDK_19793.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_14 = test_15.boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (var_macCodeSign_17710.readProperty_location (), GALGAS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%MacOS\""), fixItArray16  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 399)) ;
    }
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (kIsNotEqual, var_SDK_19793.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_17) {
      test_17 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GALGAS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 407)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 407)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 408)), GALGAS_string ("For a Cocoa project, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray18  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 408)) ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 411)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      routine_generateGalgas_33_MakefileMacOSXTarget (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 412)) ;
      }
    }
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 414)).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      routine_generateGalgas_33_MakefileUnixTarget (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 415)) ;
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 417)).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 418)) ;
      }
    }
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 420)).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 421)) ;
      }
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 423)).boolEnum () ;
    if (kBoolTrue == test_23) {
      {
      routine_generateGalgas_33_MinGWOnMacOSXTarget (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 424)) ;
      }
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 426)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18536, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 427)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("codeblocks-mac") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 438)).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_generateGalgasCodeBlocksMacTarget (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18536, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 439)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_26) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18536, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 451)) ;
      }
    }
  }
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = var_generationFeatures_19717.getter_hasKey (GALGAS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 462)).boolEnum () ;
    if (kBoolTrue == test_27) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target (var_projectDirectory_16999, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18536, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 463)) ;
      }
    }
  }
  GALGAS_stringlist var_linkOptionForLinkingFrameworkWithTool_23524 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 475)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    test_28 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 476)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_28) {
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        test_29 = GALGAS_bool (kIsNotEqual, var_SDK_19793.objectCompare (GALGAS_string ("macosx"))).boolEnum () ;
        if (kBoolTrue == test_29) {
          var_linkOptionForLinkingFrameworkWithTool_23524.addAssign_operation (GALGAS_string ("-isysroot")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 478)) ;
          var_linkOptionForLinkingFrameworkWithTool_23524.addAssign_operation (GALGAS_string ("/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/").add_operation (var_SDK_19793, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 479)).add_operation (GALGAS_string (".sdk"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 479))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 479)) ;
        }
      }
      cEnumerator_stringlist enumerator_23868 (constinArgument_inFrameworkToolFileList, kENUMERATION_UP) ;
      while (enumerator_23868.hasCurrentObject ()) {
        var_linkOptionForLinkingFrameworkWithTool_23524.addAssign_operation (GALGAS_string ("-framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 482)) ;
        var_linkOptionForLinkingFrameworkWithTool_23524.addAssign_operation (enumerator_23868.current_mValue (HERE).getter_stringByDeletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 483))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 483)) ;
        enumerator_23868.gotoNextObject () ;
      }
    }
  }
  GALGAS_stringlist var_handCodedSourceToolFileList_24103 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 487)) ;
  cEnumerator_stringlist enumerator_24143 (constinArgument_inHandCodedSourceToolFileList, kENUMERATION_UP) ;
  while (enumerator_24143.hasCurrentObject ()) {
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = GALGAS_bool (kIsNotEqual, enumerator_24143.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 489)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
      if (kBoolTrue == test_30) {
        var_handCodedSourceToolFileList_24103.addAssign_operation (enumerator_24143.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 490))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 490)) ;
      }
    }
    enumerator_24143.gotoNextObject () ;
  }
  GALGAS_string var_jsonFileListContents_24299 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, constinArgument_inHandCodedSourceDirectorySet, var_handCodedSourceToolFileList_24103, var_toolCppFileList_17433, var_linkOptionForLinkingFrameworkWithTool_23524.add_operation (constinArgument_inHandCodedLinkToolFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 497)), var_libpmPath_18536, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 493))) ;
  GALGAS_string var_jsonFileListPath_24598 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 501)) ;
  GALGAS_bool joker_24744 ; // Joker input parameter
  var_jsonFileListContents_24299.method_writeToFileWhenDifferentContents (var_jsonFileListPath_24598, joker_24744, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 502)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 503)) ;
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = GALGAS_bool (kIsNotEqual, var_SDK_19793.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_31) {
      GALGAS_string var_dir_24864 = var_projectDirectory_16999.add_operation (GALGAS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 506)) ;
      var_dir_24864.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 507)) ;
      GALGAS_string var_applicationBundleBase_24964 ;
      const cMapElement_projectQualifiedFeatureMap * objectArray_24990 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("applicationBundleBase")) ;
      if (NULL != objectArray_24990) {
          macroValidSharedObject (objectArray_24990, cMapElement_projectQualifiedFeatureMap) ;
        var_applicationBundleBase_24964 = objectArray_24990->mProperty_mFeatureValue.readProperty_string () ;
      }else{
        var_applicationBundleBase_24964 = GALGAS_string ("fr.irccyn") ;
      }
      GALGAS_string var_InfoPlistContents_25173 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_24964, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18093 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 515))) ;
      GALGAS_bool joker_25483 ; // Joker input parameter
      var_InfoPlistContents_25173.method_writeToFileWhenDifferentContents (var_dir_24864.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 522)), joker_25483, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 522)) ;
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = var_dir_24864.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 524)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 524)).boolEnum () ;
        if (kBoolTrue == test_32) {
          GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 525))).method_writeToExecutableFile (var_dir_24864.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 525)) ;
        }
      }
      var_dir_24864.add_operation (GALGAS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528)) ;
      GALGAS_string var_InfoPlist_5F_strings_5F_path_25740 = var_dir_24864.add_operation (GALGAS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 529)) ;
      GALGAS_bool joker_25956 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 530))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_25740, joker_25956, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 530)) ;
      GALGAS_string var_Credits_5F_rtf_5F_path_25968 = var_dir_24864.add_operation (GALGAS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 531)) ;
      enumGalgasBool test_33 = kBoolTrue ;
      if (kBoolTrue == test_33) {
        test_33 = var_Credits_5F_rtf_5F_path_25968.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 532)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 532)).boolEnum () ;
        if (kBoolTrue == test_33) {
          GALGAS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_25968, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 533)) ;
        }
      }
      GALGAS_string var_userResourceDir_26270 = var_projectDirectory_16999.add_operation (GALGAS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 536)) ;
      var_userResourceDir_26270.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 537)) ;
      GALGAS_stringlist temp_34 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 538)) ;
      temp_34.addAssign_operation (GALGAS_string ("icns")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 538)) ;
      GALGAS_stringlist var_extensionList_26394 = temp_34 ;
      GALGAS_stringlist var_resourceFiles_26428 = var_userResourceDir_26270.getter_regularFilesWithExtensions (GALGAS_bool (false), var_extensionList_26394 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 539)) ;
      GALGAS_string var_newIntermediateFilePath_26539 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 541)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 542)) ;
      GALGAS_XcodeProjectDescriptor var_xcodeProject_26793 = GALGAS_XcodeProjectDescriptor::constructor_default (SOURCE_FILE ("galgasTargetGeneration.galgas", 544)) ;
      var_xcodeProject_26793.setter_setMApplicationBundleName (var_applicationBundleBase_24964 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 545)) ;
      var_xcodeProject_26793.setter_setMProjectName (constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)) ;
      GALGAS_string var_headerSearchPaths_26957 = GALGAS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)).add_operation (GALGAS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 548)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 548)).add_operation (GALGAS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 548)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 549)).add_operation (GALGAS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)) ;
      cEnumerator_stringset enumerator_27177 (constinArgument_inHandCodedSourceDirectorySet, kENUMERATION_UP) ;
      while (enumerator_27177.hasCurrentObject ()) {
        var_headerSearchPaths_26957.plusAssign_operation(GALGAS_string (", \"").add_operation (enumerator_27177.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 552)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 552)) ;
        enumerator_27177.gotoNextObject () ;
      }
      var_headerSearchPaths_26957.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 554)) ;
      GALGAS_stringlist temp_35 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 608)) ;
      temp_35.addAssign_operation (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 557)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++14\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 559)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 560)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 561)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_COMMA = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 562)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 563)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_EMPTY_BODY = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 564)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_INFINITE_RECURSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 565)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 566)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 567)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 568)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 570)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 571)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_UNREACHABLE_CODE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 572)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 573)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 574)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_NO_COMMON_BLOCKS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 575)) ;
      temp_35.addAssign_operation (GALGAS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 576)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 577)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 578)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 579)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 580)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 581)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 582)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 583)) ;
      temp_35.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 584)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 585)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 586)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 587)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 588)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 589)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 590)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 591)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 592)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 594)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 595)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_SHADOW = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 596)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 597)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 598)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 599)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 600)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 601)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 602)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 603)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)) ;
      temp_35.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      temp_35.addAssign_operation (var_headerSearchPaths_26957  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 606)) ;
      temp_35.addAssign_operation (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_19793, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 607))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 607)) ;
      temp_35.addAssign_operation (GALGAS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 608)) ;
      GALGAS_stringlist var_xcodeSettingList_27358 = temp_35 ;
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = GALGAS_bool (kIsEqual, var_SDK_19793.objectCompare (GALGAS_string ("macosx10.6"))).boolEnum () ;
        if (kBoolTrue == test_36) {
          var_xcodeSettingList_27358.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 611)) ;
          var_xcodeSettingList_27358.addAssign_operation (GALGAS_string ("GCC_ENABLE_OBJC_GC = required")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 612)) ;
        }
      }
      if (kBoolFalse == test_36) {
        var_xcodeSettingList_27358.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614)) ;
      }
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = GALGAS_bool (kIsNotEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18093.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_37) {
          var_xcodeSettingList_27358.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_18093, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 617)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 617))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 617)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_26793, var_xcodeSettingList_27358, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 619)) ;
      }
      GALGAS_stringlist var_m_5F_HandCodedSourceFileRefForAppList_30254 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 621)) ;
      GALGAS_stringlist var_m_5F_HandCodedResourceFileRefForAppList_30314 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 622)) ;
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 623)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_stringlist joker_30608 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 628)) ;
          GALGAS_stringlist joker_30630 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 629)) ;
          GALGAS_stringlist joker_30709 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 631)) ;
          GALGAS_stringlist joker_30732 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 632)) ;
          GALGAS_string var_groupRef_30848 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Hand Coded Sources (App)"), GALGAS_string ("../"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedSourceAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 627)), joker_30608, joker_30630, var_m_5F_HandCodedSourceFileRefForAppList_30254, joker_30709, joker_30732, var_m_5F_HandCodedResourceFileRefForAppList_30314, var_groupRef_30848, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 624)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_groupRef_30848, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 636)) ;
          }
        }
      }
      GALGAS_stringlist var_appFrameworksFileRefList_30995 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 639)) ;
      enumGalgasBool test_39 = kBoolTrue ;
      if (kBoolTrue == test_39) {
        test_39 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 640)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_39) {
          GALGAS_stringlist joker_31281 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 645)) ;
          GALGAS_stringlist joker_31303 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 646)) ;
          GALGAS_stringlist joker_31327 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 647)) ;
          GALGAS_stringlist joker_31349 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 648)) ;
          GALGAS_stringlist joker_31426 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 650)) ;
          GALGAS_string var_frameworkGroupRef_31478 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Frameworks (App)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 644)), joker_31281, joker_31303, joker_31327, joker_31349, var_appFrameworksFileRefList_30995, joker_31426, var_frameworkGroupRef_31478, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 641)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_frameworkGroupRef_31478, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 653)) ;
          }
        }
      }
      GALGAS_stringlist var_buildCFileRefListForTool_31626 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 656)) ;
      GALGAS_stringlist var_buildCppFileRefListForTool_31676 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 657)) ;
      GALGAS_stringlist var_m_5F_FileRefList_31728 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 658)) ;
      GALGAS_stringlist var_mm_5F_FileRefList_31767 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 659)) ;
      GALGAS_stringlist var_frameworksFileRefList_31807 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 660)) ;
      GALGAS_stringlist var_resourceFileBuildRefs_31854 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 661)) ;
      enumGalgasBool test_40 = kBoolTrue ;
      if (kBoolTrue == test_40) {
        test_40 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 663)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_40) {
          GALGAS_string var_groupRef_32466 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Hand Coded Sources (Tool)"), GALGAS_string ("../"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 667)), var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_32466, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 664)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_groupRef_32466, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 676)) ;
          }
        }
      }
      GALGAS_stringlist var_toolFrameworksFileRefList_32614 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 679)) ;
      enumGalgasBool test_41 = kBoolTrue ;
      if (kBoolTrue == test_41) {
        test_41 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 680)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_41) {
          GALGAS_stringlist joker_32903 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 685)) ;
          GALGAS_stringlist joker_32925 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 686)) ;
          GALGAS_stringlist joker_32949 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 687)) ;
          GALGAS_stringlist joker_32971 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 688)) ;
          GALGAS_stringlist joker_33048 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 690)) ;
          GALGAS_string var_frameworkGroupRef_33099 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Frameworks (Tool)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 684)), joker_32903, joker_32925, joker_32949, joker_32971, var_toolFrameworksFileRefList_32614, joker_33048, var_frameworkGroupRef_33099, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 681)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_frameworkGroupRef_33099, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 693)) ;
          }
        }
      }
      GALGAS_string var_groupRef_33772 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Generated by GALGAS"), GALGAS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 698)).add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 698)), GALGAS_stringset::constructor_setWithStringList (constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 699)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 699))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 699)), var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 696)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 708)) ;
      }
      GALGAS_stringlist var_libpmReferenceGroupList_33869 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 709)) ;
      {
      GALGAS_stringset temp_42 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 726)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_RelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 715)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_RelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 716)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_Relation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 717)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_Relation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 718)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_RelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 719)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_RelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 720)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_BDD-and-operation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 721)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_BDD-find-or-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 722)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_BDD-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 723)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_BDD-single-operand-ops.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 724)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_BDD.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 725)) ;
      temp_42.addAssign_operation (GALGAS_string ("C_BDD.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 726)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Binary Decision Diagrams"), GALGAS_string ("bdd"), temp_42, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 711)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 736)) ;
      {
      GALGAS_stringset temp_43 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 741)) ;
      temp_43.addAssign_operation (GALGAS_string ("TC_prime_cache2.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 741)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Cache"), GALGAS_string ("cache"), temp_43, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 738)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 750)) ;
      {
      GALGAS_stringset temp_44 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 760)) ;
      temp_44.addAssign_operation (GALGAS_string ("main.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 756)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 757)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 758)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 759)) ;
      temp_44.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 760)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Cocoa Utilities"), GALGAS_string ("cocoa_utilities"), temp_44, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 752)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 770)) ;
      {
      GALGAS_stringset temp_45 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 826)) ;
      temp_45.addAssign_operation (GALGAS_string ("Base.lproj/OC_GGS_Document.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 776)) ;
      temp_45.addAssign_operation (GALGAS_string ("Base.lproj/PMDebug.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 777)) ;
      temp_45.addAssign_operation (GALGAS_string ("Base.lproj/MainMenu.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 778)) ;
      temp_45.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 779)) ;
      temp_45.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 780)) ;
      temp_45.addAssign_operation (GALGAS_string ("F_CocoaWrapperForGalgas.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 781)) ;
      temp_45.addAssign_operation (GALGAS_string ("I_Stop.tiff")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 782)) ;
      temp_45.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 783)) ;
      temp_45.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 784)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 785)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 786)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 787)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 788)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_ColorTransformer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 789)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_ColorTransformer.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 790)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 791)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 792)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_Document.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 793)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_Document.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 794)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 795)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 796)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 797)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 798)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 799)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 800)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 801)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 802)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 803)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 804)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 805)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 806)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_TextView.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 807)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_GGS_TextView.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 808)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 809)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_Lexique.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 810)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_Token.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 811)) ;
      temp_45.addAssign_operation (GALGAS_string ("OC_Token.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 812)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMDebug.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 813)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMDebug.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 814)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMFontButton.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 815)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMFontButton.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 816)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 817)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMIssueDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 818)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMIssueInRuler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 819)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMIssueInRuler.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 820)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 821)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 822)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMTableViewHandlesContextualMenu.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 823)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMTableViewHandlesContextualMenu.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 824)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMUndoManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 825)) ;
      temp_45.addAssign_operation (GALGAS_string ("PMUndoManager.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 826)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Cocoa Objc GALGAS"), GALGAS_string ("cocoa_objc_galgas"), temp_45, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 772)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 836)) ;
      {
      GALGAS_stringset temp_46 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 848)) ;
      temp_46.addAssign_operation (GALGAS_string ("TC_LinkedList.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 842)) ;
      temp_46.addAssign_operation (GALGAS_string ("TC_FIFO.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 843)) ;
      temp_46.addAssign_operation (GALGAS_string ("TC_UniqueSparseArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 844)) ;
      temp_46.addAssign_operation (GALGAS_string ("TC_Array.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 845)) ;
      temp_46.addAssign_operation (GALGAS_string ("TC_Array2.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 846)) ;
      temp_46.addAssign_operation (GALGAS_string ("TC_UniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 847)) ;
      temp_46.addAssign_operation (GALGAS_string ("TC_UniqueArray2.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 848)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Collections"), GALGAS_string ("collections"), temp_46, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 838)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 858)) ;
      {
      GALGAS_stringset temp_47 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 879)) ;
      temp_47.addAssign_operation (GALGAS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 864)) ;
      temp_47.addAssign_operation (GALGAS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 865)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 866)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 867)) ;
      temp_47.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 868)) ;
      temp_47.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 869)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_CommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 870)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 871)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 872)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 873)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 874)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 875)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 876)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 877)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 878)) ;
      temp_47.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 879)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Command line Interface"), GALGAS_string ("command_line_interface"), temp_47, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 860)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 889)) ;
      {
      GALGAS_stringset temp_48 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 906)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 895)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 896)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_FileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 897)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_FileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 898)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_FileHandleForWriting.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 899)) ;
      temp_48.addAssign_operation (GALGAS_string ("AC_FileHandleForWriting.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 900)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 901)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 902)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 903)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 904)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_HTML_FileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 905)) ;
      temp_48.addAssign_operation (GALGAS_string ("C_HTML_FileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 906)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("File"), GALGAS_string ("files"), temp_48, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 891)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 916)) ;
      {
      GALGAS_stringset temp_49 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1017)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 922)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 923)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_value_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 924)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_value_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 925)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 926)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 927)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 928)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 929)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_list.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 930)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_list.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 931)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_map.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 932)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_map.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 933)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 934)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 935)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 936)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 937)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 938)) ;
      temp_49.addAssign_operation (GALGAS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 939)) ;
      temp_49.addAssign_operation (GALGAS_string ("acPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 940)) ;
      temp_49.addAssign_operation (GALGAS_string ("acPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 941)) ;
      temp_49.addAssign_operation (GALGAS_string ("acStrongPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 942)) ;
      temp_49.addAssign_operation (GALGAS_string ("acStrongPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 943)) ;
      temp_49.addAssign_operation (GALGAS_string ("cPtr_weakReference_proxy.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 944)) ;
      temp_49.addAssign_operation (GALGAS_string ("cPtr_weakReference_proxy.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 945)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 946)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 947)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 948)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 949)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 950)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 951)) ;
      GALGAS_string temp_50 ;
      const enumGalgasBool test_51 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_51) {
        temp_50 = GALGAS_string ("C_galgas_verbose_option.cpp") ;
      }else if (kBoolFalse == test_51) {
        temp_50 = GALGAS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_49.addAssign_operation (temp_50  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 952)) ;
      GALGAS_string temp_52 ;
      const enumGalgasBool test_53 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_53) {
        temp_52 = GALGAS_string ("C_galgas_verbose_option.h") ;
      }else if (kBoolFalse == test_53) {
        temp_52 = GALGAS_string ("C_galgas_quiet_option.h") ;
      }
      temp_49.addAssign_operation (temp_52  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 953)) ;
      temp_49.addAssign_operation (GALGAS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 954)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 955)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 956)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_io.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 957)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_io.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 958)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 959)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 960)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 961)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 962)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 963)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 964)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 965)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 966)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 967)) ;
      temp_49.addAssign_operation (GALGAS_string ("C_SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 968)) ;
      temp_49.addAssign_operation (GALGAS_string ("capCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 969)) ;
      temp_49.addAssign_operation (GALGAS_string ("capCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 970)) ;
      temp_49.addAssign_operation (GALGAS_string ("capCollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 971)) ;
      temp_49.addAssign_operation (GALGAS_string ("capCollectionElementArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 972)) ;
      temp_49.addAssign_operation (GALGAS_string ("capSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 973)) ;
      temp_49.addAssign_operation (GALGAS_string ("capSortedListElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 974)) ;
      temp_49.addAssign_operation (GALGAS_string ("cCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 975)) ;
      temp_49.addAssign_operation (GALGAS_string ("cCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 976)) ;
      temp_49.addAssign_operation (GALGAS_string ("cEnumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 977)) ;
      temp_49.addAssign_operation (GALGAS_string ("cEnumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 978)) ;
      temp_49.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 979)) ;
      temp_49.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 980)) ;
      temp_49.addAssign_operation (GALGAS_string ("cIndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 981)) ;
      temp_49.addAssign_operation (GALGAS_string ("cIndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 982)) ;
      temp_49.addAssign_operation (GALGAS_string ("cIssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 983)) ;
      temp_49.addAssign_operation (GALGAS_string ("cIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 984)) ;
      temp_49.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 985)) ;
      temp_49.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 986)) ;
      temp_49.addAssign_operation (GALGAS_string ("cObjectArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 987)) ;
      temp_49.addAssign_operation (GALGAS_string ("cObjectArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 988)) ;
      temp_49.addAssign_operation (GALGAS_string ("cProductionNameDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 989)) ;
      temp_49.addAssign_operation (GALGAS_string ("cPtr_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 990)) ;
      temp_49.addAssign_operation (GALGAS_string ("cPtr_object.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 991)) ;
      temp_49.addAssign_operation (GALGAS_string ("cSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 992)) ;
      temp_49.addAssign_operation (GALGAS_string ("cSortedListElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 993)) ;
      temp_49.addAssign_operation (GALGAS_string ("cTemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 994)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 995)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 996)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 997)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 998)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 999)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1000)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_double.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1001)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1002)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_function.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1003)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1004)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1005)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_sint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1006)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_sint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1007)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1008)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1009)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1010)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_type.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1011)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_uint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1012)) ;
      temp_49.addAssign_operation (GALGAS_string ("GALGAS_uint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1013)) ;
      temp_49.addAssign_operation (GALGAS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1014)) ;
      temp_49.addAssign_operation (GALGAS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1015)) ;
      temp_49.addAssign_operation (GALGAS_string ("typeComparisonResult.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      temp_49.addAssign_operation (GALGAS_string ("typeComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1017)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Galgas 2"), GALGAS_string ("galgas2"), temp_49, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 918)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1027)) ;
      {
      GALGAS_stringset temp_54 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1157)) ;
      temp_54.addAssign_operation (GALGAS_string ("32-mp_bases.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1033)) ;
      temp_54.addAssign_operation (GALGAS_string ("32-mp_bases.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1034)) ;
      temp_54.addAssign_operation (GALGAS_string ("64-mp_bases.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1035)) ;
      temp_54.addAssign_operation (GALGAS_string ("64-mp_bases.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1036)) ;
      temp_54.addAssign_operation (GALGAS_string ("gmp-impl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1037)) ;
      temp_54.addAssign_operation (GALGAS_string ("gmp.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1038)) ;
      temp_54.addAssign_operation (GALGAS_string ("longlong.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1039)) ;
      temp_54.addAssign_operation (GALGAS_string ("mini-gmp.c.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1040)) ;
      temp_54.addAssign_operation (GALGAS_string ("mini-gmp.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1041)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-add.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1042)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-add_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1043)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-add_n.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1044)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-addmul_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1045)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-bdiv_dbm1c.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1046)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-cmp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1047)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-dcpi1_div_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1048)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-dive_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1049)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-divrem_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1050)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-divrem_2.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1051)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-get_str.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1052)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-invertappr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1053)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-lshift.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1054)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-lshiftc.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1055)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-mu_div_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1056)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1057)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-mul_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1058)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-mul_basecase.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1059)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-mul_fft.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1060)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-mul_n.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1061)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-mulmod_bnm1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1062)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-nussbaumer_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1063)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-pre_divrem_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1064)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-rshift.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1065)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-sbpi1_div_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1066)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-sbpi1_divappr_q.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1067)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-set_str.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1068)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1069)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-sqr_basecase.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1070)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-sqrmod_bnm1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1071)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-sub.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1072)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-sub_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1073)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-sub_n.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1074)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-submul_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1075)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-tdiv_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1076)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom22_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1077)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom2_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1078)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom32_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1079)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom33_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1080)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom3_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1081)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom42_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1082)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom43_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1083)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom44_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1084)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom4_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1085)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom53_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1086)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom63_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1087)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom6_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1088)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom6h_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1089)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom8_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1090)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom8h_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1091)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_couple_handling.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1092)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_eval_dgr3_pm1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1093)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_eval_dgr3_pm2.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1094)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1096)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2exp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1097)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2rexp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1098)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_12pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1099)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_16pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1100)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_5pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1101)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_6pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1102)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_7pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1103)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_8pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1104)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-abs.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1105)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-add.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1106)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-add_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1107)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-and.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1108)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-aors.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1109)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-aors_ui.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1110)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-cdiv_q_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1111)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-cdiv_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1112)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-cfdiv_q_2exp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1113)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-clear.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1114)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-clrbit.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1115)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-cmp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1116)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-cmp_si.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1117)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-cmp_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1118)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-com.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1119)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-combit.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1120)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-export.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1121)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-fdiv_q_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1122)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-fdiv_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1123)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-fits_s.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1124)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-fits_sint.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1125)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-fits_uint.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1126)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-get_si.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1127)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-get_str.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1128)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-get_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1129)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-init.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1130)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-ior.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1131)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1132)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-mul_2exp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1133)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-mul_i.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1134)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-mul_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1135)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-neg.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1136)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-realloc.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1137)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-set.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1138)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-set_str.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1139)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-set_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1140)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-setbit.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1141)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-sizeinbase.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1142)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-sub.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1143)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-sub_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1144)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-swap.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1145)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-tdiv_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1146)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-tstbit.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1147)) ;
      temp_54.addAssign_operation (GALGAS_string ("mpz-xor.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1148)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-assert.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1149)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-bootstrap.c.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1150)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-errno.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1151)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-memory.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1152)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-mp_bpl.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1153)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-mp_clz_tab.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1154)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-mp_dv_tab.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1155)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-mp_minv_tab.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1156)) ;
      temp_54.addAssign_operation (GALGAS_string ("root-tal-notreent.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1157)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("GMP"), GALGAS_string ("gmp"), temp_54, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1029)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1167)) ;
      {
      GALGAS_stringset temp_55 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1182)) ;
      temp_55.addAssign_operation (GALGAS_string ("C_ErrorOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)) ;
      temp_55.addAssign_operation (GALGAS_string ("C_ErrorOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1174)) ;
      temp_55.addAssign_operation (GALGAS_string ("AC_OutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1175)) ;
      temp_55.addAssign_operation (GALGAS_string ("AC_OutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1176)) ;
      temp_55.addAssign_operation (GALGAS_string ("C_ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1177)) ;
      temp_55.addAssign_operation (GALGAS_string ("C_ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1178)) ;
      temp_55.addAssign_operation (GALGAS_string ("C_ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1179)) ;
      temp_55.addAssign_operation (GALGAS_string ("C_ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)) ;
      temp_55.addAssign_operation (GALGAS_string ("C_TCPSocketOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1181)) ;
      temp_55.addAssign_operation (GALGAS_string ("C_TCPSocketOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1182)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Streams"), GALGAS_string ("streams"), temp_55, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1169)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1192)) ;
      {
      GALGAS_stringset temp_56 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1213)) ;
      temp_56.addAssign_operation (GALGAS_string ("C_HTMLString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1198)) ;
      temp_56.addAssign_operation (GALGAS_string ("C_HTMLString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1199)) ;
      temp_56.addAssign_operation (GALGAS_string ("C_String.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1200)) ;
      temp_56.addAssign_operation (GALGAS_string ("C_String.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1201)) ;
      temp_56.addAssign_operation (GALGAS_string ("cUnicodeData.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1202)) ;
      temp_56.addAssign_operation (GALGAS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1203)) ;
      temp_56.addAssign_operation (GALGAS_string ("unicode_character_base.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1204)) ;
      temp_56.addAssign_operation (GALGAS_string ("unicode_character_cpp.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1205)) ;
      temp_56.addAssign_operation (GALGAS_string ("unicode_character_cpp.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1206)) ;
      temp_56.addAssign_operation (GALGAS_string ("unicode_character_implementation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1207)) ;
      temp_56.addAssign_operation (GALGAS_string ("unicode_character_m.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1208)) ;
      temp_56.addAssign_operation (GALGAS_string ("unicode_character_m.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1209)) ;
      temp_56.addAssign_operation (GALGAS_string ("unicode_string_routines.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1210)) ;
      temp_56.addAssign_operation (GALGAS_string ("unicode_string_routines.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1211)) ;
      temp_56.addAssign_operation (GALGAS_string ("print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1212)) ;
      temp_56.addAssign_operation (GALGAS_string ("print.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1213)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Strings"), GALGAS_string ("strings"), temp_56, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1194)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1223)) ;
      {
      GALGAS_stringset temp_57 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1232)) ;
      temp_57.addAssign_operation (GALGAS_string ("C_DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1229)) ;
      temp_57.addAssign_operation (GALGAS_string ("C_DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1230)) ;
      temp_57.addAssign_operation (GALGAS_string ("C_Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)) ;
      temp_57.addAssign_operation (GALGAS_string ("C_Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1232)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Time"), GALGAS_string ("time"), temp_57, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1225)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1242)) ;
      {
      GALGAS_stringset temp_58 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1281)) ;
      temp_58.addAssign_operation (GALGAS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1248)) ;
      temp_58.addAssign_operation (GALGAS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1249)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_BigInt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1250)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_BigInt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1251)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_CRC32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1252)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_CRC32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1253)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1254)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1255)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1256)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1257)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1258)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1259)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1260)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1261)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_UIntSet.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1262)) ;
      temp_58.addAssign_operation (GALGAS_string ("C_UIntSet.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1263)) ;
      temp_58.addAssign_operation (GALGAS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1264)) ;
      temp_58.addAssign_operation (GALGAS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1265)) ;
      temp_58.addAssign_operation (GALGAS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1266)) ;
      temp_58.addAssign_operation (GALGAS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1267)) ;
      temp_58.addAssign_operation (GALGAS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1268)) ;
      temp_58.addAssign_operation (GALGAS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1269)) ;
      temp_58.addAssign_operation (GALGAS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1270)) ;
      temp_58.addAssign_operation (GALGAS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1271)) ;
      temp_58.addAssign_operation (GALGAS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1272)) ;
      temp_58.addAssign_operation (GALGAS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1273)) ;
      temp_58.addAssign_operation (GALGAS_string ("MF_Assert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1274)) ;
      temp_58.addAssign_operation (GALGAS_string ("MF_Assert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)) ;
      temp_58.addAssign_operation (GALGAS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1276)) ;
      temp_58.addAssign_operation (GALGAS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1277)) ;
      temp_58.addAssign_operation (GALGAS_string ("PMUInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1278)) ;
      temp_58.addAssign_operation (GALGAS_string ("PMUInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1279)) ;
      temp_58.addAssign_operation (GALGAS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1280)) ;
      temp_58.addAssign_operation (GALGAS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1281)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Utilities"), GALGAS_string ("utilities"), temp_58, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_groupRef_33772, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1244)) ;
      }
      var_libpmReferenceGroupList_33869.addAssign_operation (var_groupRef_33772  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1291)) ;
      GALGAS_string var_libpmGroupRef_52420 ;
      {
      extensionSetter_addGroup (var_xcodeProject_26793, GALGAS_string ("libpm"), GALGAS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)).add_operation (GALGAS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)), var_libpmReferenceGroupList_33869, var_libpmGroupRef_52420, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_libpmGroupRef_52420, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1294)) ;
      }
      GALGAS_string var_resourcesGroupRef_52947 ;
      {
      GALGAS_stringset temp_59 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1300)) ;
      temp_59.addAssign_operation (GALGAS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1300)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Resources"), GALGAS_string ("."), temp_59, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_resourcesGroupRef_52947, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1296)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_resourcesGroupRef_52947, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1310)) ;
      }
      GALGAS_string var_userResourcesGroupRef_53524 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("User Resources"), GALGAS_string ("userResources"), GALGAS_stringset::constructor_setWithStringList (var_resourceFiles_26428  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1315)), var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_userResourcesGroupRef_53524, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1312)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_userResourcesGroupRef_53524, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1324)) ;
      }
      GALGAS_string var_frameworkGroupRef_54149 ;
      {
      GALGAS_stringset temp_60 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1331)) ;
      temp_60.addAssign_operation (GALGAS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1330)) ;
      temp_60.addAssign_operation (GALGAS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1331)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_26793, GALGAS_string ("Frameworks for App"), GALGAS_string ("/System/Library/Frameworks"), temp_60, var_buildCFileRefListForTool_31626, var_buildCppFileRefListForTool_31676, var_m_5F_FileRefList_31728, var_mm_5F_FileRefList_31767, var_frameworksFileRefList_31807, var_resourceFileBuildRefs_31854, var_frameworkGroupRef_54149, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1326)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_26793, var_frameworkGroupRef_54149, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1341)) ;
      }
      GALGAS_stringlist var_codeSigningSettingList_54293 ;
      enumGalgasBool test_61 = kBoolTrue ;
      if (kBoolTrue == test_61) {
        test_61 = GALGAS_bool (kIsEqual, var_macCodeSign_17710.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_61) {
          GALGAS_stringlist temp_62 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1345)) ;
          temp_62.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"-\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1345)) ;
          var_codeSigningSettingList_54293 = temp_62 ;
        }
      }
      if (kBoolFalse == test_61) {
        GALGAS_stringlist var_components_54435 = var_macCodeSign_17710.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1347)) ;
        enumGalgasBool test_63 = kBoolTrue ;
        if (kBoolTrue == test_63) {
          test_63 = GALGAS_bool (kIsNotEqual, var_components_54435.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1348)).objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
          if (kBoolTrue == test_63) {
            TC_Array <C_FixItDescription> fixItArray64 ;
            inCompiler->emitSemanticError (var_macCodeSign_17710.readProperty_location (), GALGAS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray64  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1349)) ;
            var_codeSigningSettingList_54293.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_63) {
          enumGalgasBool test_65 = kBoolTrue ;
          if (kBoolTrue == test_65) {
            test_65 = GALGAS_bool (kIsEqual, var_components_54435.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1350)).objectCompare (GALGAS_string ("MacDeveloper"))).boolEnum () ;
            if (kBoolTrue == test_65) {
              GALGAS_stringlist temp_66 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1353)) ;
              temp_66.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1352)) ;
              temp_66.addAssign_operation (GALGAS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_54435.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1353)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1353)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1353))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1353)) ;
              var_codeSigningSettingList_54293 = temp_66 ;
            }
          }
          if (kBoolFalse == test_65) {
            enumGalgasBool test_67 = kBoolTrue ;
            if (kBoolTrue == test_67) {
              test_67 = GALGAS_bool (kIsEqual, var_components_54435.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1355)).objectCompare (GALGAS_string ("Certificate"))).boolEnum () ;
              if (kBoolTrue == test_67) {
                GALGAS_stringlist temp_68 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1356)) ;
                temp_68.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_54435.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1356)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1356)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1356))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1356)) ;
                var_codeSigningSettingList_54293 = temp_68 ;
              }
            }
            if (kBoolFalse == test_67) {
              TC_Array <C_FixItDescription> fixItArray69 ;
              inCompiler->emitSemanticError (var_macCodeSign_17710.readProperty_location (), GALGAS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray69  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1358)) ;
              var_codeSigningSettingList_54293.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GALGAS_stringlist temp_70 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1366)) ;
      temp_70.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 2")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1363)) ;
      temp_70.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1364)) ;
      temp_70.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1365)) ;
      temp_70.addAssign_operation (GALGAS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_24964, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1366)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1366)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1366)).add_operation (GALGAS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1366))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1366)) ;
      GALGAS_stringlist var_settingList_55305 = temp_70.add_operation (var_codeSigningSettingList_54293, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1367)) ;
      enumGalgasBool test_71 = kBoolTrue ;
      if (kBoolTrue == test_71) {
        test_71 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1368)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_71) {
          GALGAS_string var_s_55659 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_55692 (constinArgument_inHandCodedLinkToolFileList, kENUMERATION_UP) ;
          while (enumerator_55692.hasCurrentObject ()) {
            var_s_55659.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_55692.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1371)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1371)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1371)) ;
            if (enumerator_55692.hasNextObject ()) {
              var_s_55659.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1372)) ;
            }
            enumerator_55692.gotoNextObject () ;
          }
          var_s_55659.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1374)) ;
          var_settingList_55305.addAssign_operation (var_s_55659  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1375)) ;
        }
      }
      GALGAS_string var_releaseTargetRef_56169 ;
      GALGAS_string var_releaseProductFileRef_56212 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_26793, constinArgument_inTargetName.add_operation (GALGAS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1378)), constinArgument_inTargetName, var_buildCFileRefListForTool_31626.add_operation (var_buildCppFileRefListForTool_31676, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1380)).add_operation (var_mm_5F_FileRefList_31767, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1380)), var_toolFrameworksFileRefList_32614, var_settingList_55305, var_releaseTargetRef_56169, var_releaseProductFileRef_56212, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1377)) ;
      }
      GALGAS_stringlist temp_72 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1392)) ;
      temp_72.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1388)) ;
      temp_72.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1389)) ;
      temp_72.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1390)) ;
      temp_72.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1391)) ;
      temp_72.addAssign_operation (GALGAS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_24964, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1392)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1392)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1392)).add_operation (GALGAS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1392))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1392)) ;
      var_settingList_55305 = temp_72.add_operation (var_codeSigningSettingList_54293, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1393)) ;
      enumGalgasBool test_73 = kBoolTrue ;
      if (kBoolTrue == test_73) {
        test_73 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1394)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_73) {
          GALGAS_string var_s_56656 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_56689 (constinArgument_inHandCodedLinkToolFileList, kENUMERATION_UP) ;
          while (enumerator_56689.hasCurrentObject ()) {
            var_s_56656.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_56689.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1397)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1397)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1397)) ;
            if (enumerator_56689.hasNextObject ()) {
              var_s_56656.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1398)) ;
            }
            enumerator_56689.gotoNextObject () ;
          }
          var_s_56656.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1400)) ;
          var_settingList_55305.addAssign_operation (var_s_56656  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1401)) ;
        }
      }
      GALGAS_string var_debugTargetRef_57181 ;
      GALGAS_string var_debugProductFileRef_57222 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_26793, constinArgument_inTargetName.add_operation (GALGAS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1404)), constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1405)), var_buildCFileRefListForTool_31626.add_operation (var_buildCppFileRefListForTool_31676, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1406)).add_operation (var_mm_5F_FileRefList_31767, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1406)), var_toolFrameworksFileRefList_32614, var_settingList_55305, var_debugTargetRef_57181, var_debugProductFileRef_57222, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1403)) ;
      }
      GALGAS_stringlist temp_74 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1415)) ;
      temp_74.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1414)) ;
      temp_74.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1415)) ;
      GALGAS_stringlist var_cocoaConfigurationSettingList_57292 = temp_74.add_operation (var_codeSigningSettingList_54293, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1416)) ;
      {
      GALGAS_stringlist temp_75 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1424)) ;
      temp_75.addAssign_operation (var_releaseTargetRef_56169  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1424)) ;
      temp_75.addAssign_operation (var_debugTargetRef_57181  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1424)) ;
      GALGAS__32_stringlist temp_76 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1425)) ;
      temp_76.addAssign_operation (var_releaseProductFileRef_56212, constinArgument_inTargetName  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1425)) ;
      temp_76.addAssign_operation (var_debugProductFileRef_57222, constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1425))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1425)) ;
      GALGAS_string joker_58067 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_26793, GALGAS_string ("Cocoa ").add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1418)), GALGAS_string ("Cocoa").add_operation (constinArgument_inTargetName.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1419)), var_m_5F_FileRefList_31728.add_operation (var_m_5F_HandCodedSourceFileRefForAppList_30254, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1420)), var_frameworksFileRefList_31807.add_operation (var_appFrameworksFileRefList_30995, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1421)), var_resourceFileBuildRefs_31854.add_operation (var_m_5F_HandCodedResourceFileRefForAppList_30314, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1422)), var_cocoaConfigurationSettingList_57292, temp_75, temp_76, joker_58067, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1417)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_26793, var_dir_24864.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1430)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1430)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1430)), var_newIntermediateFilePath_26539, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1429)) ;
    }
  }
}


#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "galgas",
  "ggs",
  "galgasTemplate",
  "galgasProject",
  "ggsproject",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS 3 source file",
  "a GALGAS 4 source file",
  "a GALGAS Template source file",
  "a GALGAS project source file",
  "a GALGAS project source file",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "3.6.0" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_string var_creationProjectName_1134 = GALGAS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.readProperty_value ()) ;
    {
    routine_projectCreation (var_creationProjectName_1134, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 20)) ;
    }
  }
  {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 27)) ;
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
        routine_updateLIBPMatPath (GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 35)) ;
        }
      }
    }
  }
  {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_check_5F_gmp.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_checkGMP (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 45)) ;
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
        routine_displayUnicodeLexicalTestFunctions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 55)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_parentDirectory_2953 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 70)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 70)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 71)) ;
  temp_0.addAssign_operation (GALGAS_string ("galgasProject")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 71)) ;
  GALGAS_stringlist var_candidateProjectFiles_3069 = var_parentDirectory_2953.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 71)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles_3069.getter_count (SOURCE_FILE ("galgasProgram.galgas", 72)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 73)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles_3069.getter_count (SOURCE_FILE ("galgasProgram.galgas", 74)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3343 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_3413 (var_candidateProjectFiles_3069, kENUMERATION_UP) ;
        while (enumerator_3413.hasCurrentObject ()) {
          var_s_3343.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_3413.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 77)) ;
          enumerator_3413.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3343, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 79)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_3528 = var_parentDirectory_2953.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 81)).add_operation (var_candidateProjectFiles_3069.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 81)) ;
      {
      routine_parseAndAnalyzeProject (GALGAS_lstring::constructor_new (var_projectFilePath_3528, constinArgument_inSourceFile.readProperty_location ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 82)), GALGAS_bool (false), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 82)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_parentDirectory_4277 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 96)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 96)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 97)) ;
  temp_0.addAssign_operation (GALGAS_string ("ggsProject")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 97)) ;
  GALGAS_stringlist var_candidateProjectFiles_4393 = var_parentDirectory_4277.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 97)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles_4393.getter_count (SOURCE_FILE ("galgasProgram.galgas", 98)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 99)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles_4393.getter_count (SOURCE_FILE ("galgasProgram.galgas", 100)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_4664 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_4734 (var_candidateProjectFiles_4393, kENUMERATION_UP) ;
        while (enumerator_4734.hasCurrentObject ()) {
          var_s_4664.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_4734.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 103)) ;
          enumerator_4734.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_4664, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 105)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_4849 = var_parentDirectory_4277.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 107)).add_operation (var_candidateProjectFiles_4393.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 107)) ;
      {
      routine_parseAndAnalyzeProject (GALGAS_lstring::constructor_new (var_projectFilePath_4849, constinArgument_inSourceFile.readProperty_location ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 108)), GALGAS_bool (true), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 108)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST joker_5588 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5588  COMMA_SOURCE_FILE ("galgasProgram.galgas", 122)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_3'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__33_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject (constinArgument_inProjectSourceFile, GALGAS_bool (false), GALGAS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 135)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_4'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__34_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject (constinArgument_inProjectSourceFile, GALGAS_bool (true), GALGAS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 144)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
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
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
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
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
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

