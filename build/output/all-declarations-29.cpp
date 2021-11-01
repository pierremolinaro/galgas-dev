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
  GALGAS_filewrapper var_fw_1085 = GALGAS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  cEnumerator_stringlist enumerator_1154 (var_fw_1085.getter_allDirectoryPathes (SOURCE_FILE ("libpmHandling.galgas", 22)), kENUMERATION_UP) ;
  while (enumerator_1154.hasCurrentObject ()) {
    GALGAS_string var_actualDirectory_1217 = constinArgument_inLIBPMPath.add_operation (enumerator_1154.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 23)) ;
    var_actualDirectory_1217.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 24)) ;
    enumerator_1154.gotoNextObject () ;
  }
  GALGAS_stringset var_allNeededFileSet_1337 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("libpmHandling.galgas", 27)) ;
  cEnumerator_stringlist enumerator_1354 (var_fw_1085.getter_allTextFilePathes (SOURCE_FILE ("libpmHandling.galgas", 28)), kENUMERATION_UP) ;
  while (enumerator_1354.hasCurrentObject ()) {
    GALGAS_string var_contents_1401 = var_fw_1085.getter_textFileContentsAtPath (enumerator_1354.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 29)) ;
    GALGAS_string var_actualFilePath_1460 = constinArgument_inLIBPMPath.add_operation (enumerator_1354.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 30)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_actualFilePath_1460.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas", 31)).objectCompare (GALGAS_string ("py"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_bool joker_1609 ; // Joker input parameter
        var_contents_1401.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1460, joker_1609, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 32)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool joker_1687 ; // Joker input parameter
      var_contents_1401.method_writeToFileWhenDifferentContents (var_actualFilePath_1460, joker_1687, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 34)) ;
    }
    var_allNeededFileSet_1337.addAssign_operation (enumerator_1354.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 36)) ;
    enumerator_1354.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_1772 (var_fw_1085.getter_allBinaryFilePathes (SOURCE_FILE ("libpmHandling.galgas", 39)), kENUMERATION_UP) ;
  while (enumerator_1772.hasCurrentObject ()) {
    GALGAS_data var_contents_1821 = var_fw_1085.getter_binaryFileContentsAtPath (enumerator_1772.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 40)) ;
    GALGAS_string var_actualFilePath_1884 = constinArgument_inLIBPMPath.add_operation (enumerator_1772.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 41)) ;
    GALGAS_bool joker_1972 ; // Joker input parameter
    var_contents_1821.method_writeToFileWhenDifferentContents (var_actualFilePath_1884, joker_1972, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 42)) ;
    var_allNeededFileSet_1337.addAssign_operation (enumerator_1772.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 43)) ;
    enumerator_1772.gotoNextObject () ;
  }
  GALGAS_stringset var_allActualFileSet_2072 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("libpmHandling.galgas", 46)) ;
  cEnumerator_stringlist enumerator_2091 (constinArgument_inLIBPMPath.getter_regularFiles (GALGAS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas", 47)), kENUMERATION_UP) ;
  while (enumerator_2091.hasCurrentObject ()) {
    var_allActualFileSet_2072.addAssign_operation (GALGAS_string ("/").add_operation (enumerator_2091.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 48))  COMMA_SOURCE_FILE ("libpmHandling.galgas", 48)) ;
    enumerator_2091.gotoNextObject () ;
  }
  GALGAS_stringset var_uselessFileSet_2196 = var_allActualFileSet_2072.substract_operation (var_allNeededFileSet_1337, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 50)) ;
  cEnumerator_stringset enumerator_2245 (var_uselessFileSet_2196, kENUMERATION_UP) ;
  while (enumerator_2245.hasCurrentObject ()) {
    {
    GALGAS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2245.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)) ;
    }
    enumerator_2245.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
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
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 25)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** Building semantic context\n")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 26)) ;
    }
  }
  GALGAS_semanticDeclarationListAST var_semanticDeclarationListWithPredefinedTypes_1777 = constinArgument_inSemanticDeclarationList ;
  {
  routine_appendPredefinedTypesASTs (var_semanticDeclarationListWithPredefinedTypes_1777, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 30)) ;
  }
  GALGAS_commandLineOptionListAST var_options_1985 = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 32)) ;
  cEnumerator__32_stringlist enumerator_2036 (GALGAS_application::constructor_boolOptionNameList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 33)), kENUMERATION_UP) ;
  while (enumerator_2036.hasCurrentObject ()) {
    var_options_1985.addAssign_operation (GALGAS_string ("bool").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 35)), GALGAS_lstring::constructor_new (enumerator_2036.current (HERE).getter_mValue_31_ (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 36))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 36)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_boolOptionInvocationCharacter (enumerator_2036.current (HERE).getter_mValue_30_ (HERE), enumerator_2036.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 37)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 37))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 37)), GALGAS_application::constructor_boolOptionInvocationString (enumerator_2036.current (HERE).getter_mValue_30_ (HERE), enumerator_2036.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 38)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 38)), GALGAS_application::constructor_boolOptionCommentString (enumerator_2036.current (HERE).getter_mValue_30_ (HERE), enumerator_2036.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 39)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 39)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 40)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 41))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 34)) ;
    enumerator_2036.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2477 (GALGAS_application::constructor_uintOptionNameList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 43)), kENUMERATION_UP) ;
  while (enumerator_2477.hasCurrentObject ()) {
    var_options_1985.addAssign_operation (GALGAS_string ("uint").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 45)), GALGAS_lstring::constructor_new (enumerator_2477.current (HERE).getter_mValue_31_ (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 46))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 46)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_uintOptionInvocationCharacter (enumerator_2477.current (HERE).getter_mValue_30_ (HERE), enumerator_2477.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 47)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 47))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 47)), GALGAS_application::constructor_uintOptionInvocationString (enumerator_2477.current (HERE).getter_mValue_30_ (HERE), enumerator_2477.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 48)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 48)), GALGAS_application::constructor_uintOptionCommentString (enumerator_2477.current (HERE).getter_mValue_30_ (HERE), enumerator_2477.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 49)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 49)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 50)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 51))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 44)) ;
    enumerator_2477.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2926 (GALGAS_application::constructor_stringOptionNameList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 53)), kENUMERATION_UP) ;
  while (enumerator_2926.hasCurrentObject ()) {
    var_options_1985.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 55)), GALGAS_lstring::constructor_new (enumerator_2926.current (HERE).getter_mValue_31_ (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 56))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 56)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_stringOptionInvocationCharacter (enumerator_2926.current (HERE).getter_mValue_30_ (HERE), enumerator_2926.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 57)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 57))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 57)), GALGAS_application::constructor_stringOptionInvocationString (enumerator_2926.current (HERE).getter_mValue_30_ (HERE), enumerator_2926.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 58)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 58)), GALGAS_application::constructor_stringOptionCommentString (enumerator_2926.current (HERE).getter_mValue_30_ (HERE), enumerator_2926.current (HERE).getter_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 59)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 59)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 60)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 61))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 54)) ;
    enumerator_2926.gotoNextObject () ;
  }
  var_semanticDeclarationListWithPredefinedTypes_1777.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 65)), var_options_1985  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 63))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 63)) ;
  GALGAS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3547 = function_optionNameForUsefulEntitiesGraph (GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 68)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3547  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 69)) ;
  GALGAS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_3923 ;
  {
  routine_buildGalgas_33_SemanticContext (var_semanticDeclarationListWithPredefinedTypes_1777, constinArgument_inEndOfProjectSourceFile, outArgument_outSemanticContext, var_sortedSemanticDeclarationListAST_3923, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 71)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->printMessage (GALGAS_string ("*** Semantic analysis\n")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 79)) ;
    }
  }
  cEnumerator_lstringlist enumerator_4118 (outArgument_outSemanticContext.getter_mTypeMap (HERE).getter_unsolvedEntryList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 82)), kENUMERATION_UP) ;
  while (enumerator_4118.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (enumerator_4118.current (HERE).getter_mValue (HERE).getter_location (HERE), GALGAS_string ("the '@").add_operation (enumerator_4118.current (HERE).getter_mValue (HERE).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 83)).add_operation (GALGAS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 83)), fixItArray2  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 83)) ;
    enumerator_4118.gotoNextObject () ;
  }
  outArgument_outSemanticDeclarationSortedListForGeneration = GALGAS_semanticDeclarationListForGeneration::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 86)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 87)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_predefinedTypes var_predefinedTypes_4352 = function_buildPredefinedTypes (outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 88)) ;
      cEnumerator_semanticDeclarationListAST enumerator_4453 (var_sortedSemanticDeclarationListAST_3923, kENUMERATION_UP) ;
      while (enumerator_4453.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((const cPtr_semanticDeclarationAST *) enumerator_4453.current (HERE).getter_mSemanticDeclaration (HERE).ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, var_predefinedTypes_4352, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 90)) ;
        enumerator_4453.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgas3SemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildGalgas_33_SemanticContext (const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                             const GALGAS_location constinArgument_inEndOfProjectSourceFile,
                                             GALGAS_semanticContext & outArgument_outSemanticContext,
                                             GALGAS_semanticDeclarationListAST & outArgument_outSortedSemanticDeclarationListAST,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList_5567 = constinArgument_inSemanticDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_5642 (constinArgument_inSemanticDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5642.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((const cPtr_semanticDeclarationAST *) enumerator_5642.current (HERE).getter_mSemanticDeclaration (HERE).ptr (), var_semanticDeclarationList_5567, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 117)) ;
    enumerator_5642.gotoNextObject () ;
  }
  GALGAS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_5985 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 123)) ;
  GALGAS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6080 = GALGAS_extensionMethodMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 124)) ;
  GALGAS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6166 = GALGAS_extensionGetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 125)) ;
  GALGAS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6252 = GALGAS_extensionSetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 126)) ;
  GALGAS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6323 = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 127)) ;
  cEnumerator_semanticDeclarationListAST enumerator_6373 (var_semanticDeclarationList_5567, kENUMERATION_UP) ;
  while (enumerator_6373.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((const cPtr_semanticDeclarationAST *) enumerator_6373.current (HERE).getter_mSemanticDeclaration (HERE).ptr (), var_semanticTypePrecedenceGraph_5985, var_extensionMethodMapForBuildingContext_6080, var_extensionGetterMapForBuildingContext_6166, var_extensionSetterMapForBuildingContext_6252, var_extensionOverrideDefinitionList_6323, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 129)) ;
    enumerator_6373.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_6765 (var_semanticTypePrecedenceGraph_5985.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 138)), kENUMERATION_UP) ;
  while (enumerator_6765.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_6765.current (HERE).getter_mValue (HERE).getter_string (HERE).getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 139)).objectCompare (GALGAS_char (TO_UNICODE (63)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->printMessage (GALGAS_string ("Optional '").add_operation (enumerator_6765.current (HERE).getter_mValue (HERE).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140)) ;
      }
    }
    enumerator_6765.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_semanticTypePrecedenceGraph_5985.getter_undefinedNodeCount (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 144)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_7019 (var_semanticTypePrecedenceGraph_5985.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 145)), kENUMERATION_UP) ;
      while (enumerator_7019.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7019.current (HERE).getter_mValue (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_7019.current (HERE).getter_mValue (HERE).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 146)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 146)), fixItArray2  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 146)) ;
        enumerator_7019.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GALGAS_string ("semantic analysis not performed, due to undefined type error(s)"), fixItArray3  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 148)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
      outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_7459 ;
    GALGAS_lstringlist var_unsortedNodeKeyList_7503 ;
    GALGAS_lstringlist joker_7384 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_5985.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_7384, var_unsortedSemanticDeclarationListAST_7459, var_unsortedNodeKeyList_7503, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 152)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_7459.getter_length (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 158)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_s_7581 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_7459.getter_length (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 159)).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 159)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 159)) ;
        cEnumerator_semanticDeclarationListAST enumerator_7789 (var_unsortedSemanticDeclarationListAST_7459, kENUMERATION_UP) ;
        while (enumerator_7789.hasCurrentObject ()) {
          var_s_7581.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_7789.current (HERE).getter_mSemanticDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 161)) ;
          enumerator_7789.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_7581, fixItArray5  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 163)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssign_operation(var_extensionOverrideDefinitionList_6323, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 166)) ;
      outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 168)) ;
      cEnumerator_semanticDeclarationListAST enumerator_8251 (outArgument_outSortedSemanticDeclarationListAST, kENUMERATION_UP) ;
      while (enumerator_8251.hasCurrentObject ()) {
        callExtensionMethod_enterInSemanticContext ((const cPtr_semanticDeclarationAST *) enumerator_8251.current (HERE).getter_mSemanticDeclaration (HERE).ptr (), var_extensionMethodMapForBuildingContext_6080, var_extensionGetterMapForBuildingContext_6166, var_extensionSetterMapForBuildingContext_6252, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 171)) ;
        enumerator_8251.gotoNextObject () ;
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
  cEnumerator_semanticDeclarationListForGeneration enumerator_9239 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9239.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((const cPtr_semanticDeclarationForGeneration *) enumerator_9239.current (HERE).getter_mDeclaration (HERE).ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioCocoaProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 197)) ;
    enumerator_9239.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 204)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.getter_value ()) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 205)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_generateOneBigHeader (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 206)) ;
          }
          {
          routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 212)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.getter_value ()).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 219)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 219)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_generateOneBigHeader (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 220)) ;
            }
            {
            routine_generateFewImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 226)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 233)).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.getter_value ()) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 233)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_generateManyHeaders (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 234)) ;
              }
              {
              routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 240)) ;
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 247)).boolEnum () ;
              if (kBoolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 248)) ;
                }
              }
            }
            if (kBoolFalse == test_4) {
              {
              routine_generateManyHeaders (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 257)) ;
              }
              {
              routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 263)) ;
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
  GALGAS_stringlist var_headerInclusionList_31__12128 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 283)) ;
  GALGAS_stringlist var_headerInclusionList_32__12172 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 284)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_12243 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_12243.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 286)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 286)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset var_inclusionSet_31__12337 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 287)) ;
        GALGAS_string var_headerDef_31__12433 ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), var_inclusionSet_31__12337, var_headerDef_31__12433, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 288)) ;
        GALGAS_string var_headerIncludes_31__12460 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_31__12337.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 290)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 291)).add_operation (GALGAS_string ("headers 1\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 291))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 291)) ;
          }
        }
        cEnumerator_stringset enumerator_12638 (var_inclusionSet_31__12337, kENUMERATION_UP) ;
        while (enumerator_12638.hasCurrentObject ()) {
          var_headerIncludes_31__12460.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_12638.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 294)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 294)) ;
          enumerator_12638.gotoNextObject () ;
        }
        var_headerIncludes_31__12460.plusAssign_operation(var_headerDef_31__12433, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 296)) ;
        GALGAS_stringset var_inclusionSet_32__12796 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 297)) ;
        GALGAS_string var_headerDef_32__12912 ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__12796, var_headerDef_32__12912, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 298)) ;
        GALGAS_string var_headerIncludes_32__12939 = GALGAS_string::makeEmptyString () ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_inclusionSet_32__12796.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 300)).boolEnum () ;
          if (kBoolTrue == test_2) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 301)).add_operation (GALGAS_string ("headers 2\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 301))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 301)) ;
          }
        }
        cEnumerator_stringset enumerator_13117 (var_inclusionSet_32__12796, kENUMERATION_UP) ;
        while (enumerator_13117.hasCurrentObject ()) {
          var_headerIncludes_32__12939.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13117.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 304)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 304)) ;
          enumerator_13117.gotoNextObject () ;
        }
        var_headerIncludes_32__12939.plusAssign_operation(var_headerDef_32__12912, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 306)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 308)).enumValue ()) {
        case GALGAS_headerKind::kNotBuilt:
          break ;
        case GALGAS_headerKind::kEnum_noHeader:
          {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsNotEqual, var_headerIncludes_31__12460.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 311)).getter_location (HERE), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12243.current (HERE).getter_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 312)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 312)), fixItArray4  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 311)) ;
              }
            }
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__12939.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 315)).getter_location (HERE), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12243.current (HERE).getter_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 316)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 316)), fixItArray6  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 315)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_oneHeader:
          {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, var_headerIncludes_31__12460.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 320)).getter_location (HERE), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12243.current (HERE).getter_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 321)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 321)), fixItArray8  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 320)) ;
              }
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__12939.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 324)).getter_location (HERE), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12243.current (HERE).getter_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 325)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 325)), fixItArray10  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 324)) ;
              }
            }
          }
          break ;
        case GALGAS_headerKind::kEnum_twoHeaders:
          {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_headerIncludes_31__12460.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 329)).getter_location (HERE), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12243.current (HERE).getter_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 330)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 330)), fixItArray12  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 329)) ;
              }
            }
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, var_headerIncludes_32__12939.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <C_FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 333)).getter_location (HERE), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12243.current (HERE).getter_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 334)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 334)), fixItArray14  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 333)) ;
              }
            }
          }
          break ;
        }
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 338)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 338)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            GALGAS_string var_headerString_14734 = GALGAS_string ("#pragma once\n") ;
            var_headerString_14734.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 340)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 340)) ;
            var_headerString_14734.plusAssign_operation(GALGAS_string ("#include \"all-predefined-types.h\"\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 341)) ;
            var_headerString_14734.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 342)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 342)) ;
            var_headerString_14734.plusAssign_operation(var_headerIncludes_31__12460, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 343)) ;
            var_headerString_14734.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 344)) ;
            var_headerString_14734.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 345)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 345)) ;
            GALGAS_string temp_16 ;
            const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 347)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 347)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              temp_16 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_17) {
              temp_16 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_15167 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 346)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 346)) ;
            var_headerInclusionList_31__12128.addAssign_operation (var_headerFileName_15167  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 348)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_15167.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 349))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 349)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_15167.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 350))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 350)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15167.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 353)), var_headerString_14734, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 351)) ;
            }
          }
        }
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 358)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 358)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_string var_headerString_15739 = GALGAS_string ("#ifndef ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 359)).getter_identifierRepresentation (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 359)).add_operation (GALGAS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 359)) ;
            var_headerString_15739.plusAssign_operation(GALGAS_string ("#define ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 360)).getter_identifierRepresentation (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 360)).add_operation (GALGAS_string ("_DEFINED\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 360)) ;
            var_headerString_15739.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 361)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 361)) ;
            var_headerString_15739.plusAssign_operation(GALGAS_string ("#include \"").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 362)).add_operation (GALGAS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 362)) ;
            var_headerString_15739.plusAssign_operation(GALGAS_string ("\n"
              "//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 363)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 363)) ;
            var_headerString_15739.plusAssign_operation(var_headerIncludes_32__12939, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 364)) ;
            var_headerString_15739.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 365)) ;
            var_headerString_15739.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringByRepeatingString (GALGAS_string ("-"), GALGAS_uint ((uint32_t) 118U)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 366)).add_operation (GALGAS_string ("\n"
              "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 366)) ;
            var_headerString_15739.plusAssign_operation(GALGAS_string ("#endif\n"
              "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 367)) ;
            var_headerInclusionList_32__12172.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 368))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 368)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 369)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 369))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 369)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 370)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 370))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 370)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12243.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 373)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 373)), var_headerString_15739, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 371)) ;
            }
          }
        }
      }
    }
    enumerator_12243.gotoNextObject () ;
  }
  GALGAS_string var_headerString_16987 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), var_headerInclusionList_31__12128.add_operation (var_headerInclusionList_32__12172, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 382)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 380))) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 384)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 385)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_16987, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 386)) ;
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
  GALGAS_string var_headerString_17696 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 402)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 400))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_17882 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_17882.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_17882.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 406)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 406)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset joker_17995 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 407)) ;
        GALGAS_string var_headerString_31__18023 ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_17882.current (HERE).getter_mDeclaration (HERE).ptr (), joker_17995, var_headerString_31__18023, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 407)) ;
        var_headerString_17696.plusAssign_operation(var_headerString_31__18023, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 408)) ;
      }
    }
    enumerator_17882.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_18159 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_18159.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18159.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 413)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 413)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset joker_18292 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 414)) ;
        GALGAS_string var_headerString_32__18320 ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_18159.current (HERE).getter_mDeclaration (HERE).ptr (), constinArgument_inProductDirectory, joker_18292, var_headerString_32__18320, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 414)) ;
        var_headerString_17696.plusAssign_operation(var_headerString_32__18320, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 415)) ;
      }
    }
    enumerator_18159.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 418)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 419)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_17696, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 420)) ;
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
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 453)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 453)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 454)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 454)) ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 455)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_stringset var_inclusionSet_19915 ;
          GALGAS_string var_headerString_19949 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 457)), var_inclusionSet_19915, var_headerString_19949, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 456)) ;
          cEnumerator_stringset enumerator_19970 (var_inclusionSet_19915, kENUMERATION_UP) ;
          while (enumerator_19970.hasCurrentObject ()) {
            {
            routine_buildHeader (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_19970.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 462)) ;
            }
            enumerator_19970.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssign_operation(var_headerString_19949, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 470)) ;
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssign_operation(GALGAS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 472)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 472)) ;
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
  GALGAS_bool var_useOneHugeHeader_20927 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()) ;
  GALGAS_uint var_n_21025 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uint var_fileIdx_21043 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_implementationString_21074 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_21109 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 498)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_21180 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21180.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21180.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 500)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 500)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_code_21351 ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21180.current (HERE).getter_mDeclaration (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21109, var_code_21351, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 501)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_inclusionSet_21109.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 502)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21180.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 503)).add_operation (GALGAS_string (" cpp headers\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 503))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 503)) ;
          }
        }
        var_implementationString_21074.plusAssign_operation(var_code_21351, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 505)) ;
        var_implementationString_21074.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21180.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 506)) ;
        var_n_21025.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 507)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsSupOrEqual, var_n_21025.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 508)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_useOneHugeHeader_20927.boolEnum () ;
              if (kBoolTrue == test_3) {
                GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 510)) ;
                temp_4.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 510)) ;
                var_inclusionSet_21109 = temp_4 ;
              }
            }
            GALGAS_string var_header_21806 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21109.getter_stringList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 513)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 512))) ;
            GALGAS_string var_fileName_21947 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21043.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 515)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 515)) ;
            GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 516)) ;
            temp_5.addAssign_operation (var_fileName_21947  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 516)) ;
            ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 516)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_21947  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 517)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_21947, var_header_21806.add_operation (var_implementationString_21074, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 518)) ;
            }
            var_n_21025 = GALGAS_uint ((uint32_t) 0U) ;
            var_fileIdx_21043.increment_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 524)) ;
            var_implementationString_21074 = GALGAS_string::makeEmptyString () ;
            var_inclusionSet_21109 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 526)) ;
          }
        }
      }
    }
    enumerator_21180.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_implementationString_21074.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_useOneHugeHeader_20927.boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_stringset temp_8 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 533)) ;
          temp_8.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 533)) ;
          var_inclusionSet_21109 = temp_8 ;
        }
      }
      GALGAS_string var_header_22504 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21109.getter_stringList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 536)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 535))) ;
      GALGAS_string var_fileName_22633 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21043.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 538)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 538)) ;
      GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 539)) ;
      temp_9.addAssign_operation (var_fileName_22633  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 539)) ;
      ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 539)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_22633  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 540)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22633, var_header_22504.add_operation (var_implementationString_21074, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 541)) ;
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
  GALGAS_headerCompositionMap var_headerCompositionMap_23412 = GALGAS_headerCompositionMap::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 559)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_23483 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_23483.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 561)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 561)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringset var_inclusionSet_31__23577 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 562)) ;
        GALGAS_string var_headerString_31__23676 ;
        callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), var_inclusionSet_31__23577, var_headerString_31__23676, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 563)) ;
        GALGAS_stringset var_inclusionSet_32__23712 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 564)) ;
        GALGAS_string var_headerString_32__23831 ;
        callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__23712, var_headerString_32__23831, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 565)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 566)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 566)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string temp_2 ;
            const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 567)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 567)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              temp_2 = GALGAS_string ("-1") ;
            }else if (kBoolFalse == test_3) {
              temp_2 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_headerFileName_23924 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 567)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 567)) ;
            {
            var_headerCompositionMap_23412.setter_insertKey (var_headerFileName_23924.getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 569)), var_inclusionSet_31__23577, var_headerString_31__23676, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 568)) ;
            }
          }
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 574)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 574)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 577)) ;
            temp_5.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 577)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 577))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 577)) ;
            var_headerCompositionMap_23412.setter_insertKey (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23483.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 576)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 576)), var_inclusionSet_32__23712.operator_or (temp_5 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 577)), var_headerString_32__23831, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 575)) ;
            }
          }
        }
      }
    }
    enumerator_23483.gotoNextObject () ;
  }
  GALGAS_headerRepartitionMap var_headerRepartitionMap_24599 = GALGAS_headerRepartitionMap::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 583)) ;
  GALGAS_uint var_fileIdx_24618 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_implementationString_24649 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_headerString_24673 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_24708 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 587)) ;
  GALGAS_string var_headerFileName_24734 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 588)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_24832 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_24832.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 590)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 590)).boolEnum () ;
      if (kBoolTrue == test_6) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 591)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 591)).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 592)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 592)))).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                routine_buildHeader (var_headerCompositionMap_23412, var_headerFileName_24734, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 593)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 593)), var_headerRepartitionMap_24599, var_headerString_24673, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 593)) ;
                }
                {
                routine_buildHeader (var_headerCompositionMap_23412, var_headerFileName_24734, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 594)), var_headerRepartitionMap_24599, var_headerString_24673, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 594)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 595)).objectCompare (GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 595)))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  {
                  routine_buildHeader (var_headerCompositionMap_23412, var_headerFileName_24734, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 596)), var_headerRepartitionMap_24599, var_headerString_24673, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 596)) ;
                  }
                }
              }
            }
          }
        }
        GALGAS_string var_code_25691 ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_24708, var_code_25691, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 599)) ;
        cEnumerator_stringset enumerator_25705 (var_inclusionSet_24708, kENUMERATION_UP) ;
        while (enumerator_25705.hasCurrentObject ()) {
          {
          routine_buildHeader (var_headerCompositionMap_23412, var_headerFileName_24734, enumerator_25705.current_key (HERE), var_headerRepartitionMap_24599, var_headerString_24673, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 601)) ;
          }
          enumerator_25705.gotoNextObject () ;
        }
        var_implementationString_24649.plusAssign_operation(var_code_25691, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 603)) ;
        var_implementationString_24649.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_24832.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 604)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsStrictSup, var_implementationString_24649.getter_length (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 605)).objectCompare (GALGAS_uint ((uint32_t) 786432U))).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_stringset temp_11 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 606)) ;
            temp_11.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 606))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 606)) ;
            var_inclusionSet_24708 = temp_11 ;
            GALGAS_string var_cppHeader_26106 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_24708.getter_stringList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 608)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 607))) ;
            GALGAS_string var_fileName_26247 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 610)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 610)) ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 611)) ;
            temp_12.addAssign_operation (var_fileName_26247  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 611)) ;
            ioArgument_ioToolProductFileList = temp_12.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 611)) ;
            ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_26247  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 612)) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_26247, var_cppHeader_26106.add_operation (var_implementationString_24649, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 613)) ;
            }
            ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_24734.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 619))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 619)) ;
            ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_24734.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 620))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 620)) ;
            GALGAS_stringlist temp_13 ;
            const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_fileIdx_24618.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_14) {
              temp_13 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 623)) ;
            }else if (kBoolFalse == test_14) {
              GALGAS_stringlist temp_15 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 623)) ;
              temp_15.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 623)).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 623))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 623)) ;
              temp_13 = temp_15 ;
            }
            GALGAS_string var_startOfHeader_26689 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_24734, temp_13 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 621))) ;
            {
            GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_24734.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 627)), var_startOfHeader_26689.add_operation (var_headerString_24673, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 625)) ;
            }
            var_fileIdx_24618.increment_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 631)) ;
            var_implementationString_24649 = GALGAS_string::makeEmptyString () ;
            var_headerString_24673 = GALGAS_string::makeEmptyString () ;
            var_headerFileName_24734 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 634)) ;
            var_inclusionSet_24708 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 635)) ;
          }
        }
      }
    }
    enumerator_24832.gotoNextObject () ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsNotEqual, var_implementationString_24649.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_stringlist temp_17 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 642)) ;
      temp_17.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 642))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 642)) ;
      GALGAS_string var_header_27276 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_17 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 641))) ;
      GALGAS_string var_fileName_27412 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 644)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 644)) ;
      GALGAS_stringlist temp_18 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 645)) ;
      temp_18.addAssign_operation (var_fileName_27412  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 645)) ;
      ioArgument_ioToolProductFileList = temp_18.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 645)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_27412  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 646)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_27412, var_header_27276.add_operation (var_implementationString_24649, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 647)) ;
      }
      ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_24734.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 653))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 653)) ;
      ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_24734.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 654))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 654)) ;
      GALGAS_stringlist temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, var_fileIdx_24618.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 657)) ;
      }else if (kBoolFalse == test_20) {
        GALGAS_stringlist temp_21 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 657)) ;
        temp_21.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 657)).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 657))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 657)) ;
        temp_19 = temp_21 ;
      }
      GALGAS_string var_startOfHeader_27807 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_24734, temp_19 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 655))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_24734.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 661)), var_startOfHeader_27807.add_operation (var_headerString_24673, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 659)) ;
      }
    }
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 666)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 667)) ;
  GALGAS_stringlist temp_22 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 670)) ;
  temp_22.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_24618.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 670))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 670)) ;
  GALGAS_string var_startOfAllDeclarationsHeader_28265 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), temp_22 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 668))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_28265, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 672)) ;
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
  GALGAS_bool var_useOneHugeHeader_28940 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_29076 (constinArgument_inSemanticDeclarationSortedListForGeneration, kENUMERATION_UP) ;
  while (enumerator_29076.hasCurrentObject ()) {
    GALGAS_stringset var_inclusionSet_29111 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 691)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_29076.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 692)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 692)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_implementationString_29300 ;
        callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29076.current (HERE).getter_mDeclaration (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_29111, var_implementationString_29300, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 693)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_29076.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 694)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_inclusionSet_29111.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29076.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 695))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 695)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_useOneHugeHeader_28940.boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 698)) ;
            temp_3.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 698)) ;
            var_inclusionSet_29111 = temp_3 ;
          }
        }
        GALGAS_string var_header_29549 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_29111.getter_stringList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 701)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 700))) ;
        var_implementationString_29300.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_29076.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 703)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 703)) ;
        GALGAS_string var_fileName_29773 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_29076.current (HERE).getter_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 704)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 704)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_29773  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 705)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_29773, var_header_29549.add_operation (var_implementationString_29300, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 706)) ;
        }
        ioArgument_ioToolProductFileList.addAssign_operation (var_fileName_29773  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 711)) ;
      }
    }
    enumerator_29076.gotoNextObject () ;
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
  GALGAS_uint index_210_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_210 (in_BUILD_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_210.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_210.current_mBuildReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_210.current_mFileName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXBuildFile;\n"
        "    fileRef = " ;
      result << enumerator_210.current_mFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    settings = {ATTRIBUTES = (); };\n"
        "  };\n"
        "\n" ;
      index_210_.increment () ;
      enumerator_210.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFileReference */\n" ;
  GALGAS_uint index_498_ (0) ;
  if (in_C_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_498 (in_C_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_498.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_498.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_498.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.c;\n"
        "    name = " ;
      result << enumerator_498.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_498.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_498_.increment () ;
      enumerator_498.gotoNextObject () ;
    }
  }
  GALGAS_uint index_828_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_828 (in_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_828.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_828.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_828.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.cpp;\n"
        "    name = " ;
      result << enumerator_828.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_828.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_828_.increment () ;
      enumerator_828.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1160_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1160 (in_M_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1160.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1160.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1160.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.obj;\n"
        "    name = " ;
      result << enumerator_1160.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1160.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1160_.increment () ;
      enumerator_1160.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1491_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1491 (in_MM_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1491.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1491.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1491.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.objcpp;\n"
        "    name = " ;
      result << enumerator_1491.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1491.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1491_.increment () ;
      enumerator_1491.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1831_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1831 (in_HEADER_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1831.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1831.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1831.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.h;\n"
        "    name = " ;
      result << enumerator_1831.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1831.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1831_.increment () ;
      enumerator_1831.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2167_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2167 (in_FRAMEWORK_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2167.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2167.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2167.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = wrapper.framework;\n"
        "    name = " ;
      result << enumerator_2167.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_2167.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_2167_.increment () ;
      enumerator_2167.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2477_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_2477 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2477.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2477.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2477.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2477_.increment () ;
      enumerator_2477.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2771_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_2771 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2771.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2771.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2771.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2771_.increment () ;
      enumerator_2771.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3065_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3065 (in_PLIST_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3065.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3065.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = text.plist;\n"
        "    name = " ;
      result << enumerator_3065.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3065.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3065_.increment () ;
      enumerator_3065.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3374_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3374 (in_XIB_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3374.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3374.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = wrapper.xib;\n"
        "    name = " ;
      result << enumerator_3374.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3374.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3374_.increment () ;
      enumerator_3374.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3685_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3685 (in_TIFF_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3685.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3685.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.tiff;\n"
        "    name = " ;
      result << enumerator_3685.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3685.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3685_.increment () ;
      enumerator_3685.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3969_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3969 (in_ICNS_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3969.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3969.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.icns;\n"
        "    name = " ;
      result << enumerator_3969.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3969.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3969_.increment () ;
      enumerator_3969.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_4357_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_4357 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4357.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_4357.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  " ;
        result << enumerator_4357.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " = {\n"
          "    isa = PBXFrameworksBuildPhase;\n"
          "    buildActionMask = 2147483647;\n"
          "    files = (\n" ;
        GALGAS_uint index_4591_ (0) ;
        if (enumerator_4357.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_4591 (enumerator_4357.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
          while (enumerator_4591.hasCurrentObject ()) {
            result << "      " ;
            result << enumerator_4591.current_mValue (HERE).stringValue () ;
            result << ",\n" ;
            index_4591_.increment () ;
            enumerator_4591.gotoNextObject () ;
          }
        }
        result << "    );\n"
          "    runOnlyForDeploymentPostprocessing = 0;\n"
          "  };\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_4357_.increment () ;
      enumerator_4357.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4747_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_4747 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4747.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4747.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFrameworksBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_4925_ (0) ;
      if (enumerator_4747.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_4925 (enumerator_4747.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_4925.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_4925.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_4925_.increment () ;
          enumerator_4925.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_4747_.increment () ;
      enumerator_4747.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXGroup section */\n" ;
  GALGAS_uint index_5150_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_5150 (in_GROUPS, kENUMERATION_UP) ;
    while (enumerator_5150.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5150.current_mGroupReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_5150.current_mGroupName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXGroup;\n"
        "    children = (\n" ;
      GALGAS_uint index_5271_ (0) ;
      if (enumerator_5150.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_5271 (enumerator_5150.current_mChildrenRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_5271.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_5271.current_mValue (HERE).stringValue () ;
          result << ", \n" ;
          index_5271_.increment () ;
          enumerator_5271.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_5150.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_5150.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n" ;
      index_5150_.increment () ;
      enumerator_5150.gotoNextObject () ;
    }
  }
  result << "\n"
    "  " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << " /* Main Group */ = {\n"
    "    isa = PBXGroup;\n"
    "    children = (\n" ;
  GALGAS_uint index_5577_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_5577 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kENUMERATION_UP) ;
    while (enumerator_5577.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_5577.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_5577_.increment () ;
      enumerator_5577.gotoNextObject () ;
    }
  }
  result << "    );\n"
    "    sourceTree = \"<group>\";\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXNativeTarget */\n" ;
  GALGAS_uint index_5768_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5768 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5768.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5768.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_5768.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_5768.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_5768.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " ,\n" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_5768.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "      " ;
        result << enumerator_5768.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " , /* Frameworks */\n" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n"
        "    );\n"
        "    name = " ;
      result << enumerator_5768.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_5768.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_5768.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.tool\";\n"
        "  };\n"
        " \n" ;
      index_5768_.increment () ;
      enumerator_5768.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6404_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_6404 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6404.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6404.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_6404.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_6404.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_6404.current_mResourceBuildRef (HERE).stringValue () ;
      result << " , /* Resources */\n"
        "      " ;
      result << enumerator_6404.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Frameworks */\n"
        "      " ;
      result << enumerator_6404.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Sources */\n"
        "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n" ;
      GALGAS_uint index_6778_ (0) ;
      if (enumerator_6404.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_6778 (enumerator_6404.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_6778.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6778.current_mValue_30_ (HERE).stringValue () ;
          result << " ,\n" ;
          index_6778_.increment () ;
          enumerator_6778.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_6404.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_6404.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_6404.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.application\";\n"
        "  };\n"
        "\n" ;
      index_6404_.increment () ;
      enumerator_6404.gotoNextObject () ;
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
  GALGAS_uint index_7539_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7539 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7539.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_7539.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_7539_.increment () ;
      enumerator_7539.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7596_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_7596 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7596.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_7596.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_7596_.increment () ;
      enumerator_7596.gotoNextObject () ;
    }
  }
  result << "   );\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_7766_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_7766 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7766.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_7766.current_mResourceBuildRef (HERE).stringValue () ;
      result << " /* Resources */ = {\n"
        "    isa = PBXResourcesBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_7943_ (0) ;
      if (enumerator_7766.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_7943 (enumerator_7766.current_mResourceFileBuildRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_7943.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_7943.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_7943_.increment () ;
          enumerator_7943.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_7766_.increment () ;
      enumerator_7766.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n" ;
  GALGAS_uint index_8170_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_8170 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8170.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_8170.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_8331_ (0) ;
      if (enumerator_8170.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_8331 (enumerator_8170.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_8331.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_8331.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_8331_.increment () ;
          enumerator_8331.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_8170_.increment () ;
      enumerator_8170.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8455_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8455 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8455.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_8455.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_8616_ (0) ;
      if (enumerator_8455.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_8616 (enumerator_8455.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_8616.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_8616.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_8616_.increment () ;
          enumerator_8616.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_8455_.increment () ;
      enumerator_8455.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXTargetDependency */\n"
    " \n" ;
  GALGAS_uint index_8841_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8841 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8841.hasCurrentObject ()) {
      GALGAS_uint index_8874_ (0) ;
      if (enumerator_8841.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8874 (enumerator_8841.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_8874.hasCurrentObject ()) {
          result << "  " ;
          result << enumerator_8874.current_mValue_30_ (HERE).stringValue () ;
          result << " = {\n"
            "    isa = PBXTargetDependency;\n"
            "    target = " ;
          result << enumerator_8874.current_mValue_31_ (HERE).stringValue () ;
          result << ";\n"
            "  };\n"
            "\n" ;
          index_8874_.increment () ;
          enumerator_8874.gotoNextObject () ;
        }
      }
      index_8841_.increment () ;
      enumerator_8841.gotoNextObject () ;
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
  GALGAS_uint index_9392_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_9392 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9392.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_9392.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_9392_.increment () ;
      enumerator_9392.gotoNextObject () ;
    }
  }
  result << "    };\n"
    "    name = Default;\n"
    "  };\n"
    "\n" ;
  GALGAS_uint index_9484_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_9484 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9484.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9484.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n"
        "        ARCHS = \"$(NATIVE_ARCH_ACTUAL)\";\n"
        "        ONLY_ACTIVE_ARCH = YES;\n" ;
      GALGAS_uint index_9727_ (0) ;
      if (enumerator_9484.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_9727 (enumerator_9484.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_9727.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_9727.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_9727_.increment () ;
          enumerator_9727.gotoNextObject () ;
        }
      }
      result << "      PRODUCT_NAME = " ;
      result << enumerator_9484.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 346)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_9484_.increment () ;
      enumerator_9484.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9900_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_9900 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9900.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9900.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_10062_ (0) ;
      if (enumerator_9900.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_10062 (enumerator_9900.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_10062.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_10062.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_10062_.increment () ;
          enumerator_10062.gotoNextObject () ;
        }
      }
      result << "      INFOPLIST_FILE = \"Info.plist\";\n"
        "      PRODUCT_NAME = " ;
      result << enumerator_9900.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue () ;
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
      index_9900_.increment () ;
      enumerator_9900.gotoNextObject () ;
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
  GALGAS_uint index_10778_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_10778 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10778.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10778.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_10778.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_10778_.increment () ;
      enumerator_10778.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11078_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_11078 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11078.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_11078.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_11078.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_11078_.increment () ;
      enumerator_11078.gotoNextObject () ;
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
  GALGAS_uint index_2360_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_2360 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET, kENUMERATION_UP) ;
    while (enumerator_2360.hasCurrentObject ()) {
      result << "  <Add directory=\"" ;
      result << enumerator_2360.current_key (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2360_.increment () ;
      enumerator_2360.gotoNextObject () ;
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
  GALGAS_uint index_2864_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2864 (in_TOOL_5F_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2864.hasCurrentObject ()) {
      result << "  <Unit filename=\"../build/output/" ;
      result << enumerator_2864.current_mValue (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2864_.increment () ;
      enumerator_2864.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2966_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2966 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2966.hasCurrentObject ()) {
      result << "  <Unit filename=\"../" ;
      result << enumerator_2966.current_mValue (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2966_.increment () ;
      enumerator_2966.gotoNextObject () ;
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
  GALGAS_uint index_1037_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1037 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1037.hasCurrentObject ()) {
      result << "  <dict>\n"
        "   <key>CFBundleTypeIconFile</key>\n"
        "   <string>" ;
      result << enumerator_1037.current_key (HERE).stringValue () ;
      result << "_icns</string>\n"
        "   <key>CFBundleTypeExtensions</key>\n"
        "   <array>\n"
        "    <string>" ;
      result << enumerator_1037.current_key (HERE).stringValue () ;
      result << "</string>\n"
        "   </array>\n"
        "   <key>CFBundleTypeName</key>\n"
        "   <string>" ;
      result << in_PROJECT_5F_NAME.stringValue () ;
      result << " Source</string>\n"
        "   <key>CFBundleTypeOSTypes</key>\n"
        "   <array>\n"
        "    <string>TEXT</string>\n"
        "   </array>\n"
        "   <key>CFBundleTypeRole</key>\n"
        "   <string>Editor</string>\n"
        "   <key>LSTypeIsPackage</key>\n"
        "   <false/>\n"
        "   <key>NSDocumentClass</key>\n"
        "   <string>OC_GGS_Document</string>\n"
        "  </dict>\n" ;
      index_1037_.increment () ;
      enumerator_1037.gotoNextObject () ;
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
  GALGAS_uint index_197_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_197 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET, kENUMERATION_UP) ;
    while (enumerator_197.hasCurrentObject ()) {
      result << ",  \"" ;
      result << enumerator_197.current_key (HERE).stringValue () ;
      result << "\"" ;
      index_197_.increment () ;
      enumerator_197.gotoNextObject () ;
    }
  }
  result << "],\n"
    "    \"SOURCES\"  :  [\n"
    "        \"all-galgas.cpp\",\n"
    "        \"all-libpm.cpp\",\n" ;
  GALGAS_uint index_332_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_332 (in_MAKEFILE_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_332.hasCurrentObject ()) {
      result << "        \"" ;
      result << enumerator_332.current_mValue (HERE).stringValue () ;
      result << "\",\n" ;
      index_332_.increment () ;
      enumerator_332.gotoNextObject () ;
    }
  }
  GALGAS_uint index_410_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_410 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_410.hasCurrentObject ()) {
      result << "        \"" ;
      result << enumerator_410.current_mValue (HERE).stringValue () ;
      result << "\",\n" ;
      index_410_.increment () ;
      enumerator_410.gotoNextObject () ;
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
  GALGAS_uint index_3530_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3530 (in_TOOL_5F_LINK_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3530.hasCurrentObject ()) {
      result << "\n"
        "        \"" ;
      result << enumerator_3530.current_mValue (HERE).stringValue () ;
      result << "\"" ;
      if (enumerator_3530.hasNextObject ()) {
        result << "," ;
      }
      index_3530_.increment () ;
      enumerator_3530.gotoNextObject () ;
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
  GALGAS_string var_dir_5346 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 93)) ;
  var_dir_5346.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 94)) ;
  GALGAS_string var_s_5429 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (true), GALGAS_string ("Windows"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 95))) ;
  GALGAS_bool joker_5784 ; // Joker input parameter
  var_s_5429.method_writeToFileWhenDifferentContents (var_dir_5346.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 105)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 105)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 105)), joker_5784, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 105)) ;
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
  GALGAS_string var_dir_6231 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-mac"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 119)) ;
  var_dir_6231.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 120)) ;
  GALGAS_string var_s_6310 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Mac"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 121))) ;
  GALGAS_bool joker_6662 ; // Joker input parameter
  var_s_6310.method_writeToFileWhenDifferentContents (var_dir_6231.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 131)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 131)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 131)), joker_6662, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 131)) ;
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
  GALGAS_string var_dir_7116 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 145)) ;
  var_dir_7116.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 146)) ;
  GALGAS_string var_s_7199 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 147))) ;
  GALGAS_bool joker_7552 ; // Joker input parameter
  var_s_7199.method_writeToFileWhenDifferentContents (var_dir_7116.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 157)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 157)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 157)), joker_7552, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 157)) ;
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
  GALGAS_string var_dir_8007 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 171)) ;
  var_dir_8007.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 172)) ;
  GALGAS_string var_s_8090 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 173))) ;
  GALGAS_bool joker_8443 ; // Joker input parameter
  var_s_8090.method_writeToFileWhenDifferentContents (var_dir_8007.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 183)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 183)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 183)), joker_8443, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 183)) ;
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
  GALGAS_string var_dir_8701 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 191)) ;
  var_dir_8701.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 192)) ;
  GALGAS_bool joker_8923 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 193))).method_writeToExecutableFileWhenDifferentContents (var_dir_8701.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 193)), joker_8923, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 193)) ;
  GALGAS_bool joker_9075 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 194))).method_writeToExecutableFileWhenDifferentContents (var_dir_8701.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 194)), joker_9075, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 194)) ;
  GALGAS_bool joker_9219 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 195))).method_writeToExecutableFileWhenDifferentContents (var_dir_8701.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 195)), joker_9219, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 195)) ;
  GALGAS_bool joker_9367 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 196))).method_writeToExecutableFileWhenDifferentContents (var_dir_8701.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 196)), joker_9367, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 196)) ;
  GALGAS_bool joker_9519 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 197))).method_writeToExecutableFileWhenDifferentContents (var_dir_8701.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 197)), joker_9519, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 197)) ;
  GALGAS_bool joker_9678 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 198))).method_writeToExecutableFileWhenDifferentContents (var_dir_8701.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 199)), joker_9678, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 198)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_8701.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 202)) ;
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
  GALGAS_string var_dir_9990 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 210)) ;
  var_dir_9990.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 211)) ;
  GALGAS_bool joker_10197 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 212))).method_writeToExecutableFileWhenDifferentContents (var_dir_9990.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 212)), joker_10197, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 212)) ;
  GALGAS_bool joker_10343 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 213))).method_writeToExecutableFileWhenDifferentContents (var_dir_9990.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 213)), joker_10343, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 213)) ;
  GALGAS_bool joker_10485 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 214))).method_writeToExecutableFileWhenDifferentContents (var_dir_9990.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 214)), joker_10485, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 214)) ;
  GALGAS_bool joker_10631 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 215))).method_writeToExecutableFileWhenDifferentContents (var_dir_9990.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 215)), joker_10631, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 215)) ;
  GALGAS_bool joker_10769 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 216))).method_writeToExecutableFileWhenDifferentContents (var_dir_9990.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 216)), joker_10769, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 216)) ;
  GALGAS_bool joker_10903 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 217))).method_writeToExecutableFileWhenDifferentContents (var_dir_9990.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 217)), joker_10903, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 217)) ;
  GALGAS_bool joker_11048 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 218))).method_writeToExecutableFileWhenDifferentContents (var_dir_9990.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 218)), joker_11048, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 218)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_9990.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 219)) ;
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
  GALGAS_string var_dir_11355 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 227)) ;
  var_dir_11355.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 228)) ;
  GALGAS_bool joker_11558 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 229))).method_writeToExecutableFileWhenDifferentContents (var_dir_11355.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 229)), joker_11558, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 229)) ;
  GALGAS_bool joker_11702 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 230))).method_writeToExecutableFileWhenDifferentContents (var_dir_11355.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 230)), joker_11702, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 230)) ;
  GALGAS_bool joker_11838 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 231))).method_writeToExecutableFileWhenDifferentContents (var_dir_11355.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 231)), joker_11838, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 231)) ;
  GALGAS_bool joker_11978 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 232))).method_writeToExecutableFileWhenDifferentContents (var_dir_11355.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 232)), joker_11978, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 232)) ;
  GALGAS_bool joker_12122 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 233))).method_writeToExecutableFileWhenDifferentContents (var_dir_11355.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 233)), joker_12122, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 233)) ;
  GALGAS_bool joker_12254 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 234))).method_writeToExecutableFileWhenDifferentContents (var_dir_11355.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 234)), joker_12254, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 234)) ;
  GALGAS_bool joker_12397 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 235))).method_writeToExecutableFileWhenDifferentContents (var_dir_11355.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 235)), joker_12397, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 235)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_11355.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 236)) ;
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
  GALGAS_string var_dir_12707 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 244)) ;
  var_dir_12707.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 245)) ;
  GALGAS_bool joker_12939 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 246))).method_writeToExecutableFileWhenDifferentContents (var_dir_12707.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 246)), joker_12939, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 246)) ;
  GALGAS_bool joker_13096 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 247))).method_writeToExecutableFileWhenDifferentContents (var_dir_12707.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 247)), joker_13096, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 247)) ;
  GALGAS_bool joker_13245 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 248))).method_writeToExecutableFileWhenDifferentContents (var_dir_12707.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 248)), joker_13245, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 248)) ;
  GALGAS_bool joker_13398 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 249))).method_writeToExecutableFileWhenDifferentContents (var_dir_12707.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 249)), joker_13398, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 249)) ;
  GALGAS_bool joker_13555 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 250))).method_writeToExecutableFileWhenDifferentContents (var_dir_12707.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 250)), joker_13555, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 250)) ;
  GALGAS_bool joker_13711 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 251))).method_writeToExecutableFileWhenDifferentContents (var_dir_12707.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 251)), joker_13711, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 251)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_12707.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 252)) ;
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
  GALGAS_string var_dir_14021 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 260)) ;
  var_dir_14021.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 261)) ;
  GALGAS_bool joker_14253 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 262))).method_writeToExecutableFileWhenDifferentContents (var_dir_14021.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 262)), joker_14253, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 262)) ;
  GALGAS_bool joker_14410 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 263))).method_writeToExecutableFileWhenDifferentContents (var_dir_14021.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 263)), joker_14410, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 263)) ;
  GALGAS_bool joker_14559 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 264))).method_writeToExecutableFileWhenDifferentContents (var_dir_14021.add_operation (GALGAS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 264)), joker_14559, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 264)) ;
  GALGAS_bool joker_14712 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 265))).method_writeToExecutableFileWhenDifferentContents (var_dir_14021.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 265)), joker_14712, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 265)) ;
  GALGAS_bool joker_14869 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 266))).method_writeToExecutableFileWhenDifferentContents (var_dir_14021.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 266)), joker_14869, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 266)) ;
  GALGAS_bool joker_15025 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 267))).method_writeToExecutableFileWhenDifferentContents (var_dir_14021.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 267)), joker_15025, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 267)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_14021.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 268)) ;
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
  GALGAS_string var_projectDirectory_16020 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 293)) ;
  GALGAS_bool joker_16339 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 295))).method_writeToFileWhenDifferentContents (constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 296)).add_operation (GALGAS_string ("/build/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 296)), joker_16339, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 295)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 299)) ;
  GALGAS_stringlist var_toolCppFileList_16494 = constinArgument_inToolCppFileList ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_toolCppFileList_16494.addAssign_operation (GALGAS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 303)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_toolCppFileList_16494.addAssign_operation (GALGAS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 305)) ;
  }
  GALGAS_lstring var_macCodeSign_16767 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_16774 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("macCodeSign")) ;
  if (NULL != objectArray_16774) {
      macroValidSharedObject (objectArray_16774, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, objectArray_16774->mProperty_mFeatureValue.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (objectArray_16774->mProperty_mFeatureValue.getter_location (HERE), GALGAS_string ("the %macCodeSign attribute should not be empty"), fixItArray2  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 311)) ;
        var_macCodeSign_16767.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_1) {
      var_macCodeSign_16767 = objectArray_16774->mProperty_mFeatureValue ;
    }
  }else{
    var_macCodeSign_16767 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3TargetGeneration.galgas", 316)) ;
  }
  GALGAS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17163 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_17170 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("MacOSDeployment")) ;
  if (NULL != objectArray_17170) {
      macroValidSharedObject (objectArray_17170, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, objectArray_17170->mProperty_mFeatureValue.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (objectArray_17170->mProperty_mFeatureValue.getter_location (HERE), GALGAS_string ("the %MacOSDeployment attribute should not be empty"), fixItArray4  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 322)) ;
        var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17163.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17163 = objectArray_17170->mProperty_mFeatureValue.getter_string (HERE) ;
    }
  }else{
    var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17163 = GALGAS_string ("10.10").getter_nowhere (SOURCE_FILE ("galgas3TargetGeneration.galgas", 327)).getter_string (HERE) ;
  }
  GALGAS_string var_libpmPath_17591 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_17598 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("libpmAtPath")) ;
  if (NULL != objectArray_17598) {
      macroValidSharedObject (objectArray_17598, cMapElement_projectQualifiedFeatureMap) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsEqual, objectArray_17598->mProperty_mFeatureValue.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (objectArray_17598->mProperty_mFeatureValue.getter_location (HERE), GALGAS_string ("the libpm path should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 333)) ;
        var_libpmPath_17591.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      var_libpmPath_17591 = objectArray_17598->mProperty_mFeatureValue.getter_string (HERE) ;
    }
  }else{
    {
    routine_updateLIBPMatPath (constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 338)).add_operation (GALGAS_string ("/build/libpm"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 338)) ;
    }
    var_libpmPath_17591 = GALGAS_string ("../build/libpm") ;
  }
  GALGAS_stringset var_guiSourceSet_5F_app_18117 = GALGAS_stringset::constructor_setWithStringList (constinArgument_inAppProductFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 342)) ;
  GALGAS_stringset var_sourceFileSet_18198 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 344)) ;
  GALGAS_stringset var_availableGenerationFeatures_18268 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 346)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 347)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 348)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 349)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 350)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("codeblocks-mac")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 351)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 352)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 353)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 354)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 355)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 356)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("SnowLeopard")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 357)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("Lion")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 358)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("MountainLion")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 359)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("Mavericks")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 360)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("Yosemite")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 361)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("ElCapitanYosemite")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 362)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("SierraElCapitan")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 363)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("ElCapitan")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 364)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("Sierra")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 365)) ;
  var_availableGenerationFeatures_18268.addAssign_operation (GALGAS_string ("LatestMacOS")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 366)) ;
  GALGAS_stringset var_generationFeatures_19349 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 367)) ;
  GALGAS_string var_SDK_19410 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_19428 (constinArgument_inTargetFeatureList, kENUMERATION_UP) ;
  while (enumerator_19428.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_availableGenerationFeatures_18268.getter_hasKey (enumerator_19428.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 371)).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_generationFeatures_19349.getter_hasKey (enumerator_19428.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 372)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), GALGAS_string ("duplicate '").add_operation (enumerator_19428.current_mValue (HERE).getter_string (SOURCE_FILE ("galgas3TargetGeneration.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 373)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 373)), fixItArray9  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 373)) ;
          }
        }
        GALGAS_string var_macOsDuplicateMessage_19673 = GALGAS_string ("the \"%SnowLeopard\", \"%Lion\", \"%MountainLion\", \"%Mavericks\", \"%Yosemite\", \"%ElCapitanYosemite\", \"%ElCapitan\", \"%ElCapitanSierra\", \"%Sierra\", \"%LatestMac"
          "OS\" are exclusive") ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("SnowLeopard"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray12  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 380)) ;
              }
            }
            var_SDK_19410 = GALGAS_string ("macosx10.6") ;
          }
        }
        if (kBoolFalse == test_10) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("Lion"))).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray15  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 386)) ;
                }
              }
              var_SDK_19410 = GALGAS_string ("macosx10.7") ;
            }
          }
          if (kBoolFalse == test_13) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("MountainLion"))).boolEnum () ;
              if (kBoolTrue == test_16) {
                enumGalgasBool test_17 = kBoolTrue ;
                if (kBoolTrue == test_17) {
                  test_17 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    TC_Array <C_FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray18  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 392)) ;
                  }
                }
                var_SDK_19410 = GALGAS_string ("macosx10.8") ;
              }
            }
            if (kBoolFalse == test_16) {
              enumGalgasBool test_19 = kBoolTrue ;
              if (kBoolTrue == test_19) {
                test_19 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("Mavericks"))).boolEnum () ;
                if (kBoolTrue == test_19) {
                  enumGalgasBool test_20 = kBoolTrue ;
                  if (kBoolTrue == test_20) {
                    test_20 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_20) {
                      TC_Array <C_FixItDescription> fixItArray21 ;
                      inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray21  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 398)) ;
                    }
                  }
                  var_SDK_19410 = GALGAS_string ("macosx10.9") ;
                }
              }
              if (kBoolFalse == test_19) {
                enumGalgasBool test_22 = kBoolTrue ;
                if (kBoolTrue == test_22) {
                  test_22 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("Yosemite"))).boolEnum () ;
                  if (kBoolTrue == test_22) {
                    enumGalgasBool test_23 = kBoolTrue ;
                    if (kBoolTrue == test_23) {
                      test_23 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                      if (kBoolTrue == test_23) {
                        TC_Array <C_FixItDescription> fixItArray24 ;
                        inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray24  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 404)) ;
                      }
                    }
                    var_SDK_19410 = GALGAS_string ("macosx10.10") ;
                  }
                }
                if (kBoolFalse == test_22) {
                  enumGalgasBool test_25 = kBoolTrue ;
                  if (kBoolTrue == test_25) {
                    test_25 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("ElCapitanYosemite"))).boolEnum () ;
                    if (kBoolTrue == test_25) {
                      enumGalgasBool test_26 = kBoolTrue ;
                      if (kBoolTrue == test_26) {
                        test_26 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                        if (kBoolTrue == test_26) {
                          TC_Array <C_FixItDescription> fixItArray27 ;
                          inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray27  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 410)) ;
                        }
                      }
                      var_SDK_19410 = GALGAS_string ("macosx10.11") ;
                    }
                  }
                  if (kBoolFalse == test_25) {
                    enumGalgasBool test_28 = kBoolTrue ;
                    if (kBoolTrue == test_28) {
                      test_28 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("ElCapitan"))).boolEnum () ;
                      if (kBoolTrue == test_28) {
                        enumGalgasBool test_29 = kBoolTrue ;
                        if (kBoolTrue == test_29) {
                          test_29 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                          if (kBoolTrue == test_29) {
                            TC_Array <C_FixItDescription> fixItArray30 ;
                            inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray30  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 416)) ;
                          }
                        }
                        var_SDK_19410 = GALGAS_string ("macosx10.11") ;
                      }
                    }
                    if (kBoolFalse == test_28) {
                      enumGalgasBool test_31 = kBoolTrue ;
                      if (kBoolTrue == test_31) {
                        test_31 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("SierraElCapitan"))).boolEnum () ;
                        if (kBoolTrue == test_31) {
                          enumGalgasBool test_32 = kBoolTrue ;
                          if (kBoolTrue == test_32) {
                            test_32 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                            if (kBoolTrue == test_32) {
                              TC_Array <C_FixItDescription> fixItArray33 ;
                              inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray33  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 422)) ;
                            }
                          }
                          var_SDK_19410 = GALGAS_string ("macosx10.12") ;
                        }
                      }
                      if (kBoolFalse == test_31) {
                        enumGalgasBool test_34 = kBoolTrue ;
                        if (kBoolTrue == test_34) {
                          test_34 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("Sierra"))).boolEnum () ;
                          if (kBoolTrue == test_34) {
                            enumGalgasBool test_35 = kBoolTrue ;
                            if (kBoolTrue == test_35) {
                              test_35 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                              if (kBoolTrue == test_35) {
                                TC_Array <C_FixItDescription> fixItArray36 ;
                                inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray36  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 428)) ;
                              }
                            }
                            var_SDK_19410 = GALGAS_string ("macosx10.12") ;
                          }
                        }
                        if (kBoolFalse == test_34) {
                          enumGalgasBool test_37 = kBoolTrue ;
                          if (kBoolTrue == test_37) {
                            test_37 = GALGAS_bool (kIsEqual, enumerator_19428.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("LatestMacOS"))).boolEnum () ;
                            if (kBoolTrue == test_37) {
                              enumGalgasBool test_38 = kBoolTrue ;
                              if (kBoolTrue == test_38) {
                                test_38 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                                if (kBoolTrue == test_38) {
                                  TC_Array <C_FixItDescription> fixItArray39 ;
                                  inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), var_macOsDuplicateMessage_19673, fixItArray39  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 434)) ;
                                }
                              }
                              var_SDK_19410 = GALGAS_string ("macosx") ;
                            }
                          }
                          if (kBoolFalse == test_37) {
                            var_generationFeatures_19349.addAssign_operation (enumerator_19428.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 438)) ;
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
      GALGAS_stringlist var_s_21763 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 441)) ;
      cEnumerator_stringset enumerator_21783 (var_availableGenerationFeatures_18268, kENUMERATION_UP) ;
      while (enumerator_21783.hasCurrentObject ()) {
        var_s_21763.addAssign_operation (GALGAS_string ("%").add_operation (enumerator_21783.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 443))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 443)) ;
        enumerator_21783.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray40 ;
      appendFixItActions (fixItArray40, kFixItReplace, var_s_21763) ;
      inCompiler->emitSemanticError (enumerator_19428.current_mValue (HERE).getter_location (HERE), GALGAS_string ("unknown '").add_operation (enumerator_19428.current_mValue (HERE).getter_string (SOURCE_FILE ("galgas3TargetGeneration.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 445)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 445)), fixItArray40  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 445)) ;
    }
    enumerator_19428.gotoNextObject () ;
  }
  enumGalgasBool test_41 = kBoolTrue ;
  if (kBoolTrue == test_41) {
    GALGAS_bool test_42 = GALGAS_bool (kIsNotEqual, var_macCodeSign_16767.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
    if (kBoolTrue == test_42.boolEnum ()) {
      test_42 = GALGAS_bool (kIsEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_41 = test_42.boolEnum () ;
    if (kBoolTrue == test_41) {
      TC_Array <C_FixItDescription> fixItArray43 ;
      inCompiler->emitSemanticError (var_macCodeSign_16767.getter_location (HERE), GALGAS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%SnowLeopard\", \"%Lion\", \"%MountainLion\", \"%Mavericks\", \"%Yosemite\", \"%ElCa"
        "pitanYosemite\", \"%ElCapitan\", \"%ElCapitanSierra\", \"%Sierra\", \"%LatestMacOS\""), fixItArray43  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 450)) ;
    }
  }
  enumGalgasBool test_44 = kBoolTrue ;
  if (kBoolTrue == test_44) {
    test_44 = GALGAS_bool (kIsNotEqual, GALGAS_uint (gOption_galgas_5F_cli_5F_options_macosxSDK.getter_value ()).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      var_SDK_19410 = GALGAS_string ("macosx10.").add_operation (GALGAS_uint (gOption_galgas_5F_cli_5F_options_macosxSDK.getter_value ()).getter_string (SOURCE_FILE ("galgas3TargetGeneration.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 456)) ;
    }
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    test_45 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_45) {
      test_45 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GALGAS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 459)).operator_not (SOURCE_FILE ("galgas3TargetGeneration.galgas", 459)).boolEnum () ;
      if (kBoolTrue == test_45) {
        TC_Array <C_FixItDescription> fixItArray46 ;
        inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 460)), GALGAS_string ("For a Cocoa project, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray46  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 460)) ;
      }
    }
  }
  enumGalgasBool test_47 = kBoolTrue ;
  if (kBoolTrue == test_47) {
    test_47 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 463)).boolEnum () ;
    if (kBoolTrue == test_47) {
      {
      routine_generateGalgas_33_MakefileMacOSXTarget (var_projectDirectory_16020, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 464)) ;
      }
    }
  }
  enumGalgasBool test_48 = kBoolTrue ;
  if (kBoolTrue == test_48) {
    test_48 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 466)).boolEnum () ;
    if (kBoolTrue == test_48) {
      {
      routine_generateGalgas_33_MakefileUnixTarget (var_projectDirectory_16020, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 467)) ;
      }
    }
  }
  enumGalgasBool test_49 = kBoolTrue ;
  if (kBoolTrue == test_49) {
    test_49 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 469)).boolEnum () ;
    if (kBoolTrue == test_49) {
      {
      routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget (var_projectDirectory_16020, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 470)) ;
      }
    }
  }
  enumGalgasBool test_50 = kBoolTrue ;
  if (kBoolTrue == test_50) {
    test_50 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 472)).boolEnum () ;
    if (kBoolTrue == test_50) {
      {
      routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget (var_projectDirectory_16020, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 473)) ;
      }
    }
  }
  enumGalgasBool test_51 = kBoolTrue ;
  if (kBoolTrue == test_51) {
    test_51 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 475)).boolEnum () ;
    if (kBoolTrue == test_51) {
      {
      routine_generateGalgas_33_MinGWOnMacOSXTarget (var_projectDirectory_16020, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 476)) ;
      }
    }
  }
  enumGalgasBool test_52 = kBoolTrue ;
  if (kBoolTrue == test_52) {
    test_52 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 478)).boolEnum () ;
    if (kBoolTrue == test_52) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget (var_projectDirectory_16020, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_17591, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 479)) ;
      }
    }
  }
  enumGalgasBool test_53 = kBoolTrue ;
  if (kBoolTrue == test_53) {
    test_53 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("codeblocks-mac") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 489)).boolEnum () ;
    if (kBoolTrue == test_53) {
      {
      routine_generateGalgasCodeBlocksMacTarget (var_projectDirectory_16020, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_17591, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 490)) ;
      }
    }
  }
  enumGalgasBool test_54 = kBoolTrue ;
  if (kBoolTrue == test_54) {
    test_54 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_54) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target (var_projectDirectory_16020, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_17591, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 501)) ;
      }
    }
  }
  enumGalgasBool test_55 = kBoolTrue ;
  if (kBoolTrue == test_55) {
    test_55 = var_generationFeatures_19349.getter_hasKey (GALGAS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 511)).boolEnum () ;
    if (kBoolTrue == test_55) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target (var_projectDirectory_16020, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_17591, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 512)) ;
      }
    }
  }
  GALGAS_stringlist var_linkOptionForLinkingFrameworkWithTool_24850 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 523)) ;
  enumGalgasBool test_56 = kBoolTrue ;
  if (kBoolTrue == test_56) {
    test_56 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 524)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_56) {
      enumGalgasBool test_57 = kBoolTrue ;
      if (kBoolTrue == test_57) {
        test_57 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string ("macosx"))).boolEnum () ;
        if (kBoolTrue == test_57) {
          var_linkOptionForLinkingFrameworkWithTool_24850.addAssign_operation (GALGAS_string ("-isysroot")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 526)) ;
          var_linkOptionForLinkingFrameworkWithTool_24850.addAssign_operation (GALGAS_string ("/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/").add_operation (var_SDK_19410, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 527)).add_operation (GALGAS_string (".sdk"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 527))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 527)) ;
        }
      }
      cEnumerator_stringlist enumerator_25159 (constinArgument_inFrameworkToolFileList, kENUMERATION_UP) ;
      while (enumerator_25159.hasCurrentObject ()) {
        var_linkOptionForLinkingFrameworkWithTool_24850.addAssign_operation (GALGAS_string ("-framework")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 530)) ;
        var_linkOptionForLinkingFrameworkWithTool_24850.addAssign_operation (enumerator_25159.current_mValue (HERE).getter_stringByDeletingPathExtension (SOURCE_FILE ("galgas3TargetGeneration.galgas", 531))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 531)) ;
        enumerator_25159.gotoNextObject () ;
      }
    }
  }
  GALGAS_stringlist var_handCodedSourceToolFileList_25420 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 535)) ;
  cEnumerator_stringlist enumerator_25434 (constinArgument_inHandCodedSourceToolFileList, kENUMERATION_UP) ;
  while (enumerator_25434.hasCurrentObject ()) {
    enumGalgasBool test_58 = kBoolTrue ;
    if (kBoolTrue == test_58) {
      test_58 = GALGAS_bool (kIsNotEqual, enumerator_25434.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgas3TargetGeneration.galgas", 537)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
      if (kBoolTrue == test_58) {
        var_handCodedSourceToolFileList_25420.addAssign_operation (enumerator_25434.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 538))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 538)) ;
      }
    }
    enumerator_25434.gotoNextObject () ;
  }
  GALGAS_string var_jsonFileListContents_25609 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, constinArgument_inHandCodedSourceDirectorySet, var_handCodedSourceToolFileList_25420, var_toolCppFileList_16494, var_linkOptionForLinkingFrameworkWithTool_24850.add_operation (constinArgument_inHandCodedLinkToolFileList, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 545)), var_libpmPath_17591 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 541))) ;
  GALGAS_string var_jsonFileListPath_25878 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 548)).add_operation (GALGAS_string ("/build/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 548)) ;
  GALGAS_bool joker_26050 ; // Joker input parameter
  var_jsonFileListContents_25609.method_writeToFileWhenDifferentContents (var_jsonFileListPath_25878, joker_26050, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 549)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 550)) ;
  enumGalgasBool test_59 = kBoolTrue ;
  if (kBoolTrue == test_59) {
    test_59 = GALGAS_bool (kIsNotEqual, var_SDK_19410.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_59) {
      GALGAS_string var_dir_26172 = var_projectDirectory_16020.add_operation (GALGAS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 553)) ;
      var_dir_26172.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 554)) ;
      GALGAS_string var_applicationBundleBase_26290 ;
      const cMapElement_projectQualifiedFeatureMap * objectArray_26299 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("applicationBundleBase")) ;
      if (NULL != objectArray_26299) {
          macroValidSharedObject (objectArray_26299, cMapElement_projectQualifiedFeatureMap) ;
        var_applicationBundleBase_26290 = objectArray_26299->mProperty_mFeatureValue.getter_string (HERE) ;
      }else{
        var_applicationBundleBase_26290 = GALGAS_string ("fr.irccyn") ;
      }
      GALGAS_string var_InfoPlistContents_26495 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_26290, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17163 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 562))) ;
      GALGAS_bool joker_26789 ; // Joker input parameter
      var_InfoPlistContents_26495.method_writeToFileWhenDifferentContents (var_dir_26172.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 569)), joker_26789, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 569)) ;
      enumGalgasBool test_60 = kBoolTrue ;
      if (kBoolTrue == test_60) {
        test_60 = var_dir_26172.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 571)).getter_fileExists (SOURCE_FILE ("galgas3TargetGeneration.galgas", 571)).operator_not (SOURCE_FILE ("galgas3TargetGeneration.galgas", 571)).boolEnum () ;
        if (kBoolTrue == test_60) {
          GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 572))).method_writeToExecutableFile (var_dir_26172.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 572)) ;
        }
      }
      var_dir_26172.add_operation (GALGAS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 575)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 575)) ;
      GALGAS_string var_InfoPlist_5F_strings_5F_path_27066 = var_dir_26172.add_operation (GALGAS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 576)) ;
      GALGAS_bool joker_27261 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 577))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_27066, joker_27261, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 577)) ;
      GALGAS_string var_Credits_5F_rtf_5F_path_27288 = var_dir_26172.add_operation (GALGAS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 578)) ;
      enumGalgasBool test_61 = kBoolTrue ;
      if (kBoolTrue == test_61) {
        test_61 = var_Credits_5F_rtf_5F_path_27288.getter_fileExists (SOURCE_FILE ("galgas3TargetGeneration.galgas", 579)).operator_not (SOURCE_FILE ("galgas3TargetGeneration.galgas", 579)).boolEnum () ;
        if (kBoolTrue == test_61) {
          GALGAS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_27288, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 580)) ;
        }
      }
      GALGAS_string var_userResourceDir_27584 = var_projectDirectory_16020.add_operation (GALGAS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 583)) ;
      var_userResourceDir_27584.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 584)) ;
      GALGAS_stringlist temp_62 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 585)) ;
      temp_62.addAssign_operation (GALGAS_string ("icns")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 585)) ;
      GALGAS_stringlist var_extensionList_27706 = temp_62 ;
      GALGAS_stringlist var_resourceFiles_27740 = var_userResourceDir_27584.getter_regularFilesWithExtensions (GALGAS_bool (false), var_extensionList_27706 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 586)) ;
      GALGAS_string var_newIntermediateFilePath_27861 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 588)).add_operation (GALGAS_string ("/build/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 588)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 589)) ;
      GALGAS_XcodeProjectDescriptor var_xcodeProject_28145 = GALGAS_XcodeProjectDescriptor::constructor_default (SOURCE_FILE ("galgas3TargetGeneration.galgas", 591)) ;
      var_xcodeProject_28145.setter_setMApplicationBundleName (var_applicationBundleBase_26290 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 592)) ;
      var_xcodeProject_28145.setter_setMProjectName (constinArgument_inTargetName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 593)) ;
      GALGAS_string var_headerSearchPaths_28314 = GALGAS_string ("HEADER_SEARCH_PATHS = (\"../build/output\", \"../build/libpm\", \"../build/user-headers\"") ;
      cEnumerator_stringset enumerator_28459 (constinArgument_inHandCodedSourceDirectorySet, kENUMERATION_UP) ;
      while (enumerator_28459.hasCurrentObject ()) {
        var_headerSearchPaths_28314.plusAssign_operation(GALGAS_string (", \"").add_operation (enumerator_28459.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 596)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 596)) ;
        enumerator_28459.gotoNextObject () ;
      }
      var_headerSearchPaths_28314.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 598)) ;
      GALGAS_stringlist temp_63 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 634)) ;
      temp_63.addAssign_operation (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 601)) ;
      temp_63.addAssign_operation (GALGAS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\"")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 602)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 603)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 604)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 605)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 606)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 607)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 608)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 609)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 610)) ;
      temp_63.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 611)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 612)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 613)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 614)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 615)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 616)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 617)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 618)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 619)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 620)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 621)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 622)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_SHADOW = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 623)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 624)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 625)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 626)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 627)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 628)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 629)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 630)) ;
      temp_63.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 631)) ;
      temp_63.addAssign_operation (var_headerSearchPaths_28314  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 632)) ;
      temp_63.addAssign_operation (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_19410, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 633))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 633)) ;
      temp_63.addAssign_operation (GALGAS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 634)) ;
      GALGAS_stringlist var_xcodeSettingList_28627 = temp_63 ;
      enumGalgasBool test_64 = kBoolTrue ;
      if (kBoolTrue == test_64) {
        test_64 = GALGAS_bool (kIsEqual, var_SDK_19410.objectCompare (GALGAS_string ("macosx10.6"))).boolEnum () ;
        if (kBoolTrue == test_64) {
          var_xcodeSettingList_28627.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 637)) ;
          var_xcodeSettingList_28627.addAssign_operation (GALGAS_string ("GCC_ENABLE_OBJC_GC = required")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 638)) ;
        }
      }
      if (kBoolFalse == test_64) {
        var_xcodeSettingList_28627.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 640)) ;
      }
      enumGalgasBool test_65 = kBoolTrue ;
      if (kBoolTrue == test_65) {
        test_65 = GALGAS_bool (kIsNotEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17163.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_65) {
          var_xcodeSettingList_28627.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_17163, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 643)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 643))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 643)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_28145, var_xcodeSettingList_28627, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 645)) ;
      }
      GALGAS_stringlist var_m_5F_HandCodedSourceFileRefForAppList_30693 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 647)) ;
      GALGAS_stringlist var_m_5F_HandCodedResourceFileRefForAppList_30755 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 648)) ;
      enumGalgasBool test_66 = kBoolTrue ;
      if (kBoolTrue == test_66) {
        test_66 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceAppFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 649)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_66) {
          GALGAS_stringlist joker_31026 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 654)) ;
          GALGAS_stringlist joker_31050 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 655)) ;
          GALGAS_stringlist joker_31128 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 657)) ;
          GALGAS_stringlist joker_31158 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 658)) ;
          GALGAS_string var_groupRef_31262 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Hand Coded Sources (App)"), GALGAS_string ("../"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedSourceAppFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 653)), joker_31026, joker_31050, var_m_5F_HandCodedSourceFileRefForAppList_30693, joker_31128, joker_31158, var_m_5F_HandCodedResourceFileRefForAppList_30755, var_groupRef_31262, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 650)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_groupRef_31262, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 662)) ;
          }
        }
      }
      GALGAS_stringlist var_appFrameworksFileRefList_31425 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 665)) ;
      enumGalgasBool test_67 = kBoolTrue ;
      if (kBoolTrue == test_67) {
        test_67 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkAppFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 666)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_67) {
          GALGAS_stringlist joker_31708 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 671)) ;
          GALGAS_stringlist joker_31732 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 672)) ;
          GALGAS_stringlist joker_31754 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 673)) ;
          GALGAS_stringlist joker_31777 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 674)) ;
          GALGAS_stringlist joker_31859 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 676)) ;
          GALGAS_string var_frameworkGroupRef_31908 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Frameworks (App)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 670)), joker_31708, joker_31732, joker_31754, joker_31777, var_appFrameworksFileRefList_31425, joker_31859, var_frameworkGroupRef_31908, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 667)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_frameworkGroupRef_31908, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 679)) ;
          }
        }
      }
      GALGAS_stringlist var_buildCFileRefListForTool_32063 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 682)) ;
      GALGAS_stringlist var_buildCppFileRefListForTool_32115 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 683)) ;
      GALGAS_stringlist var_m_5F_FileRefList_32154 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 684)) ;
      GALGAS_stringlist var_mm_5F_FileRefList_32194 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 685)) ;
      GALGAS_stringlist var_frameworksFileRefList_32241 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 686)) ;
      GALGAS_stringlist var_resourceFileBuildRefs_32288 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 687)) ;
      enumGalgasBool test_68 = kBoolTrue ;
      if (kBoolTrue == test_68) {
        test_68 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceToolFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 689)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_68) {
          GALGAS_string var_groupRef_32888 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Hand Coded Sources (Tool)"), GALGAS_string ("../"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 693)), var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_32888, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 690)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_groupRef_32888, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 702)) ;
          }
        }
      }
      GALGAS_stringlist var_toolFrameworksFileRefList_33053 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 705)) ;
      enumGalgasBool test_69 = kBoolTrue ;
      if (kBoolTrue == test_69) {
        test_69 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 706)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_69) {
          GALGAS_stringlist joker_33330 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 711)) ;
          GALGAS_stringlist joker_33354 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 712)) ;
          GALGAS_stringlist joker_33376 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 713)) ;
          GALGAS_stringlist joker_33399 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 714)) ;
          GALGAS_stringlist joker_33482 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 716)) ;
          GALGAS_string var_frameworkGroupRef_33531 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Frameworks (Tool)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 710)), joker_33330, joker_33354, joker_33376, joker_33399, var_toolFrameworksFileRefList_33053, joker_33482, var_frameworkGroupRef_33531, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 707)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_frameworkGroupRef_33531, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 719)) ;
          }
        }
      }
      GALGAS_string var_groupRef_34172 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Generated by GALGAS"), GALGAS_string ("../build/output"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 725)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 725))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 725)), var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 722)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 734)) ;
      }
      GALGAS_stringlist var_libpmReferenceGroupList_34284 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 735)) ;
      {
      GALGAS_stringset temp_70 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 752)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_RelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 741)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_RelationConfiguration.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 742)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_Relation.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 743)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_Relation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 744)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_RelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 745)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_RelationSingleType.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 746)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD-and-operation.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 747)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD-find-or-add.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 748)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD-node.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 749)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD-single-operand-ops.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 750)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 751)) ;
      temp_70.addAssign_operation (GALGAS_string ("C_BDD.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 752)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Binary Decision Diagrams"), GALGAS_string ("bdd"), temp_70, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 737)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 762)) ;
      {
      GALGAS_stringset temp_71 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 767)) ;
      temp_71.addAssign_operation (GALGAS_string ("TC_prime_cache2.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 767)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Cache"), GALGAS_string ("cache"), temp_71, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 764)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 776)) ;
      {
      GALGAS_stringset temp_72 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 786)) ;
      temp_72.addAssign_operation (GALGAS_string ("main.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 782)) ;
      temp_72.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 783)) ;
      temp_72.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 784)) ;
      temp_72.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 785)) ;
      temp_72.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 786)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Cocoa Utilities"), GALGAS_string ("cocoa_utilities"), temp_72, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 778)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 796)) ;
      {
      GALGAS_stringset temp_73 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 854)) ;
      temp_73.addAssign_operation (GALGAS_string ("Base.lproj/OC_GGS_Document.xib")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 802)) ;
      temp_73.addAssign_operation (GALGAS_string ("Base.lproj/PMDebug.xib")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 803)) ;
      temp_73.addAssign_operation (GALGAS_string ("Base.lproj/MainMenu.xib")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 804)) ;
      temp_73.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 805)) ;
      temp_73.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 806)) ;
      temp_73.addAssign_operation (GALGAS_string ("F_CocoaWrapperForGalgas.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 807)) ;
      temp_73.addAssign_operation (GALGAS_string ("I_Stop.tiff")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 808)) ;
      temp_73.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 809)) ;
      temp_73.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 810)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 811)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 812)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 813)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 814)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_ColorTransformer.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 815)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_ColorTransformer.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 816)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 817)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 818)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_Document.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 819)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_Document.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 820)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 821)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 822)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_FileEventStream.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 823)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_FileEventStream.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 824)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 825)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 826)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 827)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 828)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 829)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 830)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 831)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 832)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 833)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 834)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextView.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 835)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_GGS_TextView.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 836)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_Lexique.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 837)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_Lexique.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 838)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_Token.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 839)) ;
      temp_73.addAssign_operation (GALGAS_string ("OC_Token.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 840)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMDebug.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 841)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMDebug.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 842)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMFontButton.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 843)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMFontButton.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 844)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 845)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMIssueDescriptor.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 846)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMIssueInRuler.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 847)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMIssueInRuler.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 848)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 849)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 850)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMTableViewRefusesFirstResponder.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 851)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMTableViewRefusesFirstResponder.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 852)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMUndoManager.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 853)) ;
      temp_73.addAssign_operation (GALGAS_string ("PMUndoManager.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 854)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Cocoa GALGAS"), GALGAS_string ("cocoa_galgas"), temp_73, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 798)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 864)) ;
      {
      GALGAS_stringset temp_74 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 876)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_LinkedList.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 870)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_FIFO.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 871)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_UniqueSparseArray.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 872)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_Array.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 873)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_Array2.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 874)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_UniqueArray.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 875)) ;
      temp_74.addAssign_operation (GALGAS_string ("TC_UniqueArray2.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 876)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Collections"), GALGAS_string ("collections"), temp_74, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 866)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 886)) ;
      {
      GALGAS_stringset temp_75 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 907)) ;
      temp_75.addAssign_operation (GALGAS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 892)) ;
      temp_75.addAssign_operation (GALGAS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 893)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 894)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 895)) ;
      temp_75.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 896)) ;
      temp_75.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 897)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_CommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 898)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 899)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 900)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 901)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 902)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 903)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 904)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 905)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 906)) ;
      temp_75.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 907)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Command line Interface"), GALGAS_string ("command_line_interface"), temp_75, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 888)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 917)) ;
      {
      GALGAS_stringset temp_76 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 934)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_FileManager.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 923)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_FileManager.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 924)) ;
      temp_76.addAssign_operation (GALGAS_string ("AC_FileHandle.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 925)) ;
      temp_76.addAssign_operation (GALGAS_string ("AC_FileHandle.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 926)) ;
      temp_76.addAssign_operation (GALGAS_string ("AC_FileHandleForWriting.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 927)) ;
      temp_76.addAssign_operation (GALGAS_string ("AC_FileHandleForWriting.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 928)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 929)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 930)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 931)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_TextFileWrite.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 932)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_HTML_FileWrite.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 933)) ;
      temp_76.addAssign_operation (GALGAS_string ("C_HTML_FileWrite.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 934)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("File"), GALGAS_string ("files"), temp_76, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 919)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 944)) ;
      {
      GALGAS_stringset temp_77 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1047)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 950)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 951)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_value_class.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 952)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_value_class.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 953)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 954)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 955)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 956)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 957)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_list.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 958)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_list.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 959)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_map.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 960)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_map.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 961)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 962)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 963)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 964)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 965)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_uniqueMap.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 966)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_uniqueMap.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 967)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 968)) ;
      temp_77.addAssign_operation (GALGAS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 969)) ;
      temp_77.addAssign_operation (GALGAS_string ("acPtr_class.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 970)) ;
      temp_77.addAssign_operation (GALGAS_string ("acPtr_class.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 971)) ;
      temp_77.addAssign_operation (GALGAS_string ("acStrongPtr_class.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 972)) ;
      temp_77.addAssign_operation (GALGAS_string ("acStrongPtr_class.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 973)) ;
      temp_77.addAssign_operation (GALGAS_string ("cPtr_weakReference_class.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 974)) ;
      temp_77.addAssign_operation (GALGAS_string ("cPtr_weakReference_class.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 975)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_Compiler.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 976)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_Compiler.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 977)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 978)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 979)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 980)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 981)) ;
      GALGAS_string temp_78 ;
      const enumGalgasBool test_79 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_79) {
        temp_78 = GALGAS_string ("C_galgas_verbose_option.cpp") ;
      }else if (kBoolFalse == test_79) {
        temp_78 = GALGAS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_77.addAssign_operation (temp_78  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 982)) ;
      GALGAS_string temp_80 ;
      const enumGalgasBool test_81 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (kBoolTrue == test_81) {
        temp_80 = GALGAS_string ("C_galgas_verbose_option.h") ;
      }else if (kBoolFalse == test_81) {
        temp_80 = GALGAS_string ("C_galgas_quiet_option.h") ;
      }
      temp_77.addAssign_operation (temp_80  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 983)) ;
      temp_77.addAssign_operation (GALGAS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 984)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 985)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 986)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_io.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 987)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_io.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 988)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 989)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 990)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 991)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 992)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_Lexique.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 993)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_Lexique.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 994)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 995)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_LocationInSource.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 996)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 997)) ;
      temp_77.addAssign_operation (GALGAS_string ("C_SourceTextInString.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 998)) ;
      temp_77.addAssign_operation (GALGAS_string ("capCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 999)) ;
      temp_77.addAssign_operation (GALGAS_string ("capCollectionElement.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1000)) ;
      temp_77.addAssign_operation (GALGAS_string ("capCollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1001)) ;
      temp_77.addAssign_operation (GALGAS_string ("capCollectionElementArray.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1002)) ;
      temp_77.addAssign_operation (GALGAS_string ("capSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1003)) ;
      temp_77.addAssign_operation (GALGAS_string ("capSortedListElement.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1004)) ;
      temp_77.addAssign_operation (GALGAS_string ("cCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1005)) ;
      temp_77.addAssign_operation (GALGAS_string ("cCollectionElement.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1006)) ;
      temp_77.addAssign_operation (GALGAS_string ("cEnumerator_range.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1007)) ;
      temp_77.addAssign_operation (GALGAS_string ("cEnumerator_range.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1008)) ;
      temp_77.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1009)) ;
      temp_77.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1010)) ;
      temp_77.addAssign_operation (GALGAS_string ("cIndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1011)) ;
      temp_77.addAssign_operation (GALGAS_string ("cIndexingDictionary.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1012)) ;
      temp_77.addAssign_operation (GALGAS_string ("cIssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1013)) ;
      temp_77.addAssign_operation (GALGAS_string ("cIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1014)) ;
      temp_77.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1015)) ;
      temp_77.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1016)) ;
      temp_77.addAssign_operation (GALGAS_string ("cObjectArray.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1017)) ;
      temp_77.addAssign_operation (GALGAS_string ("cObjectArray.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1018)) ;
      temp_77.addAssign_operation (GALGAS_string ("cProductionNameDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1019)) ;
      temp_77.addAssign_operation (GALGAS_string ("cPtr_object.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1020)) ;
      temp_77.addAssign_operation (GALGAS_string ("cPtr_object.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1021)) ;
      temp_77.addAssign_operation (GALGAS_string ("cSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1022)) ;
      temp_77.addAssign_operation (GALGAS_string ("cSortedListElement.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1023)) ;
      temp_77.addAssign_operation (GALGAS_string ("cTemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1024)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_application.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1025)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1026)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_bigint.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1027)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_bool.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1028)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_char.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1029)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_data.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1030)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_double.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1031)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1032)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_function.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1033)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_location.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1034)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_object.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1035)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_sint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1036)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_sint.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1037)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_string.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1038)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_stringset.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1039)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_timer.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1040)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_type.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1041)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_uint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1042)) ;
      temp_77.addAssign_operation (GALGAS_string ("GALGAS_uint.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1043)) ;
      temp_77.addAssign_operation (GALGAS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1044)) ;
      temp_77.addAssign_operation (GALGAS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1045)) ;
      temp_77.addAssign_operation (GALGAS_string ("typeComparisonResult.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1046)) ;
      temp_77.addAssign_operation (GALGAS_string ("typeComparisonResult.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1047)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Galgas 2"), GALGAS_string ("galgas2"), temp_77, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 946)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1057)) ;
      {
      GALGAS_stringset temp_82 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1187)) ;
      temp_82.addAssign_operation (GALGAS_string ("32-mp_bases.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1063)) ;
      temp_82.addAssign_operation (GALGAS_string ("32-mp_bases.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1064)) ;
      temp_82.addAssign_operation (GALGAS_string ("64-mp_bases.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1065)) ;
      temp_82.addAssign_operation (GALGAS_string ("64-mp_bases.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1066)) ;
      temp_82.addAssign_operation (GALGAS_string ("gmp-impl.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1067)) ;
      temp_82.addAssign_operation (GALGAS_string ("gmp.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1068)) ;
      temp_82.addAssign_operation (GALGAS_string ("longlong.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1069)) ;
      temp_82.addAssign_operation (GALGAS_string ("mini-gmp.c.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1070)) ;
      temp_82.addAssign_operation (GALGAS_string ("mini-gmp.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1071)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-add.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1072)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-add_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1073)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-add_n.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1074)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-addmul_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1075)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-bdiv_dbm1c.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1076)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-cmp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1077)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-dcpi1_div_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1078)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-dive_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1079)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-divrem_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1080)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-divrem_2.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1081)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-get_str.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1082)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-invertappr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1083)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-lshift.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1084)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-lshiftc.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1085)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mu_div_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1086)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1087)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1088)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul_basecase.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1089)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul_fft.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1090)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mul_n.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1091)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-mulmod_bnm1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1092)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-nussbaumer_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1093)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-pre_divrem_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1094)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-rshift.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1095)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sbpi1_div_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1096)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sbpi1_divappr_q.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1097)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-set_str.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1098)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1099)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sqr_basecase.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1100)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sqrmod_bnm1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1101)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sub.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1102)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sub_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1103)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-sub_n.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1104)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-submul_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1105)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-tdiv_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1106)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom22_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1107)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom2_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1108)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom32_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1109)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom33_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1110)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom3_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1111)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom42_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1112)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom43_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1113)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom44_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1114)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom4_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1115)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom53_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1116)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom63_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1117)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom6_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1118)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom6h_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1119)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom8_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1120)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom8h_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1121)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_couple_handling.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1122)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_dgr3_pm1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1123)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_dgr3_pm2.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1124)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1125)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1126)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2exp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1127)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2rexp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1128)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_12pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1129)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_16pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1130)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_5pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1131)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_6pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1132)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_7pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1133)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_8pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1134)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-abs.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1135)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-add.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1136)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-add_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1137)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-and.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1138)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-aors.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1139)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-aors_ui.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1140)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cdiv_q_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1141)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cdiv_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1142)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cfdiv_q_2exp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1143)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-clear.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1144)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-clrbit.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1145)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cmp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1146)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cmp_si.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1147)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-cmp_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1148)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-com.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1149)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-combit.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1150)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-export.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1151)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fdiv_q_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1152)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fdiv_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1153)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fits_s.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1154)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fits_sint.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1155)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-fits_uint.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1156)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-get_si.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1157)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-get_str.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1158)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-get_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1159)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-init.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1160)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-ior.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1161)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1162)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-mul_2exp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1163)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-mul_i.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1164)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-mul_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1165)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-neg.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1166)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-realloc.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1167)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-set.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1168)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-set_str.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1169)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-set_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1170)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-setbit.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1171)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-sizeinbase.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1172)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-sub.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1173)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-sub_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1174)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-swap.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1175)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-tdiv_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1176)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-tstbit.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1177)) ;
      temp_82.addAssign_operation (GALGAS_string ("mpz-xor.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1178)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-assert.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1179)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-bootstrap.c.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1180)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-errno.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1181)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-memory.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1182)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-mp_bpl.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1183)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-mp_clz_tab.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1184)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-mp_dv_tab.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1185)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-mp_minv_tab.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1186)) ;
      temp_82.addAssign_operation (GALGAS_string ("root-tal-notreent.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1187)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("GMP"), GALGAS_string ("gmp"), temp_82, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1059)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1197)) ;
      {
      GALGAS_stringset temp_83 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1212)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ErrorOut.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1203)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ErrorOut.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1204)) ;
      temp_83.addAssign_operation (GALGAS_string ("AC_OutputStream.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1205)) ;
      temp_83.addAssign_operation (GALGAS_string ("AC_OutputStream.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1206)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1207)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ConsoleOut.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1208)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1209)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_ColoredConsole.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1210)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_TCPSocketOut.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1211)) ;
      temp_83.addAssign_operation (GALGAS_string ("C_TCPSocketOut.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1212)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Streams"), GALGAS_string ("streams"), temp_83, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1199)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1222)) ;
      {
      GALGAS_stringset temp_84 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1241)) ;
      temp_84.addAssign_operation (GALGAS_string ("C_HTMLString.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1228)) ;
      temp_84.addAssign_operation (GALGAS_string ("C_HTMLString.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1229)) ;
      temp_84.addAssign_operation (GALGAS_string ("C_String.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1230)) ;
      temp_84.addAssign_operation (GALGAS_string ("C_String.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1231)) ;
      temp_84.addAssign_operation (GALGAS_string ("cUnicodeData.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1232)) ;
      temp_84.addAssign_operation (GALGAS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1233)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_base.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1234)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_cpp.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1235)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_cpp.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1236)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_implementation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1237)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_m.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1238)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_character_m.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1239)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_string_routines.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1240)) ;
      temp_84.addAssign_operation (GALGAS_string ("unicode_string_routines.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1241)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Strings"), GALGAS_string ("strings"), temp_84, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1224)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1251)) ;
      {
      GALGAS_stringset temp_85 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1260)) ;
      temp_85.addAssign_operation (GALGAS_string ("C_DateTime.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1257)) ;
      temp_85.addAssign_operation (GALGAS_string ("C_DateTime.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1258)) ;
      temp_85.addAssign_operation (GALGAS_string ("C_Timer.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1259)) ;
      temp_85.addAssign_operation (GALGAS_string ("C_Timer.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1260)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Time"), GALGAS_string ("time"), temp_85, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1253)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1270)) ;
      {
      GALGAS_stringset temp_86 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1309)) ;
      temp_86.addAssign_operation (GALGAS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1276)) ;
      temp_86.addAssign_operation (GALGAS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1277)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_BigInt.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1278)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_BigInt.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1279)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_CRC32.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1280)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_CRC32.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1281)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_Data.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1282)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_Data.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1283)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1284)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_DirectedGraph.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1285)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1286)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1287)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_SharedObject.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1288)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_SharedObject.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1289)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_UIntSet.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1290)) ;
      temp_86.addAssign_operation (GALGAS_string ("C_UIntSet.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1291)) ;
      temp_86.addAssign_operation (GALGAS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1292)) ;
      temp_86.addAssign_operation (GALGAS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1293)) ;
      temp_86.addAssign_operation (GALGAS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1294)) ;
      temp_86.addAssign_operation (GALGAS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1295)) ;
      temp_86.addAssign_operation (GALGAS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1296)) ;
      temp_86.addAssign_operation (GALGAS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1297)) ;
      temp_86.addAssign_operation (GALGAS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1298)) ;
      temp_86.addAssign_operation (GALGAS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1299)) ;
      temp_86.addAssign_operation (GALGAS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1300)) ;
      temp_86.addAssign_operation (GALGAS_string ("md5.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1301)) ;
      temp_86.addAssign_operation (GALGAS_string ("MF_Assert.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1302)) ;
      temp_86.addAssign_operation (GALGAS_string ("MF_Assert.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1303)) ;
      temp_86.addAssign_operation (GALGAS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1304)) ;
      temp_86.addAssign_operation (GALGAS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1305)) ;
      temp_86.addAssign_operation (GALGAS_string ("PMUInt128.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1306)) ;
      temp_86.addAssign_operation (GALGAS_string ("PMUInt128.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1307)) ;
      temp_86.addAssign_operation (GALGAS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1308)) ;
      temp_86.addAssign_operation (GALGAS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1309)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Utilities"), GALGAS_string ("utilities"), temp_86, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_groupRef_34172, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1272)) ;
      }
      var_libpmReferenceGroupList_34284.addAssign_operation (var_groupRef_34172  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1319)) ;
      GALGAS_string var_libpmGroupRef_52894 ;
      {
      extensionSetter_addGroup (var_xcodeProject_28145, GALGAS_string ("libpm"), GALGAS_string ("../build/libpm"), var_libpmReferenceGroupList_34284, var_libpmGroupRef_52894, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1321)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_libpmGroupRef_52894, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1322)) ;
      }
      GALGAS_string var_resourcesGroupRef_53425 ;
      {
      GALGAS_stringset temp_87 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1328)) ;
      temp_87.addAssign_operation (GALGAS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1328)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Resources"), GALGAS_string ("."), temp_87, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_resourcesGroupRef_53425, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1324)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_resourcesGroupRef_53425, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1338)) ;
      }
      GALGAS_string var_userResourcesGroupRef_54006 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("User Resources"), GALGAS_string ("userResources"), GALGAS_stringset::constructor_setWithStringList (var_resourceFiles_27740  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1343)), var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_userResourcesGroupRef_54006, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1340)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_userResourcesGroupRef_54006, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1352)) ;
      }
      GALGAS_string var_frameworkGroupRef_54627 ;
      {
      GALGAS_stringset temp_88 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1359)) ;
      temp_88.addAssign_operation (GALGAS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1358)) ;
      temp_88.addAssign_operation (GALGAS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1359)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_28145, GALGAS_string ("Frameworks for App"), GALGAS_string ("/System/Library/Frameworks"), temp_88, var_buildCFileRefListForTool_32063, var_buildCppFileRefListForTool_32115, var_m_5F_FileRefList_32154, var_mm_5F_FileRefList_32194, var_frameworksFileRefList_32241, var_resourceFileBuildRefs_32288, var_frameworkGroupRef_54627, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1354)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_28145, var_frameworkGroupRef_54627, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1369)) ;
      }
      GALGAS_stringlist temp_89 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1374)) ;
      temp_89.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 2")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1372)) ;
      temp_89.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1373)) ;
      temp_89.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1374)) ;
      GALGAS_stringlist var_settingList_54769 = temp_89 ;
      enumGalgasBool test_90 = kBoolTrue ;
      if (kBoolTrue == test_90) {
        test_90 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkToolFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1376)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_90) {
          GALGAS_string var_s_54991 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_55031 (constinArgument_inHandCodedLinkToolFileList, kENUMERATION_UP) ;
          while (enumerator_55031.hasCurrentObject ()) {
            var_s_54991.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_55031.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1379)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1379)), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1379)) ;
            if (enumerator_55031.hasNextObject ()) {
              var_s_54991.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1380)) ;
            }
            enumerator_55031.gotoNextObject () ;
          }
          var_s_54991.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1382)) ;
          var_settingList_54769.addAssign_operation (var_s_54991  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1383)) ;
        }
      }
      GALGAS_string var_releaseTargetRef_55516 ;
      GALGAS_string var_releaseProductFileRef_55564 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_28145, constinArgument_inTargetName.add_operation (GALGAS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1386)), constinArgument_inTargetName, var_buildCFileRefListForTool_32063.add_operation (var_buildCppFileRefListForTool_32115, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1388)).add_operation (var_mm_5F_FileRefList_32194, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1388)), var_toolFrameworksFileRefList_33053, var_settingList_54769, var_releaseTargetRef_55516, var_releaseProductFileRef_55564, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1385)) ;
      }
      GALGAS_stringlist temp_91 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1399)) ;
      temp_91.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1396)) ;
      temp_91.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1397)) ;
      temp_91.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1398)) ;
      temp_91.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1399)) ;
      var_settingList_54769 = temp_91 ;
      enumGalgasBool test_92 = kBoolTrue ;
      if (kBoolTrue == test_92) {
        test_92 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkToolFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1401)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_92) {
          GALGAS_string var_s_55861 = GALGAS_string ("OTHER_LDFLAGS=(") ;
          cEnumerator_stringlist enumerator_55901 (constinArgument_inHandCodedLinkToolFileList, kENUMERATION_UP) ;
          while (enumerator_55901.hasCurrentObject ()) {
            var_s_55861.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_55901.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1404)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1404)), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1404)) ;
            if (enumerator_55901.hasNextObject ()) {
              var_s_55861.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1405)) ;
            }
            enumerator_55901.gotoNextObject () ;
          }
          var_s_55861.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1407)) ;
          var_settingList_54769.addAssign_operation (var_s_55861  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1408)) ;
        }
      }
      GALGAS_string var_debugTargetRef_56399 ;
      GALGAS_string var_debugProductFileRef_56445 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_28145, constinArgument_inTargetName.add_operation (GALGAS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1411)), constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1412)), var_buildCFileRefListForTool_32063.add_operation (var_buildCppFileRefListForTool_32115, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1413)).add_operation (var_mm_5F_FileRefList_32194, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1413)), var_toolFrameworksFileRefList_33053, var_settingList_54769, var_debugTargetRef_56399, var_debugProductFileRef_56445, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1410)) ;
      }
      GALGAS_stringlist temp_93 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1422)) ;
      temp_93.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1421)) ;
      temp_93.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1422)) ;
      GALGAS_stringlist var_configurationSettingList_56520 = temp_93 ;
      enumGalgasBool test_94 = kBoolTrue ;
      if (kBoolTrue == test_94) {
        test_94 = GALGAS_bool (kIsNotEqual, var_macCodeSign_16767.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_94) {
          GALGAS_stringlist var_components_56668 = var_macCodeSign_16767.getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string (":") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1425)) ;
          enumGalgasBool test_95 = kBoolTrue ;
          if (kBoolTrue == test_95) {
            test_95 = GALGAS_bool (kIsNotEqual, var_components_56668.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1426)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
            if (kBoolTrue == test_95) {
              TC_Array <C_FixItDescription> fixItArray96 ;
              inCompiler->emitSemanticError (var_macCodeSign_16767.getter_location (HERE), GALGAS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray96  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1427)) ;
            }
          }
          if (kBoolFalse == test_95) {
            enumGalgasBool test_97 = kBoolTrue ;
            if (kBoolTrue == test_97) {
              test_97 = GALGAS_bool (kIsEqual, var_components_56668.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1428)).objectCompare (GALGAS_string ("MacDeveloper"))).boolEnum () ;
              if (kBoolTrue == test_97) {
                var_configurationSettingList_56520.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\"")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1429)) ;
                var_configurationSettingList_56520.addAssign_operation (GALGAS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_56668.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1430)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1430)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1430))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1430)) ;
              }
            }
            if (kBoolFalse == test_97) {
              enumGalgasBool test_98 = kBoolTrue ;
              if (kBoolTrue == test_98) {
                test_98 = GALGAS_bool (kIsEqual, var_components_56668.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1431)).objectCompare (GALGAS_string ("Certificate"))).boolEnum () ;
                if (kBoolTrue == test_98) {
                  var_configurationSettingList_56520.addAssign_operation (GALGAS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_56668.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1432)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1432)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1432))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1432)) ;
                }
              }
              if (kBoolFalse == test_98) {
                TC_Array <C_FixItDescription> fixItArray99 ;
                inCompiler->emitSemanticError (var_macCodeSign_16767.getter_location (HERE), GALGAS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray99  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1434)) ;
              }
            }
          }
        }
      }
      {
      GALGAS_stringlist temp_100 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1444)) ;
      temp_100.addAssign_operation (var_releaseTargetRef_55516  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1444)) ;
      temp_100.addAssign_operation (var_debugTargetRef_56399  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1444)) ;
      GALGAS__32_stringlist temp_101 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1445)) ;
      temp_101.addAssign_operation (var_releaseProductFileRef_55564, constinArgument_inTargetName  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1445)) ;
      temp_101.addAssign_operation (var_debugProductFileRef_56445, constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1445))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1445)) ;
      GALGAS_string joker_58075 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_28145, GALGAS_string ("Cocoa ").add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1438)), GALGAS_string ("Cocoa").add_operation (constinArgument_inTargetName.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1439)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1439)), var_m_5F_FileRefList_32154.add_operation (var_m_5F_HandCodedSourceFileRefForAppList_30693, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1440)), var_frameworksFileRefList_32241.add_operation (var_appFrameworksFileRefList_31425, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1441)), var_resourceFileBuildRefs_32288.add_operation (var_m_5F_HandCodedResourceFileRefForAppList_30755, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1442)), var_configurationSettingList_56520, temp_100, temp_101, joker_58075, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1437)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_28145, var_dir_26172.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1450)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1450)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1450)), var_newIntermediateFilePath_27861, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1449)) ;
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
  "galgasTemplate",
  "galgasProject",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS source file",
  "a GALGAS Template source file",
  "a GALGAS project source file",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "3.4.4" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_string var_creationProjectName_1308 = GALGAS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.getter_value ()) ;
    {
    routine_projectCreation (var_creationProjectName_1308, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 20)) ;
    }
  }
  {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 27)) ;
        }
      }
    }
  }
  {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_updateLIBPMatPath (GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.getter_value ()), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 35)) ;
        }
      }
    }
  }
  {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_check_5F_gmp.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_checkGMP (inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 45)) ;
        }
      }
    }
  }
  {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_displayUnicodeLexicalTestFunctions (inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 55)) ;
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
  GALGAS_string var_parentDirectory_3124 = constinArgument_inSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 70)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 70)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 71)) ;
  temp_0.addAssign_operation (GALGAS_string ("galgasProject")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 71)) ;
  GALGAS_stringlist var_candidateProjectFiles_3246 = var_parentDirectory_3124.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgas_prgm.galgas", 71)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles_3246.getter_length (SOURCE_FILE ("galgas_prgm.galgas", 72)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.getter_location (HERE), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 73)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles_3246.getter_length (SOURCE_FILE ("galgas_prgm.galgas", 74)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3502 = GALGAS_string ("several project files in source file parent directory:") ;
        cEnumerator_stringlist enumerator_3577 (var_candidateProjectFiles_3246, kENUMERATION_UP) ;
        while (enumerator_3577.hasCurrentObject ()) {
          var_s_3502.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_3577.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 77)) ;
          enumerator_3577.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.getter_location (HERE), var_s_3502, fixItArray4  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 79)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_3701 = var_parentDirectory_3124.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 81)).add_operation (var_candidateProjectFiles_3246.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 81)) ;
      {
      routine_parseAndAnalyzeProject (GALGAS_lstring::constructor_new (var_projectFilePath_3701, constinArgument_inSourceFile.getter_location (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 82)), constinArgument_inSourceFile.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 82)) ;
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
  GALGAS_templateInstructionListAST joker_4426 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_4426  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 96)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject (constinArgument_inProjectSourceFile, GALGAS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 109)) ;
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
        }else if (fileExtension == "galgasProject") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
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

