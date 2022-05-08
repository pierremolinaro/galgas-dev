#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-31.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath (const GALGAS_string constinArgument_inLIBPMPath,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapper var_fw_1000 = GALGAS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  cEnumerator_stringlist enumerator_1069 (var_fw_1000.getter_allDirectoryPathes (SOURCE_FILE ("libpmHandling.galgas", 22)), kENUMERATION_UP) ;
  while (enumerator_1069.hasCurrentObject ()) {
    GALGAS_string var_actualDirectory_1132 = constinArgument_inLIBPMPath.add_operation (enumerator_1069.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 23)) ;
    var_actualDirectory_1132.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 24)) ;
    enumerator_1069.gotoNextObject () ;
  }
  GALGAS_stringset var_allNeededFileSet_1252 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("libpmHandling.galgas", 27)) ;
  cEnumerator_stringlist enumerator_1269 (var_fw_1000.getter_allTextFilePathes (SOURCE_FILE ("libpmHandling.galgas", 28)), kENUMERATION_UP) ;
  while (enumerator_1269.hasCurrentObject ()) {
    GALGAS_string var_contents_1316 = var_fw_1000.getter_textFileContentsAtPath (enumerator_1269.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 29)) ;
    GALGAS_string var_actualFilePath_1375 = constinArgument_inLIBPMPath.add_operation (enumerator_1269.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 30)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_actualFilePath_1375.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas", 31)).objectCompare (GALGAS_string ("py"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_bool joker_1524 ; // Joker input parameter
        var_contents_1316.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1375, joker_1524, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 32)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool joker_1602 ; // Joker input parameter
      var_contents_1316.method_writeToFileWhenDifferentContents (var_actualFilePath_1375, joker_1602, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 34)) ;
    }
    var_allNeededFileSet_1252.addAssign_operation (enumerator_1269.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 36)) ;
    enumerator_1269.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_1687 (var_fw_1000.getter_allBinaryFilePathes (SOURCE_FILE ("libpmHandling.galgas", 39)), kENUMERATION_UP) ;
  while (enumerator_1687.hasCurrentObject ()) {
    GALGAS_data var_contents_1736 = var_fw_1000.getter_binaryFileContentsAtPath (enumerator_1687.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 40)) ;
    GALGAS_string var_actualFilePath_1799 = constinArgument_inLIBPMPath.add_operation (enumerator_1687.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 41)) ;
    GALGAS_bool joker_1887 ; // Joker input parameter
    var_contents_1736.method_writeToFileWhenDifferentContents (var_actualFilePath_1799, joker_1887, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 42)) ;
    var_allNeededFileSet_1252.addAssign_operation (enumerator_1687.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 43)) ;
    enumerator_1687.gotoNextObject () ;
  }
  GALGAS_stringset var_allActualFileSet_1987 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("libpmHandling.galgas", 46)) ;
  cEnumerator_stringlist enumerator_2006 (constinArgument_inLIBPMPath.getter_regularFiles (GALGAS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas", 47)), kENUMERATION_UP) ;
  while (enumerator_2006.hasCurrentObject ()) {
    var_allActualFileSet_1987.addAssign_operation (GALGAS_string ("/").add_operation (enumerator_2006.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 48))  COMMA_SOURCE_FILE ("libpmHandling.galgas", 48)) ;
    enumerator_2006.gotoNextObject () ;
  }
  GALGAS_stringset var_uselessFileSet_2111 = var_allActualFileSet_1987.substract_operation (var_allNeededFileSet_1252, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 50)) ;
  cEnumerator_stringset enumerator_2160 (var_uselessFileSet_2111, kENUMERATION_UP) ;
  while (enumerator_2160.hasCurrentObject ()) {
    {
    GALGAS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2160.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)) ;
    }
    enumerator_2160.gotoNextObject () ;
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
                                                GALGAS_semanticDeclarationListForGeneration & outArgument_outSemanticDeclarationSortedListForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSemanticDeclarationSortedListForGeneration.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 25)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** Building semantic context\n")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 26)) ;
    }
  }
  GALGAS_semanticDeclarationListAST var_semanticDeclarationListWithPredefinedTypes_1620 = constinArgument_inSemanticDeclarationList ;
  {
  routine_appendPredefinedTypesASTs (var_semanticDeclarationListWithPredefinedTypes_1620, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 30)) ;
  }
  GALGAS_commandLineOptionListAST var_options_1828 = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 32)) ;
  cEnumerator__32_stringlist enumerator_1879 (GALGAS_application::constructor_boolOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 33)), kENUMERATION_UP) ;
  while (enumerator_1879.hasCurrentObject ()) {
    var_options_1828.addAssign_operation (GALGAS_string ("bool").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 35)), GALGAS_lstring::constructor_new (enumerator_1879.current (HERE).readProperty_mValue_31_ (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 36))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 36)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_boolOptionInvocationCharacter (enumerator_1879.current (HERE).readProperty_mValue_30_ (), enumerator_1879.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 37)), GALGAS_application::constructor_boolOptionInvocationString (enumerator_1879.current (HERE).readProperty_mValue_30_ (), enumerator_1879.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 38)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 38)), GALGAS_application::constructor_boolOptionCommentString (enumerator_1879.current (HERE).readProperty_mValue_30_ (), enumerator_1879.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 39)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 39)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 40)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 41))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 34)) ;
    enumerator_1879.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2320 (GALGAS_application::constructor_uintOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 43)), kENUMERATION_UP) ;
  while (enumerator_2320.hasCurrentObject ()) {
    var_options_1828.addAssign_operation (GALGAS_string ("uint").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 45)), GALGAS_lstring::constructor_new (enumerator_2320.current (HERE).readProperty_mValue_31_ (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 46)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_uintOptionInvocationCharacter (enumerator_2320.current (HERE).readProperty_mValue_30_ (), enumerator_2320.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 47)), GALGAS_application::constructor_uintOptionInvocationString (enumerator_2320.current (HERE).readProperty_mValue_30_ (), enumerator_2320.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 48)), GALGAS_application::constructor_uintOptionCommentString (enumerator_2320.current (HERE).readProperty_mValue_30_ (), enumerator_2320.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 49)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 49)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 50)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 51))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 44)) ;
    enumerator_2320.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2769 (GALGAS_application::constructor_stringOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 53)), kENUMERATION_UP) ;
  while (enumerator_2769.hasCurrentObject ()) {
    var_options_1828.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 55)), GALGAS_lstring::constructor_new (enumerator_2769.current (HERE).readProperty_mValue_31_ (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 56)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_stringOptionInvocationCharacter (enumerator_2769.current (HERE).readProperty_mValue_30_ (), enumerator_2769.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 57)), GALGAS_application::constructor_stringOptionInvocationString (enumerator_2769.current (HERE).readProperty_mValue_30_ (), enumerator_2769.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 58)), GALGAS_application::constructor_stringOptionCommentString (enumerator_2769.current (HERE).readProperty_mValue_30_ (), enumerator_2769.current (HERE).readProperty_mValue_31_ ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 59)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 59)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 60)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 61))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 54)) ;
    enumerator_2769.gotoNextObject () ;
  }
  var_semanticDeclarationListWithPredefinedTypes_1620.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 65)), var_options_1828  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 63))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 63)) ;
  GALGAS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3390 = function_optionNameForUsefulEntitiesGraph (GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 68)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3390  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 69)) ;
  GALGAS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_3765 ;
  {
  routine_buildGalgasSemanticContext (var_semanticDeclarationListWithPredefinedTypes_1620, constinArgument_inEndOfProjectSourceFile, outArgument_outSemanticContext, var_sortedSemanticDeclarationListAST_3765, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 71)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->printMessage (GALGAS_string ("*** Semantic analysis\n")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 79)) ;
    }
  }
  cEnumerator_lstringlist enumerator_3960 (outArgument_outSemanticContext.readProperty_mTypeMap ().getter_unsolvedEntryList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 82)), kENUMERATION_UP) ;
  while (enumerator_3960.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (enumerator_3960.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_3960.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 83)).add_operation (GALGAS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 83)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 83)) ;
    enumerator_3960.gotoNextObject () ;
  }
  outArgument_outSemanticDeclarationSortedListForGeneration = GALGAS_semanticDeclarationListForGeneration::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 86)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 87)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_predefinedTypes var_predefinedTypes_4194 = function_buildPredefinedTypes (outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 88)) ;
      cEnumerator_semanticDeclarationListAST enumerator_4295 (var_sortedSemanticDeclarationListAST_3765, kENUMERATION_UP) ;
      while (enumerator_4295.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((const cPtr_semanticDeclarationAST *) enumerator_4295.current (HERE).readProperty_mSemanticDeclaration ().ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, var_predefinedTypes_4194, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 90)) ;
        enumerator_4295.gotoNextObject () ;
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
                                         GALGAS_semanticDeclarationListAST & outArgument_outSortedSemanticDeclarationListAST,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList_5338 = constinArgument_inSemanticDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_5413 (constinArgument_inSemanticDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5413.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((const cPtr_semanticDeclarationAST *) enumerator_5413.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticDeclarationList_5338, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 117)) ;
    enumerator_5413.gotoNextObject () ;
  }
  GALGAS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_5756 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 123)) ;
  GALGAS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_5851 = GALGAS_extensionMethodMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 124)) ;
  GALGAS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_5937 = GALGAS_extensionGetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 125)) ;
  GALGAS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6023 = GALGAS_extensionSetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 126)) ;
  GALGAS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6094 = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 127)) ;
  cEnumerator_semanticDeclarationListAST enumerator_6144 (var_semanticDeclarationList_5338, kENUMERATION_UP) ;
  while (enumerator_6144.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((const cPtr_semanticDeclarationAST *) enumerator_6144.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_semanticTypePrecedenceGraph_5756, var_extensionMethodMapForBuildingContext_5851, var_extensionGetterMapForBuildingContext_5937, var_extensionSetterMapForBuildingContext_6023, var_extensionOverrideDefinitionList_6094, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 129)) ;
    enumerator_6144.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_6536 (var_semanticTypePrecedenceGraph_5756.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 138)), kENUMERATION_UP) ;
  while (enumerator_6536.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_6536.current (HERE).readProperty_mValue ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 139)).objectCompare (GALGAS_char (TO_UNICODE (63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->printMessage (GALGAS_string ("Optional '").add_operation (enumerator_6536.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 140)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 140))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 140)) ;
      }
    }
    enumerator_6536.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_semanticTypePrecedenceGraph_5756.getter_undefinedNodeCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 144)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_6790 (var_semanticTypePrecedenceGraph_5756.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 145)), kENUMERATION_UP) ;
      while (enumerator_6790.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6790.current (HERE).readProperty_mValue ().readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6790.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 146)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 146)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 146)) ;
        enumerator_6790.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GALGAS_string ("semantic analysis not performed, due to undefined type error(s)"), fixItArray3  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 148)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_7230 ;
    GALGAS_lstringlist joker_7155 ; // Joker input parameter
    GALGAS_lstringlist joker_7238 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_5756.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_7155, var_unsortedSemanticDeclarationListAST_7230, joker_7238, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 152)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_7230.getter_length (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 158)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_s_7317 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_7230.getter_length (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 159)) ;
        cEnumerator_semanticDeclarationListAST enumerator_7525 (var_unsortedSemanticDeclarationListAST_7230, kENUMERATION_UP) ;
        while (enumerator_7525.hasCurrentObject ()) {
          var_s_7317.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_7525.current (HERE).readProperty_mSemanticDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 161)) ;
          enumerator_7525.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_7317, fixItArray5  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 163)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssign_operation(var_extensionOverrideDefinitionList_6094, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 166)) ;
      outArgument_outSemanticContext = GALGAS_semanticContext::constructor_new (GALGAS_unifiedTypeMap::constructor_emptySharedMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 169)), GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 170)), GALGAS_functionMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 171)), GALGAS_filewrapperMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 172)), GALGAS_grammarMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 173)), GALGAS_optionComponentMapForSemanticAnalysis::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 174)), GALGAS_lexiqueComponentMapForSemanticAnalysis::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 175)), GALGAS_syntaxComponentMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 176))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 168)) ;
      cEnumerator_semanticDeclarationListAST enumerator_8290 (outArgument_outSortedSemanticDeclarationListAST, kENUMERATION_UP) ;
      while (enumerator_8290.hasCurrentObject ()) {
        callExtensionMethod_enterInSemanticContext ((const cPtr_semanticDeclarationAST *) enumerator_8290.current (HERE).readProperty_mSemanticDeclaration ().ptr (), var_extensionMethodMapForBuildingContext_5851, var_extensionGetterMapForBuildingContext_5937, var_extensionSetterMapForBuildingContext_6023, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 180)) ;
        enumerator_8290.gotoNextObject () ;
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
  cEnumerator_semanticDeclarationListForGeneration enumerator_9278 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9278.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((const cPtr_semanticDeclarationForGeneration *) enumerator_9278.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioCocoaProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 206)) ;
    enumerator_9278.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 213)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 214)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_generateOneBigHeader (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 215)) ;
          }
          {
          routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 221)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 228)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 228)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_generateOneBigHeader (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 229)) ;
            }
            {
            routine_generateFewImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 235)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 242)).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.readProperty_value ()) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 242)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_generateManyHeaders (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 243)) ;
              }
              {
              routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 249)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 256)).boolEnum () ;
              if (kBoolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 257)) ;
                }
              }
            }
            if (kBoolFalse == test_4) {
              {
              routine_generateManyHeaders (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 266)) ;
              }
              {
              routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 272)) ;
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
  GALGAS_stringlist var_headerInclusionList_31__12167 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 292)) ;
  GALGAS_stringlist var_headerInclusionList_32__12211 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 293)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_12282 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_12282.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 295)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 295)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset var_inclusionSet_31__12376 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 296)) ;
        GALGAS_string var_headerDef_31__12472 ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__12376, var_headerDef_31__12472, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 297)) ;
        GALGAS_string var_headerIncludes_31__12499 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_31__12376.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 299)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 300)).add_operation (GALGAS_string ("headers 1\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 300))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 300)) ;
          }
        }
        cEnumerator_stringset enumerator_12677 (var_inclusionSet_31__12376, kENUMERATION_UP) ;
        while (enumerator_12677.hasCurrentObject ()) {
          var_headerIncludes_31__12499.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_12677.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 303)) ;
          enumerator_12677.gotoNextObject () ;
        }
        var_headerIncludes_31__12499.plusAssign_operation(var_headerDef_31__12472, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 305)) ;
        GALGAS_stringset var_inclusionSet_32__12835 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 306)) ;
        GALGAS_string var_headerDef_32__12951 ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__12835, var_headerDef_32__12951, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 307)) ;
        GALGAS_string var_headerIncludes_32__12978 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_inclusionSet_32__12835.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 309)).boolEnum () ;
          if (kBoolTrue == test_2) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)).add_operation (GALGAS_string ("headers 2\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 310)) ;
          }
        }
        cEnumerator_stringset enumerator_13156 (var_inclusionSet_32__12835, kENUMERATION_UP) ;
        while (enumerator_13156.hasCurrentObject ()) {
          var_headerIncludes_32__12978.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13156.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 313)) ;
          enumerator_13156.gotoNextObject () ;
        }
        var_headerIncludes_32__12978.plusAssign_operation(var_headerDef_32__12951, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 315)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 317)).enumValue ()) {
        case GALGAS_headerKind::kNotBuilt:
          break ;
        case GALGAS_headerKind::kEnum_noHeader:
          {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsNotEqual, var_headerIncludes_31__12499.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 320)).readProperty_location (), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12282.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 321)), fixItArray4  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 320)) ;
              }
            }
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__12978.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)).readProperty_location (), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12282.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 325)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 325)), fixItArray6  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 324)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_oneHeader:
          {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, var_headerIncludes_31__12499.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 329)).readProperty_location (), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12282.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 330)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 330)), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 329)) ;
              }
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__12978.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 333)).readProperty_location (), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12282.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 334)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 334)), fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 333)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_twoHeaders:
          {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_headerIncludes_31__12499.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 338)).readProperty_location (), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12282.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 339)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 339)), fixItArray12  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 338)) ;
              }
            }
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, var_headerIncludes_32__12978.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <C_FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 342)).readProperty_location (), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12282.current (HERE).readProperty_mMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 343)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 343)), fixItArray14  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 342)) ;
              }
            }
          }
          break ;
        }
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 347)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 347)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            GALGAS_string var_headerString_14773 = GALGAS_string ("#pragma once\n") ;
            var_headerString_14773.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 349)) ;
            var_headerString_14773.plusAssign_operation(GALGAS_string ("#include \"all-predefined-types.h\"\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 350)) ;
            var_headerString_14773.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 351)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 351)) ;
            var_headerString_14773.plusAssign_operation(var_headerIncludes_31__12499, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 352)) ;
            var_headerString_14773.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 353)) ;
            var_headerString_14773.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 354)) ;
            GALGAS_string temp_16 ;
            const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 356)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              temp_16 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_17) {
              temp_16 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_15206 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 355)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 355)) ;
            var_headerInclusionList_31__12167.addAssign_operation (var_headerFileName_15206  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 357)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_15206.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 358)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_15206.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 359))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 359)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15206.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 362)), var_headerString_14773, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 360)) ;
            }
          }
        }
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 367)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_string var_headerString_15778 = GALGAS_string ("#ifndef ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 368)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 368)).add_operation (GALGAS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 368)) ;
            var_headerString_15778.plusAssign_operation(GALGAS_string ("#define ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)).add_operation (GALGAS_string ("_DEFINED\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 369)) ;
            var_headerString_15778.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 370)) ;
            var_headerString_15778.plusAssign_operation(GALGAS_string ("#include \"").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)).add_operation (GALGAS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 371)) ;
            var_headerString_15778.plusAssign_operation(GALGAS_string ("\n"
              "//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 372)) ;
            var_headerString_15778.plusAssign_operation(var_headerIncludes_32__12978, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 373)) ;
            var_headerString_15778.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 374)) ;
            var_headerString_15778.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 375)) ;
            var_headerString_15778.plusAssign_operation(GALGAS_string ("#endif\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 376)) ;
            var_headerInclusionList_32__12211.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 377)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 378)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 379)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12282.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 382)), var_headerString_15778, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 380)) ;
            }
          }
        }
      }
    }
    enumerator_12282.gotoNextObject () ;
  }
  GALGAS_string var_headerString_17026 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), var_headerInclusionList_31__12167.add_operation (var_headerInclusionList_32__12211, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 391)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 389))) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 393)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 394)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_17026, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 395)) ;
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
  GALGAS_string var_headerString_17735 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 411)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 409))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_17921 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_17921.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_17921.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 415)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 415)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset joker_18034 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 416)) ;
        GALGAS_string var_headerString_31__18062 ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_17921.current (HERE).readProperty_mDeclaration ().ptr (), joker_18034, var_headerString_31__18062, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 416)) ;
        var_headerString_17735.plusAssign_operation(var_headerString_31__18062, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 417)) ;
      }
    }
    enumerator_17921.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_18198 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_18198.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18198.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 422)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 422)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset joker_18331 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 423)) ;
        GALGAS_string var_headerString_32__18359 ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_18198.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, joker_18331, var_headerString_32__18359, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 423)) ;
        var_headerString_17735.plusAssign_operation(var_headerString_32__18359, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 424)) ;
      }
    }
    enumerator_18198.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 427)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 428)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_17735, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 429)) ;
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
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 462)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 462)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 463)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 463)) ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 464)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_stringset var_inclusionSet_19954 ;
          GALGAS_string var_headerString_19988 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 466)), var_inclusionSet_19954, var_headerString_19988, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 465)) ;
          cEnumerator_stringset enumerator_20009 (var_inclusionSet_19954, kENUMERATION_UP) ;
          while (enumerator_20009.hasCurrentObject ()) {
            {
            routine_buildHeader (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20009.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 471)) ;
            }
            enumerator_20009.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssign_operation(var_headerString_19988, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 479)) ;
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssign_operation(GALGAS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 481)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 481)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'definitionGroupAmount'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint onceFunction_definitionGroupAmount (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 50U) ;
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
  GALGAS_bool var_useOneHugeHeader_20966 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  GALGAS_uint var_n_21064 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uint var_fileIdx_21082 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_implementationString_21113 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_21148 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 507)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_21219 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21219.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21219.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 509)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 509)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_code_21390 ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21219.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21148, var_code_21390, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 510)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_21148.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 511)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21219.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 512)).add_operation (GALGAS_string (" cpp headers\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 512))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 512)) ;
          }
        }
        var_implementationString_21113.plusAssign_operation(var_code_21390, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 514)) ;
        var_implementationString_21113.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21219.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 515)) ;
        var_n_21064.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 516)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsSupOrEqual, var_n_21064.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 517)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_useOneHugeHeader_20966.boolEnum () ;
              if (kBoolTrue == test_3) {
                GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)) ;
                temp_4.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 519)) ;
                var_inclusionSet_21148 = temp_4 ;
              }
            }
            GALGAS_string var_header_21845 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21148.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 522)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 521))) ;
            GALGAS_string var_fileName_21986 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21082.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 524)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 524)) ;
            GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525)) ;
            temp_5.addAssign_operation (var_fileName_21986  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525)) ;
            ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 525)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_21986  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 526)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_21986, var_header_21845.add_operation (var_implementationString_21113, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 527)) ;
            }
            var_n_21064 = GALGAS_uint ((uint32_t) 0U) ;
            var_fileIdx_21082.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 533)) ;
            var_implementationString_21113 = GALGAS_string::makeEmptyString () ;
            var_inclusionSet_21148 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 535)) ;
          }
        }
      }
    }
    enumerator_21219.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_implementationString_21113.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_useOneHugeHeader_20966.boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_stringset temp_8 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 542)) ;
          temp_8.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 542)) ;
          var_inclusionSet_21148 = temp_8 ;
        }
      }
      GALGAS_string var_header_22545 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21148.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 545)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 544))) ;
      GALGAS_string var_fileName_22674 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21082.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 547)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 547)) ;
      GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 548)) ;
      temp_9.addAssign_operation (var_fileName_22674  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 548)) ;
      ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 548)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_22674  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 549)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22674, var_header_22545.add_operation (var_implementationString_21113, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 550)) ;
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
  GALGAS_headerCompositionMap var_headerCompositionMap_23453 = GALGAS_headerCompositionMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 568)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_23524 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_23524.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 570)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 570)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset var_inclusionSet_31__23618 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 571)) ;
        GALGAS_string var_headerString_31__23717 ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), var_inclusionSet_31__23618, var_headerString_31__23717, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 572)) ;
        GALGAS_stringset var_inclusionSet_32__23753 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 573)) ;
        GALGAS_string var_headerString_32__23872 ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__23753, var_headerString_32__23872, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 574)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 575)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 575)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string temp_2 ;
            const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 576)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 576)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              temp_2 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_3) {
              temp_2 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_23965 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 576)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 576)) ;
            {
            var_headerCompositionMap_23453.setter_insertKey (var_headerFileName_23965.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 578)), var_inclusionSet_31__23618, var_headerString_31__23717, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 577)) ;
            }
          }
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 583)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 583)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)) ;
            temp_5.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)) ;
            var_headerCompositionMap_23453.setter_insertKey (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23524.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 585)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 585)), var_inclusionSet_32__23753.operator_or (temp_5 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 586)), var_headerString_32__23872, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 584)) ;
            }
          }
        }
      }
    }
    enumerator_23524.gotoNextObject () ;
  }
  GALGAS_headerRepartitionMap var_headerRepartitionMap_24640 = GALGAS_headerRepartitionMap::constructor_emptyMap (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 592)) ;
  GALGAS_uint var_fileIdx_24659 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_implementationString_24690 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_headerString_24714 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_24749 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 596)) ;
  GALGAS_string var_headerFileName_24775 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 597)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_24873 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_24873.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 599)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 599)).boolEnum () ;
      if (kBoolTrue == test_6) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 600)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 600)).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 601)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 601)))).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                routine_buildHeader (var_headerCompositionMap_23453, var_headerFileName_24775, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 602)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 602)), var_headerRepartitionMap_24640, var_headerString_24714, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 602)) ;
                }
                {
                routine_buildHeader (var_headerCompositionMap_23453, var_headerFileName_24775, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)), var_headerRepartitionMap_24640, var_headerString_24714, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 603)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 604)).objectCompare (GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 604)))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  {
                  routine_buildHeader (var_headerCompositionMap_23453, var_headerFileName_24775, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)), var_headerRepartitionMap_24640, var_headerString_24714, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 605)) ;
                  }
                }
              }
            }
          }
        }
        GALGAS_string var_code_25732 ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_24749, var_code_25732, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 608)) ;
        cEnumerator_stringset enumerator_25746 (var_inclusionSet_24749, kENUMERATION_UP) ;
        while (enumerator_25746.hasCurrentObject ()) {
          {
          routine_buildHeader (var_headerCompositionMap_23453, var_headerFileName_24775, enumerator_25746.current_key (HERE), var_headerRepartitionMap_24640, var_headerString_24714, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 610)) ;
          }
          enumerator_25746.gotoNextObject () ;
        }
        var_implementationString_24690.plusAssign_operation(var_code_25732, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 612)) ;
        var_implementationString_24690.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_24873.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 613)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsStrictSup, var_implementationString_24690.getter_length (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 614)).objectCompare (GALGAS_uint ((uint32_t) 786432U))).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_stringset temp_11 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)) ;
            temp_11.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 615)) ;
            var_inclusionSet_24749 = temp_11 ;
            GALGAS_string var_cppHeader_26147 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_24749.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 617)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 616))) ;
            GALGAS_string var_fileName_26288 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 619)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 619)) ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)) ;
            temp_12.addAssign_operation (var_fileName_26288  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)) ;
            ioArgument_ioToolProductFileList = temp_12.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 620)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_26288  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 621)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_26288, var_cppHeader_26147.add_operation (var_implementationString_24690, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 622)) ;
            }
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_24775.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 628))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 628)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_24775.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 629)) ;
            GALGAS_stringlist temp_13 ;
            const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_fileIdx_24659.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_14) {
              temp_13 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)) ;
            }else if (kBoolFalse == test_14) {
              GALGAS_stringlist temp_15 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)) ;
              temp_15.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 632)) ;
              temp_13 = temp_15 ;
            }
            GALGAS_string var_startOfHeader_26730 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_24775, temp_13 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 630))) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_24775.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 636)), var_startOfHeader_26730.add_operation (var_headerString_24714, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 634)) ;
            }
            var_fileIdx_24659.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 640)) ;
            var_implementationString_24690 = GALGAS_string::makeEmptyString () ;
            var_headerString_24714 = GALGAS_string::makeEmptyString () ;
            var_headerFileName_24775 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 643)) ;
            var_inclusionSet_24749 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 644)) ;
          }
        }
      }
    }
    enumerator_24873.gotoNextObject () ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsNotEqual, var_implementationString_24690.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_stringlist temp_17 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 651)) ;
      temp_17.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 651))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 651)) ;
      GALGAS_string var_header_27319 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_17 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 650))) ;
      GALGAS_string var_fileName_27455 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 653)) ;
      GALGAS_stringlist temp_18 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)) ;
      temp_18.addAssign_operation (var_fileName_27455  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)) ;
      ioArgument_ioToolProductFileList = temp_18.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 654)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_27455  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 655)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_27455, var_header_27319.add_operation (var_implementationString_24690, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 656)) ;
      }
      ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_24775.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 662)) ;
      ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_24775.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 663)) ;
      GALGAS_stringlist temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, var_fileIdx_24659.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
      }else if (kBoolFalse == test_20) {
        GALGAS_stringlist temp_21 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
        temp_21.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 666)) ;
        temp_19 = temp_21 ;
      }
      GALGAS_string var_startOfHeader_27850 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_24775, temp_19 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 664))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_24775.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 670)), var_startOfHeader_27850.add_operation (var_headerString_24714, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 668)) ;
      }
    }
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 675)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 676)) ;
  GALGAS_stringlist temp_22 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 679)) ;
  temp_22.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24659.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 679))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 679)) ;
  GALGAS_string var_startOfAllDeclarationsHeader_28308 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), temp_22 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 677))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_28308, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 681)) ;
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
  GALGAS_bool var_useOneHugeHeader_28983 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_29119 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_29119.hasCurrentObject ()) {
    GALGAS_stringset var_inclusionSet_29154 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 700)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_29119.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 701)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 701)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_implementationString_29343 ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29119.current (HERE).readProperty_mDeclaration ().ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_29154, var_implementationString_29343, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 702)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_29119.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 703)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_inclusionSet_29154.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29119.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 704))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 704)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_useOneHugeHeader_28983.boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 707)) ;
            temp_3.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 707)) ;
            var_inclusionSet_29154 = temp_3 ;
          }
        }
        GALGAS_string var_header_29592 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_29154.getter_stringList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 710)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 709))) ;
        var_implementationString_29343.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29119.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 712)) ;
        GALGAS_string var_fileName_29816 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29119.current (HERE).readProperty_mDeclaration ().ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 713)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_29816  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 714)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_29816, var_header_29592.add_operation (var_implementationString_29343, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 715)) ;
        }
        ioArgument_ioToolProductFileList.addAssign_operation (var_fileName_29816  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas", 720)) ;
      }
    }
    enumerator_29119.gotoNextObject () ;
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
  result << "// !$*UTF8*$!\n"
    "{\n"
    "  archiveVersion = 1;\n"
    "  classes = {\n"
    "  };\n"
    "  objectVersion = 42;\n"
    "  objects = {\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXBuildFile */\n" ;
  GALGAS_uint index_250_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_250 (in_BUILD_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_250.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_250.current_mBuildReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_250.current_mFileName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXBuildFile;\n"
        "    fileRef = " ;
      result << enumerator_250.current_mFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    settings = {ATTRIBUTES = (); };\n"
        "  };\n"
        "\n" ;
      index_250_.increment () ;
      enumerator_250.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFileReference */\n" ;
  GALGAS_uint index_553_ (0) ;
  if (in_C_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_553 (in_C_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_553.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_553.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_553.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.c;\n"
        "    name = " ;
      result << enumerator_553.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_553.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_553_.increment () ;
      enumerator_553.gotoNextObject () ;
    }
  }
  GALGAS_uint index_898_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_898 (in_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_898.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_898.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_898.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.cpp;\n"
        "    name = " ;
      result << enumerator_898.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_898.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_898_.increment () ;
      enumerator_898.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1245_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1245 (in_M_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1245.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1245.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1245.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.obj;\n"
        "    name = " ;
      result << enumerator_1245.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1245.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1245_.increment () ;
      enumerator_1245.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1591_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1591 (in_MM_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1591.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1591.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1591.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.objcpp;\n"
        "    name = " ;
      result << enumerator_1591.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1591.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1591_.increment () ;
      enumerator_1591.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1946_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1946 (in_HEADER_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1946.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1946.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1946.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.h;\n"
        "    name = " ;
      result << enumerator_1946.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1946.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1946_.increment () ;
      enumerator_1946.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2297_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2297 (in_FRAMEWORK_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2297.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2297.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2297.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = wrapper.framework;\n"
        "    name = " ;
      result << enumerator_2297.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_2297.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_2297_.increment () ;
      enumerator_2297.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2830_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_2830 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2830.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2830.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2830.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2830_.increment () ;
      enumerator_2830.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3406_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_3406 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3406.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3406.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_3406.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_3406_.increment () ;
      enumerator_3406.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3715_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3715 (in_PLIST_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3715.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3715.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = text.plist;\n"
        "    name = " ;
      result << enumerator_3715.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3715.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3715_.increment () ;
      enumerator_3715.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4039_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4039 (in_XIB_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4039.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4039.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = wrapper.xib;\n"
        "    name = " ;
      result << enumerator_4039.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4039.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4039_.increment () ;
      enumerator_4039.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4365_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4365 (in_TIFF_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4365.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4365.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.tiff;\n"
        "    name = " ;
      result << enumerator_4365.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4365.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4365_.increment () ;
      enumerator_4365.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4664_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4664 (in_ICNS_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4664.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4664.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.icns;\n"
        "    name = " ;
      result << enumerator_4664.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_4664.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_4664_.increment () ;
      enumerator_4664.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_5275_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5275 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5275.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5275.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  " ;
        result << enumerator_5275.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " = {\n"
          "    isa = PBXFrameworksBuildPhase;\n"
          "    buildActionMask = 2147483647;\n"
          "    files = (\n" ;
        GALGAS_uint index_5515_ (0) ;
        if (enumerator_5275.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_5515 (enumerator_5275.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
          while (enumerator_5515.hasCurrentObject ()) {
            result << "      " ;
            result << enumerator_5515.current_mValue (HERE).stringValue () ;
            result << ",\n" ;
            index_5515_.increment () ;
            enumerator_5515.gotoNextObject () ;
          }
        }
        result << "    );\n"
          "    runOnlyForDeploymentPostprocessing = 0;\n"
          "  };\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_5275_.increment () ;
      enumerator_5275.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5953_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_5953 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5953.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5953.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFrameworksBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_6137_ (0) ;
      if (enumerator_5953.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6137 (enumerator_5953.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_6137.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6137.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_6137_.increment () ;
          enumerator_6137.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_5953_.increment () ;
      enumerator_5953.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXGroup section */\n" ;
  GALGAS_uint index_6413_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_6413 (in_GROUPS, kENUMERATION_UP) ;
    while (enumerator_6413.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6413.current_mGroupReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_6413.current_mGroupName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXGroup;\n"
        "    children = (\n" ;
      GALGAS_uint index_6540_ (0) ;
      if (enumerator_6413.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6540 (enumerator_6413.current_mChildrenRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_6540.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6540.current_mValue (HERE).stringValue () ;
          result << ", \n" ;
          index_6540_.increment () ;
          enumerator_6540.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_6413.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_6413.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n" ;
      index_6413_.increment () ;
      enumerator_6413.gotoNextObject () ;
    }
  }
  result << "\n"
    "  " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << " /* Main Group */ = {\n"
    "    isa = PBXGroup;\n"
    "    children = (\n" ;
  GALGAS_uint index_6852_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_6852 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kENUMERATION_UP) ;
    while (enumerator_6852.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_6852.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_6852_.increment () ;
      enumerator_6852.gotoNextObject () ;
    }
  }
  result << "    );\n"
    "    sourceTree = \"<group>\";\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXNativeTarget */\n" ;
  GALGAS_uint index_7266_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7266 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7266.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_7266.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_7266.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_7266.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_7266.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " ,\n" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_7266.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "      " ;
        result << enumerator_7266.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " , /* Frameworks */\n" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n"
        "    );\n"
        "    name = " ;
      result << enumerator_7266.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_7266.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_7266.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.tool\";\n"
        "  };\n"
        " \n" ;
      index_7266_.increment () ;
      enumerator_7266.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8184_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8184 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8184.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_8184.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_8184.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_8184.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_8184.current_mResourceBuildRef (HERE).stringValue () ;
      result << " , /* Resources */\n"
        "      " ;
      result << enumerator_8184.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Frameworks */\n"
        "      " ;
      result << enumerator_8184.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Sources */\n"
        "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n" ;
      GALGAS_uint index_8573_ (0) ;
      if (enumerator_8184.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8573 (enumerator_8184.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_8573.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_8573.current_mValue_30_ (HERE).stringValue () ;
          result << " ,\n" ;
          index_8573_.increment () ;
          enumerator_8573.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_8184.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_8184.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_8184.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.application\";\n"
        "  };\n"
        "\n" ;
      index_8184_.increment () ;
      enumerator_8184.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXProject */\n"
    "  " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */ = {\n"
    "   isa = PBXProject;\n"
    "   buildConfigurationList = " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */;\n"
    "   compatibilityVersion = \"Xcode 2.4\";\n"
    "   hasScannedForEncodings = 1;\n"
    "   mainGroup = " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << ";\n"
    "   projectDirPath = \"\";\n"
    "   projectRoot = \"\";\n"
    "   targets = (\n" ;
  GALGAS_uint index_9557_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_9557 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9557.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9557.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_9557_.increment () ;
      enumerator_9557.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9896_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_9896 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9896.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9896.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_9896_.increment () ;
      enumerator_9896.gotoNextObject () ;
    }
  }
  result << "   );\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_10348_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10348 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10348.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_10348.current_mResourceBuildRef (HERE).stringValue () ;
      result << " /* Resources */ = {\n"
        "    isa = PBXResourcesBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_10531_ (0) ;
      if (enumerator_10348.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_10531 (enumerator_10348.current_mResourceFileBuildRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_10531.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_10531.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_10531_.increment () ;
          enumerator_10531.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_10348_.increment () ;
      enumerator_10348.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n" ;
  GALGAS_uint index_10981_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_10981 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10981.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10981.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_11148_ (0) ;
      if (enumerator_10981.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11148 (enumerator_10981.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11148.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11148.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11148_.increment () ;
          enumerator_11148.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_10981_.increment () ;
      enumerator_10981.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11554_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_11554 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11554.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11554.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_11721_ (0) ;
      if (enumerator_11554.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11721 (enumerator_11554.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_11721.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_11721.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_11721_.increment () ;
          enumerator_11721.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_11554_.increment () ;
      enumerator_11554.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXTargetDependency */\n"
    " \n" ;
  GALGAS_uint index_12228_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12228 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12228.hasCurrentObject ()) {
      GALGAS_uint index_12276_ (0) ;
      if (enumerator_12228.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_12276 (enumerator_12228.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_12276.hasCurrentObject ()) {
          result << "  " ;
          result << enumerator_12276.current_mValue_30_ (HERE).stringValue () ;
          result << " = {\n"
            "    isa = PBXTargetDependency;\n"
            "    target = " ;
          result << enumerator_12276.current_mValue_31_ (HERE).stringValue () ;
          result << ";\n"
            "  };\n"
            "\n" ;
          index_12276_.increment () ;
          enumerator_12276.gotoNextObject () ;
        }
      }
      index_12228_.increment () ;
      enumerator_12228.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXVariantGroup */\n"
    " \n"
    "  /*------------------------------------------------------------------ XCBuildConfiguration */\n"
    "    " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */ = {\n"
    "      isa = XCBuildConfiguration;\n"
    "      buildSettings = {\n"
    "        CLANG_CXX_LANGUAGE_STANDARD = \"c++14\";\n" ;
  GALGAS_uint index_12800_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12800 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12800.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_12800.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_12800_.increment () ;
      enumerator_12800.gotoNextObject () ;
    }
  }
  result << "    };\n"
    "    name = Default;\n"
    "  };\n"
    "\n" ;
  GALGAS_uint index_13115_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_13115 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13115.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13115.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n"
        "        ARCHS = \"$(NATIVE_ARCH_ACTUAL)\";\n"
        "        ONLY_ACTIVE_ARCH = YES;\n" ;
      GALGAS_uint index_13364_ (0) ;
      if (enumerator_13115.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13364 (enumerator_13115.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_13364.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_13364.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_13364_.increment () ;
          enumerator_13364.gotoNextObject () ;
        }
      }
      result << "      PRODUCT_NAME = " ;
      result << enumerator_13115.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 346)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_13115_.increment () ;
      enumerator_13115.gotoNextObject () ;
    }
  }
  GALGAS_uint index_13819_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_13819 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13819.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_13819.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_13987_ (0) ;
      if (enumerator_13819.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13987 (enumerator_13819.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_13987.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_13987.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_13987_.increment () ;
          enumerator_13987.gotoNextObject () ;
        }
      }
      result << "      INFOPLIST_FILE = \"Info.plist\";\n"
        "      PRODUCT_NAME = " ;
      result << enumerator_13819.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue () ;
      result << ";\n"
        "      PRODUCT_BUNDLE_IDENTIFIER = \"" ;
      result << in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue () ;
      result << "." ;
      result << in_PROJECT_5F_NAME.stringValue () ;
      result << "\";\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_13819_.increment () ;
      enumerator_13819.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ XCConfigurationList section */\n"
    "\n"
    "    " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */ = {\n"
    "      isa = XCConfigurationList;\n"
    "      buildConfigurations = (\n"
    "        " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */,\n"
    "      );\n"
    "      defaultConfigurationIsVisible = 0;\n"
    "      defaultConfigurationName = Default;\n"
    "    };\n"
    "\n" ;
  GALGAS_uint index_14926_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_14926 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14926.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_14926.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_14926.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_14926_.increment () ;
      enumerator_14926.gotoNextObject () ;
    }
  }
  GALGAS_uint index_15508_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_15508 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15508.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_15508.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_15508.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_15508_.increment () ;
      enumerator_15508.gotoNextObject () ;
    }
  }
  result << "/*------------------------------------------------------------------ End */\n"
    "  };\n"
    "\n"
    "  rootObject = " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */;\n"
    "}\n" ;
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

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-unix' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_3 [1] = {
  NULL
} ;

//--- Directory 'makefile-unix'

const cDirectoryWrapper gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper (
  "makefile-unix",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_3,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_3
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

//--- File 'project_xcode/adding-icons-to-your-application.rtf'

const char * gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper = "{\\rtf1\\ansi\\ansicpg1252\\cocoartf1138\\cocoasubrtf510\n"
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

const char * gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper = "{\\rtf1\\mac\\ansicpg10000\\cocoartf824\\cocoasubrtf380\n"
  "{\\fonttbl\\f0\\fswiss\\fcharset77 Helvetica-Bold;}\n"
  "{\\colortbl;\\red255\\green255\\blue255;}\n"
  "\\vieww9000\\viewh8400\\viewkind0\n"
  "\\pard\\tx560\\tx1120\\tx1680\\tx2240\\tx2800\\tx3360\\tx3920\\tx4480\\tx5040\\tx5600\\tx6160\\tx6720\\ql\\qnatural\n"
  "\n"
  "\\f0\\b\\fs24 \\cf0 GALGAS Cocoa Project\\\n"
  "}\n" ;

const cRegularFileWrapper gWrapperFile_1_targetGalgas_33_GenerationFileWrapper (
  "Credits.rtf",
  "rtf",
  true, // Text file
  310, // Text length
  gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper
) ;

//--- All files of 'Base.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_5 [2] = {
  & gWrapperFile_1_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- All sub-directories of 'Base.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5 [1] = {
  NULL
} ;

//--- Directory 'Base.lproj'

const cDirectoryWrapper gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper (
  "Base.lproj",
  1,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_5,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5
) ;

//--- All files of 'project_xcode' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_4 [2] = {
  & gWrapperFile_0_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- All sub-directories of 'project_xcode' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4 [2] = {
  & gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- Directory 'project_xcode'

const cDirectoryWrapper gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper (
  "project_xcode",
  1,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_4,
  1,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0 [7] = {
  & gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper,
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
                                                                                         const GALGAS_string & in_PROJECT_5F_NAME
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#----------------------------------------------------------------- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "os.chdir (scriptDir)\n"
    "#----------------------------------------------------------------- Get goal as first argument\n"
    "goal = \"all\" # Default goal\n"
    "if len (sys.argv) > 1 :\n"
    "  goal = sys.argv [1]\n"
    "#----------------------------------------------------------------- Get max parallel jobs as second argument\n"
    "maxParallelJobs = 0 # 0 means use host processor count\n"
    "if len (sys.argv) > 2 :\n"
    "  maxParallelJobs = int (sys.argv [2])\n"
    "#----------------------------------------------------------------- Get json description dictionary\n"
    "jsonFilePath = os.path.normpath (scriptDir + \"/../build/output/file-list.json\")\n"
    "with open (jsonFilePath) as f:\n"
    "  dictionary = json.loads (f.read ())\n"
    "LIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n"
    "#----------------------------------------------------------------- Import builder\n"
    "sys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\n"
    "from macosx_gcc_tools import buildForMacOSX\n"
    "#----------------------------------------------------------------- Build\n"
    "buildForMacOSX (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"debug\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"release\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"lto\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"install-release\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"clean\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"clean\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_unix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#----------------------------------------------------------------- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "os.chdir (scriptDir)\n"
    "#----------------------------------------------------------------- Get goal as first argument\n"
    "goal = \"all\" # Default goal\n"
    "if len (sys.argv) > 1 :\n"
    "  goal = sys.argv [1]\n"
    "#----------------------------------------------------------------- Get max parallel jobs as second argument\n"
    "maxParallelJobs = 0 # 0 means use host processor count\n"
    "if len (sys.argv) > 2 :\n"
    "  maxParallelJobs = int (sys.argv [2])\n"
    "#----------------------------------------------------------------- Get json description dictionary\n"
    "jsonFilePath = os.path.normpath (scriptDir + \"/../build/output/file-list.json\")\n"
    "with open (jsonFilePath) as f:\n"
    "  dictionary = json.loads (f.read ())\n"
    "LIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n"
    "#----------------------------------------------------------------- Import builder\n"
    "sys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\n"
    "from unix_gcc_tools import buildForUnix\n"
    "#----------------------------------------------------------------- Build\n"
    "buildForUnix (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"debug\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"release\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"lto\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"install-release\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"clean\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#----------------------------------------------------------------- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "os.chdir (scriptDir)\n"
    "#----------------------------------------------------------------- Get goal as first argument\n"
    "goal = \"all\" # Default goal\n"
    "if len (sys.argv) > 1 :\n"
    "  goal = sys.argv [1]\n"
    "#----------------------------------------------------------------- Get max parallel jobs as second argument\n"
    "maxParallelJobs = 0 # 0 means use host processor count\n"
    "if len (sys.argv) > 2 :\n"
    "  maxParallelJobs = int (sys.argv [2])\n"
    "#----------------------------------------------------------------- Get json description dictionary\n"
    "jsonFilePath = os.path.normpath (scriptDir + \"/../build/output/file-list.json\")\n"
    "with open (jsonFilePath) as f:\n"
    "  dictionary = json.loads (f.read ())\n"
    "LIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n"
    "#----------------------------------------------------------------- Import builder\n"
    "sys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\n"
    "from x86linux_on_macosx_gcc_tools_32 import buildForLinux32OnMacOSX\n"
    "#----------------------------------------------------------------- Build\n"
    "buildForLinux32OnMacOSX (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"debug\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"release\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"lto\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"clean\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux64_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#----------------------------------------------------------------- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "os.chdir (scriptDir)\n"
    "#----------------------------------------------------------------- Get goal as first argument\n"
    "goal = \"all\" # Default goal\n"
    "if len (sys.argv) > 1 :\n"
    "  goal = sys.argv [1]\n"
    "#----------------------------------------------------------------- Get max parallel jobs as second argument\n"
    "maxParallelJobs = 0 # 0 means use host processor count\n"
    "if len (sys.argv) > 2 :\n"
    "  maxParallelJobs = int (sys.argv [2])\n"
    "#----------------------------------------------------------------- Get json description dictionary\n"
    "jsonFilePath = os.path.normpath (scriptDir + \"/../build/output/file-list.json\")\n"
    "with open (jsonFilePath) as f:\n"
    "  dictionary = json.loads (f.read ())\n"
    "LIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n"
    "#----------------------------------------------------------------- Import builder\n"
    "sys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\n"
    "from x86linux_on_macosx_gcc_tools_64 import buildForLinux64OnMacOSX\n"
    "#----------------------------------------------------------------- Build\n"
    "buildForLinux64OnMacOSX (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"debug\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"release\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"lto\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"clean\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_win32_on_mac'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                           const GALGAS_string & in_PROJECT_5F_NAME
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#----------------------------------------------------------------- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "os.chdir (scriptDir)\n"
    "#----------------------------------------------------------------- Get goal as first argument\n"
    "goal = \"all\" # Default goal\n"
    "if len (sys.argv) > 1 :\n"
    "  goal = sys.argv [1]\n"
    "#----------------------------------------------------------------- Get max parallel jobs as second argument\n"
    "maxParallelJobs = 0 # 0 means use host processor count\n"
    "if len (sys.argv) > 2 :\n"
    "  maxParallelJobs = int (sys.argv [2])\n"
    "#----------------------------------------------------------------- Get json description dictionary\n"
    "jsonFilePath = os.path.normpath (scriptDir + \"/../build/output/file-list.json\")\n"
    "with open (jsonFilePath) as f:\n"
    "  dictionary = json.loads (f.read ())\n"
    "LIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n"
    "#----------------------------------------------------------------- Import builder\n"
    "sys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\n"
    "from mingw32_on_macosx_gcc_tools import buildForWin32OnMacOSX\n"
    "#----------------------------------------------------------------- Build\n"
    "buildForWin32OnMacOSX (dictionary, jsonFilePath, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"debug\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"release\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#--- Register a function for killing subprocess\n"
    "atexit.register (cleanup)\n"
    "#--- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "#---\n"
    "childProcess = subprocess.Popen ([\"python\", \"build.py\", \"lto\"], cwd=scriptDir)\n"
    "#--- Wait for subprocess termination\n"
    "if childProcess.poll () == None :\n"
    "  childProcess.wait ()\n"
    "if childProcess.returncode != 0 :\n"
    "  sys.exit (childProcess.returncode)\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n" ;
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
                                                                                               const GALGAS_bool & in_VERBOSE_5F_OPTION
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" \?>\n"
    "<CodeBlocks_project_file>\n"
    " <FileVersion major=\"1\" minor=\"6\" />\n"
    " <Project>\n"
    "  <Option title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" />\n"
    "  <Option pch_mode=\"0\" />\n"
    "  <Option compiler=\"gcc\" />\n"
    "  <Build>\n"
    "   <Target title=\"Release\">\n"
    "    <Option platforms=\"" ;
  result << in_PLATFORM.stringValue () ;
  result << ";\" />\n"
    "    <Option output=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  const enumGalgasBool test_0 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << GALGAS_string (".exe").stringValue () ;
  }else if (kBoolFalse == test_0) {
  }
  result << "\" prefix_auto=\"0\" extension_auto=\"0\" />\n"
    "    <Option object_output=\"objects\" />\n"
    "    <Option type=\"1\" />\n"
    "    <Option compiler=\"gcc\" />\n"
    "    <Option projectResourceIncludeDirsRelation=\"1\" />\n"
    "    <Compiler>\n"
    "     <Add option=\"-fomit-frame-pointer\" />\n"
    "     <Add option=\"-O2\" />\n"
    "     <Add option=\"-Wnon-virtual-dtor\" />\n"
    "     <Add option=\"-Winit-self\" />\n"
    "     <Add option=\"-Wredundant-decls\" />\n"
    "     <Add option=\"-Wundef\" />\n"
    "     <Add option=\"-Wmissing-include-dirs\" />\n"
    "     <Add option=\"-Weffc++\" />\n"
    "     <Add option=\"-std=c++14\" />\n"
    "     <Add option=\"-Wshadow\" />\n"
    "     <Add option=\"-Wall\" />\n"
    "     <Add option=\"-W\" />\n"
    "     <Add option=\"-DDO_NOT_GENERATE_CHECKINGS\" />\n"
    "     " ;
  const enumGalgasBool test_1 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << GALGAS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue () ;
  }else if (kBoolFalse == test_1) {
  }
  result << "    </Compiler>\n"
    "   </Target>\n"
    "   <Target title=\"Debug\">\n"
    "    <Option platforms=\"" ;
  result << in_PLATFORM.stringValue () ;
  result << ";\" />\n"
    "    <Option output=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-debug" ;
  const enumGalgasBool test_2 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << GALGAS_string (".exe").stringValue () ;
  }else if (kBoolFalse == test_2) {
  }
  result << "\" prefix_auto=\"0\" extension_auto=\"0\" />\n"
    "    <Option object_output=\"objects_debug\" />\n"
    "    <Option deps_output=\".deps_debug\" />\n"
    "    <Option type=\"1\" />\n"
    "    <Option compiler=\"gcc\" />\n"
    "    <Option projectResourceIncludeDirsRelation=\"1\" />\n"
    "    <Compiler>\n"
    "     <Add option=\"-g\" />\n"
    "     <Add option=\"-Wnon-virtual-dtor\" />\n"
    "     <Add option=\"-Winit-self\" />\n"
    "     <Add option=\"-Wredundant-decls\" />\n"
    "     <Add option=\"-Wundef\" />\n"
    "     <Add option=\"-Winline\" />\n"
    "     <Add option=\"-Wmissing-include-dirs\" />\n"
    "     <Add option=\"-Weffc++\" />\n"
    "     <Add option=\"-std=c++14\" />\n"
    "     <Add option=\"-Wshadow\" />\n"
    "     <Add option=\"-Wall\" />\n"
    "     <Add option=\"-W\" />\n"
    "     " ;
  const enumGalgasBool test_3 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << GALGAS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue () ;
  }else if (kBoolFalse == test_3) {
  }
  result << "    </Compiler>\n"
    "   </Target>\n"
    "  </Build>\n"
    "  <VirtualTargets>\n"
    "   <Add alias=\"All\" targets=\"Release;Debug;\" />\n"
    "  </VirtualTargets>\n"
    "  <Compiler>\n"
    "   <Add directory=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "\" />\n"
    "   <Add directory=\"../build/user-headers\" />\n"
    "   <Add directory=\"../build/output\" />\n" ;
  GALGAS_uint index_2363_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_2363 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET, kENUMERATION_UP) ;
    while (enumerator_2363.hasCurrentObject ()) {
      result << "  <Add directory=\"" ;
      result << enumerator_2363.current_key (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2363_.increment () ;
      enumerator_2363.gotoNextObject () ;
    }
  }
  result << "  </Compiler>\n"
    "  <Linker>\n" ;
  const enumGalgasBool test_4 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << GALGAS_string ("   <Add library=\"Ws2_32\" />\n"
      "   <Add library=\"Comdlg32\" />\n").stringValue () ;
  }else if (kBoolFalse == test_4) {
  }
  result << "  </Linker>\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/all-libpm.cpp\" />\n"
    "  <Unit filename=\"" ;
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
  GALGAS_uint index_2873_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2873 (in_TOOL_5F_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2873.hasCurrentObject ()) {
      result << "  <Unit filename=\"../build/output/" ;
      result << enumerator_2873.current_mValue (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2873_.increment () ;
      enumerator_2873.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2981_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2981 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2981.hasCurrentObject ()) {
      result << "  <Unit filename=\"../" ;
      result << enumerator_2981.current_mValue (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2981_.increment () ;
      enumerator_2981.gotoNextObject () ;
    }
  }
  result << "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/32-mp_bases.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/64-mp_bases.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-add.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-add_1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-add_n.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-addmul_1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-bdiv_dbm1c.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-cmp.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-dcpi1_div_qr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-dive_1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-divrem_1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-divrem_2.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-get_str.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-invertappr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-lshift.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-lshiftc.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mu_div_qr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul_1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul_basecase.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul_fft.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mul_n.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-mulmod_bnm1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-nussbaumer_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-pre_divrem_1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-rshift.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sbpi1_div_qr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sbpi1_divappr_q.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-set_str.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sqr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sqr_basecase.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sqrmod_bnm1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sub.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sub_1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-sub_n.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-submul_1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-tdiv_qr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom22_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom2_sqr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom32_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom33_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom3_sqr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom42_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom43_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom44_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom4_sqr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom53_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom63_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom6_sqr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom6h_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom8_sqr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom8h_mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_couple_handling.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_dgr3_pm1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_dgr3_pm2.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_pm1.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_pm2.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_pm2exp.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_eval_pm2rexp.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_12pts.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_16pts.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_5pts.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_6pts.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_7pts.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpn-toom_interpolate_8pts.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-abs.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-add.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-add_ui.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-and.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cdiv_q_ui.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cdiv_qr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cfdiv_q_2exp.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-clear.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-clrbit.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cmp.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cmp_si.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-cmp_ui.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-com.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-combit.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-export.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-fdiv_q_ui.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-fdiv_qr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-fits_sint.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-fits_uint.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-get_si.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-get_str.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-get_ui.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-init.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-ior.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-mul.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-mul_2exp.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-mul_ui.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-neg.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-realloc.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-set.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-set_str.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-set_ui.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-setbit.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-sizeinbase.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-sub.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-sub_ui.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-swap.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-tdiv_qr.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-tstbit.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/mpz-xor.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-assert.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-errno.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-memory.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-mp_bpl.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-mp_clz_tab.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-mp_dv_tab.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-mp_minv_tab.c\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-tal-notreent.c\" />\n"
    "  <Extensions>\n"
    "   <code_completion />\n"
    "   <envvars />\n"
    "   <debugger />\n"
    "   <lib_finder disable_auto=\"1\" />\n"
    "  </Extensions>\n"
    " </Project>\n"
    "</CodeBlocks_project_file>\n" ;
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
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n"
    "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
    "<plist version=\"1.0\">\n"
    "<dict>\n"
    " <key>CFBundleDevelopmentRegion</key>\n"
    " <string>English</string>\n"
    " <key>CFBundleExecutable</key>\n"
    " <string>${EXECUTABLE_NAME}</string>\n"
    " <key>CFBundleIconFile</key>\n"
    " <string>application_icns</string>\n"
    " <key>CFBundleIdentifier</key>\n"
    " <string>" ;
  result << in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</string>\n"
    " <key>CFBundleInfoDictionaryVersion</key>\n"
    " <string>6.0</string>\n"
    " <key>CFBundleName</key>\n"
    " <string>${PRODUCT_NAME}</string>\n"
    " <key>CFBundlePackageType</key>\n"
    " <string>APPL</string>\n"
    " <key>CFBundleSignature</key>\n"
    " <string>\?\?\?\?</string>\n"
    " <key>LSMinimumSystemVersion</key>\n"
    " <string>" ;
  result << in_MACOSX_5F_DEPLOYMENT_5F_TARGET.stringValue () ;
  result << "</string>\n"
    " <key>CFBundleShortVersionString</key>\n"
    " <string>" ;
  result << in_VERSION_5F_STRING.stringValue () ;
  result << "</string>\n"
    " <key>NSMainNibFile</key>\n"
    " <string>MainMenu</string>\n"
    " <key>NSPrincipalClass</key>\n"
    " <string>NSApplication</string>\n"
    " <key>CFBundleDocumentTypes</key>\n"
    " <array>\n" ;
  GALGAS_uint index_1040_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1040 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1040.hasCurrentObject ()) {
      result << "  <dict>\n"
        "      <key>CFBundleTypeIconFile</key>\n"
        "      <string>" ;
      result << enumerator_1040.current_key (HERE).stringValue () ;
      result << "_icns</string>\n"
        "      <key>CFBundleTypeIconSystemGenerated</key>\n"
        "      <integer>0</integer>\n"
        "      <key>CFBundleTypeName</key>\n"
        "      <string>" ;
      result << in_PROJECT_5F_NAME.stringValue () ;
      result << " Source</string>\n"
        "      <key>CFBundleTypeRole</key>\n"
        "      <string>Editor</string>\n"
        "      <key>LSHandlerRank</key>\n"
        "      <string>Default</string>\n"
        "      <key>LSItemContentTypes</key>\n"
        "      <array>\n"
        "        <string>$(PRODUCT_BUNDLE_IDENTIFIER)." ;
      result << enumerator_1040.current_key (HERE).stringValue () ;
      result << "</string>\n"
        "      </array>\n"
        "      <key>NSDocumentClass</key>\n"
        "      <string>OC_GGS_Document</string>\n"
        "  </dict>\n" ;
      index_1040_.increment () ;
      enumerator_1040.gotoNextObject () ;
    }
  }
  result << "\n"
    " </array>\n"
    " <key>UTExportedTypeDeclarations</key>\n"
    " <array>\n" ;
  GALGAS_uint index_1716_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1716 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1716.hasCurrentObject ()) {
      result << "  <dict>\n"
        "    <key>UTTypeConformsTo</key>\n"
        "    <array>\n"
        "      <string>public.text</string>\n"
        "    </array>\n"
        "    <key>UTTypeDescription</key>\n"
        "    <string>" ;
      result << enumerator_1716.current_key (HERE).stringValue () ;
      result << "</string>\n"
        "    <key>UTTypeIcons</key>\n"
        "    <dict>\n"
        "      <key>UTTypeIconBadgeName</key>\n"
        "      <string>galgasDocuments</string>\n"
        "    </dict>\n"
        "    <key>UTTypeIdentifier</key>\n"
        "    <string>$(PRODUCT_BUNDLE_IDENTIFIER)." ;
      result << enumerator_1716.current_key (HERE).stringValue () ;
      result << "</string>\n"
        "    <key>UTTypeTagSpecification</key>\n"
        "    <dict>\n"
        "      <key>public.filename-extension</key>\n"
        "      <array>\n"
        "        <string>" ;
      result << enumerator_1716.current_key (HERE).stringValue () ;
      result << "</string>\n"
        "      </array>\n"
        "    </dict>\n"
        "  </dict>\n" ;
      index_1716_.increment () ;
      enumerator_1716.gotoNextObject () ;
    }
  }
  result << "\n"
    " </array>\n"
    "</dict>\n"
    "</plist>\n" ;
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
  result << "#!/bin/sh\n"
    "cd `dirname $0` && xcodebuild -alltargets -configuration Default\n" ;
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
  result << "/* Localized versions of Info.plist keys */\n"
    "\n" ;
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
                                                                                              const GALGAS_string & in_LIBPM_5F_DIRECTORY_5F_PATH
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "{\n"
    "    \"LIBPM_DIRECTORY_PATH\"  :  \"" ;
  result << in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue () ;
  result << "\",\n"
    "    \"SOURCES_DIR\"  :  [\"../build/output\",  \"../build/user-headers\",  \"" ;
  result << in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue () ;
  result << "\"" ;
  GALGAS_uint index_200_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_200 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET, kENUMERATION_UP) ;
    while (enumerator_200.hasCurrentObject ()) {
      result << ",  \"" ;
      result << enumerator_200.current_key (HERE).stringValue () ;
      result << "\"" ;
      index_200_.increment () ;
      enumerator_200.gotoNextObject () ;
    }
  }
  result << "],\n"
    "    \"SOURCES\"  :  [\n"
    "        \"all-galgas.cpp\",\n"
    "        \"all-libpm.cpp\",\n" ;
  GALGAS_uint index_341_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_341 (in_MAKEFILE_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_341.hasCurrentObject ()) {
      result << "        \"" ;
      result << enumerator_341.current_mValue (HERE).stringValue () ;
      result << "\",\n" ;
      index_341_.increment () ;
      enumerator_341.gotoNextObject () ;
    }
  }
  GALGAS_uint index_425_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_425 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_425.hasCurrentObject ()) {
      result << "        \"" ;
      result << enumerator_425.current_mValue (HERE).stringValue () ;
      result << "\",\n" ;
      index_425_.increment () ;
      enumerator_425.gotoNextObject () ;
    }
  }
  result << "        \"32-mp_bases.c\",\n"
    "        \"mpn-invertappr.c\",\n"
    "        \"mpn-sub_1.c\",\n"
    "        \"mpn-toom_eval_dgr3_pm1.c\",\n"
    "        \"mpz-clrbit.c\", \n"
    "        \"mpz-set_ui.c\",\n"
    "        \"mpn-lshift.c\",\n"
    "        \"mpn-sub_n.c\",\n"
    "        \"mpn-toom_eval_dgr3_pm2.c\",\n"
    "        \"mpz-cmp.c\",\n"
    "        \"mpz-setbit.c\",\n"
    "        \"64-mp_bases.c\",\n"
    "        \"mpn-lshiftc.c\",\n"
    "        \"mpn-submul_1.c\",\n"
    "        \"mpn-toom_eval_pm1.c\",\n"
    "        \"mpz-com.c\",\n"
    "        \"mpz-sizeinbase.c\",\n"
    "        \"mpn-mu_div_qr.c\",\n"
    "        \"mpn-tdiv_qr.c\", \n"
    "        \"mpn-toom_eval_pm2.c\",\n"
    "        \"mpz-combit.c\", \n"
    "        \"mpz-sub.c\",\n"
    "        \"mpn-mul.c\",\n"
    "        \"mpn-toom22_mul.c\",\n"
    "        \"mpn-toom_eval_pm2exp.c\",\n"
    "        \"mpz-export.c\",\n"
    "        \"mpz-sub_ui.c\",\n"
    "        \"mpn-mul_1.c\",\n"
    "        \"mpn-toom2_sqr.c\",\n"
    "        \"mpn-toom_eval_pm2rexp.c\",\n"
    "        \"mpz-fdiv_qr.c\",\n"
    "        \"mpz-swap.c\",\n"
    "        \"mpn-mul_basecase.c\",\n"
    "        \"mpn-toom32_mul.c\",\n"
    "        \"mpn-toom_interpolate_12pts.c\",\n"
    "        \"mpz-tdiv_qr.c\",\n"
    "        \"mpn-mul_fft.c\",\n"
    "        \"mpn-toom33_mul.c\",\n"
    "        \"mpn-toom_interpolate_16pts.c\",\n"
    "        \"mpz-fits_sint.c\",\n"
    "        \"mpz-tstbit.c\",\n"
    "        \"mpn-mul_n.c\",\n"
    "        \"mpn-toom3_sqr.c\",\n"
    "        \"mpn-toom_interpolate_5pts.c\",\n"
    "        \"mpz-fits_uint.c\",\n"
    "        \"mpz-xor.c\",\n"
    "        \"mpn-add.c\",\n"
    "        \"mpn-mulmod_bnm1.c\",\n"
    "        \"mpn-toom42_mul.c\",\n"
    "        \"mpn-toom_interpolate_6pts.c\",\n"
    "        \"mpz-get_si.c\",\n"
    "        \"mpn-add_1.c\",\n"
    "        \"mpn-nussbaumer_mul.c\",\n"
    "        \"mpn-toom43_mul.c\",\n"
    "        \"mpn-toom_interpolate_7pts.c\",\n"
    "        \"mpz-get_str.c\",\n"
    "        \"root-assert.c\",\n"
    "        \"mpn-add_n.c\",\n"
    "        \"mpn-pre_divrem_1.c\",\n"
    "        \"mpn-toom44_mul.c\",\n"
    "        \"mpn-toom_interpolate_8pts.c\",\n"
    "        \"mpz-get_ui.c\",\n"
    "        \"mpn-addmul_1.c\",\n"
    "        \"mpn-rshift.c\",\n"
    "        \"mpn-toom4_sqr.c\",\n"
    "        \"mpz-abs.c\",\n"
    "        \"mpz-init.c\",\n"
    "        \"root-errno.c\",\n"
    "        \"mpn-bdiv_dbm1c.c\",\n"
    "        \"mpn-sbpi1_div_qr.c\",\n"
    "        \"mpn-toom53_mul.c\",\n"
    "        \"mpz-add.c\",\n"
    "        \"mpz-ior.c\",\n"
    "        \"root-memory.c\",\n"
    "        \"mpn-cmp.c\",\n"
    "        \"mpn-sbpi1_divappr_q.c\",\n"
    "        \"mpn-toom63_mul.c\",\n"
    "        \"mpz-add_ui.c\",\n"
    "        \"mpz-mul.c\",\n"
    "        \"root-mp_bpl.c\",\n"
    "        \"mpn-dcpi1_div_qr.c\",\n"
    "        \"mpn-set_str.c\",\n"
    "        \"mpn-toom6_sqr.c\",\n"
    "        \"mpz-and.c\",\n"
    "        \"mpz-mul_2exp.c\",\n"
    "        \"root-mp_clz_tab.c\",\n"
    "        \"mpn-dive_1.c\",\n"
    "        \"mpn-sqr.c\",\n"
    "        \"mpn-toom6h_mul.c\",\n"
    "        \"mpz-neg.c\",\n"
    "        \"root-mp_dv_tab.c\",\n"
    "        \"mpn-divrem_1.c\",\n"
    "        \"mpn-sqr_basecase.c\",\n"
    "        \"mpn-toom8_sqr.c\",\n"
    "        \"mpz-cdiv_qr.c\",\n"
    "        \"mpz-realloc.c\",\n"
    "        \"root-mp_minv_tab.c\",\n"
    "        \"mpn-divrem_2.c\",\n"
    "        \"mpn-sqrmod_bnm1.c\",\n"
    "        \"mpn-toom8h_mul.c\",\n"
    "        \"mpz-cfdiv_q_2exp.c\",\n"
    "        \"mpz-set.c\",\n"
    "        \"root-tal-notreent.c\",\n"
    "        \"mpn-get_str.c\",\n"
    "        \"mpn-sub.c\",\n"
    "        \"mpn-toom_couple_handling.c\",\n"
    "        \"mpz-clear.c\",\n"
    "        \"mpz-set_str.c\",\n"
    "        \"mpz-mul_ui.c\",\n"
    "        \"mpz-cmp_ui.c\",\n"
    "        \"mpz-cmp_si.c\",\n"
    "        \"mpz-fdiv_q_ui.c\",\n"
    "        \"mpz-cdiv_q_ui.c\"\n"
    "    ],\n"
    "    \"USER_LINK_OPTIONS\"  :  [" ;
  GALGAS_uint index_3551_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3551 (in_TOOL_5F_LINK_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3551.hasCurrentObject ()) {
      result << "\n"
        "        \"" ;
      result << enumerator_3551.current_mValue (HERE).stringValue () ;
      result << "\"" ;
      if (enumerator_3551.hasNextObject ()) {
        result << "," ;
      }
      index_3551_.increment () ;
      enumerator_3551.gotoNextObject () ;
    }
  }
  result << "\n"
    "    ]\n"
    "}\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//     Project common header file                                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#pragma once\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#define PROJECT_VERSION_STRING \"" ;
  result << in_VERSION_5F_STRING.stringValue () ;
  result << "\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksWindowsTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksWindowsTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                    const GALGAS_string constinArgument_inProjectName,
                                                    const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                    const GALGAS_string constinArgument_inLIBPMpath,
                                                    const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                    const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                    const GALGAS_bool constinArgument_inVerboseOption,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_5261 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 93)) ;
  var_dir_5261.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 94)) ;
  GALGAS_string var_s_5344 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (true), GALGAS_string ("Windows"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 95))) ;
  GALGAS_bool joker_5699 ; // Joker input parameter
  var_s_5344.method_writeToFileWhenDifferentContents (var_dir_5261.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 105)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 105)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 105)), joker_5699, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 105)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksMacTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksMacTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                const GALGAS_string constinArgument_inProjectName,
                                                const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                const GALGAS_string constinArgument_inLIBPMpath,
                                                const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                const GALGAS_bool constinArgument_inVerboseOption,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_6146 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-mac"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 119)) ;
  var_dir_6146.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 120)) ;
  GALGAS_string var_s_6225 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Mac"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 121))) ;
  GALGAS_bool joker_6577 ; // Joker input parameter
  var_s_6225.method_writeToFileWhenDifferentContents (var_dir_6146.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 131)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 131)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 131)), joker_6577, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 131)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxI686Target'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target (const GALGAS_string constinArgument_inProjectDirectory,
                                                               const GALGAS_string constinArgument_inProjectName,
                                                               const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                               const GALGAS_string constinArgument_inLIBPMpath,
                                                               const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                               const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                               const GALGAS_bool constinArgument_inVerboseOption,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_7031 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 145)) ;
  var_dir_7031.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 146)) ;
  GALGAS_string var_s_7114 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 147))) ;
  GALGAS_bool joker_7467 ; // Joker input parameter
  var_s_7114.method_writeToFileWhenDifferentContents (var_dir_7031.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 157)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 157)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 157)), joker_7467, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 157)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxX86_64Target'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target (const GALGAS_string constinArgument_inProjectDirectory,
                                                                       const GALGAS_string constinArgument_inProjectName,
                                                                       const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                                       const GALGAS_string constinArgument_inLIBPMpath,
                                                                       const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                       const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                       const GALGAS_bool constinArgument_inVerboseOption,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_7922 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 171)) ;
  var_dir_7922.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 172)) ;
  GALGAS_string var_s_8005 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 173))) ;
  GALGAS_bool joker_8358 ; // Joker input parameter
  var_s_8005.method_writeToFileWhenDifferentContents (var_dir_7922.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)), joker_8358, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MinGWOnMacOSXTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MinGWOnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                    const GALGAS_string constinArgument_inProjectName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_8616 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 191)) ;
  var_dir_8616.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 192)) ;
  GALGAS_bool joker_8838 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193))).method_writeToExecutableFileWhenDifferentContents (var_dir_8616.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193)), joker_8838, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193)) ;
  GALGAS_bool joker_8990 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194))).method_writeToExecutableFileWhenDifferentContents (var_dir_8616.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194)), joker_8990, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194)) ;
  GALGAS_bool joker_9134 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195))).method_writeToExecutableFileWhenDifferentContents (var_dir_8616.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195)), joker_9134, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195)) ;
  GALGAS_bool joker_9282 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196))).method_writeToExecutableFileWhenDifferentContents (var_dir_8616.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196)), joker_9282, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196)) ;
  GALGAS_bool joker_9434 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197))).method_writeToExecutableFileWhenDifferentContents (var_dir_8616.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197)), joker_9434, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197)) ;
  GALGAS_bool joker_9593 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 198))).method_writeToExecutableFileWhenDifferentContents (var_dir_8616.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 199)), joker_9593, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 198)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_8616.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 202)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MakefileMacOSXTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MakefileMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                     const GALGAS_string constinArgument_inProjectName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_9905 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 210)) ;
  var_dir_9905.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 211)) ;
  GALGAS_bool joker_10112 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 212))).method_writeToExecutableFileWhenDifferentContents (var_dir_9905.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 212)), joker_10112, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 212)) ;
  GALGAS_bool joker_10258 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213))).method_writeToExecutableFileWhenDifferentContents (var_dir_9905.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213)), joker_10258, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213)) ;
  GALGAS_bool joker_10400 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214))).method_writeToExecutableFileWhenDifferentContents (var_dir_9905.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214)), joker_10400, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214)) ;
  GALGAS_bool joker_10546 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215))).method_writeToExecutableFileWhenDifferentContents (var_dir_9905.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)), joker_10546, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)) ;
  GALGAS_bool joker_10684 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216))).method_writeToExecutableFileWhenDifferentContents (var_dir_9905.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)), joker_10684, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)) ;
  GALGAS_bool joker_10818 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217))).method_writeToExecutableFileWhenDifferentContents (var_dir_9905.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)), joker_10818, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)) ;
  GALGAS_bool joker_10963 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218))).method_writeToExecutableFileWhenDifferentContents (var_dir_9905.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)), joker_10963, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_9905.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3MakefileUnixTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_MakefileUnixTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                   const GALGAS_string constinArgument_inProjectName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_11270 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 227)) ;
  var_dir_11270.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 228)) ;
  GALGAS_bool joker_11473 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 229))).method_writeToExecutableFileWhenDifferentContents (var_dir_11270.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 229)), joker_11473, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 229)) ;
  GALGAS_bool joker_11617 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 230))).method_writeToExecutableFileWhenDifferentContents (var_dir_11270.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 230)), joker_11617, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 230)) ;
  GALGAS_bool joker_11753 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 231))).method_writeToExecutableFileWhenDifferentContents (var_dir_11270.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 231)), joker_11753, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 231)) ;
  GALGAS_bool joker_11893 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232))).method_writeToExecutableFileWhenDifferentContents (var_dir_11270.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232)), joker_11893, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232)) ;
  GALGAS_bool joker_12037 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233))).method_writeToExecutableFileWhenDifferentContents (var_dir_11270.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233)), joker_12037, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233)) ;
  GALGAS_bool joker_12169 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234))).method_writeToExecutableFileWhenDifferentContents (var_dir_11270.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234)), joker_12169, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234)) ;
  GALGAS_bool joker_12312 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235))).method_writeToExecutableFileWhenDifferentContents (var_dir_11270.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)), joker_12312, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_11270.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3Linux32OnMacOSXTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                            const GALGAS_string constinArgument_inProjectName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_12622 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 244)) ;
  var_dir_12622.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 245)) ;
  GALGAS_bool joker_12854 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 246))).method_writeToExecutableFileWhenDifferentContents (var_dir_12622.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 246)), joker_12854, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 246)) ;
  GALGAS_bool joker_13011 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 247))).method_writeToExecutableFileWhenDifferentContents (var_dir_12622.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 247)), joker_13011, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 247)) ;
  GALGAS_bool joker_13160 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 248))).method_writeToExecutableFileWhenDifferentContents (var_dir_12622.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 248)), joker_13160, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 248)) ;
  GALGAS_bool joker_13313 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249))).method_writeToExecutableFileWhenDifferentContents (var_dir_12622.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249)), joker_13313, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249)) ;
  GALGAS_bool joker_13470 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250))).method_writeToExecutableFileWhenDifferentContents (var_dir_12622.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250)), joker_13470, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250)) ;
  GALGAS_bool joker_13626 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251))).method_writeToExecutableFileWhenDifferentContents (var_dir_12622.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251)), joker_13626, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_12622.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgas3Linux64OnMacOSXTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                            const GALGAS_string constinArgument_inProjectName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_13936 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 260)) ;
  var_dir_13936.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 261)) ;
  GALGAS_bool joker_14168 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 262))).method_writeToExecutableFileWhenDifferentContents (var_dir_13936.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 262)), joker_14168, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 262)) ;
  GALGAS_bool joker_14325 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 263))).method_writeToExecutableFileWhenDifferentContents (var_dir_13936.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 263)), joker_14325, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 263)) ;
  GALGAS_bool joker_14474 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 264))).method_writeToExecutableFileWhenDifferentContents (var_dir_13936.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 264)), joker_14474, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 264)) ;
  GALGAS_bool joker_14627 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 265))).method_writeToExecutableFileWhenDifferentContents (var_dir_13936.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 265)), joker_14627, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 265)) ;
  GALGAS_bool joker_14784 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266))).method_writeToExecutableFileWhenDifferentContents (var_dir_13936.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266)), joker_14784, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266)) ;
  GALGAS_bool joker_14940 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267))).method_writeToExecutableFileWhenDifferentContents (var_dir_13936.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267)), joker_14940, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_13936.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 268)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgas3Targets'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_updateGalgas_33_Targets (const GALGAS_string constinArgument_inProjectSourceFilePath,
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
  GALGAS_string var_projectDirectory_15935 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 293)) ;
  GALGAS_bool joker_16254 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 295))).method_writeToFileWhenDifferentContents (constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 296)).add_operation (GALGAS_string ("/build/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 296)), joker_16254, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 295)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 299)) ;
  GALGAS_stringlist var_toolCppFileList_16409 = constinArgument_inToolCppFileList ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_toolCppFileList_16409.addAssign_operation (GALGAS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 303)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_toolCppFileList_16409.addAssign_operation (GALGAS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 305)) ;
  }
  GALGAS_lstring var_macCodeSign_16682 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_16689 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("macCodeSign")) ;
  if (NULL != objectArray_16689) {
      macroValidSharedObject (objectArray_16689, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, objectArray_16689->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (objectArray_16689->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the %macCodeSign attribute should not be empty"), fixItArray2  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 311)) ;
        var_macCodeSign_16682.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_1) {
      var_macCodeSign_16682 = objectArray_16689->mProperty_mFeatureValue ;
    }
  }else{
    var_macCodeSign_16682 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 316)) ;
  }
  GALGAS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17078 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_17085 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("MacOSDeployment")) ;
  if (NULL != objectArray_17085) {
      macroValidSharedObject (objectArray_17085, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, objectArray_17085->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (objectArray_17085->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the %MacOSDeployment attribute should not be empty"), fixItArray4  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 322)) ;
        var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17078.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17078 = objectArray_17085->mProperty_mFeatureValue.readProperty_string () ;
    }
  }else{
    var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17078 = GALGAS_string ("10.10").getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 327)).readProperty_string () ;
  }
  GALGAS_string var_libpmPath_17506 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_17513 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("libpmAtPath")) ;
  if (NULL != objectArray_17513) {
      macroValidSharedObject (objectArray_17513, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsEqual, objectArray_17513->mProperty_mFeatureValue.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (objectArray_17513->mProperty_mFeatureValue.readProperty_location (), GALGAS_string ("the libpm path should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 333)) ;
        var_libpmPath_17506.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      var_libpmPath_17506 = objectArray_17513->mProperty_mFeatureValue.readProperty_string () ;
    }
  }else{
    {
    routine_updateLIBPMatPath (constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 338)).add_operation (GALGAS_string ("/build/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 338)) ;
    }
    var_libpmPath_17506 = GALGAS_string ("../build/libpm") ;
  }
  GALGAS_stringset var_availableGenerationFeatures_18063 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 343)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 344)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 345)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 346)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 347)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("codeblocks-mac")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 348)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 349)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 350)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 351)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 352)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 353)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("SnowLeopard")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 354)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("Lion")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 355)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("MountainLion")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 356)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("Mavericks")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 357)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("Yosemite")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 358)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("ElCapitanYosemite")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 359)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("SierraElCapitan")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 360)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("ElCapitan")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 361)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("Sierra")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 362)) ;
  var_availableGenerationFeatures_18063.addAssign_operation (GALGAS_string ("LatestMacOS")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 363)) ;
  GALGAS_stringset var_generationFeatures_19144 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 364)) ;
  GALGAS_string var_SDK_19205 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_19223 (constinArgument_inTargetFeatureList, kENUMERATION_UP) ;
  while (enumerator_19223.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_availableGenerationFeatures_18063.getter_hasKey (enumerator_19223.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 368)).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_generationFeatures_19144.getter_hasKey (enumerator_19223.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 369)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicate '").add_operation (enumerator_19223.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 370)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 370)), fixItArray9  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 370)) ;
          }
        }
        GALGAS_string var_macOsDuplicateMessage_19468 = GALGAS_string ("the \"%SnowLeopard\", \"%Lion\", \"%MountainLion\", \"%Mavericks\", \"%Yosemite\", \"%ElCapitanYosemite\", \"%ElCapitan\", \"%ElCapitanSierra\", \"%Sierra\", \"%LatestMac"
          "OS\" are exclusive") ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("SnowLeopard"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray12  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 377)) ;
              }
            }
            var_SDK_19205 = GALGAS_string ("macosx10.6") ;
          }
        }
        if (kBoolFalse == test_10) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("Lion"))).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray15  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 383)) ;
                }
              }
              var_SDK_19205 = GALGAS_string ("macosx10.7") ;
            }
          }
          if (kBoolFalse == test_13) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("MountainLion"))).boolEnum () ;
              if (kBoolTrue == test_16) {
                enumGalgasBool test_17 = kBoolTrue ;
                if (kBoolTrue == test_17) {
                  test_17 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    TC_Array <C_FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray18  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 389)) ;
                  }
                }
                var_SDK_19205 = GALGAS_string ("macosx10.8") ;
              }
            }
            if (kBoolFalse == test_16) {
              enumGalgasBool test_19 = kBoolTrue ;
              if (kBoolTrue == test_19) {
                test_19 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("Mavericks"))).boolEnum () ;
                if (kBoolTrue == test_19) {
                  enumGalgasBool test_20 = kBoolTrue ;
                  if (kBoolTrue == test_20) {
                    test_20 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_20) {
                      TC_Array <C_FixItDescription> fixItArray21 ;
                      inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray21  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 395)) ;
                    }
                  }
                  var_SDK_19205 = GALGAS_string ("macosx10.9") ;
                }
              }
              if (kBoolFalse == test_19) {
                enumGalgasBool test_22 = kBoolTrue ;
                if (kBoolTrue == test_22) {
                  test_22 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("Yosemite"))).boolEnum () ;
                  if (kBoolTrue == test_22) {
                    enumGalgasBool test_23 = kBoolTrue ;
                    if (kBoolTrue == test_23) {
                      test_23 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                      if (kBoolTrue == test_23) {
                        TC_Array <C_FixItDescription> fixItArray24 ;
                        inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray24  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 401)) ;
                      }
                    }
                    var_SDK_19205 = GALGAS_string ("macosx10.10") ;
                  }
                }
                if (kBoolFalse == test_22) {
                  enumGalgasBool test_25 = kBoolTrue ;
                  if (kBoolTrue == test_25) {
                    test_25 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("ElCapitanYosemite"))).boolEnum () ;
                    if (kBoolTrue == test_25) {
                      enumGalgasBool test_26 = kBoolTrue ;
                      if (kBoolTrue == test_26) {
                        test_26 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                        if (kBoolTrue == test_26) {
                          TC_Array <C_FixItDescription> fixItArray27 ;
                          inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray27  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 407)) ;
                        }
                      }
                      var_SDK_19205 = GALGAS_string ("macosx10.11") ;
                    }
                  }
                  if (kBoolFalse == test_25) {
                    enumGalgasBool test_28 = kBoolTrue ;
                    if (kBoolTrue == test_28) {
                      test_28 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("ElCapitan"))).boolEnum () ;
                      if (kBoolTrue == test_28) {
                        enumGalgasBool test_29 = kBoolTrue ;
                        if (kBoolTrue == test_29) {
                          test_29 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                          if (kBoolTrue == test_29) {
                            TC_Array <C_FixItDescription> fixItArray30 ;
                            inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray30  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 413)) ;
                          }
                        }
                        var_SDK_19205 = GALGAS_string ("macosx10.11") ;
                      }
                    }
                    if (kBoolFalse == test_28) {
                      enumGalgasBool test_31 = kBoolTrue ;
                      if (kBoolTrue == test_31) {
                        test_31 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("SierraElCapitan"))).boolEnum () ;
                        if (kBoolTrue == test_31) {
                          enumGalgasBool test_32 = kBoolTrue ;
                          if (kBoolTrue == test_32) {
                            test_32 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                            if (kBoolTrue == test_32) {
                              TC_Array <C_FixItDescription> fixItArray33 ;
                              inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray33  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 419)) ;
                            }
                          }
                          var_SDK_19205 = GALGAS_string ("macosx10.12") ;
                        }
                      }
                      if (kBoolFalse == test_31) {
                        enumGalgasBool test_34 = kBoolTrue ;
                        if (kBoolTrue == test_34) {
                          test_34 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("Sierra"))).boolEnum () ;
                          if (kBoolTrue == test_34) {
                            enumGalgasBool test_35 = kBoolTrue ;
                            if (kBoolTrue == test_35) {
                              test_35 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                              if (kBoolTrue == test_35) {
                                TC_Array <C_FixItDescription> fixItArray36 ;
                                inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray36  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 425)) ;
                              }
                            }
                            var_SDK_19205 = GALGAS_string ("macosx10.12") ;
                          }
                        }
                        if (kBoolFalse == test_34) {
                          enumGalgasBool test_37 = kBoolTrue ;
                          if (kBoolTrue == test_37) {
                            test_37 = GALGAS_bool (kIsEqual, enumerator_19223.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("LatestMacOS"))).boolEnum () ;
                            if (kBoolTrue == test_37) {
                              enumGalgasBool test_38 = kBoolTrue ;
                              if (kBoolTrue == test_38) {
                                test_38 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                                if (kBoolTrue == test_38) {
                                  TC_Array <C_FixItDescription> fixItArray39 ;
                                  inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), var_macOsDuplicateMessage_19468, fixItArray39  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 431)) ;
                                }
                              }
                              var_SDK_19205 = GALGAS_string ("macosx") ;
                            }
                          }
                          if (kBoolFalse == test_37) {
                            var_generationFeatures_19144.addAssign_operation (enumerator_19223.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 435)) ;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_7) {
      GALGAS_stringlist var_s_21558 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 438)) ;
      cEnumerator_stringset enumerator_21578 (var_availableGenerationFeatures_18063, kENUMERATION_UP) ;
      while (enumerator_21578.hasCurrentObject ()) {
        var_s_21558.addAssign_operation (GALGAS_string ("%").add_operation (enumerator_21578.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 440))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 440)) ;
        enumerator_21578.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray40 ;
      appendFixItActions (fixItArray40, kFixItReplace, var_s_21558) ;
      inCompiler->emitSemanticError (enumerator_19223.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown '").add_operation (enumerator_19223.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 442)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 442)), fixItArray40  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 442)) ;
    }
    enumerator_19223.gotoNextObject () ;
  }
  enumGalgasBool test_41 = kBoolTrue ;
  if (kBoolTrue == test_41) {
    GALGAS_bool test_42 = GALGAS_bool (kIsNotEqual, var_macCodeSign_16682.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
    if (kBoolTrue == test_42.boolEnum ()) {
      test_42 = GALGAS_bool (kIsEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_41 = test_42.boolEnum () ;
    if (kBoolTrue == test_41) {
      TC_Array <C_FixItDescription> fixItArray43 ;
      inCompiler->emitSemanticError (var_macCodeSign_16682.readProperty_location (), GALGAS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%SnowLeopard\", \"%Lion\", \"%MountainLion\", \"%Mavericks\", \"%Yosemite\", \"%ElCa"
        "pitanYosemite\", \"%ElCapitan\", \"%ElCapitanSierra\", \"%Sierra\", \"%LatestMacOS\""), fixItArray43  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 447)) ;
    }
  }
  enumGalgasBool test_44 = kBoolTrue ;
  if (kBoolTrue == test_44) {
    test_44 = GALGAS_bool (kIsNotEqual, GALGAS_uint (gOption_galgas_5F_cli_5F_options_macosxSDK.readProperty_value ()).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      var_SDK_19205 = GALGAS_string ("macosx10.").add_operation (GALGAS_uint (gOption_galgas_5F_cli_5F_options_macosxSDK.readProperty_value ()).getter_string (SOURCE_FILE ("galgasTargetGeneration.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 453)) ;
    }
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    test_45 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_45) {
      test_45 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GALGAS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 456)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 456)).boolEnum () ;
      if (kBoolTrue == test_45) {
        TC_Array <C_FixItDescription> fixItArray46 ;
        inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 457)), GALGAS_string ("For a Cocoa project, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray46  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 457)) ;
      }
    }
  }
  enumGalgasBool test_47 = kBoolTrue ;
  if (kBoolTrue == test_47) {
    test_47 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 460)).boolEnum () ;
    if (kBoolTrue == test_47) {
      {
      routine_generateGalgas_33_MakefileMacOSXTarget (var_projectDirectory_15935, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 461)) ;
      }
    }
  }
  enumGalgasBool test_48 = kBoolTrue ;
  if (kBoolTrue == test_48) {
    test_48 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 463)).boolEnum () ;
    if (kBoolTrue == test_48) {
      {
      routine_generateGalgas_33_MakefileUnixTarget (var_projectDirectory_15935, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 464)) ;
      }
    }
  }
  enumGalgasBool test_49 = kBoolTrue ;
  if (kBoolTrue == test_49) {
    test_49 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 466)).boolEnum () ;
    if (kBoolTrue == test_49) {
      {
      routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget (var_projectDirectory_15935, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 467)) ;
      }
    }
  }
  enumGalgasBool test_50 = kBoolTrue ;
  if (kBoolTrue == test_50) {
    test_50 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 469)).boolEnum () ;
    if (kBoolTrue == test_50) {
      {
      routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget (var_projectDirectory_15935, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 470)) ;
      }
    }
  }
  enumGalgasBool test_51 = kBoolTrue ;
  if (kBoolTrue == test_51) {
    test_51 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 472)).boolEnum () ;
    if (kBoolTrue == test_51) {
      {
      routine_generateGalgas_33_MinGWOnMacOSXTarget (var_projectDirectory_15935, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 473)) ;
      }
    }
  }
  enumGalgasBool test_52 = kBoolTrue ;
  if (kBoolTrue == test_52) {
    test_52 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 475)).boolEnum () ;
    if (kBoolTrue == test_52) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget (var_projectDirectory_15935, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_17506, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 476)) ;
      }
    }
  }
  enumGalgasBool test_53 = kBoolTrue ;
  if (kBoolTrue == test_53) {
    test_53 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("codeblocks-mac") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 486)).boolEnum () ;
    if (kBoolTrue == test_53) {
      {
      routine_generateGalgasCodeBlocksMacTarget (var_projectDirectory_15935, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_17506, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 487)) ;
      }
    }
  }
  enumGalgasBool test_54 = kBoolTrue ;
  if (kBoolTrue == test_54) {
    test_54 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 497)).boolEnum () ;
    if (kBoolTrue == test_54) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target (var_projectDirectory_15935, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_17506, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 498)) ;
      }
    }
  }
  enumGalgasBool test_55 = kBoolTrue ;
  if (kBoolTrue == test_55) {
    test_55 = var_generationFeatures_19144.getter_hasKey (GALGAS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 508)).boolEnum () ;
    if (kBoolTrue == test_55) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target (var_projectDirectory_15935, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_17506, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 509)) ;
      }
    }
  }
  GALGAS_stringlist var_linkOptionForLinkingFrameworkWithTool_24645 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 520)) ;
  enumGalgasBool test_56 = kBoolTrue ;
  if (kBoolTrue == test_56) {
    test_56 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_length (SOURCE_FILE ("galgasTargetGeneration.galgas", 521)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_56) {
      enumGalgasBool test_57 = kBoolTrue ;
      if (kBoolTrue == test_57) {
        test_57 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string ("macosx"))).boolEnum () ;
        if (kBoolTrue == test_57) {
          var_linkOptionForLinkingFrameworkWithTool_24645.addAssign_operation (GALGAS_string ("-isysroot")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 523)) ;
          var_linkOptionForLinkingFrameworkWithTool_24645.addAssign_operation (GALGAS_string ("/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/").add_operation (var_SDK_19205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524)).add_operation (GALGAS_string (".sdk"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524)) ;
        }
      }
      cEnumerator_stringlist enumerator_24954 (constinArgument_inFrameworkToolFileList, kENUMERATION_UP) ;
      while (enumerator_24954.hasCurrentObject ()) {
        var_linkOptionForLinkingFrameworkWithTool_24645.addAssign_operation (GALGAS_string ("-framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 527)) ;
        var_linkOptionForLinkingFrameworkWithTool_24645.addAssign_operation (enumerator_24954.current_mValue (HERE).getter_stringByDeletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 528))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 528)) ;
        enumerator_24954.gotoNextObject () ;
      }
    }
  }
  GALGAS_stringlist var_handCodedSourceToolFileList_25215 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 532)) ;
  cEnumerator_stringlist enumerator_25229 (constinArgument_inHandCodedSourceToolFileList, kENUMERATION_UP) ;
  while (enumerator_25229.hasCurrentObject ()) {
    enumGalgasBool test_58 = kBoolTrue ;
    if (kBoolTrue == test_58) {
      test_58 = GALGAS_bool (kIsNotEqual, enumerator_25229.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 534)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
      if (kBoolTrue == test_58) {
        var_handCodedSourceToolFileList_25215.addAssign_operation (enumerator_25229.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 535))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 535)) ;
      }
    }
    enumerator_25229.gotoNextObject () ;
  }
  GALGAS_string var_jsonFileListContents_25404 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, constinArgument_inHandCodedSourceDirectorySet, var_handCodedSourceToolFileList_25215, var_toolCppFileList_16409, var_linkOptionForLinkingFrameworkWithTool_24645.add_operation (constinArgument_inHandCodedLinkToolFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 542)), var_libpmPath_17506 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 538))) ;
  GALGAS_string var_jsonFileListPath_25673 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 545)).add_operation (GALGAS_string ("/build/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 545)) ;
  GALGAS_bool joker_25845 ; // Joker input parameter
  var_jsonFileListContents_25404.method_writeToFileWhenDifferentContents (var_jsonFileListPath_25673, joker_25845, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)) ;
  enumGalgasBool test_59 = kBoolTrue ;
  if (kBoolTrue == test_59) {
    test_59 = GALGAS_bool (kIsNotEqual, var_SDK_19205.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_59) {
      GALGAS_string var_dir_25967 = var_projectDirectory_15935.add_operation (GALGAS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 550)) ;
      var_dir_25967.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 551)) ;
      GALGAS_string var_applicationBundleBase_26085 ;
      const cMapElement_projectQualifiedFeatureMap * objectArray_26094 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("applicationBundleBase")) ;
      if (NULL != objectArray_26094) {
          macroValidSharedObject (objectArray_26094, cMapElement_projectQualifiedFeatureMap) ;
        var_applicationBundleBase_26085 = objectArray_26094->mProperty_mFeatureValue.readProperty_string () ;
      }else{
        var_applicationBundleBase_26085 = GALGAS_string ("fr.irccyn") ;
      }
      GALGAS_string var_InfoPlistContents_26290 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_26085, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17078 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 559))) ;
      GALGAS_bool joker_26584 ; // Joker input parameter
      var_InfoPlistContents_26290.method_writeToFileWhenDifferentContents (var_dir_25967.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 566)), joker_26584, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 566)) ;
      enumGalgasBool test_60 = kBoolTrue ;
      if (kBoolTrue == test_60) {
        test_60 = var_dir_25967.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 568)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 568)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 568)).boolEnum () ;
        if (kBoolTrue == test_60) {
          GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569))).method_writeToExecutableFile (var_dir_25967.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569)) ;
        }
      }
      var_dir_25967.add_operation (GALGAS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 572)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 572)) ;
      GALGAS_string var_InfoPlist_5F_strings_5F_path_26861 = var_dir_25967.add_operation (GALGAS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 573)) ;
      GALGAS_bool joker_27056 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 574))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_26861, joker_27056, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 574)) ;
      GALGAS_string var_Credits_5F_rtf_5F_path_27083 = var_dir_25967.add_operation (GALGAS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 575)) ;
      enumGalgasBool test_61 = kBoolTrue ;
      if (kBoolTrue == test_61) {
        test_61 = var_Credits_5F_rtf_5F_path_27083.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 576)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 576)).boolEnum () ;
        if (kBoolTrue == test_61) {
          GALGAS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_27083, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 577)) ;
        }
      }
      GALGAS_string var_userResourceDir_27379 = var_projectDirectory_15935.add_operation (GALGAS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 580)) ;
      var_userResourceDir_27379.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 581)) ;
      GALGAS_stringlist temp_62 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 582)) ;
      temp_62.addAssign_operation (GALGAS_string ("icns")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 582)) ;
      GALGAS_stringlist var_extensionList_27501 = temp_62 ;
      GALGAS_stringlist var_resourceFiles_27535 = var_userResourceDir_27379.getter_regularFilesWithExtensions (GALGAS_bool (false), var_extensionList_27501 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 583)) ;
      GALGAS_string var_newIntermediateFilePath_27656 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 585)).add_operation (GALGAS_string ("/build/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 585)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 586)) ;
      GALGAS_XcodeProjectDescriptor var_xcodeProject_27940 = GALGAS_XcodeProjectDescriptor::constructor_default (SOURCE_FILE ("galgasTargetGeneration.galgas", 588)) ;
      var_xcodeProject_27940.setter_setMApplicationBundleName (var_applicationBundleBase_26085 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 589)) ;
      var_xcodeProject_27940.setter_setMProjectName (constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 590)) ;
      GALGAS_string var_headerSearchPaths_28109 = GALGAS_string ("HEADER_SEARCH_PATHS = (\"../build/output\", \"../build/libpm\", \"../build/user-headers\"") ;
      cEnumerator_stringset enumerator_28254 (constinArgument_inHandCodedSourceDirectorySet, kENUMERATION_UP) ;
      while (enumerator_28254.hasCurrentObject ()) {
        var_headerSearchPaths_28109.plusAssign_operation(GALGAS_string (", \"").add_operation (enumerator_28254.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)) ;
        enumerator_28254.gotoNextObject () ;
      }
      var_headerSearchPaths_28109.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 595)) ;
      GALGAS_stringlist temp_63 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 631)) ;
      temp_63.addAssign_operation (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 598)) ;
      temp_63.addAssign_operation (GALGAS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 599)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 600)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 601)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 602)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 603)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 606)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 607)) ;
      temp_63.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 608)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 609)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 610)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 611)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 612)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 613)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 615)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 616)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 617)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 618)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 619)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_SHADOW = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 620)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 621)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 622)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 623)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 624)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 625)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 626)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 627)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 628)) ;
      temp_63.addAssign_operation (var_headerSearchPaths_28109  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 629)) ;
      temp_63.addAssign_operation (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_19205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 630))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 630)) ;
      temp_63.addAssign_operation (GALGAS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 631)) ;
      GALGAS_stringlist var_xcodeSettingList_28422 = temp_63 ;
      enumGalgasBool test_64 = kBoolTrue ;
      if (kBoolTrue == test_64) {
        test_64 = GALGAS_bool (kIsEqual, var_SDK_19205.objectCompare (GALGAS_string ("macosx10.6"))).boolEnum () ;
        if (kBoolTrue == test_64) {
          var_xcodeSettingList_28422.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 634)) ;
          var_xcodeSettingList_28422.addAssign_operation (GALGAS_string ("GCC_ENABLE_OBJC_GC = required")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 635)) ;
        }
      }
      if (kBoolFalse == test_64) {
        var_xcodeSettingList_28422.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 637)) ;
      }
      enumGalgasBool test_65 = kBoolTrue ;
      if (kBoolTrue == test_65) {
        test_65 = GALGAS_bool (kIsNotEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17078.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_65) {
          var_xcodeSettingList_28422.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17078, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 640)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 640))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 640)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_27940, var_xcodeSettingList_28422, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 642)) ;
      }
      GALGAS_stringlist var_m_5F_HandCodedSourceFileRefForAppList_30488 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 644)) ;
      GALGAS_stringlist var_m_5F_HandCodedResourceFileRefForAppList_30550 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 645)) ;
      enumGalgasBool test_66 = kBoolTrue ;
      if (kBoolTrue == test_66) {
        test_66 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceAppFileList.getter_length (SOURCE_FILE ("galgasTargetGeneration.galgas", 646)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_66) {
          GALGAS_stringlist joker_30821 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 651)) ;
          GALGAS_stringlist joker_30845 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 652)) ;
          GALGAS_stringlist joker_30923 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 654)) ;
          GALGAS_stringlist joker_30953 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 655)) ;
          GALGAS_string var_groupRef_31057 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Hand Coded Sources (App)"), GALGAS_string ("../"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedSourceAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 650)), joker_30821, joker_30845, var_m_5F_HandCodedSourceFileRefForAppList_30488, joker_30923, joker_30953, var_m_5F_HandCodedResourceFileRefForAppList_30550, var_groupRef_31057, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 647)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_groupRef_31057, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 659)) ;
          }
        }
      }
      GALGAS_stringlist var_appFrameworksFileRefList_31220 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 662)) ;
      enumGalgasBool test_67 = kBoolTrue ;
      if (kBoolTrue == test_67) {
        test_67 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkAppFileList.getter_length (SOURCE_FILE ("galgasTargetGeneration.galgas", 663)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_67) {
          GALGAS_stringlist joker_31503 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 668)) ;
          GALGAS_stringlist joker_31527 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 669)) ;
          GALGAS_stringlist joker_31549 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 670)) ;
          GALGAS_stringlist joker_31572 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 671)) ;
          GALGAS_stringlist joker_31654 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 673)) ;
          GALGAS_string var_frameworkGroupRef_31703 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Frameworks (App)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 667)), joker_31503, joker_31527, joker_31549, joker_31572, var_appFrameworksFileRefList_31220, joker_31654, var_frameworkGroupRef_31703, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 664)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_frameworkGroupRef_31703, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 676)) ;
          }
        }
      }
      GALGAS_stringlist var_buildCFileRefListForTool_31858 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 679)) ;
      GALGAS_stringlist var_buildCppFileRefListForTool_31910 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 680)) ;
      GALGAS_stringlist var_m_5F_FileRefList_31949 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 681)) ;
      GALGAS_stringlist var_mm_5F_FileRefList_31989 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 682)) ;
      GALGAS_stringlist var_frameworksFileRefList_32036 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 683)) ;
      GALGAS_stringlist var_resourceFileBuildRefs_32083 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 684)) ;
      enumGalgasBool test_68 = kBoolTrue ;
      if (kBoolTrue == test_68) {
        test_68 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceToolFileList.getter_length (SOURCE_FILE ("galgasTargetGeneration.galgas", 686)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_68) {
          GALGAS_string var_groupRef_32683 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Hand Coded Sources (Tool)"), GALGAS_string ("../"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 690)), var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_32683, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 687)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_groupRef_32683, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 699)) ;
          }
        }
      }
      GALGAS_stringlist var_toolFrameworksFileRefList_32848 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 702)) ;
      enumGalgasBool test_69 = kBoolTrue ;
      if (kBoolTrue == test_69) {
        test_69 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_length (SOURCE_FILE ("galgasTargetGeneration.galgas", 703)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_69) {
          GALGAS_stringlist joker_33125 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 708)) ;
          GALGAS_stringlist joker_33149 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 709)) ;
          GALGAS_stringlist joker_33171 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 710)) ;
          GALGAS_stringlist joker_33194 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 711)) ;
          GALGAS_stringlist joker_33277 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 713)) ;
          GALGAS_string var_frameworkGroupRef_33326 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Frameworks (Tool)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 707)), joker_33125, joker_33149, joker_33171, joker_33194, var_toolFrameworksFileRefList_32848, joker_33277, var_frameworkGroupRef_33326, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 704)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_frameworkGroupRef_33326, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 716)) ;
          }
        }
      }
      GALGAS_string var_groupRef_33967 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Generated by GALGAS"), GALGAS_string ("../build/output"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 722)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 722))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 722)), var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 719)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 731)) ;
      }
      GALGAS_stringlist var_libpmReferenceGroupList_34079 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 732)) ;
      {
      GALGAS_stringset temp_70 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 749)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_RelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 738)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_RelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 739)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_Relation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 740)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_Relation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 741)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_RelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 742)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_RelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 743)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD-and-operation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 744)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD-find-or-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 745)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 746)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD-single-operand-ops.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 747)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 748)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 749)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Binary Decision Diagrams"), GALGAS_string ("bdd"), temp_70, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 734)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 759)) ;
      {
      GALGAS_stringset temp_71 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 764)) ;
      temp_71.addAssign_operation (GALGAS_string ("TC_prime_cache2.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 764)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Cache"), GALGAS_string ("cache"), temp_71, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 761)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 773)) ;
      {
      GALGAS_stringset temp_72 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 783)) ;
      temp_72.addAssign_operation (GALGAS_string ("main.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 779)) ;
      temp_72.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 780)) ;
      temp_72.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 781)) ;
      temp_72.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 782)) ;
      temp_72.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 783)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Cocoa Utilities"), GALGAS_string ("cocoa_utilities"), temp_72, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 775)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 793)) ;
      {
      GALGAS_stringset temp_73 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 849)) ;
      temp_73.addAssign_operation (GALGAS_string ("Base.lproj/OC_GGS_Document.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 799)) ;
      temp_73.addAssign_operation (GALGAS_string ("Base.lproj/PMDebug.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 800)) ;
      temp_73.addAssign_operation (GALGAS_string ("Base.lproj/MainMenu.xib")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 801)) ;
      temp_73.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 802)) ;
      temp_73.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 803)) ;
      temp_73.addAssign_operation (GALGAS_string ("F_CocoaWrapperForGalgas.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 804)) ;
      temp_73.addAssign_operation (GALGAS_string ("I_Stop.tiff")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 805)) ;
      temp_73.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 806)) ;
      temp_73.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 807)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 808)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 809)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 810)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 811)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_ColorTransformer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 812)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_ColorTransformer.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 813)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 814)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 815)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_Document.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 816)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_Document.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 817)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 818)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 819)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 820)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 821)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 822)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 823)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 824)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 825)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 826)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 827)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 828)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 829)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextView.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 830)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextView.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 831)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 832)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_Lexique.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 833)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_Token.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 834)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_Token.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 835)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMDebug.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 836)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMDebug.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 837)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMFontButton.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 838)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMFontButton.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 839)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 840)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMIssueDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 841)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMIssueInRuler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 842)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMIssueInRuler.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 843)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 844)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 845)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMTableViewRefusesFirstResponder.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 846)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMTableViewRefusesFirstResponder.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 847)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMUndoManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 848)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMUndoManager.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 849)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Cocoa GALGAS"), GALGAS_string ("cocoa_galgas"), temp_73, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 795)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 859)) ;
      {
      GALGAS_stringset temp_74 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 871)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_LinkedList.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 865)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_FIFO.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 866)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_UniqueSparseArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 867)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_Array.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 868)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_Array2.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 869)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_UniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 870)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_UniqueArray2.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 871)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Collections"), GALGAS_string ("collections"), temp_74, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 861)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 881)) ;
      {
      GALGAS_stringset temp_75 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 902)) ;
      temp_75.addAssign_operation (GALGAS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 887)) ;
      temp_75.addAssign_operation (GALGAS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 888)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 889)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 890)) ;
      temp_75.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 891)) ;
      temp_75.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 892)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_CommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 893)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 894)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 895)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 896)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 897)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 898)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 899)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 900)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 901)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 902)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Command line Interface"), GALGAS_string ("command_line_interface"), temp_75, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 883)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 912)) ;
      {
      GALGAS_stringset temp_76 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 929)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 918)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 919)) ;
      temp_76.addAssign_operation (GALGAS_string ("AC_FileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 920)) ;
      temp_76.addAssign_operation (GALGAS_string ("AC_FileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 921)) ;
      temp_76.addAssign_operation (GALGAS_string ("AC_FileHandleForWriting.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 922)) ;
      temp_76.addAssign_operation (GALGAS_string ("AC_FileHandleForWriting.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 923)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 924)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 925)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 926)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 927)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_HTML_FileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 928)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_HTML_FileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 929)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("File"), GALGAS_string ("files"), temp_76, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 914)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 939)) ;
      {
      GALGAS_stringset temp_77 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1042)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 945)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 946)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_value_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 947)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_value_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 948)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 949)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 950)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 951)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 952)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_list.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 953)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_list.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 954)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_map.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 955)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_map.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 956)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 957)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 958)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 959)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 960)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_uniqueMap.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 961)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_uniqueMap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 962)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 963)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 964)) ;
      temp_77.addAssign_operation (GALGAS_string ("acPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 965)) ;
      temp_77.addAssign_operation (GALGAS_string ("acPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 966)) ;
      temp_77.addAssign_operation (GALGAS_string ("acStrongPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 967)) ;
      temp_77.addAssign_operation (GALGAS_string ("acStrongPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 968)) ;
      temp_77.addAssign_operation (GALGAS_string ("cPtr_weakReference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 969)) ;
      temp_77.addAssign_operation (GALGAS_string ("cPtr_weakReference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 970)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 971)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 972)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 973)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 974)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 975)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 976)) ;
      GALGAS_string temp_78 ;
      const enumGalgasBool test_79 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_79) {
        temp_78 = GALGAS_string ("C_galgas_verbose_option.cpp") ;
      }else if (kBoolFalse == test_79) {
        temp_78 = GALGAS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_77.addAssign_operation (temp_78  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 977)) ;
      GALGAS_string temp_80 ;
      const enumGalgasBool test_81 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_81) {
        temp_80 = GALGAS_string ("C_galgas_verbose_option.h") ;
      }else if (kBoolFalse == test_81) {
        temp_80 = GALGAS_string ("C_galgas_quiet_option.h") ;
      }
      temp_77.addAssign_operation (temp_80  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 978)) ;
      temp_77.addAssign_operation (GALGAS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 979)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 980)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 981)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_io.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 982)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_io.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 983)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 984)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 985)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 986)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 987)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 988)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 989)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 990)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 991)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 992)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 993)) ;
      temp_77.addAssign_operation (GALGAS_string ("capCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 994)) ;
      temp_77.addAssign_operation (GALGAS_string ("capCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 995)) ;
      temp_77.addAssign_operation (GALGAS_string ("capCollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 996)) ;
      temp_77.addAssign_operation (GALGAS_string ("capCollectionElementArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 997)) ;
      temp_77.addAssign_operation (GALGAS_string ("capSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 998)) ;
      temp_77.addAssign_operation (GALGAS_string ("capSortedListElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 999)) ;
      temp_77.addAssign_operation (GALGAS_string ("cCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1000)) ;
      temp_77.addAssign_operation (GALGAS_string ("cCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1001)) ;
      temp_77.addAssign_operation (GALGAS_string ("cEnumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1002)) ;
      temp_77.addAssign_operation (GALGAS_string ("cEnumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1003)) ;
      temp_77.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1004)) ;
      temp_77.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1005)) ;
      temp_77.addAssign_operation (GALGAS_string ("cIndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1006)) ;
      temp_77.addAssign_operation (GALGAS_string ("cIndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1007)) ;
      temp_77.addAssign_operation (GALGAS_string ("cIssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1008)) ;
      temp_77.addAssign_operation (GALGAS_string ("cIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1009)) ;
      temp_77.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1010)) ;
      temp_77.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1011)) ;
      temp_77.addAssign_operation (GALGAS_string ("cObjectArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1012)) ;
      temp_77.addAssign_operation (GALGAS_string ("cObjectArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1013)) ;
      temp_77.addAssign_operation (GALGAS_string ("cProductionNameDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1014)) ;
      temp_77.addAssign_operation (GALGAS_string ("cPtr_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1015)) ;
      temp_77.addAssign_operation (GALGAS_string ("cPtr_object.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      temp_77.addAssign_operation (GALGAS_string ("cSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1017)) ;
      temp_77.addAssign_operation (GALGAS_string ("cSortedListElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1018)) ;
      temp_77.addAssign_operation (GALGAS_string ("cTemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1019)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1020)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1021)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1022)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1023)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1024)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1025)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_double.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1026)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1027)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_function.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1028)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1029)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1030)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_sint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1031)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_sint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1032)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1033)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1034)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1035)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_type.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1036)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_uint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1037)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_uint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1038)) ;
      temp_77.addAssign_operation (GALGAS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1039)) ;
      temp_77.addAssign_operation (GALGAS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1040)) ;
      temp_77.addAssign_operation (GALGAS_string ("typeComparisonResult.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1041)) ;
      temp_77.addAssign_operation (GALGAS_string ("typeComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1042)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Galgas 2"), GALGAS_string ("galgas2"), temp_77, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 941)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1052)) ;
      {
      GALGAS_stringset temp_82 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1182)) ;
      temp_82.addAssign_operation (GALGAS_string ("32-mp_bases.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1058)) ;
      temp_82.addAssign_operation (GALGAS_string ("32-mp_bases.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1059)) ;
      temp_82.addAssign_operation (GALGAS_string ("64-mp_bases.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1060)) ;
      temp_82.addAssign_operation (GALGAS_string ("64-mp_bases.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1061)) ;
      temp_82.addAssign_operation (GALGAS_string ("gmp-impl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1062)) ;
      temp_82.addAssign_operation (GALGAS_string ("gmp.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1063)) ;
      temp_82.addAssign_operation (GALGAS_string ("longlong.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1064)) ;
      temp_82.addAssign_operation (GALGAS_string ("mini-gmp.c.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1065)) ;
      temp_82.addAssign_operation (GALGAS_string ("mini-gmp.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1066)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-add.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1067)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-add_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1068)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-add_n.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1069)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-addmul_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1070)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-bdiv_dbm1c.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1071)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-cmp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1072)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-dcpi1_div_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1073)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-dive_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1074)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-divrem_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1075)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-divrem_2.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1076)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-get_str.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1077)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-invertappr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1078)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-lshift.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1079)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-lshiftc.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1080)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mu_div_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1081)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1082)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1083)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul_basecase.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1084)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul_fft.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1085)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul_n.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1086)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mulmod_bnm1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1087)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-nussbaumer_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1088)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-pre_divrem_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1089)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-rshift.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1090)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sbpi1_div_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1091)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sbpi1_divappr_q.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1092)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-set_str.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1093)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1094)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sqr_basecase.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sqrmod_bnm1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1096)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sub.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1097)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sub_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1098)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sub_n.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1099)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-submul_1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1100)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-tdiv_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1101)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom22_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1102)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom2_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1103)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom32_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1104)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom33_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1105)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom3_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1106)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom42_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1107)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom43_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1108)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom44_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1109)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom4_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1110)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom53_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1111)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom63_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1112)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom6_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1113)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom6h_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1114)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom8_sqr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1115)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom8h_mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1116)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_couple_handling.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1117)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_dgr3_pm1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1118)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_dgr3_pm2.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1119)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm1.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1120)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1121)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2exp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1122)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2rexp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1123)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_12pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1124)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_16pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1125)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_5pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1126)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_6pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1127)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_7pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1128)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_8pts.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1129)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-abs.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1130)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-add.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1131)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-add_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1132)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-and.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1133)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-aors.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1134)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-aors_ui.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1135)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cdiv_q_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1136)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cdiv_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1137)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cfdiv_q_2exp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1138)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-clear.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1139)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-clrbit.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1140)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cmp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1141)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cmp_si.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1142)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cmp_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1143)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-com.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1144)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-combit.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1145)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-export.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1146)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fdiv_q_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1147)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fdiv_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1148)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fits_s.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1149)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fits_sint.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1150)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fits_uint.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1151)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-get_si.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1152)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-get_str.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1153)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-get_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1154)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-init.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1155)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-ior.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1156)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-mul.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1157)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-mul_2exp.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1158)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-mul_i.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1159)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-mul_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1160)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-neg.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1161)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-realloc.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1162)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-set.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1163)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-set_str.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1164)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-set_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1165)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-setbit.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1166)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-sizeinbase.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1167)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-sub.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1168)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-sub_ui.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1169)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-swap.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1170)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-tdiv_qr.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1171)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-tstbit.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1172)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-xor.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1173)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-assert.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1174)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-bootstrap.c.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1175)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-errno.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1176)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-memory.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1177)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-mp_bpl.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1178)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-mp_clz_tab.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1179)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-mp_dv_tab.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-mp_minv_tab.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1181)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-tal-notreent.c")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1182)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("GMP"), GALGAS_string ("gmp"), temp_82, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1054)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1192)) ;
      {
      GALGAS_stringset temp_83 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1207)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ErrorOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1198)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ErrorOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1199)) ;
      temp_83.addAssign_operation (GALGAS_string ("AC_OutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1200)) ;
      temp_83.addAssign_operation (GALGAS_string ("AC_OutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1201)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1202)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1203)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1204)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1205)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_TCPSocketOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1206)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_TCPSocketOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1207)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Streams"), GALGAS_string ("streams"), temp_83, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1194)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1217)) ;
      {
      GALGAS_stringset temp_84 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1236)) ;
      temp_84.addAssign_operation (GALGAS_string ("C_HTMLString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1223)) ;
      temp_84.addAssign_operation (GALGAS_string ("C_HTMLString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1224)) ;
      temp_84.addAssign_operation (GALGAS_string ("C_String.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1225)) ;
      temp_84.addAssign_operation (GALGAS_string ("C_String.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1226)) ;
      temp_84.addAssign_operation (GALGAS_string ("cUnicodeData.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1227)) ;
      temp_84.addAssign_operation (GALGAS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1228)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_base.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1229)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_cpp.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1230)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_cpp.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1231)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_implementation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1232)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_m.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1233)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_m.m")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1234)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_string_routines.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1235)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_string_routines.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1236)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Strings"), GALGAS_string ("strings"), temp_84, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1219)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1246)) ;
      {
      GALGAS_stringset temp_85 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1255)) ;
      temp_85.addAssign_operation (GALGAS_string ("C_DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1252)) ;
      temp_85.addAssign_operation (GALGAS_string ("C_DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1253)) ;
      temp_85.addAssign_operation (GALGAS_string ("C_Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1254)) ;
      temp_85.addAssign_operation (GALGAS_string ("C_Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1255)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Time"), GALGAS_string ("time"), temp_85, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1248)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1265)) ;
      {
      GALGAS_stringset temp_86 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1304)) ;
      temp_86.addAssign_operation (GALGAS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1271)) ;
      temp_86.addAssign_operation (GALGAS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1272)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_BigInt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1273)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_BigInt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1274)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_CRC32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1275)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_CRC32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1276)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1277)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1278)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1279)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1280)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1281)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1282)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1283)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1284)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_UIntSet.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1285)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_UIntSet.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1286)) ;
      temp_86.addAssign_operation (GALGAS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1287)) ;
      temp_86.addAssign_operation (GALGAS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1288)) ;
      temp_86.addAssign_operation (GALGAS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1289)) ;
      temp_86.addAssign_operation (GALGAS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1290)) ;
      temp_86.addAssign_operation (GALGAS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1291)) ;
      temp_86.addAssign_operation (GALGAS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1292)) ;
      temp_86.addAssign_operation (GALGAS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1293)) ;
      temp_86.addAssign_operation (GALGAS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1294)) ;
      temp_86.addAssign_operation (GALGAS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1295)) ;
      temp_86.addAssign_operation (GALGAS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1296)) ;
      temp_86.addAssign_operation (GALGAS_string ("MF_Assert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1297)) ;
      temp_86.addAssign_operation (GALGAS_string ("MF_Assert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1298)) ;
      temp_86.addAssign_operation (GALGAS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1299)) ;
      temp_86.addAssign_operation (GALGAS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1300)) ;
      temp_86.addAssign_operation (GALGAS_string ("PMUInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1301)) ;
      temp_86.addAssign_operation (GALGAS_string ("PMUInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1302)) ;
      temp_86.addAssign_operation (GALGAS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1303)) ;
      temp_86.addAssign_operation (GALGAS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1304)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Utilities"), GALGAS_string ("utilities"), temp_86, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_groupRef_33967, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1267)) ;
      }
      var_libpmReferenceGroupList_34079.addAssign_operation (var_groupRef_33967  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1314)) ;
      GALGAS_string var_libpmGroupRef_52615 ;
      {
      extensionSetter_addGroup (var_xcodeProject_27940, GALGAS_string ("libpm"), GALGAS_string ("../build/libpm"), var_libpmReferenceGroupList_34079, var_libpmGroupRef_52615, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1316)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_libpmGroupRef_52615, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1317)) ;
      }
      GALGAS_string var_resourcesGroupRef_53146 ;
      {
      GALGAS_stringset temp_87 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1323)) ;
      temp_87.addAssign_operation (GALGAS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1323)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Resources"), GALGAS_string ("."), temp_87, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_resourcesGroupRef_53146, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1319)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_resourcesGroupRef_53146, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1333)) ;
      }
      GALGAS_string var_userResourcesGroupRef_53727 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("User Resources"), GALGAS_string ("userResources"), GALGAS_stringset::constructor_setWithStringList (var_resourceFiles_27535  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1338)), var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_userResourcesGroupRef_53727, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1335)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_userResourcesGroupRef_53727, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1347)) ;
      }
      GALGAS_string var_frameworkGroupRef_54348 ;
      {
      GALGAS_stringset temp_88 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasTargetGeneration.galgas", 1354)) ;
      temp_88.addAssign_operation (GALGAS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1353)) ;
      temp_88.addAssign_operation (GALGAS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1354)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27940, GALGAS_string ("Frameworks for App"), GALGAS_string ("/System/Library/Frameworks"), temp_88, var_buildCFileRefListForTool_31858, var_buildCppFileRefListForTool_31910, var_m_5F_FileRefList_31949, var_mm_5F_FileRefList_31989, var_frameworksFileRefList_32036, var_resourceFileBuildRefs_32083, var_frameworkGroupRef_54348, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1349)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27940, var_frameworkGroupRef_54348, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1364)) ;
      }
      GALGAS_stringlist temp_89 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1369)) ;
      temp_89.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 2")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1367)) ;
      temp_89.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1368)) ;
      temp_89.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1369)) ;
      GALGAS_stringlist var_settingList_54490 = temp_89 ;
      enumGalgasBool test_90 = kBoolTrue ;
      if (kBoolTrue == test_90) {
        test_90 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkToolFileList.getter_length (SOURCE_FILE ("galgasTargetGeneration.galgas", 1371)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_90) {
          GALGAS_string var_s_54712 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_54752 (constinArgument_inHandCodedLinkToolFileList, kENUMERATION_UP) ;
          while (enumerator_54752.hasCurrentObject ()) {
            var_s_54712.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_54752.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1374)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1374)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1374)) ;
            if (enumerator_54752.hasNextObject ()) {
              var_s_54712.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1375)) ;
            }
            enumerator_54752.gotoNextObject () ;
          }
          var_s_54712.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1377)) ;
          var_settingList_54490.addAssign_operation (var_s_54712  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1378)) ;
        }
      }
      GALGAS_string var_releaseTargetRef_55237 ;
      GALGAS_string var_releaseProductFileRef_55285 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_27940, constinArgument_inTargetName.add_operation (GALGAS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1381)), constinArgument_inTargetName, var_buildCFileRefListForTool_31858.add_operation (var_buildCppFileRefListForTool_31910, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1383)).add_operation (var_mm_5F_FileRefList_31989, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1383)), var_toolFrameworksFileRefList_32848, var_settingList_54490, var_releaseTargetRef_55237, var_releaseProductFileRef_55285, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1380)) ;
      }
      GALGAS_stringlist temp_91 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1394)) ;
      temp_91.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1391)) ;
      temp_91.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1392)) ;
      temp_91.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1393)) ;
      temp_91.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1394)) ;
      var_settingList_54490 = temp_91 ;
      enumGalgasBool test_92 = kBoolTrue ;
      if (kBoolTrue == test_92) {
        test_92 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkToolFileList.getter_length (SOURCE_FILE ("galgasTargetGeneration.galgas", 1396)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_92) {
          GALGAS_string var_s_55582 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_55622 (constinArgument_inHandCodedLinkToolFileList, kENUMERATION_UP) ;
          while (enumerator_55622.hasCurrentObject ()) {
            var_s_55582.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_55622.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1399)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1399)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1399)) ;
            if (enumerator_55622.hasNextObject ()) {
              var_s_55582.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1400)) ;
            }
            enumerator_55622.gotoNextObject () ;
          }
          var_s_55582.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1402)) ;
          var_settingList_54490.addAssign_operation (var_s_55582  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1403)) ;
        }
      }
      GALGAS_string var_debugTargetRef_56120 ;
      GALGAS_string var_debugProductFileRef_56166 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_27940, constinArgument_inTargetName.add_operation (GALGAS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1406)), constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1407)), var_buildCFileRefListForTool_31858.add_operation (var_buildCppFileRefListForTool_31910, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1408)).add_operation (var_mm_5F_FileRefList_31989, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1408)), var_toolFrameworksFileRefList_32848, var_settingList_54490, var_debugTargetRef_56120, var_debugProductFileRef_56166, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1405)) ;
      }
      GALGAS_stringlist temp_93 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1417)) ;
      temp_93.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1416)) ;
      temp_93.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1417)) ;
      GALGAS_stringlist var_configurationSettingList_56241 = temp_93 ;
      enumGalgasBool test_94 = kBoolTrue ;
      if (kBoolTrue == test_94) {
        test_94 = GALGAS_bool (kIsNotEqual, var_macCodeSign_16682.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_94) {
          GALGAS_stringlist var_components_56389 = var_macCodeSign_16682.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1420)) ;
          enumGalgasBool test_95 = kBoolTrue ;
          if (kBoolTrue == test_95) {
            test_95 = GALGAS_bool (kIsNotEqual, var_components_56389.getter_length (SOURCE_FILE ("galgasTargetGeneration.galgas", 1421)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
            if (kBoolTrue == test_95) {
              TC_Array <C_FixItDescription> fixItArray96 ;
              inCompiler->emitSemanticError (var_macCodeSign_16682.readProperty_location (), GALGAS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray96  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1422)) ;
            }
          }
          if (kBoolFalse == test_95) {
            enumGalgasBool test_97 = kBoolTrue ;
            if (kBoolTrue == test_97) {
              test_97 = GALGAS_bool (kIsEqual, var_components_56389.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1423)).objectCompare (GALGAS_string ("MacDeveloper"))).boolEnum () ;
              if (kBoolTrue == test_97) {
                var_configurationSettingList_56241.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1424)) ;
                var_configurationSettingList_56241.addAssign_operation (GALGAS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_56389.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1425)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1425)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1425))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1425)) ;
              }
            }
            if (kBoolFalse == test_97) {
              enumGalgasBool test_98 = kBoolTrue ;
              if (kBoolTrue == test_98) {
                test_98 = GALGAS_bool (kIsEqual, var_components_56389.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1426)).objectCompare (GALGAS_string ("Certificate"))).boolEnum () ;
                if (kBoolTrue == test_98) {
                  var_configurationSettingList_56241.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_56389.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1427)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1427)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1427))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1427)) ;
                }
              }
              if (kBoolFalse == test_98) {
                TC_Array <C_FixItDescription> fixItArray99 ;
                inCompiler->emitSemanticError (var_macCodeSign_16682.readProperty_location (), GALGAS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray99  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1429)) ;
              }
            }
          }
        }
      }
      {
      GALGAS_stringlist temp_100 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1439)) ;
      temp_100.addAssign_operation (var_releaseTargetRef_55237  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1439)) ;
      temp_100.addAssign_operation (var_debugTargetRef_56120  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1439)) ;
      GALGAS__32_stringlist temp_101 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("galgasTargetGeneration.galgas", 1440)) ;
      temp_101.addAssign_operation (var_releaseProductFileRef_55285, constinArgument_inTargetName  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1440)) ;
      temp_101.addAssign_operation (var_debugProductFileRef_56166, constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1440))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1440)) ;
      GALGAS_string joker_57796 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_27940, GALGAS_string ("Cocoa ").add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1433)), GALGAS_string ("Cocoa").add_operation (constinArgument_inTargetName.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas", 1434)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1434)), var_m_5F_FileRefList_31949.add_operation (var_m_5F_HandCodedSourceFileRefForAppList_30488, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1435)), var_frameworksFileRefList_32036.add_operation (var_appFrameworksFileRefList_31220, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1436)), var_resourceFileBuildRefs_32083.add_operation (var_m_5F_HandCodedResourceFileRefForAppList_30550, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1437)), var_configurationSettingList_56241, temp_100, temp_101, joker_57796, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1432)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_27940, var_dir_25967.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1445)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1445)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1445)), var_newIntermediateFilePath_27656, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1444)) ;
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
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS 3 source file",
  "a GALGAS 4 source file",
  "a GALGAS Template source file",
  "a GALGAS project source file",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "4.0.0" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_string var_creationProjectName_1152 = GALGAS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.readProperty_value ()) ;
    {
    routine_projectCreation (var_creationProjectName_1152, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 20)) ;
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
  GALGAS_string var_parentDirectory_2967 = constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 70)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 70)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 71)) ;
  temp_0.addAssign_operation (GALGAS_string ("galgasProject")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 71)) ;
  GALGAS_stringlist var_candidateProjectFiles_3089 = var_parentDirectory_2967.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 71)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles_3089.getter_length (SOURCE_FILE ("galgasProgram.galgas", 72)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 73)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles_3089.getter_length (SOURCE_FILE ("galgasProgram.galgas", 74)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3345 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_3420 (var_candidateProjectFiles_3089, kENUMERATION_UP) ;
        while (enumerator_3420.hasCurrentObject ()) {
          var_s_3345.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_3420.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 77)) ;
          enumerator_3420.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3345, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 79)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_3544 = var_parentDirectory_2967.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 81)).add_operation (var_candidateProjectFiles_3089.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 81)) ;
      {
      routine_parseAndAnalyzeProject (GALGAS_lstring::constructor_new (var_projectFilePath_3544, constinArgument_inSourceFile.readProperty_location ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 82)), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 82)) ;
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
  temp_0.addAssign_operation (GALGAS_string ("galgasProject")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 97)) ;
  GALGAS_stringlist var_candidateProjectFiles_4399 = var_parentDirectory_4277.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas", 97)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles_4399.getter_length (SOURCE_FILE ("galgasProgram.galgas", 98)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 99)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles_4399.getter_length (SOURCE_FILE ("galgasProgram.galgas", 100)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_4655 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_4730 (var_candidateProjectFiles_4399, kENUMERATION_UP) ;
        while (enumerator_4730.hasCurrentObject ()) {
          var_s_4655.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_4730.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 103)) ;
          enumerator_4730.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_4655, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas", 105)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_4854 = var_parentDirectory_4277.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 107)).add_operation (var_candidateProjectFiles_4399.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 107)) ;
      {
      routine_parseAndAnalyzeProject (GALGAS_lstring::constructor_new (var_projectFilePath_4854, constinArgument_inSourceFile.readProperty_location ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 108)), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 108)) ;
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
  GALGAS_templateInstructionListAST joker_5564 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5564  COMMA_SOURCE_FILE ("galgasProgram.galgas", 122)) ;
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
  routine_parseAndAnalyzeProject (constinArgument_inProjectSourceFile, GALGAS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 135)) ;
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
    }catch (const ::std:: exception & e) {
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

