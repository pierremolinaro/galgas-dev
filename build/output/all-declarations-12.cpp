#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-12.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'updateLIBPMatPath'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_updateLIBPMatPath (const GALGAS_string constinArgument_inLIBPMPath,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapper var_fw_1209 = GALGAS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  cEnumerator_stringlist enumerator_1305 (var_fw_1209.getter_allDirectoryPathes (SOURCE_FILE ("libpmHandling.galgas", 22)), kEnumeration_up) ;
  while (enumerator_1305.hasCurrentObject ()) {
    GALGAS_string var_actualDirectory_1337 = constinArgument_inLIBPMPath.add_operation (enumerator_1305.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 23)) ;
    var_actualDirectory_1337.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 24)) ;
    enumerator_1305.gotoNextObject () ;
  }
  GALGAS_stringset var_allNeededFileSet_1448 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("libpmHandling.galgas", 27)) ;
  cEnumerator_stringlist enumerator_1501 (var_fw_1209.getter_allTextFilePathes (SOURCE_FILE ("libpmHandling.galgas", 28)), kEnumeration_up) ;
  while (enumerator_1501.hasCurrentObject ()) {
    GALGAS_string var_contents_1526 = var_fw_1209.getter_textFileContentsAtPath (enumerator_1501.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 29)) ;
    GALGAS_string var_actualFilePath_1595 = constinArgument_inLIBPMPath.add_operation (enumerator_1501.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 30)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_actualFilePath_1595.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas", 31)).objectCompare (GALGAS_string ("py"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bool joker_1746 ; // Joker input parameter
      var_contents_1526.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1595, joker_1746, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 32)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_bool joker_1824 ; // Joker input parameter
      var_contents_1526.method_writeToFileWhenDifferentContents (var_actualFilePath_1595, joker_1824, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 34)) ;
    }
    var_allNeededFileSet_1448.addAssign_operation (enumerator_1501.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 36)) ;
    enumerator_1501.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_1937 (var_fw_1209.getter_allBinaryFilePathes (SOURCE_FILE ("libpmHandling.galgas", 39)), kEnumeration_up) ;
  while (enumerator_1937.hasCurrentObject ()) {
    GALGAS_data var_contents_1960 = var_fw_1209.getter_binaryFileContentsAtPath (enumerator_1937.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 40)) ;
    GALGAS_string var_actualFilePath_2031 = constinArgument_inLIBPMPath.add_operation (enumerator_1937.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 41)) ;
    GALGAS_bool joker_2119 ; // Joker input parameter
    var_contents_1960.method_writeToFileWhenDifferentContents (var_actualFilePath_2031, joker_2119, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 42)) ;
    var_allNeededFileSet_1448.addAssign_operation (enumerator_1937.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas", 43)) ;
    enumerator_1937.gotoNextObject () ;
  }
  GALGAS_stringset var_allActualFileSet_2208 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("libpmHandling.galgas", 46)) ;
  cEnumerator_stringlist enumerator_2271 (constinArgument_inLIBPMPath.getter_regularFiles (GALGAS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas", 47)), kEnumeration_up) ;
  while (enumerator_2271.hasCurrentObject ()) {
    var_allActualFileSet_2208.addAssign_operation (GALGAS_string ("/").add_operation (enumerator_2271.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 48))  COMMA_SOURCE_FILE ("libpmHandling.galgas", 48)) ;
    enumerator_2271.gotoNextObject () ;
  }
  GALGAS_stringset var_uselessFileSet_2336 = var_allActualFileSet_2208.substract_operation (var_allNeededFileSet_1448, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 50)) ;
  cEnumerator_stringset enumerator_2404 (var_uselessFileSet_2336, kEnumeration_up) ;
  while (enumerator_2404.hasCurrentObject ()) {
    {
    GALGAS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2404.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas", 52)) ;
    }
    enumerator_2404.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'compileSemanticDeclarationsGalgas3'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileSemanticDeclarationsGalgas_33_ (const GALGAS_string constinArgument_inProductDirectory,
                                                    const GALGAS_location constinArgument_inEndOfProjectSourceFile,
                                                    const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                                    GALGAS_semanticContext & outArgument_outSemanticContext,
                                                    GALGAS_semanticDeclarationSortedListForGeneration & outArgument_outSemanticDeclarationSortedListForGeneration,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSemanticDeclarationSortedListForGeneration.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 23)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Building semantic context\n")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 24)) ;
  }
  GALGAS_semanticDeclarationListAST var_semanticDeclarationListWithPredefinedTypes_2221 = constinArgument_inSemanticDeclarationList ;
  {
  routine_appendPredefinedTypesASTs (var_semanticDeclarationListWithPredefinedTypes_2221, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 28)) ;
  }
  GALGAS_commandLineOptionListAST var_options_2400 = GALGAS_commandLineOptionListAST::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 30)) ;
  cEnumerator__32_stringlist enumerator_2452 (GALGAS_application::constructor_boolOptionNameList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 31)), kEnumeration_up) ;
  while (enumerator_2452.hasCurrentObject ()) {
    var_options_2400.addAssign_operation (GALGAS_string ("bool").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 33)), GALGAS_lstring::constructor_new (enumerator_2452.current_mValue_31_ (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 34))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 34)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_boolOptionInvocationCharacter (enumerator_2452.current_mValue_30_ (HERE), enumerator_2452.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 35)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 35))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 35)), GALGAS_application::constructor_boolOptionInvocationString (enumerator_2452.current_mValue_30_ (HERE), enumerator_2452.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 36)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 36)), GALGAS_application::constructor_boolOptionCommentString (enumerator_2452.current_mValue_30_ (HERE), enumerator_2452.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 37)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 37)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 38)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 39))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 32)) ;
    enumerator_2452.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_2916 (GALGAS_application::constructor_uintOptionNameList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 41)), kEnumeration_up) ;
  while (enumerator_2916.hasCurrentObject ()) {
    var_options_2400.addAssign_operation (GALGAS_string ("uint").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 43)), GALGAS_lstring::constructor_new (enumerator_2916.current_mValue_31_ (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 44))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 44)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_uintOptionInvocationCharacter (enumerator_2916.current_mValue_30_ (HERE), enumerator_2916.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 45)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 45))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 45)), GALGAS_application::constructor_uintOptionInvocationString (enumerator_2916.current_mValue_30_ (HERE), enumerator_2916.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 46)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 46)), GALGAS_application::constructor_uintOptionCommentString (enumerator_2916.current_mValue_30_ (HERE), enumerator_2916.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 47)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 47)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 48)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 49))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 42)) ;
    enumerator_2916.gotoNextObject () ;
  }
  cEnumerator__32_stringlist enumerator_3382 (GALGAS_application::constructor_stringOptionNameList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 51)), kEnumeration_up) ;
  while (enumerator_3382.hasCurrentObject ()) {
    var_options_2400.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 53)), GALGAS_lstring::constructor_new (enumerator_3382.current_mValue_31_ (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 54))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 54)), GALGAS_lchar::constructor_new (GALGAS_application::constructor_stringOptionInvocationCharacter (enumerator_3382.current_mValue_30_ (HERE), enumerator_3382.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 55)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 55))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 55)), GALGAS_application::constructor_stringOptionInvocationString (enumerator_3382.current_mValue_30_ (HERE), enumerator_3382.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 56)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 56)), GALGAS_application::constructor_stringOptionCommentString (enumerator_3382.current_mValue_30_ (HERE), enumerator_3382.current_mValue_31_ (HERE)  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 57)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 57)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 58)), GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 59))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 52)) ;
    enumerator_3382.gotoNextObject () ;
  }
  var_semanticDeclarationListWithPredefinedTypes_2221.addAssign_operation (GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 63)), var_options_2400  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 61))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 61)) ;
  GALGAS_semanticDeclarationListAST var_sortedSemanticDeclarationListAST_4210 ;
  {
  routine_buildGalgas_33_SemanticContext (var_semanticDeclarationListWithPredefinedTypes_2221, constinArgument_inEndOfProjectSourceFile, outArgument_outSemanticContext, var_sortedSemanticDeclarationListAST_4210, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 67)) ;
  }
  const enumGalgasBool test_1 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->printMessage (GALGAS_string ("*** Semantic analysis\n")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 75)) ;
  }
  cEnumerator_lstringlist enumerator_4405 (outArgument_outSemanticContext.mAttribute_mTypeMap.getter_unsolvedProxyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 78)), kEnumeration_up) ;
  while (enumerator_4405.hasCurrentObject ()) {
    inCompiler->emitSemanticError (enumerator_4405.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 79)), GALGAS_string ("the '@").add_operation (enumerator_4405.current_mValue (HERE).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 79)).add_operation (GALGAS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 79))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 79)) ;
    enumerator_4405.gotoNextObject () ;
  }
  outArgument_outSemanticDeclarationSortedListForGeneration = GALGAS_semanticDeclarationSortedListForGeneration::constructor_emptySortedList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 82)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 83)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_predefinedTypes var_predefinedTypes_4682 = function_buildPredefinedTypes (outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 84)) ;
    cEnumerator_semanticDeclarationListAST enumerator_4777 (var_sortedSemanticDeclarationListAST_4210, kEnumeration_up) ;
    while (enumerator_4777.hasCurrentObject ()) {
      callExtensionMethod_semanticAnalysis ((const cPtr_semanticDeclarationAST *) enumerator_4777.current_mSemanticDeclaration (HERE).ptr (), constinArgument_inProductDirectory, outArgument_outSemanticContext, var_predefinedTypes_4682, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 86)) ;
      enumerator_4777.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildGalgas3SemanticContext'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGalgas_33_SemanticContext (const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                             const GALGAS_location constinArgument_inEndOfProjectSourceFile,
                                             GALGAS_semanticContext & outArgument_outSemanticContext,
                                             GALGAS_semanticDeclarationListAST & outArgument_outSortedSemanticDeclarationListAST,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList_5956 = constinArgument_inSemanticDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_6025 (constinArgument_inSemanticDeclarationList, kEnumeration_up) ;
  while (enumerator_6025.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((const cPtr_semanticDeclarationAST *) enumerator_6025.current_mSemanticDeclaration (HERE).ptr (), var_semanticDeclarationList_5956, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 111)) ;
    enumerator_6025.gotoNextObject () ;
  }
  GALGAS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_6324 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 117)) ;
  GALGAS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6411 = GALGAS_extensionMethodMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 118)) ;
  GALGAS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6505 = GALGAS_extensionGetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 119)) ;
  GALGAS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6599 = GALGAS_extensionSetterMapForBuildingContext::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 120)) ;
  GALGAS_semanticDeclarationListAST var_extensionOverrideDefinitionList_6688 = GALGAS_semanticDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 121)) ;
  cEnumerator_semanticDeclarationListAST enumerator_6760 (var_semanticDeclarationList_5956, kEnumeration_up) ;
  while (enumerator_6760.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((const cPtr_semanticDeclarationAST *) enumerator_6760.current_mSemanticDeclaration (HERE).ptr (), var_semanticTypePrecedenceGraph_6324, var_extensionMethodMapForBuildingContext_6411, var_extensionGetterMapForBuildingContext_6505, var_extensionSetterMapForBuildingContext_6599, var_extensionOverrideDefinitionList_6688, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 123)) ;
    enumerator_6760.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_7138 (var_semanticTypePrecedenceGraph_6324.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 132)), kEnumeration_up) ;
  while (enumerator_7138.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_7138.current_mValue (HERE).mAttribute_string.getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 133)).objectCompare (GALGAS_char (TO_UNICODE (63)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("Optional '").add_operation (enumerator_7138.current_mValue (HERE).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 134)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 134))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 134)) ;
    }
    enumerator_7138.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_semanticTypePrecedenceGraph_6324.getter_undefinedNodeCount (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 138)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_lstringlist enumerator_7380 (var_semanticTypePrecedenceGraph_6324.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 139)), kEnumeration_up) ;
    while (enumerator_7380.hasCurrentObject ()) {
      inCompiler->emitSemanticError (enumerator_7380.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140)), GALGAS_string ("the '").add_operation (enumerator_7380.current_mValue (HERE).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140)).add_operation (GALGAS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 140)) ;
      enumerator_7380.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, GALGAS_string ("semantic analysis not performed, due to undefined type error(s)")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 142)) ;
    outArgument_outSemanticContext.drop () ; // Release error dropped variable
    outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_semanticDeclarationListAST var_unsortedSemanticDeclarationListAST_7807 ;
    GALGAS_lstringlist var_unsortedNodeKeyList_7851 ;
    GALGAS_lstringlist joker_7732 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_6324.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_7732, var_unsortedSemanticDeclarationListAST_7807, var_unsortedNodeKeyList_7851, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 146)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_7807.getter_length (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 152)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s_7933 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_7807.getter_length (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 153)).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 153)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 153)) ;
      cEnumerator_semanticDeclarationListAST enumerator_8135 (var_unsortedSemanticDeclarationListAST_7807, kEnumeration_up) ;
      while (enumerator_8135.hasCurrentObject ()) {
        var_s_7933.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_8135.current_mSemanticDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 155)) ;
        enumerator_8135.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (constinArgument_inEndOfProjectSourceFile, var_s_7933  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 157)) ;
      outArgument_outSemanticContext.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssign_operation(var_extensionOverrideDefinitionList_6688, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 160)) ;
      outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 162)) ;
      cEnumerator_semanticDeclarationListAST enumerator_8576 (outArgument_outSortedSemanticDeclarationListAST, kEnumeration_up) ;
      while (enumerator_8576.hasCurrentObject ()) {
        callExtensionMethod_enterInSemanticContext ((const cPtr_semanticDeclarationAST *) enumerator_8576.current_mSemanticDeclaration (HERE).ptr (), var_extensionMethodMapForBuildingContext_6411, var_extensionGetterMapForBuildingContext_6505, var_extensionSetterMapForBuildingContext_6599, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 165)) ;
        enumerator_8576.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'generateSemanticDeclarationsGalgas3'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSemanticDeclarationsGalgas_33_ (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                     const GALGAS_string constinArgument_inProductDirectory,
                                                     const GALGAS_semanticDeclarationSortedListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                     GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                                     GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                     GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_semanticDeclarationSortedListForGeneration enumerator_9786 (constinArgument_inSemanticDeclarationSortedListForGeneration, kEnumeration_up) ;
  while (enumerator_9786.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((const cPtr_semanticDeclarationForGeneration *) enumerator_9786.current_mDeclaration (HERE).ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 194)) ;
    enumerator_9786.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.getter_value ()) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 201)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_generateOneBigHeader (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 202)) ;
      }
      {
      routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 208)) ;
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.getter_value ()).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 215)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 215)).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_generateOneBigHeader (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 216)) ;
        }
        {
        routine_generateFewImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 222)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 229)).operator_and (GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateManyFiles.getter_value ()) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 229)).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_generateManyHeaders (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 230)) ;
          }
          {
          routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 236)) ;
          }
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = function_generateFewHeaderFiles (inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            routine_generateFewImplementationFilesWithFewHeaders (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 244)) ;
            }
          }else if (kBoolFalse == test_4) {
            {
            routine_generateManyHeaders (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 253)) ;
            }
            {
            routine_generateManyImplementationFiles (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 259)) ;
            }
          }
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'generateManyHeaders'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateManyHeaders (const GALGAS_string constinArgument_inProductDirectory,
                                  const GALGAS_semanticDeclarationSortedListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                  GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                  GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_headerInclusionList_31__12623 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 278)) ;
  GALGAS_stringlist var_headerInclusionList_32__12674 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 279)) ;
  cEnumerator_semanticDeclarationSortedListForGeneration enumerator_12758 (constinArgument_inSemanticDeclarationSortedListForGeneration, kEnumeration_up) ;
  while (enumerator_12758.hasCurrentObject ()) {
    const enumGalgasBool test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 281)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 281)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_inclusionSet_31__12826 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 282)) ;
      GALGAS_string var_headerDef_31__12928 ;
      callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), var_inclusionSet_31__12826, var_headerDef_31__12928, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 283)) ;
      GALGAS_string var_headerIncludes_31__12955 = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_1 = var_inclusionSet_31__12826.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 285)).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 286)).add_operation (GALGAS_string ("headers 1\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 286))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 286)) ;
      }
      cEnumerator_stringset enumerator_13142 (var_inclusionSet_31__12826, kEnumeration_up) ;
      while (enumerator_13142.hasCurrentObject ()) {
        var_headerIncludes_31__12955.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13142.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 289)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 289)) ;
        enumerator_13142.gotoNextObject () ;
      }
      var_headerIncludes_31__12955.plusAssign_operation(var_headerDef_31__12928, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 291)) ;
      GALGAS_stringset var_inclusionSet_32__13268 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 292)) ;
      GALGAS_string var_headerDef_32__13390 ;
      callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__13268, var_headerDef_32__13390, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 293)) ;
      GALGAS_string var_headerIncludes_32__13417 = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_2 = var_inclusionSet_32__13268.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 295)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 296)).add_operation (GALGAS_string ("headers 2\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 296))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 296)) ;
      }
      cEnumerator_stringset enumerator_13604 (var_inclusionSet_32__13268, kEnumeration_up) ;
      while (enumerator_13604.hasCurrentObject ()) {
        var_headerIncludes_32__13417.plusAssign_operation(GALGAS_string ("#include \"").add_operation (enumerator_13604.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 299)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 299)) ;
        enumerator_13604.gotoNextObject () ;
      }
      var_headerIncludes_32__13417.plusAssign_operation(var_headerDef_32__13390, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 301)) ;
      switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 303)).enumValue ()) {
      case GALGAS_headerKind::kNotBuilt:
        break ;
      case GALGAS_headerKind::kEnum_noHeader:
        {
          const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_headerIncludes_31__12955.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 306)).getter_location (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 306)), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12758.current_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 306)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 306))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 306)) ;
          }
          const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__13417.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 309)).getter_location (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 309)), GALGAS_string ("'noHeader' setting for the '").add_operation (enumerator_12758.current_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 309)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 309))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 309)) ;
          }
        }
        break ;
      case GALGAS_headerKind::kEnum_oneHeader:
        {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_headerIncludes_31__12955.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 313)).getter_location (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 313)), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12758.current_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 313)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 313))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 313)) ;
          }
          const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_headerIncludes_32__13417.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_6) {
            inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 316)).getter_location (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 316)), GALGAS_string ("'oneHeader' setting for the '").add_operation (enumerator_12758.current_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 316)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 316))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 316)) ;
          }
        }
        break ;
      case GALGAS_headerKind::kEnum_twoHeaders:
        {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_headerIncludes_31__12955.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 320)).getter_location (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 320)), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12758.current_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 320)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 320))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 320)) ;
          }
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_headerIncludes_32__13417.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            inCompiler->emitSemanticWarning (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 323)).getter_location (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 323)), GALGAS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12758.current_mMessage (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 323)).add_operation (GALGAS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 323))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 323)) ;
          }
        }
        break ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 327)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 327)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_string var_headerString_15044 = GALGAS_string ("#ifndef ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 328)).getter_identifierRepresentation (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 328)).add_operation (GALGAS_string ("_1_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 328)) ;
        var_headerString_15044.plusAssign_operation(GALGAS_string ("#define ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 329)).getter_identifierRepresentation (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 329)).add_operation (GALGAS_string ("_1_DEFINED\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 329)) ;
        var_headerString_15044.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 330)) ;
        var_headerString_15044.plusAssign_operation(GALGAS_string ("#include \"all-predefined-types.h\"\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 331)) ;
        var_headerString_15044.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 332)) ;
        var_headerString_15044.plusAssign_operation(var_headerIncludes_31__12955, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 333)) ;
        var_headerString_15044.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 334)) ;
        var_headerString_15044.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 335)) ;
        var_headerString_15044.plusAssign_operation(GALGAS_string ("#endif\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 336)) ;
        GALGAS_string temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 337)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 337)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = GALGAS_string ("-1") ;
        }else if (kBoolFalse == test_11) {
          temp_10 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_headerFileName_15920 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 337)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 337)) ;
        var_headerInclusionList_31__12623.addAssign_operation (var_headerFileName_15920  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 338)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_15920.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 339))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 339)) ;
        ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_15920.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 340))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 340)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15920.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 343)), var_headerString_15044, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 341)) ;
        }
      }
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 348)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 348)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_headerString_16445 = GALGAS_string ("#ifndef ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 349)).getter_identifierRepresentation (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 349)).add_operation (GALGAS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 349)) ;
        var_headerString_16445.plusAssign_operation(GALGAS_string ("#define ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 350)).getter_identifierRepresentation (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 350)).add_operation (GALGAS_string ("_DEFINED\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 350)) ;
        var_headerString_16445.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 351)) ;
        var_headerString_16445.plusAssign_operation(GALGAS_string ("#include \"").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 352)).add_operation (GALGAS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 352)) ;
        var_headerString_16445.plusAssign_operation(GALGAS_string ("\n"
          "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 353)) ;
        var_headerString_16445.plusAssign_operation(var_headerIncludes_32__13417, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 354)) ;
        var_headerString_16445.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 355)) ;
        var_headerString_16445.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 356)) ;
        var_headerString_16445.plusAssign_operation(GALGAS_string ("#endif\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 357)) ;
        var_headerInclusionList_32__12674.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 358))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 358)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 359)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 359))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 359)) ;
        ioArgument_ioToolHeaderFileList.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 360)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 360))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 360)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12758.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 363)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 363)), var_headerString_16445, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 361)) ;
        }
      }
    }
    enumerator_12758.gotoNextObject () ;
  }
  GALGAS_string var_headerString_17810 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), var_headerInclusionList_31__12623.add_operation (var_headerInclusionList_32__12674, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 372)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 370))) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 374)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 375)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_17810.add_operation (GALGAS_string ("#endif\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 376)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'generateOneBigHeader'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateOneBigHeader (const GALGAS_string constinArgument_inProductDirectory,
                                   const GALGAS_semanticDeclarationSortedListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                   GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                   GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_headerString_18538 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 392)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 390))) ;
  cEnumerator_semanticDeclarationSortedListForGeneration enumerator_18737 (constinArgument_inSemanticDeclarationSortedListForGeneration, kEnumeration_up) ;
  while (enumerator_18737.hasCurrentObject ()) {
    const enumGalgasBool test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18737.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 396)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 396)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_inclusionSet_31__18805 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 397)) ;
      GALGAS_string var_headerString_31__18910 ;
      callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_18737.current_mDeclaration (HERE).ptr (), var_inclusionSet_31__18805, var_headerString_31__18910, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 398)) ;
      var_headerString_18538.plusAssign_operation(var_headerString_31__18910, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 399)) ;
    }
    enumerator_18737.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationSortedListForGeneration enumerator_19040 (constinArgument_inSemanticDeclarationSortedListForGeneration, kEnumeration_up) ;
  while (enumerator_19040.hasCurrentObject ()) {
    const enumGalgasBool test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_19040.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 404)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 404)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_stringset var_inclusionSet_32__19108 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 405)) ;
      GALGAS_string var_headerString_32__19233 ;
      callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_19040.current_mDeclaration (HERE).ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__19108, var_headerString_32__19233, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 406)) ;
      var_headerString_18538.plusAssign_operation(var_headerString_32__19233, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 407)) ;
    }
    enumerator_19040.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 410)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 411)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_headerString_18538.add_operation (GALGAS_string ("#endif\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 412)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Routine 'buildHeader'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildHeader (const GALGAS_headerCompositionMap constinArgument_inHeaderCompositionMap,
                          const GALGAS_string constinArgument_inHeaderFileName,
                          const GALGAS_string constinArgument_inDeclarationName,
                          GALGAS_headerRepartitionMap & ioArgument_ioHeaderRepartitionMap,
                          GALGAS_string & ioArgument_ioHeaderString,
                          C_Compiler * inCompiler
                          COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioHeaderRepartitionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 445)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 445)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 446)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 446)) ;
    }
    const enumGalgasBool test_1 = constinArgument_inHeaderCompositionMap.getter_hasKey (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 447)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_stringset var_inclusionSet_20808 ;
      GALGAS_string var_headerString_20842 ;
      constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 449)), var_inclusionSet_20808, var_headerString_20842, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 448)) ;
      cEnumerator_stringset enumerator_20883 (var_inclusionSet_20808, kEnumeration_up) ;
      while (enumerator_20883.hasCurrentObject ()) {
        {
        routine_buildHeader (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20883.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 454)) ;
        }
        enumerator_20883.gotoNextObject () ;
      }
      ioArgument_ioHeaderString.plusAssign_operation(var_headerString_20842, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 462)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioHeaderString.plusAssign_operation(GALGAS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 464)).add_operation (GALGAS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 464)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'definitionGroupAmount'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_definitionGroupAmount (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outResult ; // Returned variable
  result_outResult = GALGAS_uint ((uint32_t) 50U) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_definitionGroupAmount = false ;
static GALGAS_uint gOnceFunctionResult_definitionGroupAmount ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_definitionGroupAmount (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_definitionGroupAmount) {
    gOnceFunctionResult_definitionGroupAmount = onceFunction_definitionGroupAmount (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_definitionGroupAmount = true ;
  }
  return gOnceFunctionResult_definitionGroupAmount ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_definitionGroupAmount (void) {
  gOnceFunctionResult_definitionGroupAmount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_definitionGroupAmount (NULL,
                                                                   releaseOnceFunctionResult_definitionGroupAmount) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_definitionGroupAmount [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_definitionGroupAmount (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_definitionGroupAmount (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_definitionGroupAmount ("definitionGroupAmount",
                                                                       functionWithGenericHeader_definitionGroupAmount,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_definitionGroupAmount) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateFewImplementationFiles'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFewImplementationFiles (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inProductDirectory,
                                             const GALGAS_semanticDeclarationSortedListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                             GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                             GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_useOneHugeHeader_21839 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()) ;
  GALGAS_uint var_n_21937 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uint var_fileIdx_21955 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_implementationString_21986 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_22017 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 490)) ;
  cEnumerator_semanticDeclarationSortedListForGeneration enumerator_22082 (constinArgument_inSemanticDeclarationSortedListForGeneration, kEnumeration_up) ;
  while (enumerator_22082.hasCurrentObject ()) {
    const enumGalgasBool test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_22082.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 492)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 492)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_code_22226 ;
      callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_22082.current_mDeclaration (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_22017, var_code_22226, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 493)) ;
      const enumGalgasBool test_1 = var_inclusionSet_22017.getter_hasKey (GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 494)).boolEnum () ;
      if (kBoolTrue == test_1) {
        inCompiler->printMessage (GALGAS_string ("Empty inclusion in ").add_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_22082.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 495)).add_operation (GALGAS_string (" cpp headers\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 495))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 495)) ;
      }
      var_implementationString_21986.plusAssign_operation(var_code_22226, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 497)) ;
      var_implementationString_21986.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_22082.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 498)) ;
      var_n_21937.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 499)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_n_21937.objectCompare (function_definitionGroupAmount (inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 500)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_useOneHugeHeader_21839.boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 502)) ;
          temp_4.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 502)) ;
          var_inclusionSet_22017 = temp_4 ;
        }
        GALGAS_string var_header_22657 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_22017.getter_stringList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 505)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 504))) ;
        GALGAS_string var_fileName_22798 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21955.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 507)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 507)) ;
        GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 508)) ;
        temp_5.addAssign_operation (var_fileName_22798  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 508)) ;
        ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 508)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_22798  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 509)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22798, var_header_22657.add_operation (var_implementationString_21986, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 510)) ;
        }
        var_n_21937 = GALGAS_uint ((uint32_t) 0U) ;
        var_fileIdx_21955.increment_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 516)) ;
        var_implementationString_21986 = GALGAS_string::makeEmptyString () ;
        var_inclusionSet_22017 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 518)) ;
      }
    }
    enumerator_22082.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_implementationString_21986.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = var_useOneHugeHeader_21839.boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_stringset temp_8 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 525)) ;
      temp_8.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 525)) ;
      var_inclusionSet_22017 = temp_8 ;
    }
    GALGAS_string var_header_23355 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_22017.getter_stringList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 528)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 527))) ;
    GALGAS_string var_fileName_23484 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_21955.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 530)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 530)) ;
    GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 531)) ;
    temp_9.addAssign_operation (var_fileName_23484  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 531)) ;
    ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 531)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_23484  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 532)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_23484, var_header_23355.add_operation (var_implementationString_21986, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 533)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Routine 'generateFewImplementationFilesWithFewHeaders'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFewImplementationFilesWithFewHeaders (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                           const GALGAS_string constinArgument_inProductDirectory,
                                                           const GALGAS_semanticDeclarationSortedListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                           GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                                           GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                           GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_useOneHugeHeader_24243 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()) ;
  GALGAS_headerCompositionMap var_headerCompositionMap_24342 = GALGAS_headerCompositionMap::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 552)) ;
  cEnumerator_semanticDeclarationSortedListForGeneration enumerator_24407 (constinArgument_inSemanticDeclarationSortedListForGeneration, kEnumeration_up) ;
  while (enumerator_24407.hasCurrentObject ()) {
    const enumGalgasBool test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 554)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 554)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_inclusionSet_31__24482 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 555)) ;
      GALGAS_string var_headerString_31__24569 ;
      callExtensionMethod_appendDeclaration_31_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), var_inclusionSet_31__24482, var_headerString_31__24569, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 556)) ;
      GALGAS_stringset var_inclusionSet_32__24601 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 557)) ;
      GALGAS_string var_headerString_32__24708 ;
      callExtensionMethod_appendDeclaration_32_ ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__24601, var_headerString_32__24708, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 558)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 559)).objectCompare (GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 559)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 560)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 560)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_string ("-1") ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_headerFileName_24789 = callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 560)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 560)) ;
        {
        var_headerCompositionMap_24342.setter_insertKey (var_headerFileName_24789.getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 562)), var_inclusionSet_31__24482, var_headerString_31__24569, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 561)) ;
        }
      }
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 567)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 567)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 570)) ;
        temp_5.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 570)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 570))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 570)) ;
        var_headerCompositionMap_24342.setter_insertKey (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24407.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 569)).getter_nowhere (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 569)), var_inclusionSet_32__24601.operator_or (temp_5 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 570)), var_headerString_32__24708, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 568)) ;
        }
      }
    }
    enumerator_24407.gotoNextObject () ;
  }
  GALGAS_headerRepartitionMap var_headerRepartitionMap_25436 = GALGAS_headerRepartitionMap::constructor_emptyMap (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 577)) ;
  GALGAS_uint var_fileIdx_25455 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_implementationString_25486 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_headerString_25510 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_25541 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 581)) ;
  GALGAS_string var_headerFileName_25567 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 582)) ;
  cEnumerator_semanticDeclarationSortedListForGeneration enumerator_25659 (constinArgument_inSemanticDeclarationSortedListForGeneration, kEnumeration_up) ;
  while (enumerator_25659.hasCurrentObject ()) {
    const enumGalgasBool test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 584)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 584)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 585)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 585)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 586)).objectCompare (GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 586)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          routine_buildHeader (var_headerCompositionMap_24342, var_headerFileName_25567, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 587)).add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 587)), var_headerRepartitionMap_25436, var_headerString_25510, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 587)) ;
          }
          {
          routine_buildHeader (var_headerCompositionMap_24342, var_headerFileName_25567, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 588)), var_headerRepartitionMap_25436, var_headerString_25510, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 588)) ;
          }
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 589)).objectCompare (GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 589)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            {
            routine_buildHeader (var_headerCompositionMap_24342, var_headerFileName_25567, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 590)), var_headerRepartitionMap_25436, var_headerString_25510, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 590)) ;
            }
          }
        }
      }
      GALGAS_string var_code_26422 ;
      callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_25541, var_code_26422, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 593)) ;
      cEnumerator_stringset enumerator_26456 (var_inclusionSet_25541, kEnumeration_up) ;
      while (enumerator_26456.hasCurrentObject ()) {
        {
        routine_buildHeader (var_headerCompositionMap_24342, var_headerFileName_25567, enumerator_26456.current_key (HERE), var_headerRepartitionMap_25436, var_headerString_25510, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 595)) ;
        }
        enumerator_26456.gotoNextObject () ;
      }
      var_implementationString_25486.plusAssign_operation(var_code_26422, inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 597)) ;
      var_implementationString_25486.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_25659.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 598)) ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_implementationString_25486.getter_length (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 599)).objectCompare (GALGAS_uint ((uint32_t) 786432U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        const enumGalgasBool test_11 = var_useOneHugeHeader_24243.boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_stringset temp_12 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 601)) ;
          temp_12.addAssign_operation (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 601)) ;
          var_inclusionSet_25541 = temp_12 ;
        }else if (kBoolFalse == test_11) {
          GALGAS_stringset temp_13 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 603)) ;
          temp_13.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 603))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 603)) ;
          var_inclusionSet_25541 = temp_13 ;
        }
        GALGAS_string var_cppHeader_26932 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_25541.getter_stringList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 606)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 605))) ;
        GALGAS_string var_fileName_27073 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 608)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 608)) ;
        GALGAS_stringlist temp_14 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 609)) ;
        temp_14.addAssign_operation (var_fileName_27073  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 609)) ;
        ioArgument_ioToolProductFileList = temp_14.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 609)) ;
        ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_27073  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 610)) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_27073, var_cppHeader_26932.add_operation (var_implementationString_25486, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 611)) ;
        }
        ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25567.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 617))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 617)) ;
        ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25567.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 618))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 618)) ;
        GALGAS_stringlist temp_15 ;
        const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, var_fileIdx_25455.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_16) {
          temp_15 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 621)) ;
        }else if (kBoolFalse == test_16) {
          GALGAS_stringlist temp_17 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 621)) ;
          temp_17.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 621)).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 621))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 621)) ;
          temp_15 = temp_17 ;
        }
        GALGAS_string var_startOfHeader_27515 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25567, temp_15 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 619))) ;
        {
        GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25567.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 625)), var_startOfHeader_27515.add_operation (var_headerString_25510, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 626)).add_operation (GALGAS_string ("#endif\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 623)) ;
        }
        var_fileIdx_25455.increment_operation (inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 629)) ;
        var_implementationString_25486 = GALGAS_string::makeEmptyString () ;
        var_headerString_25510 = GALGAS_string::makeEmptyString () ;
        var_headerFileName_25567 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 632)) ;
        var_inclusionSet_25541 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 633)) ;
      }
    }
    enumerator_25659.gotoNextObject () ;
  }
  const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_implementationString_25486.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_18) {
    const enumGalgasBool test_19 = var_useOneHugeHeader_24243.boolEnum () ;
    if (kBoolTrue == test_19) {
      var_inclusionSet_25541 = GALGAS_stringset::constructor_setWithString (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 640)) ;
    }
    GALGAS_stringlist temp_20 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 643)) ;
    temp_20.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 643))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 643)) ;
    GALGAS_string var_header_28221 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_20 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 642))) ;
    GALGAS_string var_fileName_28357 = GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 645)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 645)) ;
    GALGAS_stringlist temp_21 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 646)) ;
    temp_21.addAssign_operation (var_fileName_28357  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 646)) ;
    ioArgument_ioToolProductFileList = temp_21.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 646)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_28357  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 647)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_28357, var_header_28221.add_operation (var_implementationString_25486, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 648)) ;
    }
    ioArgument_ioAllProductFileSet.addAssign_operation (var_headerFileName_25567.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 654))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 654)) ;
    ioArgument_ioToolHeaderFileList.addAssign_operation (var_headerFileName_25567.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 655))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 655)) ;
    GALGAS_stringlist temp_22 ;
    const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, var_fileIdx_25455.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_23) {
      temp_22 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 658)) ;
    }else if (kBoolFalse == test_23) {
      GALGAS_stringlist temp_24 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 658)) ;
      temp_24.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 658)).getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 658))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 658)) ;
      temp_22 = temp_24 ;
    }
    GALGAS_string var_startOfHeader_28752 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_25567, temp_22 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 656))) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_25567.add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 662)), var_startOfHeader_28752.add_operation (var_headerString_25510, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 663)).add_operation (GALGAS_string ("#endif\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 660)) ;
    }
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 667)) ;
  ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 668)) ;
  GALGAS_stringlist temp_25 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 671)) ;
  temp_25.addAssign_operation (GALGAS_string ("all-declarations-").add_operation (var_fileIdx_25455.getter_string (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 671))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 671)) ;
  GALGAS_string var_startOfAllDeclarationsHeader_29223 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GALGAS_string ("all-declarations"), temp_25 COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 669))) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, GALGAS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_29223.add_operation (GALGAS_string ("#endif\n"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 673)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateManyImplementationFiles'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateManyImplementationFiles (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                              const GALGAS_string constinArgument_inProductDirectory,
                                              const GALGAS_semanticDeclarationSortedListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                              GALGAS_stringlist & ioArgument_ioToolProductFileList,
                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_useOneHugeHeader_29917 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()) ;
  cEnumerator_semanticDeclarationSortedListForGeneration enumerator_30031 (constinArgument_inSemanticDeclarationSortedListForGeneration, kEnumeration_up) ;
  while (enumerator_30031.hasCurrentObject ()) {
    GALGAS_stringset var_inclusionSet_30052 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 690)) ;
    const enumGalgasBool test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_30031.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 691)).operator_not (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 691)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_implementationString_30235 ;
      callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_30031.current_mDeclaration (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_30052, var_implementationString_30235, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 692)) ;
      const enumGalgasBool test_1 = callExtensionGetter_hasCppHeaderFile ((const cPtr_semanticDeclarationForGeneration *) enumerator_30031.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 693)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_inclusionSet_30052.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_30031.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 694))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 694)) ;
      }
      const enumGalgasBool test_2 = var_useOneHugeHeader_29917.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_inclusionSet_30052 = GALGAS_stringset::constructor_setWithString (GALGAS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 697)) ;
      }
      GALGAS_string var_header_30487 = GALGAS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_30052.getter_stringList (SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 700)) COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 699))) ;
      var_implementationString_30235.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_30031.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 702)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_30031.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 703)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 703))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 703)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_30031.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 706)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 706)), var_header_30487.add_operation (var_implementationString_30235, inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 704)) ;
      }
      ioArgument_ioToolProductFileList.addAssign_operation (callExtensionGetter_implementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_30031.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 709)).add_operation (GALGAS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 709))  COMMA_SOURCE_FILE ("galgas3SemanticDeclarationCompilation.galgas", 709)) ;
    }
    enumerator_30031.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'xcodeProjectGenerationFilewrapper'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of 'English.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'English.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_1 [1] = {
  NULL
} ;

//--- Directory 'English.lproj'

const cDirectoryWrapper gWrapperDirectory_1_xcodeProjectGenerationFilewrapper (
  "English.lproj",
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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
                                                                               const GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
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
  GALGAS_uint index_216_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_216 (in_BUILD_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_216.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_216.current_mBuildReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_216.current_mFileName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXBuildFile;\n"
        "    fileRef = " ;
      result << enumerator_216.current_mFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    settings = {ATTRIBUTES = (); };\n"
        "  };\n"
        "\n" ;
      index_216_.increment () ;
      enumerator_216.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFileReference */\n" ;
  GALGAS_uint index_504_ (0) ;
  if (in_C_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_504 (in_C_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_504.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_504.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_504.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.c;\n"
        "    name = " ;
      result << enumerator_504.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_504.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_504_.increment () ;
      enumerator_504.gotoNextObject () ;
    }
  }
  GALGAS_uint index_834_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_834 (in_CPP_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_834.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_834.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_834.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.cpp;\n"
        "    name = " ;
      result << enumerator_834.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_834.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_834_.increment () ;
      enumerator_834.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1166_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1166 (in_M_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1166.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1166.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1166.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.obj;\n"
        "    name = " ;
      result << enumerator_1166.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1166.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1166_.increment () ;
      enumerator_1166.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1497_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1497 (in_MM_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1497.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1497.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1497.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.objcpp;\n"
        "    name = " ;
      result << enumerator_1497.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1497.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1497_.increment () ;
      enumerator_1497.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1837_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1837 (in_HEADER_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1837.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1837.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1837.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.h;\n"
        "    name = " ;
      result << enumerator_1837.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1837.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1837_.increment () ;
      enumerator_1837.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2173_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2173 (in_FRAMEWORK_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2173.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2173.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2173.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = wrapper.framework;\n"
        "    name = " ;
      result << enumerator_2173.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_2173.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_2173_.increment () ;
      enumerator_2173.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2483_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_2483 (in_TOOL_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_2483.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2483.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2483.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2483_.increment () ;
      enumerator_2483.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2777_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_2777 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_2777.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2777.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2777.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2777_.increment () ;
      enumerator_2777.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3071_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3071 (in_PLIST_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_3071.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3071.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = text.plist;\n"
        "    name = " ;
      result << enumerator_3071.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3071.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3071_.increment () ;
      enumerator_3071.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3380_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3380 (in_XIB_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_3380.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3380.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = wrapper.xib;\n"
        "    name = " ;
      result << enumerator_3380.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3380.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3380_.increment () ;
      enumerator_3380.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3691_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3691 (in_TIFF_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_3691.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3691.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.tiff;\n"
        "    name = " ;
      result << enumerator_3691.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3691.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3691_.increment () ;
      enumerator_3691.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3975_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3975 (in_ICNS_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_3975.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3975.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.icns;\n"
        "    name = " ;
      result << enumerator_3975.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3975.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3975_.increment () ;
      enumerator_3975.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_4362_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_4362 (in_TOOL_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_4362.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_4362.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  " ;
        result << enumerator_4362.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " = {\n"
          "    isa = PBXFrameworksBuildPhase;\n"
          "    buildActionMask = 2147483647;\n"
          "    files = (\n" ;
        GALGAS_uint index_4607_ (0) ;
        if (enumerator_4362.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_4607 (enumerator_4362.current_mFrameworksFileRefList (HERE), kEnumeration_up) ;
          while (enumerator_4607.hasCurrentObject ()) {
            result << "      " ;
            result << enumerator_4607.current_mValue (HERE).stringValue () ;
            result << ",\n" ;
            index_4607_.increment () ;
            enumerator_4607.gotoNextObject () ;
          }
        }
        result << "    );\n"
          "    runOnlyForDeploymentPostprocessing = 0;\n"
          "  };\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_4362_.increment () ;
      enumerator_4362.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4755_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_4755 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_4755.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4755.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFrameworksBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_4939_ (0) ;
      if (enumerator_4755.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_4939 (enumerator_4755.current_mFrameworksFileRefList (HERE), kEnumeration_up) ;
        while (enumerator_4939.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_4939.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_4939_.increment () ;
          enumerator_4939.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_4755_.increment () ;
      enumerator_4755.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXGroup section */\n" ;
  GALGAS_uint index_5156_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_5156 (in_GROUPS, kEnumeration_up) ;
    while (enumerator_5156.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5156.current_mGroupReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_5156.current_mGroupName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXGroup;\n"
        "    children = (\n" ;
      GALGAS_uint index_5283_ (0) ;
      if (enumerator_5156.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_5283 (enumerator_5156.current_mChildrenRefs (HERE), kEnumeration_up) ;
        while (enumerator_5283.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_5283.current_mValue (HERE).stringValue () ;
          result << ", \n" ;
          index_5283_.increment () ;
          enumerator_5283.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_5156.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_5156.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n" ;
      index_5156_.increment () ;
      enumerator_5156.gotoNextObject () ;
    }
  }
  result << "\n"
    "  " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << " /* Main Group */ = {\n"
    "    isa = PBXGroup;\n"
    "    children = (\n" ;
  GALGAS_uint index_5589_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_5589 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kEnumeration_up) ;
    while (enumerator_5589.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_5589.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_5589_.increment () ;
      enumerator_5589.gotoNextObject () ;
    }
  }
  result << "    );\n"
    "    sourceTree = \"<group>\";\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXNativeTarget */\n" ;
  GALGAS_uint index_5774_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5774 (in_TOOL_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_5774.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5774.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_5774.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_5774.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_5774.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " ,\n" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_5774.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "      " ;
        result << enumerator_5774.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " , /* Frameworks */\n" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n"
        "    );\n"
        "    name = " ;
      result << enumerator_5774.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_5774.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_5774.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.tool\";\n"
        "  };\n"
        " \n" ;
      index_5774_.increment () ;
      enumerator_5774.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6410_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_6410 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_6410.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6410.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_6410.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_6410.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_6410.current_mResourceBuildRef (HERE).stringValue () ;
      result << " , /* Resources */\n"
        "      " ;
      result << enumerator_6410.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Frameworks */\n"
        "      " ;
      result << enumerator_6410.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Sources */\n"
        "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n" ;
      GALGAS_uint index_6790_ (0) ;
      if (enumerator_6410.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_6790 (enumerator_6410.current_mDependentTargets (HERE), kEnumeration_up) ;
        while (enumerator_6790.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6790.current_mValue_30_ (HERE).stringValue () ;
          result << " ,\n" ;
          index_6790_.increment () ;
          enumerator_6790.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_6410.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_6410.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_6410.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.application\";\n"
        "  };\n"
        "\n" ;
      index_6410_.increment () ;
      enumerator_6410.gotoNextObject () ;
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
  GALGAS_uint index_7547_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7547 (in_TOOL_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_7547.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_7547.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_7547_.increment () ;
      enumerator_7547.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7604_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_7604 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_7604.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_7604.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_7604_.increment () ;
      enumerator_7604.gotoNextObject () ;
    }
  }
  result << "   );\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_7772_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_7772 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_7772.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_7772.current_mResourceBuildRef (HERE).stringValue () ;
      result << " /* Resources */ = {\n"
        "    isa = PBXResourcesBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_7953_ (0) ;
      if (enumerator_7772.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_7953 (enumerator_7772.current_mResourceFileBuildRefs (HERE), kEnumeration_up) ;
        while (enumerator_7953.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_7953.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_7953_.increment () ;
          enumerator_7953.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_7772_.increment () ;
      enumerator_7772.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n" ;
  GALGAS_uint index_8178_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_8178 (in_TOOL_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_8178.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_8178.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_8343_ (0) ;
      if (enumerator_8178.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_8343 (enumerator_8178.current_mBuildPhaseRefList (HERE), kEnumeration_up) ;
        while (enumerator_8343.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_8343.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_8343_.increment () ;
          enumerator_8343.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_8178_.increment () ;
      enumerator_8178.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8463_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8463 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_8463.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_8463.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_8628_ (0) ;
      if (enumerator_8463.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_8628 (enumerator_8463.current_mBuildPhaseRefList (HERE), kEnumeration_up) ;
        while (enumerator_8628.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_8628.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_8628_.increment () ;
          enumerator_8628.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_8463_.increment () ;
      enumerator_8463.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXTargetDependency */\n"
    " \n" ;
  GALGAS_uint index_8847_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8847 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_8847.hasCurrentObject ()) {
      GALGAS_uint index_8884_ (0) ;
      if (enumerator_8847.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8884 (enumerator_8847.current_mDependentTargets (HERE), kEnumeration_up) ;
        while (enumerator_8884.hasCurrentObject ()) {
          result << "  " ;
          result << enumerator_8884.current_mValue_30_ (HERE).stringValue () ;
          result << " = {\n"
            "    isa = PBXTargetDependency;\n"
            "    target = " ;
          result << enumerator_8884.current_mValue_31_ (HERE).stringValue () ;
          result << ";\n"
            "  };\n"
            "\n" ;
          index_8884_.increment () ;
          enumerator_8884.gotoNextObject () ;
        }
      }
      index_8847_.increment () ;
      enumerator_8847.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXVariantGroup */\n"
    " \n"
    "  /*------------------------------------------------------------------ XCBuildConfiguration */\n"
    "    " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */ = {\n"
    "      isa = XCBuildConfiguration;\n"
    "      buildSettings = {\n" ;
  GALGAS_uint index_9355_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_9355 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kEnumeration_up) ;
    while (enumerator_9355.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_9355.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_9355_.increment () ;
      enumerator_9355.gotoNextObject () ;
    }
  }
  result << "    };\n"
    "    name = Default;\n"
    "  };\n"
    "\n" ;
  GALGAS_uint index_9445_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_9445 (in_TOOL_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_9445.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9445.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_9609_ (0) ;
      if (enumerator_9445.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_9609 (enumerator_9445.current_mBuildConfigurationSettingList (HERE), kEnumeration_up) ;
        while (enumerator_9609.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_9609.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_9609_.increment () ;
          enumerator_9609.gotoNextObject () ;
        }
      }
      result << "      PRODUCT_NAME = " ;
      result << enumerator_9445.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 343)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_9445_.increment () ;
      enumerator_9445.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9780_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_9780 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_9780.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9780.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_9944_ (0) ;
      if (enumerator_9780.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_9944 (enumerator_9780.current_mBuildConfigurationSettingList (HERE), kEnumeration_up) ;
        while (enumerator_9944.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_9944.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_9944_.increment () ;
          enumerator_9944.gotoNextObject () ;
        }
      }
      result << "      INFOPLIST_FILE = \"Info.plist\";\n"
        "      PRODUCT_NAME = " ;
      result << enumerator_9780.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 356)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_9780_.increment () ;
      enumerator_9780.gotoNextObject () ;
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
  GALGAS_uint index_10575_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_10575 (in_TOOL_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_10575.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10575.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_10575.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_10575_.increment () ;
      enumerator_10575.gotoNextObject () ;
    }
  }
  GALGAS_uint index_10875_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10875 (in_APP_5F_TARGET_5F_LIST, kEnumeration_up) ;
    while (enumerator_10875.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10875.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_10875.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_10875_.increment () ;
      enumerator_10875.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'updaterGalgas3ApplicationFileWrapper'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_updaterGalgas_33_ApplicationFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_updaterGalgas_33_ApplicationFileWrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_updaterGalgas_33_ApplicationFileWrapper (
  "",
  0,
  gWrapperAllFiles_updaterGalgas_33_ApplicationFileWrapper_0,
  0,
  gWrapperAllDirectories_updaterGalgas_33_ApplicationFileWrapper_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'updaterGalgas3ApplicationFileWrapper credits'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_credits (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "{\\rtf0\\ansi{\\fonttbl\\f0\\fswiss Helvetica;}\n"
    "{\\colortbl;\\red255\\green255\\blue255;}\n"
    "\\paperw9840\\paperh8400\n"
    "\\pard\\tx560\\tx1120\\tx1680\\tx2240\\tx2800\\tx3360\\tx3920\\tx4480\\tx5040\\tx5600\\tx6160\\tx6720\\ql\\qnatural\n"
    "\n"
    "\\f0\\b\\fs24 \\cf0 Engineering:\n"
    "\\b0 \\\n"
    "\tSome people\\\n"
    "\\\n"
    "\n"
    "\\b Human Interface Design:\n"
    "\\b0 \\\n"
    "\tSome other people\\\n"
    "\\\n"
    "\n"
    "\\b Testing:\n"
    "\\b0 \\\n"
    "\tHopefully not nobody\\\n"
    "\\\n"
    "\n"
    "\\b Documentation:\n"
    "\\b0 \\\n"
    "\tWhoever\\\n"
    "\\\n"
    "\n"
    "\\b With special thanks to:\n"
    "\\b0 \\\n"
    "\tMom\\\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'updaterGalgas3ApplicationFileWrapper info_plist_strings'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_info_5F_plist_5F_strings (C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "/* Localized versions of Info.plist keys */\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'updaterGalgas3ApplicationFileWrapper main_menu_xib'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_main_5F_menu_5F_xib (C_Compiler * /* inCompiler */,
                                                                                               const GALGAS_string & in_TARGET_5F_NAME
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n"
    "<archive type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"8.00\">\n"
    "\t<data>\n"
    "\t\t<int key=\"IBDocument.SystemTarget\">1070</int>\n"
    "\t\t<string key=\"IBDocument.SystemVersion\">11G56</string>\n"
    "\t\t<string key=\"IBDocument.InterfaceBuilderVersion\">2182</string>\n"
    "\t\t<string key=\"IBDocument.AppKitVersion\">1138.51</string>\n"
    "\t\t<string key=\"IBDocument.HIToolboxVersion\">569.00</string>\n"
    "\t\t<object class=\"NSMutableDictionary\" key=\"IBDocument.PluginVersions\">\n"
    "\t\t\t<string key=\"NS.key.0\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t<string key=\"NS.object.0\">2182</string>\n"
    "\t\t</object>\n"
    "\t\t<array key=\"IBDocument.IntegratedClassDependencies\">\n"
    "\t\t\t<string>NSMenu</string>\n"
    "\t\t\t<string>NSMenuItem</string>\n"
    "\t\t\t<string>NSCustomObject</string>\n"
    "\t\t</array>\n"
    "\t\t<array key=\"IBDocument.PluginDependencies\">\n"
    "\t\t\t<string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t</array>\n"
    "\t\t<object class=\"NSMutableDictionary\" key=\"IBDocument.Metadata\">\n"
    "\t\t\t<string key=\"NS.key.0\">PluginDependencyRecalculationVersion</string>\n"
    "\t\t\t<integer value=\"1\" key=\"NS.object.0\"/>\n"
    "\t\t</object>\n"
    "\t\t<array class=\"NSMutableArray\" key=\"IBDocument.RootObjects\" id=\"1048\">\n"
    "\t\t\t<object class=\"NSCustomObject\" id=\"1021\">\n"
    "\t\t\t\t<string key=\"NSClassName\">NSApplication</string>\n"
    "\t\t\t</object>\n"
    "\t\t\t<object class=\"NSCustomObject\" id=\"1014\">\n"
    "\t\t\t\t<string key=\"NSClassName\">FirstResponder</string>\n"
    "\t\t\t</object>\n"
    "\t\t\t<object class=\"NSCustomObject\" id=\"1050\">\n"
    "\t\t\t\t<string key=\"NSClassName\">NSApplication</string>\n"
    "\t\t\t</object>\n"
    "\t\t\t<object class=\"NSMenu\" id=\"649796088\">\n"
    "\t\t\t\t<string key=\"NSTitle\">AMainMenu</string>\n"
    "\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t<object class=\"NSMenuItem\" id=\"694149608\">\n"
    "\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSTitle\">" ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("UpdaterAppMainMenu.xib", 40)).stringValue () ;
  result << "UpdaterApp</string>\n"
    "\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t<object class=\"NSCustomResource\" key=\"NSOnImage\" id=\"35465992\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSClassName\">NSImage</string>\n"
    "\t\t\t\t\t\t\t<string key=\"NSResourceName\">NSMenuCheckmark</string>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t<object class=\"NSCustomResource\" key=\"NSMixedImage\" id=\"502551668\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSClassName\">NSImage</string>\n"
    "\t\t\t\t\t\t\t<string key=\"NSResourceName\">NSMenuMixedState</string>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"110575045\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSTitle\">" ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("UpdaterAppMainMenu.xib", 54)).stringValue () ;
  result << "UpdaterApp</string>\n"
    "\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"238522557\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">About " ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("UpdaterAppMainMenu.xib", 58)).stringValue () ;
  result << "UpdaterApp</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"304266470\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"609285721\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Preferences\xE2""\x80""\xA6""</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">,</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"481834944\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1046388886\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Services</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"752062318\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Services</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSName\">_NSServicesMenu</string>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"646227648\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"755159360\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Hide " ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("UpdaterAppMainMenu.xib", 123)).stringValue () ;
  result << "UpdaterApp</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">h</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"342932134\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Hide Others</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">h</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1572864</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"908899353\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Show All</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1056857174\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"632727374\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Quit " ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("UpdaterAppMainMenu.xib", 161)).stringValue () ;
  result << "UpdaterApp</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">q</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t<string key=\"NSName\">_NSAppleMenu</string>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"NSMenuItem\" id=\"379814623\">\n"
    "\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSTitle\">File</string>\n"
    "\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"720053764\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSTitle\">File</string>\n"
    "\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"705341025\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">New</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">n</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"722745758\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Open\xE2""\x80""\xA6""</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">o</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1025936716\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Open Recent</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"1065607017\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Open Recent</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"759406840\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"1065607017\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Clear Menu</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSName\">_NSRecentDocumentsMenu</string>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"425164168\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"776162233\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Close</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">w</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1023925487\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Save\xE2""\x80""\xA6""</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">s</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"579971712\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Revert to Saved</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1010469920\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"294629803\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Page Setup...</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">P</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1179648</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSToolTip\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"49223823\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Print\xE2""\x80""\xA6""</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">p</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"NSMenuItem\" id=\"952259628\">\n"
    "\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSTitle\">Edit</string>\n"
    "\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"789758025\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSTitle\">Edit</string>\n"
    "\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1058277027\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Undo</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">z</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"790794224\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Redo</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">Z</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1179648</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1040322652\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"296257095\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Cut</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">x</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"860595796\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Copy</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">c</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"29853731\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Paste</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">v</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"82994268\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Paste and Match Style</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">V</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1572864</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"437104165\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Delete</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"583158037\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Select All</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">a</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"212016141\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"892235320\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Find</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"963351320\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Find</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"447796847\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Find\xE2""\x80""\xA6""</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">f</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">1</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"738670835\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Find and Replace\xE2""\x80""\xA6""</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">f</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1572864</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">12</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"326711663\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Find Next</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">g</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">2</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"270902937\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Find Previous</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">G</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1179648</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">3</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"159080638\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Use Selection for Find</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">e</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">7</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"88285865\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Jump to Selection</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">j</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"972420730\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Spelling and Grammar</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"769623530\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Spelling and Grammar</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"679648819\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Show Spelling and Grammar</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">:</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"96193923\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Check Document Now</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">;</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"859480356\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"948374510\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Check Spelling While Typing</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"967646866\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Check Grammar With Spelling</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"795346622\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Correct Spelling Automatically</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"507821607\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Substitutions</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"698887838\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Substitutions</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"65139061\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Show Substitutions</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"19036812\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"605118523\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Smart Copy/Paste</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">f</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">1</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"197661976\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Smart Quotes</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">g</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">2</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"672708820\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Smart Dashes</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"708854459\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Smart Links</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">G</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1179648</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">3</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"537092702\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Text Replacement</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"288088188\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Transformations</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"579392910\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Transformations</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1060694897\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"579392910\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Make Upper Case</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"879586729\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"579392910\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Make Lower Case</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"56570060\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"579392910\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Capitalize</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"676164635\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Speech</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"785027613\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Speech</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"731782645\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"785027613\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Start Speaking</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"680220178\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"785027613\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Stop Speaking</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"NSMenuItem\" id=\"302598603\">\n"
    "\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSTitle\">Format</string>\n"
    "\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"941447902\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSTitle\">Format</string>\n"
    "\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"792887677\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"941447902\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Font</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"786677654\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Font</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"159677712\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Show Fonts</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">t</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"305399458\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Bold</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">b</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">2</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"814362025\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Italic</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">i</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">1</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"330926929\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Underline</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">u</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"533507878\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"158063935\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Bigger</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">+</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">3</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"885547335\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Smaller</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">-</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSTag\">4</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"901062459\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"767671776\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Kern</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"175441468\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Kern</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"252969304\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Use Default</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"766922938\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Use None</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"677519740\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Tighten</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"238351151\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Loosen</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"691570813\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Ligatures</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"1058217995\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Ligatures</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"706297211\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"1058217995\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Use Default</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"568384683\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"1058217995\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Use None</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"663508465\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"1058217995\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Use All</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"769124883\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Baseline</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"18263474\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Baseline</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"257962622\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Use Default</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"644725453\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Superscript</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1037576581\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Subscript</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"941806246\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Raise</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1045724900\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Lower</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"739652853\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1012600125\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Show Colors</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">C</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"214559597\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"596732606\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Copy Style</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">c</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1572864</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"393423671\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Paste Style</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">v</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1572864</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSName\">_NSFontMenu</string>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"215659978\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"941447902\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Text</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"446991534\">\n"
    "\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Text</string>\n"
    "\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"875092757\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Align Left</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">{</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"630155264\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Center</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">|</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"945678886\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Justify</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"512868991\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Align Right</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">}</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"163117631\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"31516759\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Writing Direction</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"956096989\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Writing Direction</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"257099033\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Paragraph</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"551969625\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string type=\"base64-UTF8\" key=\"NSTitle\">CURlZmF1bHQ</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"249532473\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string type=\"base64-UTF8\" key=\"NSTitle\">CUxlZnQgdG8gUmlnaHQ</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"607364498\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string type=\"base64-UTF8\" key=\"NSTitle\">CVJpZ2h0IHRvIExlZnQ</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"508151438\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"981751889\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Selection</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"380031999\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string type=\"base64-UTF8\" key=\"NSTitle\">CURlZmF1bHQ</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"825984362\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string type=\"base64-UTF8\" key=\"NSTitle\">CUxlZnQgdG8gUmlnaHQ</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"560145579\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string type=\"base64-UTF8\" key=\"NSTitle\">CVJpZ2h0IHRvIExlZnQ</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"908105787\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"644046920\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Show Ruler</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"231811626\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Copy Ruler</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">c</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1310720</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"883618387\">\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Paste Ruler</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">v</string>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1310720</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"NSMenuItem\" id=\"586577488\">\n"
    "\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSTitle\">View</string>\n"
    "\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"466310130\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSTitle\">View</string>\n"
    "\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"102151532\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"466310130\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Show Toolbar</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">t</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1572864</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"237841660\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"466310130\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Customize Toolbar\xE2""\x80""\xA6""</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"NSMenuItem\" id=\"713487014\">\n"
    "\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSTitle\">Window</string>\n"
    "\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"835318025\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSTitle\">Window</string>\n"
    "\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"1011231497\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Minimize</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">m</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"575023229\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Zoom</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"299356726\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsDisabled\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<bool key=\"NSIsSeparator\">YES</bool>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"625202149\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">Bring All to Front</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t<string key=\"NSName\">_NSWindowsMenu</string>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"NSMenuItem\" id=\"448692316\">\n"
    "\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSTitle\">Help</string>\n"
    "\t\t\t\t\t\t<string key=\"NSKeyEquiv\"/>\n"
    "\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t<string key=\"NSAction\">submenuAction:</string>\n"
    "\t\t\t\t\t\t<object class=\"NSMenu\" key=\"NSSubmenu\" id=\"992780483\">\n"
    "\t\t\t\t\t\t\t<string key=\"NSTitle\">Help</string>\n"
    "\t\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"NSMenuItems\">\n"
    "\t\t\t\t\t\t\t\t<object class=\"NSMenuItem\" id=\"105068016\">\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMenu\" ref=\"992780483\"/>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSTitle\">" ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("UpdaterAppMainMenu.xib", 1276)).stringValue () ;
  result << "UpdaterApp Help</string>\n"
    "\t\t\t\t\t\t\t\t\t<string key=\"NSKeyEquiv\">\?</string>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSKeyEquivModMask\">1048576</int>\n"
    "\t\t\t\t\t\t\t\t\t<int key=\"NSMnemonicLoc\">2147483647</int>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSOnImage\" ref=\"35465992\"/>\n"
    "\t\t\t\t\t\t\t\t\t<reference key=\"NSMixedImage\" ref=\"502551668\"/>\n"
    "\t\t\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t\t<string key=\"NSName\">_NSHelpMenu</string>\n"
    "\t\t\t\t\t\t</object>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t</array>\n"
    "\t\t\t\t<string key=\"NSName\">_NSMainMenu</string>\n"
    "\t\t\t</object>\n"
    "\t\t\t<object class=\"NSCustomObject\" id=\"976324537\">\n"
    "\t\t\t\t<string key=\"NSClassName\">PMUpdaterAppDelegate</string>\n"
    "\t\t\t</object>\n"
    "\t\t\t<object class=\"NSCustomObject\" id=\"755631768\">\n"
    "\t\t\t\t<string key=\"NSClassName\">NSFontManager</string>\n"
    "\t\t\t</object>\n"
    "\t\t</array>\n"
    "\t\t<object class=\"IBObjectContainer\" key=\"IBDocument.Objects\">\n"
    "\t\t\t<array class=\"NSMutableArray\" key=\"connectionRecords\">\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">terminate:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1050\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"632727374\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">449</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">orderFrontStandardAboutPanel:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1021\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"238522557\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">142</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBOutletConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">delegate</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1021\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"976324537\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">495</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">performMiniaturize:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"1011231497\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">37</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">arrangeInFront:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"625202149\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">39</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">print:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"49223823\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">86</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">runPageLayout:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"294629803\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">87</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">clearRecentDocuments:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"759406840\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">127</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">performClose:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"776162233\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">193</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleContinuousSpellChecking:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"948374510\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">222</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">undo:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"1058277027\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">223</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">copy:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"860595796\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">224</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">checkSpelling:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"96193923\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">225</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">paste:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"29853731\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">226</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">stopSpeaking:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"680220178\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">227</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">cut:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"296257095\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">228</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">showGuessPanel:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"679648819\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">230</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">redo:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"790794224\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">231</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">selectAll:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"583158037\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">232</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">startSpeaking:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"731782645\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">233</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">delete:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"437104165\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">235</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">performZoom:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"575023229\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">240</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">performFindPanelAction:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"447796847\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">241</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">centerSelectionInVisibleArea:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"88285865\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">245</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleGrammarChecking:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"967646866\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">347</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleSmartInsertDelete:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"605118523\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">355</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleAutomaticQuoteSubstitution:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"197661976\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">356</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleAutomaticLinkDetection:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"708854459\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">357</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">saveDocument:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"1023925487\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">362</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">revertDocumentToSaved:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"579971712\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">364</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">runToolbarCustomizationPalette:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"237841660\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">365</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleToolbarShown:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"102151532\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">366</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">hide:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"755159360\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">367</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">hideOtherApplications:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"342932134\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">368</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">unhideAllApplications:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"908899353\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">370</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">newDocument:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"705341025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">373</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">openDocument:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"722745758\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">374</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">raiseBaseline:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"941806246\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">426</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">lowerBaseline:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"1045724900\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">427</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">copyFont:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"596732606\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">428</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">subscript:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"1037576581\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">429</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">superscript:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"644725453\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">430</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">tightenKerning:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"677519740\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">431</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">underline:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"330926929\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">432</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">orderFrontColorPanel:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"1012600125\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">433</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">useAllLigatures:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"663508465\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">434</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">loosenKerning:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"238351151\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">435</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">pasteFont:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"393423671\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">436</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">unscript:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"257962622\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">437</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">useStandardKerning:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"252969304\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">438</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">useStandardLigatures:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"706297211\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">439</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">turnOffLigatures:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"568384683\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">440</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">turnOffKerning:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"766922938\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">441</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleAutomaticSpellingCorrection:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"795346622\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">456</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">orderFrontSubstitutionsPanel:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"65139061\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">458</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleAutomaticDashSubstitution:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"672708820\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">461</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleAutomaticTextReplacement:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"537092702\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">463</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">uppercaseWord:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"1060694897\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">464</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">capitalizeWord:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"56570060\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">467</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">lowercaseWord:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"879586729\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">468</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">pasteAsPlainText:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"82994268\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">486</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">performFindPanelAction:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"326711663\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">487</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">performFindPanelAction:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"270902937\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">488</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">performFindPanelAction:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"159080638\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">489</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">showHelp:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"105068016\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">493</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">alignCenter:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"630155264\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">518</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">pasteRuler:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"883618387\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">519</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">toggleRuler:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"644046920\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">520</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">alignRight:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"512868991\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">521</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">copyRuler:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"231811626\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">522</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">alignJustified:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"945678886\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">523</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">alignLeft:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"875092757\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">524</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">makeBaseWritingDirectionNatural:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"551969625\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">525</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">makeBaseWritingDirectionLeftToRight:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"249532473\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">526</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">makeBaseWritingDirectionRightToLeft:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"607364498\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">527</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">makeTextWritingDirectionNatural:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"380031999\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">528</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">makeTextWritingDirectionLeftToRight:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"825984362\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">529</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">makeTextWritingDirectionRightToLeft:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"560145579\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">530</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">performFindPanelAction:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"738670835\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">535</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">addFontTrait:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"755631768\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"305399458\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">421</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">addFontTrait:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"755631768\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"814362025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">422</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">modifyFont:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"755631768\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"885547335\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">423</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">orderFrontFontPanel:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"755631768\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"159677712\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">424</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t\t<object class=\"IBConnectionRecord\">\n"
    "\t\t\t\t\t<object class=\"IBActionConnection\" key=\"connection\">\n"
    "\t\t\t\t\t\t<string key=\"label\">modifyFont:</string>\n"
    "\t\t\t\t\t\t<reference key=\"source\" ref=\"755631768\"/>\n"
    "\t\t\t\t\t\t<reference key=\"destination\" ref=\"158063935\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<int key=\"connectionID\">425</int>\n"
    "\t\t\t\t</object>\n"
    "\t\t\t</array>\n"
    "\t\t\t<object class=\"IBMutableOrderedSet\" key=\"objectRecords\">\n"
    "\t\t\t\t<array key=\"orderedObjects\">\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">0</int>\n"
    "\t\t\t\t\t\t<array key=\"object\" id=\"0\"/>\n"
    "\t\t\t\t\t\t<reference key=\"children\" ref=\"1048\"/>\n"
    "\t\t\t\t\t\t<nil key=\"parent\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">-2</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1021\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"0\"/>\n"
    "\t\t\t\t\t\t<string key=\"objectName\">File's Owner</string>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">-1</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1014\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"0\"/>\n"
    "\t\t\t\t\t\t<string key=\"objectName\">First Responder</string>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">-3</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1050\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"0\"/>\n"
    "\t\t\t\t\t\t<string key=\"objectName\">Application</string>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">29</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"713487014\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"694149608\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"952259628\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"379814623\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"586577488\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"302598603\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"448692316\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"0\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">19</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"713487014\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"835318025\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">56</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"694149608\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">217</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"952259628\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">83</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"379814623\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">81</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"1023925487\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"49223823\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"722745758\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"705341025\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1025936716\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"294629803\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"776162233\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"425164168\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"579971712\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1010469920\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"379814623\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">75</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1023925487\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">78</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"49223823\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">72</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"722745758\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">82</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"705341025\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">124</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1025936716\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"1065607017\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">77</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"294629803\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">73</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"776162233\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">79</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"425164168\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">112</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"579971712\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">74</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1010469920\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"720053764\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">125</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1065607017\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"759406840\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"1025936716\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">126</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"759406840\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"1065607017\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">205</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"437104165\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"583158037\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1058277027\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"212016141\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"296257095\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"29853731\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"860595796\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1040322652\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"790794224\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"892235320\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"972420730\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"676164635\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"507821607\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"288088188\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"82994268\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"952259628\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">202</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"437104165\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">198</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"583158037\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">207</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1058277027\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">214</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"212016141\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">199</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"296257095\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">203</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"29853731\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">197</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"860595796\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">206</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1040322652\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">215</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"790794224\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">218</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"892235320\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"963351320\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">216</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"972420730\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"769623530\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">200</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"948374510\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"96193923\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"679648819\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"967646866\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"859480356\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"795346622\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"972420730\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">219</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"948374510\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">201</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"96193923\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">204</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"679648819\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">220</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"270902937\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"88285865\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"159080638\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"326711663\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"447796847\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"738670835\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"892235320\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">213</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"270902937\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">210</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"88285865\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">221</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"159080638\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">208</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"326711663\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">209</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"447796847\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">57</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"238522557\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"755159360\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"908899353\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"632727374\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"646227648\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"609285721\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"481834944\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"304266470\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1046388886\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1056857174\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"342932134\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"694149608\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">58</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"238522557\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">134</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"755159360\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">150</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"908899353\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">136</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"632727374\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">144</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"646227648\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">129</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"609285721\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">143</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"481834944\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">236</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"304266470\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">131</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1046388886\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"752062318\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">149</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1056857174\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">145</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"342932134\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"110575045\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">130</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"752062318\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"1046388886\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">24</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"299356726\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"625202149\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"575023229\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1011231497\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"713487014\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">92</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"299356726\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">5</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"625202149\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">239</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"575023229\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">23</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1011231497\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"835318025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">295</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"586577488\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"466310130\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">296</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"466310130\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"102151532\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"237841660\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"586577488\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">297</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"102151532\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"466310130\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">298</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"237841660\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"466310130\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">211</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"676164635\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"785027613\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">212</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"785027613\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"680220178\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"731782645\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"676164635\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">195</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"680220178\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"785027613\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">196</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"731782645\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"785027613\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">346</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"967646866\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">348</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"507821607\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">349</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"605118523\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"197661976\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"708854459\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"65139061\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"19036812\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"672708820\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"537092702\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"507821607\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">350</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"605118523\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">351</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"197661976\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">354</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"708854459\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">375</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"302598603\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"941447902\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">376</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"941447902\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"792887677\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"215659978\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"302598603\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">377</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"792887677\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"941447902\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">388</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"159677712\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"305399458\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"814362025\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"330926929\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"533507878\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"158063935\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"885547335\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"901062459\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"767671776\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"691570813\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"769124883\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"739652853\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1012600125\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"214559597\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"596732606\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"393423671\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"792887677\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">389</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"159677712\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">390</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"305399458\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">391</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"814362025\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">392</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"330926929\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">393</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"533507878\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">394</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"158063935\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">395</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"885547335\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">396</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"901062459\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">397</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"767671776\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"175441468\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">398</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"691570813\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"1058217995\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">399</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"769124883\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"18263474\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">400</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"739652853\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">401</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1012600125\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">402</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"214559597\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">403</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"596732606\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">404</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"393423671\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"786677654\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">405</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"257962622\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"644725453\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1037576581\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"941806246\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"1045724900\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"769124883\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">406</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"257962622\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">407</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"644725453\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">408</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1037576581\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">409</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"941806246\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">410</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1045724900\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"18263474\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">411</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1058217995\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"706297211\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"568384683\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"663508465\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"691570813\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">412</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"706297211\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"1058217995\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">413</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"568384683\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"1058217995\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">414</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"663508465\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"1058217995\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">415</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"252969304\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"766922938\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"677519740\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"238351151\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"767671776\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">416</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"252969304\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">417</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"766922938\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">418</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"677519740\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">419</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"238351151\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"175441468\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">420</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"755631768\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"0\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">450</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"288088188\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"579392910\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">451</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"579392910\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"1060694897\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"879586729\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"56570060\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"288088188\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">452</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"1060694897\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"579392910\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">453</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"859480356\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">454</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"795346622\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"769623530\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">457</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"65139061\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">459</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"19036812\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">460</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"672708820\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">462</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"537092702\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"698887838\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">465</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"879586729\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"579392910\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">466</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"56570060\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"579392910\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">485</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"82994268\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"789758025\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">490</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"448692316\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"992780483\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"649796088\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">491</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"992780483\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"105068016\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"448692316\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">492</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"105068016\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"992780483\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">494</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"976324537\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"0\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">496</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"215659978\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"941447902\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">497</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"875092757\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"630155264\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"945678886\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"512868991\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"163117631\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"31516759\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"908105787\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"644046920\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"231811626\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"883618387\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"215659978\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">498</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"875092757\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">499</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"630155264\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">500</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"945678886\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">501</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"512868991\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">502</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"163117631\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">503</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"31516759\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">504</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"908105787\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">505</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"644046920\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">506</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"231811626\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">507</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"883618387\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"446991534\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">508</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t\t<array class=\"NSMutableArray\" key=\"children\">\n"
    "\t\t\t\t\t\t\t<reference ref=\"257099033\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"551969625\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"249532473\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"607364498\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"508151438\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"981751889\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"380031999\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"825984362\"/>\n"
    "\t\t\t\t\t\t\t<reference ref=\"560145579\"/>\n"
    "\t\t\t\t\t\t</array>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"31516759\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">509</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"257099033\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">510</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"551969625\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">511</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"249532473\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">512</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"607364498\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">513</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"508151438\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">514</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"981751889\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">515</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"380031999\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">516</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"825984362\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">517</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"560145579\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"956096989\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t\t<object class=\"IBObjectRecord\">\n"
    "\t\t\t\t\t\t<int key=\"objectID\">534</int>\n"
    "\t\t\t\t\t\t<reference key=\"object\" ref=\"738670835\"/>\n"
    "\t\t\t\t\t\t<reference key=\"parent\" ref=\"963351320\"/>\n"
    "\t\t\t\t\t</object>\n"
    "\t\t\t\t</array>\n"
    "\t\t\t</object>\n"
    "\t\t\t<dictionary class=\"NSMutableDictionary\" key=\"flattenedProperties\">\n"
    "\t\t\t\t<string key=\"-1.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"-2.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"-3.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"112.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"124.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"125.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"126.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"129.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"130.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"131.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"134.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"136.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"143.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"144.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"145.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"149.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"150.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"19.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"195.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"196.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"197.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"198.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"199.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"200.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"201.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"202.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"203.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"204.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"205.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"206.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"207.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"208.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"209.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"210.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"211.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"212.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"213.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"214.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"215.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"216.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"217.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"218.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"219.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"220.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"221.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"23.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"236.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"239.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"24.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"29.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"295.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"296.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"297.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"298.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"346.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"348.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"349.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"350.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"351.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"354.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"375.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"376.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"377.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"388.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"389.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"390.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"391.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"392.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"393.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"394.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"395.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"396.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"397.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"398.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"399.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"400.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"401.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"402.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"403.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"404.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"405.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"406.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"407.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"408.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"409.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"410.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"411.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"412.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"413.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"414.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"415.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"416.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"417.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"418.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"419.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"420.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"450.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"451.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"452.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"453.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"454.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"457.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"459.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"460.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"462.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"465.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"466.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"485.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"490.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"491.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"492.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"494.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"496.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"497.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"498.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"499.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"5.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"500.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"501.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"502.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"503.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"504.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"505.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"506.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"507.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"508.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"509.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"510.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"511.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"512.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"513.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"514.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"515.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"516.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"517.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"534.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"56.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"57.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"58.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"72.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"73.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"74.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"75.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"77.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"78.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"79.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"81.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"82.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"83.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t\t<string key=\"92.IBPluginDependency\">com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "\t\t\t</dictionary>\n"
    "\t\t\t<dictionary class=\"NSMutableDictionary\" key=\"unlocalizedProperties\"/>\n"
    "\t\t\t<nil key=\"activeLocalization\"/>\n"
    "\t\t\t<dictionary class=\"NSMutableDictionary\" key=\"localizations\"/>\n"
    "\t\t\t<nil key=\"sourceID\"/>\n"
    "\t\t\t<int key=\"maxID\">535</int>\n"
    "\t\t</object>\n"
    "\t\t<object class=\"IBClassDescriber\" key=\"IBDocument.Classes\"/>\n"
    "\t\t<int key=\"IBDocument.localizationMode\">0</int>\n"
    "\t\t<string key=\"IBDocument.TargetRuntimeIdentifier\">IBCocoaFramework</string>\n"
    "\t\t<object class=\"NSMutableDictionary\" key=\"IBDocument.PluginDeclaredDependencies\">\n"
    "\t\t\t<string key=\"NS.key.0\">com.apple.InterfaceBuilder.CocoaPlugin.macosx</string>\n"
    "\t\t\t<real value=\"1070\" key=\"NS.object.0\"/>\n"
    "\t\t</object>\n"
    "\t\t<object class=\"NSMutableDictionary\" key=\"IBDocument.PluginDeclaredDevelopmentDependencies\">\n"
    "\t\t\t<string key=\"NS.key.0\">com.apple.InterfaceBuilder.CocoaPlugin.InterfaceBuilder3</string>\n"
    "\t\t\t<real value=\"4300\" key=\"NS.object.0\"/>\n"
    "\t\t</object>\n"
    "\t\t<bool key=\"IBDocument.PluginDeclaredDependenciesTrackSystemTargetVersion\">YES</bool>\n"
    "\t\t<int key=\"IBDocument.defaultPropertyAccessControl\">3</int>\n"
    "\t\t<dictionary class=\"NSMutableDictionary\" key=\"IBDocument.LastKnownImageSizes\">\n"
    "\t\t\t<string key=\"NSMenuCheckmark\">{11, 11}</string>\n"
    "\t\t\t<string key=\"NSMenuMixedState\">{10, 3}</string>\n"
    "\t\t</dictionary>\n"
    "\t\t<bool key=\"IBDocument.UseAutolayout\">YES</bool>\n"
    "\t</data>\n"
    "</archive>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'updaterGalgas3ApplicationFileWrapper application_delegate_header'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_application_5F_delegate_5F_header (C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMAppDelegate.h\n"
    "//  CanariUpdaterApp\n"
    "//\n"
    "//  Created by Pierre Molinaro on 30/07/12.\n"
    "//  Copyright (c) 2012 IRCCyN. All rights reserved.\n"
    "//\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@interface PMUpdaterAppDelegate : NSObject <NSApplicationDelegate> {\n"
    "  @private NSString * mCocoaApplicationPath ;\n"
    "  @private NSAlert * mCocoaApplicationIsStillRunningAlert ;\n"
    "  @private NSUInteger mWaitingTimeInSeconds ;\n"
    "}\n"
    "\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'updaterGalgas3ApplicationFileWrapper application_delegate_implementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_application_5F_delegate_5F_implementation (C_Compiler * /* inCompiler */,
                                                                                                                     const GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                                                     const GALGAS_string & in_TARGET_5F_NAME
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMUpdaterAppDelegate.m\n"
    "//\n"
    "//  Created by Pierre Molinaro on 30/07/12.\n"
    "//  Copyright (c) 2012 IRCCyN. All rights reserved.\n"
    "//\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import \"PMUpdaterAppDelegate.h\"\n"
    "#import \"PMUpdaterServerProtocol.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import <SystemConfiguration/SystemConfiguration.h>\n"
    "#import <ServiceManagement/ServiceManagement.h>\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "//#define DEBUG_UPDATER\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#if __has_feature(objc_arc)\n"
    "  #define macroBridgeInARC __bridge\n"
    "#else\n"
    "  #define macroBridgeInARC\n"
    "#endif\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static NSConnection * installAndLaunchHelperToolWithIdentifier (NSString * inToolIdentifier) {\n"
    "  #ifdef EASY_BINDINGS_DEBUG\n"
    "    NSLog (@\"%s\", __PRETTY_FUNCTION__) ;\n"
    "  #endif\n"
    "//-1--- Check if tool already installed\n"
    "  BOOL helperIsAlreadyInstalled = NO;\n"
    "  CFDictionaryRef existingJob = SMJobCopyDictionary (kSMDomainSystemLaunchd, (macroBridgeInARC CFStringRef) inToolIdentifier);\n"
    "  #ifdef LOGGING_SMJOBBLESS\n"
    "    NSLog (@\"Helper Tool already installed: %@\", NULL != existingJob \? @\"yes\" : @\"no\") ;\n"
    "  #endif\n"
    "  if (NULL != existingJob) {\n"
    "    helperIsAlreadyInstalled = YES;\n"
    "    CFRelease (existingJob) ; existingJob = NULL ;\n"
    "  }\n"
    "//-2--- Create Authorization Item and Right\n"
    " AuthorizationItem authItems [2] = {\n"
    "    {kSMRightBlessPrivilegedHelper, 0, NULL, 0},\n"
    "    {kSMRightModifySystemDaemons, 0, NULL, 0} // Needed by SMJobRemove\n"
    "  } ;\n"
    "  AuthorizationRights authRights = {(helperIsAlreadyInstalled \? 2 : 1), authItems} ;\n"
    "  const AuthorizationFlags flags =\n"
    "   kAuthorizationFlagDefaults\n"
    " | kAuthorizationFlagInteractionAllowed\n"
    "// | kAuthorizationFlagPreAuthorize\n"
    " | kAuthorizationFlagExtendRights\n"
    "  ;\n"
    "//-3--- Obtain the right to install privileged helper tools.\n"
    " AuthorizationRef authRef = NULL ;\n"
    " const OSStatus status = AuthorizationCreate (& authRights, kAuthorizationEmptyEnvironment, flags, & authRef) ;\n"
    "  Boolean ok = errAuthorizationSuccess == status ;\n"
    "  #ifdef LOGGING_SMJOBBLESS\n"
    "    NSLog (@\"AuthorizationRef creation: %@\", ok \? @\"ok\" : @\"failed\") ;\n"
    "  #endif\n"
    "//-4--- Remove Helper Tool\n"
    "  if (ok && helperIsAlreadyInstalled) {\n"
    "    CFErrorRef cfError = nil ;\n"
    "    const Boolean removed = SMJobRemove (kSMDomainSystemLaunchd, (macroBridgeInARC CFStringRef) inToolIdentifier, authRef, YES, & cfError) ;\n"
    "    #ifdef LOGGING_SMJOBBLESS\n"
    "      NSLog (@\"SMJobRemove: %@\", removed \? @\"removed\" : @\"error\") ;\n"
    "    #endif\n"
    "    if (!removed) {\n"
    "      NSError * error = (macroBridgeInARC NSError *)(cfError) ;\n"
    "      [NSApp presentError:error] ;\n"
    "    }\n"
    "    CFRelease (cfError) ;\n"
    "  }\n"
    "//-5--- Install Helper Tool\n"
    "  if (ok) {\n"
    "    CFErrorRef cfError = nil ;\n"
    "    ok = SMJobBless (kSMDomainSystemLaunchd, (macroBridgeInARC CFStringRef) inToolIdentifier, authRef, & cfError) ;\n"
    "    #ifdef LOGGING_SMJOBBLESS\n"
    "      NSLog (@\"SMJobBless: %@\", ok \? @\"ok\" : @\"failed\") ;\n"
    "    #endif\n"
    "    if (!ok) {\n"
    "      NSError * error = (macroBridgeInARC NSError *)(cfError) ;\n"
    "      [NSApp presentError:error] ;\n"
    "    }\n"
    "    CFRelease (cfError) ;\n"
    " }\n"
    "//-6--- Free Authorization\n"
    "  if (NULL != authRef) {\n"
    "    AuthorizationFree (authRef, kAuthorizationFlagDefaults) ;\n"
    "    authRef = NULL ;\n"
    "  }\n"
    "//-7--- Run and connect\n"
    "  NSConnection * connection = nil ;\n"
    "  if (ok) {\n"
    "    connection = [NSConnection\n"
    "      connectionWithRegisteredName:[inToolIdentifier stringByAppendingString:@\".mach\"]\n"
    "      host:nil\n"
    "    ] ;\n"
    "    #ifdef LOGGING_SMJOBBLESS\n"
    "      ok = nil != connection ;\n"
    "      if (ok) {\n"
    "        NSLog (@\"Helper Tool is launched\") ;\n"
    "        NSDistantObject * rootProxy = [connection rootProxy] ;\n"
    "        NSLog (@\"rootProxy %@\", rootProxy) ;\n"
    "      }else{\n"
    "        NSLog (@\"No Connection\") ;\n"
    "      }\n"
    "    #endif\n"
    "  }\n"
    "//-8---\n"
    "  return connection ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@implementation PMUpdaterAppDelegate\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) installAndTerminates {\n"
    "//--- Dismiss waiting alert\n"
    "  if (nil != mCocoaApplicationIsStillRunningAlert) {\n"
    "    [mCocoaApplicationIsStillRunningAlert.window orderOut:nil] ;\n"
    "    [NSApp endSheet:mCocoaApplicationIsStillRunningAlert.window] ;\n"
    "    mCocoaApplicationIsStillRunningAlert = nil ;\n"
    "  }\n"
    "//--- Get application current path : the temporary directory\n"
    "  NSString * myDirectory = [[NSBundle mainBundle].bundlePath stringByDeletingLastPathComponent] ;\n"
    "  #ifdef DEBUG_UPDATER\n"
    "    NSLog (@\"myDirectory %@\", myDirectory) ;\n"
    "  #endif\n"
    "//---\n"
    "  [NSApp activateIgnoringOtherApps:YES] ;\n"
    "  NSConnection * updaterToolConnection = installAndLaunchHelperToolWithIdentifier (@\"" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterTool\") ;\n"
    "  BOOL ok = nil != updaterToolConnection ;\n"
    "  id <PMUpdaterServerProtocol> updaterToolObjectProxy = nil ;\n"
    "  if (ok) {\n"
    "    updaterToolObjectProxy = (id <PMUpdaterServerProtocol>) updaterToolConnection.rootProxy ;\n"
    "    #ifdef DEBUG_UPDATER\n"
    "      NSLog (@\"Installer Object Proxy: %@\", updaterToolObjectProxy) ;\n"
    "    #endif\n"
    "    NSError * error = [updaterToolObjectProxy\n"
    "      performInstallationWithApplicationPath:mCocoaApplicationPath\n"
    "      temporaryFilePath:[NSString stringWithFormat:@\"%@/Cocoa" ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMUpdaterAppDelegate.m.galgasTemplate", 147)).stringValue () ;
  result << ".app\", myDirectory]\n"
    "    ] ;\n"
    "    ok = nil == error ;\n"
    "    if (! ok) {\n"
    "      [NSApp presentError:error] ;\n"
    "    }\n"
    "  //---\n"
    "    if (ok) {\n"
    "      NSAlert * alert = [NSAlert\n"
    "        alertWithMessageText:@\"Done\"\n"
    "        defaultButton:@\"Launch " ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMUpdaterAppDelegate.m.galgasTemplate", 157)).stringValue () ;
  result << "\"\n"
    "        alternateButton:@\"Ok\"\n"
    "        otherButton:nil\n"
    "        informativeTextWithFormat:@\"%@\", @\"The new version of " ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMUpdaterAppDelegate.m.galgasTemplate", 160)).stringValue () ;
  result << " has been successfully installed\"\n"
    "      ] ;\n"
    "      [alert setIcon:[NSImage imageNamed:@\"updater_application_icns\"]] ;\n"
    "      [NSApp activateIgnoringOtherApps:YES] ;\n"
    "      const NSInteger response = [alert runModal] ;\n"
    "      if (NSAlertDefaultReturn == response) {\n"
    "      //--- Launch Application\n"
    "        NSTask * task = [NSTask new] ;\n"
    "        [task setLaunchPath:@\"/usr/bin/open\"] ;\n"
    "        [task setArguments:[NSArray arrayWithObject:mCocoaApplicationPath]] ;\n"
    "        [task launch] ;\n"
    "        #if ! __has_feature(objc_arc)\n"
    "          [task release] ;\n"
    "        #endif\n"
    "      }\n"
    "    }\n"
    "    #ifdef DEBUG_UPDATER\n"
    "      NSLog (@\"is quitting\") ;\n"
    "    #endif\n"
    "  //--- Self terminate\n"
    "    [NSApp terminate:nil] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (BOOL) applicationIsStillRunning {\n"
    "  NSWorkspace * ws = [NSWorkspace sharedWorkspace] ;\n"
    "  NSArray * runningApplications = ws.runningApplications.copy ;\n"
    "//NSLog (@\"runningApplications %@\", runningApplications) ;\n"
    "  BOOL stillRunning = NO ;\n"
    "  for (NSUInteger i=0 ; (i<runningApplications.count) && ! stillRunning ; i++) {\n"
    "    NSRunningApplication * ra = [runningApplications objectAtIndex:i] ;\n"
    "    if (ra.executableURL.isFileURL) {\n"
    "      NSString * applicationPath = ra.executableURL.path ;\n"
    "      // NSLog (@\"applicationPath '%@'\", applicationPath) ;\n"
    "      stillRunning = [applicationPath isEqualToString:mCocoaApplicationPath] ;\n"
    "    }\n"
    "  }\n"
    "  #if ! __has_feature(objc_arc)\n"
    "    [runningApplications release] ;\n"
    "  #endif\n"
    "  runningApplications = nil ;\n"
    "  return stillRunning ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) waitForApplicationTermination: (NSTimer *) inTimer {\n"
    "  mWaitingTimeInSeconds ++ ;\n"
    "  if (self.applicationIsStillRunning) {\n"
    "  [NSTimer\n"
    "      scheduledTimerWithTimeInterval:1.0\n"
    "      target:self selector:@selector(waitForApplicationTermination:)\n"
    "      userInfo:nil\n"
    "      repeats:NO]\n"
    "    ;\n"
    "    if ((nil != inTimer) && (nil == mCocoaApplicationIsStillRunningAlert)) {\n"
    "      mCocoaApplicationIsStillRunningAlert = [NSAlert\n"
    "        alertWithMessageText:@\"Waiting for " ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMUpdaterAppDelegate.m.galgasTemplate", 219)).stringValue () ;
  result << " termination\"\n"
    "        defaultButton:@\"Cancel Installation\"\n"
    "        alternateButton:nil\n"
    "        otherButton:nil\n"
    "        informativeTextWithFormat:@\"%@\", @\"" ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMUpdaterAppDelegate.m.galgasTemplate", 223)).stringValue () ;
  result << " is still runnning.\"\n"
    "      ] ;\n"
    "      [mCocoaApplicationIsStillRunningAlert setIcon:[NSImage imageNamed:@\"updater_application_icns\"]] ;\n"
    "      NSButton * defaultButton = [mCocoaApplicationIsStillRunningAlert.buttons objectAtIndex:0] ;\n"
    "      defaultButton.target = self ;\n"
    "      defaultButton.action = @selector (terminateApplicationWitoutInstalling:) ;\n"
    "      [mCocoaApplicationIsStillRunningAlert\n"
    "        beginSheetModalForWindow:nil\n"
    "        modalDelegate:nil\n"
    "        didEndSelector:NULL\n"
    "        contextInfo:NULL\n"
    "      ] ;\n"
    "    }else if (nil != mCocoaApplicationIsStillRunningAlert) {\n"
    "      [mCocoaApplicationIsStillRunningAlert\n"
    "        setInformativeText:[NSString stringWithFormat:@\"" ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMUpdaterAppDelegate.m.galgasTemplate", 237)).stringValue () ;
  result << " is still runnning (%lu s).\", mWaitingTimeInSeconds]\n"
    "      ] ;\n"
    "    }\n"
    "  }else{\n"
    "    [self installAndTerminates] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) terminateApplicationWitoutInstalling: (id) inUnusedSender {\n"
    "//--- Dismiss waiting alert\n"
    "  [mCocoaApplicationIsStillRunningAlert.window orderOut:nil] ;\n"
    "  [NSApp endSheet:mCocoaApplicationIsStillRunningAlert.window] ;\n"
    "//---\n"
    "  [NSApp terminate:nil] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) applicationDidFinishLaunching: (NSNotification *) aNotification {\n"
    "//--- Get application current path : the temporary directory\n"
    "  NSString * myDirectory = [[NSBundle mainBundle].bundlePath stringByDeletingLastPathComponent] ;\n"
    "  #ifdef DEBUG_UPDATER\n"
    "    NSLog (@\"myDirectory %@\", myDirectory) ;\n"
    "  #endif\n"
    "//--- Read file that contains the Application path\n"
    "  NSError * error = nil ;\n"
    "  mCocoaApplicationPath = [NSString\n"
    "    stringWithContentsOfFile:[NSString stringWithFormat:@\"%@/application_path.txt\", myDirectory]\n"
    "    encoding:NSUTF8StringEncoding\n"
    "    error:&error\n"
    "  ] ;\n"
    "  #ifdef DEBUG_UPDATER\n"
    "    NSLog (@\"Application Path %@\", mCocoaApplicationPath) ;\n"
    "  #endif\n"
    "  BOOL ok = nil == error ;\n"
    "  if (! ok) {\n"
    "    [NSApp presentError:error] ;\n"
    "  }else{\n"
    "    [self waitForApplicationTermination:nil] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'updaterGalgas3ApplicationFileWrapper info_plist'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_info_5F_plist (C_Compiler * /* inCompiler */,
                                                                                         const GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                         const GALGAS_string & in_TARGET_5F_NAME,
                                                                                         const GALGAS_string & in_CODE_5F_SIGNING_5F_IDENTITY
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n"
    "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
    "<plist version=\"1.0\">\n"
    "<dict>\n"
    "\t<key>CFBundleDevelopmentRegion</key>\n"
    "\t<string>en</string>\n"
    "\t<key>CFBundleExecutable</key>\n"
    "\t<string>${EXECUTABLE_NAME}</string>\n"
    "\t<key>CFBundleIconFile</key>\n"
    "\t<string>updater_application_icns</string>\n"
    "\t<key>CFBundleIdentifier</key>\n"
    "\t<string>" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterApp</string>\n"
    "\t<key>CFBundleInfoDictionaryVersion</key>\n"
    "\t<string>6.0</string>\n"
    "\t<key>CFBundleName</key>\n"
    "\t<string>${PRODUCT_NAME}</string>\n"
    "\t<key>CFBundlePackageType</key>\n"
    "\t<string>APPL</string>\n"
    "\t<key>CFBundleShortVersionString</key>\n"
    "\t<string>1.0</string>\n"
    "\t<key>CFBundleSignature</key>\n"
    "\t<string>\?\?\?\?</string>\n"
    "\t<key>CFBundleVersion</key>\n"
    "\t<string>1</string>\n"
    "\t<key>LSMinimumSystemVersion</key>\n"
    "\t<string>${MACOSX_DEPLOYMENT_TARGET}</string>\n"
    "\t<key>NSHumanReadableCopyright</key>\n"
    "\t<string>Copyright \xC2""\xA9"" 2012 IRCCyN. All rights reserved.</string>\n"
    "\t<key>NSMainNibFile</key>\n"
    "\t<string>UpdaterAppMainMenu</string>\n"
    "\t<key>NSPrincipalClass</key>\n"
    "\t<string>NSApplication</string>\n"
    "\t<key>SMPrivilegedExecutables</key>\n"
    "\t<dict>\n"
    "\t\t<key>" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterTool</key>\n"
    "\t\t<string>identifier &quot;" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterTool&quot; and certificate leaf[subject.CN]=&quot;" ;
  result << in_CODE_5F_SIGNING_5F_IDENTITY.stringValue () ;
  result << "&quot;</string>\n"
    "\t</dict>\n"
    "</dict>\n"
    "</plist>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'updaterGalgas3ApplicationFileWrapper main'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_main (C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  main.m\n"
    "//  CanariUpdaterApp\n"
    "//\n"
    "//  Created by Pierre Molinaro on 30/07/12.\n"
    "//  Copyright (c) 2012 IRCCyN. All rights reserved.\n"
    "//\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "int main(int argc, char *argv[])\n"
    "{\n"
    "  return NSApplicationMain(argc, (const char **)argv);\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'updaterGalgas3ApplicationFileWrapper prefix'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_prefix (C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "// Prefix header for all source files of the 'CanariUpdaterApp' target in the 'CanariUpdaterApp' project\n"
    "//\n"
    "\n"
    "#ifdef __OBJC__\n"
    "  #import <Cocoa/Cocoa.h>\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'updaterGalgas3ToolFileWrapper'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_updaterGalgas_33_ToolFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_updaterGalgas_33_ToolFileWrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_updaterGalgas_33_ToolFileWrapper (
  "",
  0,
  gWrapperAllFiles_updaterGalgas_33_ToolFileWrapper_0,
  0,
  gWrapperAllDirectories_updaterGalgas_33_ToolFileWrapper_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'updaterGalgas3ToolFileWrapper updater_object_protocol'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_protocol (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMUpdaterServerProtocol.h\n"
    "//\n"
    "//  Created by Pierre Molinaro on 29/07/12.\n"
    "//  Copyright (c) 2012 IRCCyN. All rights reserved.\n"
    "//\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import <Foundation/Foundation.h>\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@protocol PMUpdaterServerProtocol <NSObject>\n"
    "\n"
    "- (NSError *) performInstallationWithApplicationPath: (NSString *) inApplicationPath\n"
    "              temporaryFilePath: (NSString *) inTemporaryFilePath ;\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'updaterGalgas3ToolFileWrapper updater_object_header'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_header (C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMUpdaterServerObject.h\n"
    "//\n"
    "//  Created by Pierre Molinaro on 29/07/12.\n"
    "//  Copyright (c) 2012 IRCCyN. All rights reserved.\n"
    "//\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import \"PMUpdaterServerProtocol.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "//#define DEBUG_WITH_SYSLOG\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@interface PMUpdaterServerObject : NSObject <PMUpdaterServerProtocol> {\n"
    "  @protected BOOL mTerminateHelperTool ;\n"
    "  @protected pid_t mUpdaterToolPID ;\n"
    "  @protected NSString * mTemporaryFilePath ; // Temporary location of uncompressed new application\n"
    "  @protected NSString * mCocoaApplicationPath ;\n"
    "}\n"
    "\n"
    "- (BOOL) shouldExit ;\n"
    "\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'updaterGalgas3ToolFileWrapper updater_object_implementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_implementation (C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMUpdaterServerObject.m\n"
    "//\n"
    "//  Created by Pierre Molinaro on 29/07/12.\n"
    "//  Copyright (c) 2012 IRCCyN. All rights reserved.\n"
    "//\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import \"PMUpdaterServerObject.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#ifdef DEBUG_WITH_SYSLOG\n"
    "  #import <syslog.h>\n"
    "#endif\n"
    "\n"
    "#import <CommonCrypto/CommonDigest.h>\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@implementation PMUpdaterServerObject\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSError *) performInstallationWithApplicationPath: (NSString *) inApplicationPath\n"
    "              temporaryFilePath: (NSString *) inTemporaryFilePath {\n"
    "  mTemporaryFilePath = inTemporaryFilePath ;\n"
    "  mCocoaApplicationPath = inApplicationPath ;\n"
    "  #ifdef DEBUG_WITH_SYSLOG\n"
    "    syslog (LOG_NOTICE, \"Application Temporary path %s\", mTemporaryFilePath.UTF8String) ;\n"
    "    syslog (LOG_NOTICE, \"Original Application path %s\", mCocoaApplicationPath.UTF8String) ;\n"
    "  #endif\n"
    "//--- Remove Canari Application\n"
    "  NSFileManager * fm = [NSFileManager new] ;\n"
    "  NSError * error = nil ;\n"
    "  BOOL ok = [fm removeItemAtPath:mCocoaApplicationPath error:& error] ;\n"
    "//--- Install new version\n"
    "  if (ok) {\n"
    "    ok = [fm\n"
    "      copyItemAtPath:mTemporaryFilePath\n"
    "      toPath:mCocoaApplicationPath\n"
    "      error:& error\n"
    "    ] ;\n"
    "  }\n"
    "//---\n"
    "  #if ! __has_feature(objc_arc)\n"
    "    [fm release] ;\n"
    "  #endif\n"
    "  fm = nil ;\n"
    "  mTerminateHelperTool = YES ;\n"
    "//---\n"
    "  return ok \? nil : error ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (BOOL) shouldExit {\n"
    "  return mTerminateHelperTool ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'updaterGalgas3ToolFileWrapper updater_object_main'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_main (C_Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                              const GALGAS_string & in_TARGET_5F_NAME
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  main.c\n"
    "//  CanariInstallerHelperTool\n"
    "//\n"
    "//  Created by Pierre Molinaro on 27/06/12.\n"
    "//  Copyright (c) 2012 ECN / IRCCyN. All rights reserved.\n"
    "//\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import \"PMUpdaterServerObject.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import <launch.h>\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#ifdef DEBUG_WITH_SYSLOG\n"
    "  #import <syslog.h>\n"
    "#endif\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "int main (int argc, const char * argv[]) {\n"
    "  @autoreleasepool {\n"
    "    #ifdef DEBUG_WITH_SYSLOG\n"
    "      syslog (LOG_NOTICE, \"Updater Helper Tool launched (pid: %d)\", getpid ());\n"
    "    #endif\n"
    "  //-1---\n"
    "    launch_data_t req = launch_data_new_string (LAUNCH_KEY_CHECKIN) ;\n"
    "    Boolean ok = NULL != req ;\n"
    "    #ifdef DEBUG_WITH_SYSLOG\n"
    "      syslog (LOG_NOTICE, \"HelperTool req: %s\", ok \? \"ok\" : \"failed\") ;\n"
    "    #endif\n"
    "  //-2---\n"
    "    launch_data_t resp = NULL ;\n"
    "    if (ok) {\n"
    "      resp = launch_msg (req) ;\n"
    "      ok = NULL != resp ;\n"
    "      #ifdef DEBUG_WITH_SYSLOG\n"
    "        syslog (LOG_NOTICE, \"HelperTool resp: %s\", ok \? \"ok\" : \"failed\");\n"
    "      #endif\n"
    "    }\n"
    "  //-3---\n"
    "    launch_data_t machData = NULL ;\n"
    "    if (ok) {\n"
    "      machData = launch_data_dict_lookup (resp, LAUNCH_JOBKEY_MACHSERVICES);\n"
    "      ok = NULL != machData ;\n"
    "      #ifdef DEBUG_WITH_SYSLOG\n"
    "        syslog (LOG_NOTICE, \"HelperTool machData: %s\", ok \? \"ok\" : \"failed\") ;\n"
    "      #endif\n"
    "    }\n"
    "  //-4---\n"
    "    launch_data_t machPortData = NULL ;\n"
    "    if (ok) {\n"
    "      machPortData = launch_data_dict_lookup (machData, \"" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterTool.mach\") ;\n"
    "      ok = NULL != machPortData ;\n"
    "      #ifdef DEBUG_WITH_SYSLOG\n"
    "        syslog (LOG_NOTICE, \"HelperTool machPortData: %s\", ok \? \"ok\" : \"failed\") ;\n"
    "      #endif\n"
    "    }\n"
    "  //-5---\n"
    "    NSConnection * connection = nil ;\n"
    "    if (ok) {\n"
    "      mach_port_t mp = launch_data_get_machport (machPortData) ;\n"
    "      NSMachPort * rp = [[NSMachPort alloc] initWithMachPort:mp] ;\n"
    "      connection = [NSConnection connectionWithReceivePort:rp sendPort:nil] ;\n"
    "      #if ! __has_feature(objc_arc)\n"
    "        [connection retain] ;\n"
    "        [rp release] ;\n"
    "      #endif\n"
    "      rp = nil ;\n"
    "      ok = nil != connection ;\n"
    "      #ifdef DEBUG_WITH_SYSLOG\n"
    "        syslog (LOG_NOTICE, \"HelperTool connection: %s\", ok \? \"ok\" : \"failed\") ;\n"
    "      #endif\n"
    "    }\n"
    "  //-6---\n"
    "    if (NULL != req) {\n"
    "      launch_data_free (req) ; req = NULL ;\n"
    "    }\n"
    "    if (NULL != resp) {\n"
    "      launch_data_free (resp) ; resp = NULL ;\n"
    "    }\n"
    "  //-7---\n"
    "    if (ok) {\n"
    "      PMUpdaterServerObject * serverObject = [PMUpdaterServerObject new] ;\n"
    "      [connection setRootObject:serverObject] ;\n"
    "      while (! serverObject.shouldExit) {\n"
    "        [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate distantFuture]] ;\n"
    "      }\n"
    "      #if ! __has_feature(objc_arc)\n"
    "        [serverObject release] ;\n"
    "      #endif\n"
    "    }\n"
    "  //-8---\n"
    "    [connection invalidate] ;\n"
    "    #if ! __has_feature(objc_arc)\n"
    "      [connection release] ;\n"
    "    #endif\n"
    "    connection = nil ;\n"
    "  }\n"
    "//---\n"
    "  #ifdef DEBUG_WITH_SYSLOG\n"
    "    syslog (LOG_NOTICE, \"Helper Tool terminates\") ;\n"
    "  #endif\n"
    "  return 0 ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'updaterGalgas3ToolFileWrapper updater_tool_info_plist'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_tool_5F_info_5F_plist (C_Compiler * /* inCompiler */,
                                                                                                     const GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                                     const GALGAS_string & in_TARGET_5F_NAME,
                                                                                                     const GALGAS_string & in_CODE_5F_SIGNING_5F_IDENTITY
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n"
    "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
    "<plist version=\"1.0\">\n"
    "<dict>\n"
    "\t<key>CFBundleIdentifier</key>\n"
    "\t<string>" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterTool</string>\n"
    "\t<key>CFBundleInfoDictionaryVersion</key>\n"
    "\t<string>6.0</string>\n"
    "\t<key>CFBundleName</key>\n"
    "\t<string>" ;
  result << in_TARGET_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("updater-tool-Info.plist.txt", 10)).stringValue () ;
  result << "Updater</string>\n"
    "\t<key>CFBundleVersion</key>\n"
    "\t<string>1.0</string>\n"
    "\t<key>SMAuthorizedClients</key>\n"
    "\t<array>\n"
    "\t\t<string>identifier &quot;" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterApp&quot; and certificate leaf[subject.CN]=&quot;" ;
  result << in_CODE_5F_SIGNING_5F_IDENTITY.stringValue () ;
  result << "&quot;</string>\n"
    "\t</array>\n"
    "</dict>\n"
    "</plist>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'updaterGalgas3ToolFileWrapper updater_tool_launchd_plist'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_tool_5F_launchd_5F_plist (C_Compiler * /* inCompiler */,
                                                                                                        const GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME,
                                                                                                        const GALGAS_string & in_TARGET_5F_NAME
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n"
    "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
    "<plist version=\"1.0\">\n"
    "<dict>\n"
    "\t<key>Label</key>\n"
    "\t<string>" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterTool</string>\n"
    "\t<key>OnDemand</key>\n"
    "\t<false/>\n"
    "\t<key>LaunchOnlyOnce</key>\n"
    "\t<true/>\n"
    "\t<key>MachServices</key>\n"
    "\t<dict>\n"
    "\t\t<key>" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_TARGET_5F_NAME.stringValue () ;
  result << ".updaterTool.mach</key>\n"
    "\t\t<true/>\n"
    "\t</dict>\n"
    "</dict>\n"
    "</plist>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Filewrapper 'applicationGalgas3UpdateFileWrapper'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_applicationGalgas_33_UpdateFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_applicationGalgas_33_UpdateFileWrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_applicationGalgas_33_UpdateFileWrapper (
  "",
  0,
  gWrapperAllFiles_applicationGalgas_33_UpdateFileWrapper_0,
  0,
  gWrapperAllDirectories_applicationGalgas_33_UpdateFileWrapper_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'applicationGalgas3UpdateFileWrapper application_update_header'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_header (C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMApplicationUpdate.h\n"
    "//  galgas\n"
    "//\n"
    "//  Created by Pierre MOLINARO on 02/10/06.\n"
    "//  Copyright 2006 __MyCompanyName__. All rights reserved.\n"
    "//\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import \"PMDownloadFile.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@class WebView ;\n"
    "@class PMDownloadData ;\n"
    "@class PMDownloadFile ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@interface PMApplicationUpdate : NSObject <PMDownloadDidEndProtocol> {\n"
    "//--- In New Available Panel\n"
    "  @private IBOutlet NSPanel * mNewAvailableVersionPanel ;\n"
    "  @private IBOutlet NSButton * mCheckUpdateAtStartUpCheckBox2 ;\n"
    "  @private IBOutlet NSButton * mPerformUpdateButton ;\n"
    "  @private IBOutlet NSTextField * mNewVersionTextField ;\n"
    "  @private IBOutlet WebView * mChangeLogWebView ;\n"
    "  @private IBOutlet NSView * mViewForChangeLogInPreferencePane ;\n"
    "  @private IBOutlet WebView * mChangeLogInPreferencePaneWebView ;\n"
    "\n"
    "  @private IBOutlet NSButton * mCheckUpdateAtStartUpCheckBox ;\n"
    "  \n"
    "  @private IBOutlet NSButton * mCheckNowButton ;\n"
    "  \n"
    "  @private IBOutlet NSTextField * mDownloadTitle ;\n"
    "  @private IBOutlet NSProgressIndicator * mDownloadProgressIndicator ;\n"
    "  @private IBOutlet NSTextField * mDownloadSubTitle ;\n"
    "  @private IBOutlet NSButton * mCancelButton ;\n"
    "\n"
    "  @private NSString * mLastAvailableVersion ;\n"
    "  @private BOOL mSearchForUpdatesInBackground ;\n"
    "  \n"
    "  @private PMDownloadData * mDownloadData ;\n"
    "  @private PMDownloadFile * mDownloadFile ;\n"
    "}\n"
    "\n"
    "- (IBAction) checkForNewVersion: (id) inSender ;\n"
    "\n"
    "+ (void) instanciateSingleton ;\n"
    "\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'applicationGalgas3UpdateFileWrapper application_update_implementation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_implementation (C_Compiler * /* inCompiler */,
                                                                                                                  const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                                  const GALGAS_string & in_REPOSITORY_5F_URL,
                                                                                                                  const GALGAS_string & in_BUNDLE_5F_BASE_5F_NAME
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMApplicationUpdate.m\n"
    "//\n"
    "//  Created by Pierre MOLINARO on 02/10/06.\n"
    "//\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "#import \"PMApplicationUpdate.h\"\n"
    "#import \"OC_GGS_ApplicationDelegate.h\"\n"
    "#import \"PMDownloadData.h\"\n"
    "#import \"PMDownloadFile.h\"\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "#import <WebKit/WebKit.h>\n"
    "#import <Security/Security.h>\n"
    "#import <SystemConfiguration/SystemConfiguration.h>\n"
    "#import <ServiceManagement/ServiceManagement.h>\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "//--- Only for debugging !!!\n"
    "//#define FORCED_APPLICATION_VERSION @\"0.0.0\"\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "static PMApplicationUpdate * gApplicationUpdate ;\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "@implementation PMApplicationUpdate\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "+ (void) instanciateSingleton {\n"
    "  gApplicationUpdate = [PMApplicationUpdate new] ;\n"
    "  const BOOL ok = [NSBundle loadNibNamed:@\"PMApplicationUpdate\" owner:gApplicationUpdate] ;\n"
    "  if (! ok) {\n"
    "    NSAlert * alert = [NSAlert\n"
    "      alertWithMessageText:@\"Cannot load PMApplicationUpdate.xib.\"\n"
    "      defaultButton:@\"Ok\"\n"
    "      alternateButton:nil\n"
    "      otherButton:nil\n"
    "      informativeTextWithFormat:@\"\"\n"
    "    ] ;\n"
    "    [alert\n"
    "      beginSheetModalForWindow:nil\n"
    "      modalDelegate:nil\n"
    "      didEndSelector:NULL\n"
    "      contextInfo:NULL\n"
    "    ] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "#pragma mark Pathes & URLs\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) applicationArchiveName {\n"
    "  return @\"Cocoa" ;
  result << in_PROJECT_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMApplicationUpdate.m.galgasTemplate", 62)).stringValue () ;
  result << ".app.tar.bz2\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) serverHTTPPath {\n"
    "  return @\"" ;
  result << in_REPOSITORY_5F_URL.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) lastReleaseHTTPPath {\n"
    "  return [self.serverHTTPPath stringByAppendingString:@\"/lastRelease.php\"] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) HTTPPathForVersion: (NSString *) inVersionString {\n"
    "  return [NSString stringWithFormat:@\"%@/%@/%@\", self.serverHTTPPath, inVersionString, self.applicationArchiveName] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) temporaryDir {\n"
    "  return @\"/tmp/TEMPORARY_DIR_FOR_" ;
  result << in_PROJECT_5F_NAME.getter_uppercaseString (SOURCE_FILE ("PMApplicationUpdate.m.galgasTemplate", 86)).stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) temporaryPathForApplicationArchive {\n"
    "  return [NSString stringWithFormat:@\"%@/%@\", self.temporaryDir, self.applicationArchiveName] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSComparisonResult) compareVersionString: (NSString *) inVersionString\n"
    "                       withVersionString: (NSString *) inOtherVersionString {\n"
    "  NSComparisonResult result = [inVersionString compare:inOtherVersionString] ;\n"
    "  if (result != NSOrderedSame) {\n"
    "    NSMutableArray * components = [NSMutableArray new] ;\n"
    "    [components addObjectsFromArray:[inVersionString componentsSeparatedByString:@\".\"]] ;\n"
    "    NSMutableArray * otherComponents = [NSMutableArray new] ;\n"
    "    [otherComponents addObjectsFromArray:[inOtherVersionString componentsSeparatedByString:@\".\"]] ;\n"
    "    while ([components count] < [otherComponents count]) {\n"
    "      [components addObject:@\"0\"] ;\n"
    "    }\n"
    "    while ([components count] > [otherComponents count]) {\n"
    "      [otherComponents addObject:@\"0\"] ;\n"
    "    }\n"
    "    result = NSOrderedSame ;\n"
    "    for (NSUInteger i=0 ; (i<[components count]) && (result == NSOrderedSame) ; i++) {\n"
    "      const int version = [[components objectAtIndex:i] intValue] ;\n"
    "      const int otherVersion = [[otherComponents objectAtIndex:i] intValue] ;\n"
    "      if (version < otherVersion) {\n"
    "        result = NSOrderedAscending ;\n"
    "      }else if (version > otherVersion) {\n"
    "        result = NSOrderedDescending ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "#pragma mark awakeFromNib\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (void) awakeFromNib {\n"
    "  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;\n"
    "//--- Remove temporary dir, if it exists\n"
    "  NSFileManager * fm = [NSFileManager defaultManager] ;\n"
    "  if ([fm fileExistsAtPath:self.temporaryDir]) {\n"
    "    [fm removeItemAtPath:self.temporaryDir error:nil] ;\n"
    "  }\n"
    "//--- Add bindings\n"
    "  [mCheckUpdateAtStartUpCheckBox\n"
    "    bind:@\"value\"\n"
    "    toObject:ud\n"
    "    withKeyPath:@\"GGS_check_update_at_start_up\"\n"
    "    options:nil\n"
    "  ] ;\n"
    "  [mCheckUpdateAtStartUpCheckBox2\n"
    "    bind:@\"value\"\n"
    "    toObject:ud\n"
    "    withKeyPath:@\"GGS_check_update_at_start_up\"\n"
    "    options:nil\n"
    "  ] ;\n"
    "//----------------------------------------- Change Log Tab Item\n"
    "//--- Add 'Update' tab item\n"
    "  NSTabView * prefsTabView = [gCocoaApplicationDelegate preferencesTabView] ;\n"
    "  NSTabViewItem * tabViewItem = [NSTabViewItem new] ;\n"
    "  [tabViewItem setView:mViewForChangeLogInPreferencePane] ;\n"
    "  [tabViewItem setLabel:@\"Update\"] ;\n"
    "  [prefsTabView addTabViewItem:tabViewItem] ;\n"
    "//--- Get Last Version\n"
    "  [self checkForNewVersion:nil] ;\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "//                                                                          *\n"
    "//            Check for new version                                         *\n"
    "//                                                                          *\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (IBAction) checkForNewVersion: (id) inSender {\n"
    "  mSearchForUpdatesInBackground = nil == inSender ;\n"
    "  [mCheckNowButton setEnabled:NO] ;\n"
    "  mDownloadData = [[PMDownloadData alloc]\n"
    "    initDownloadWithURLString:self.lastReleaseHTTPPath\n"
    "    delegate:self\n"
    "    downloadDidEndSelector:@selector (lastVersionStringIsAvailable:)\n"
    "    userInfo:nil\n"
    "  ] ;\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (void) lastVersionStringIsAvailable: (PMDownloadData *) inDownloader {\n"
    "  [mCheckNowButton setEnabled:YES] ;\n"
    "  NSError * error = [inDownloader downloadError] ;\n"
    "  if (error != nil) {\n"
    "    if (! mSearchForUpdatesInBackground) {\n"
    "      NSAlert * alert = [NSAlert\n"
    "        alertWithMessageText:@\"Cannot connect to the server.\"\n"
    "        defaultButton:@\"Ok\"\n"
    "        alternateButton:nil\n"
    "        otherButton:nil\n"
    "        informativeTextWithFormat:@\"Reason: '%@'.\", [error localizedDescription]\n"
    "      ] ;\n"
    "      [alert\n"
    "        beginSheetModalForWindow:nil\n"
    "        modalDelegate:nil\n"
    "        didEndSelector:NULL\n"
    "        contextInfo:NULL\n"
    "      ] ;\n"
    "    }\n"
    "  }else{\n"
    "  //--- Update changeLog Web View\n"
    "    mLastAvailableVersion = [[NSString alloc] initWithData:inDownloader.downloadedData encoding:NSASCIIStringEncoding] ;\n"
    "    NSURL * url = [NSURL URLWithString:[NSString stringWithFormat:@\"%@/%@/changeLog.html\", self.serverHTTPPath, mLastAvailableVersion]] ;\n"
    "    [mChangeLogInPreferencePaneWebView.mainFrame loadRequest:[NSURLRequest requestWithURL:url]];\n"
    "    NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;\n"
    "    if ([ud boolForKey:@\"GGS_check_update_at_start_up\"]) {\n"
    "      [self checkForUpdating] ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "#pragma mark Check for new version\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (void) checkForUpdating {\n"
    "//--- Check Response\n"
    "  NSScanner * scanner = [NSScanner scannerWithString:mLastAvailableVersion] ;\n"
    "  const BOOL versionOk = [scanner scanInt:NULL]\n"
    "               && [scanner scanString:@\".\" intoString:NULL]\n"
    "               && [scanner scanInt:NULL]\n"
    "               && [scanner scanString:@\".\" intoString:NULL]\n"
    "               && [scanner scanInt:NULL]\n"
    "               && [scanner isAtEnd] ;\n"
    "  if (versionOk) {\n"
    "  //--- Get Application Current version\n"
    "    #ifdef FORCED_APPLICATION_VERSION\n"
    "      NSString * applicationVersion = FORCED_APPLICATION_VERSION ;\n"
    "      NSLog (@\"Forced Application version: %@\", applicationVersion) ;\n"
    "      NSLog (@\"Last Available version: %@\", mLastAvailableVersion) ;\n"
    "    #else\n"
    "      NSBundle * mainBundle = [NSBundle mainBundle] ;\n"
    "      NSDictionary * infoDictionary = [mainBundle infoDictionary] ;\n"
    "      NSString * applicationVersion = [infoDictionary objectForKey:@\"CFBundleShortVersionString\"] ;\n"
    "    // NSLog (@\"applicationVersion '%@'\", applicationVersion) ;\n"
    "    #endif\n"
    "    const NSComparisonResult r = [self compareVersionString:applicationVersion withVersionString:mLastAvailableVersion] ;\n"
    "    if (r == NSOrderedAscending) {\n"
    "    //--- Display change log in Web View\n"
    "      NSURL * url = [NSURL URLWithString:[NSString stringWithFormat:@\"%@/%@/changeLog.html\", self.serverHTTPPath, mLastAvailableVersion]] ;\n"
    "      [[mChangeLogWebView mainFrame] loadRequest:[NSURLRequest requestWithURL:url]];\n"
    "      NSString * s = [NSString stringWithFormat:\n"
    "        @\"Current version is %@; the %@ version can be downloaded.\",\n"
    "        applicationVersion,\n"
    "        mLastAvailableVersion\n"
    "      ] ;\n"
    "      [mNewVersionTextField setStringValue:s] ;\n"
    "      s = [NSString stringWithFormat:\n"
    "        @\"Install and Launch Version %@\",\n"
    "        mLastAvailableVersion\n"
    "      ] ;\n"
    "      [mPerformUpdateButton setTitle:s] ;\n"
    "      [NSApp\n"
    "        beginSheet:mNewAvailableVersionPanel\n"
    "        modalForWindow:nil\n"
    "        modalDelegate:self\n"
    "        didEndSelector:@selector (newVersionIsAvailableAlertDidEnd:returnCode:contextInfo:)\n"
    "        contextInfo:nil\n"
    "      ] ;\n"
    "      [mCheckNowButton setEnabled:NO] ;\n"
    "    }else if (! mSearchForUpdatesInBackground) {\n"
    "      NSAlert * alert = [NSAlert\n"
    "        alertWithMessageText:@\"" ;
  result << in_PROJECT_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMApplicationUpdate.m.galgasTemplate", 265)).stringValue () ;
  result << " is up to date.\"\n"
    "        defaultButton:@\"Ok\"\n"
    "        alternateButton:nil\n"
    "        otherButton:nil\n"
    "        informativeTextWithFormat:@\"There is no new version at this time.\"\n"
    "      ] ;\n"
    "      [alert\n"
    "        beginSheetModalForWindow:[mCheckNowButton window]\n"
    "        modalDelegate:nil\n"
    "        didEndSelector:NULL\n"
    "        contextInfo:NULL\n"
    "      ] ;\n"
    "    }\n"
    "  }else if (! mSearchForUpdatesInBackground) {\n"
    "    NSAlert * alert = [NSAlert\n"
    "      alertWithMessageText:@\"Cannot get last release number.\"\n"
    "      defaultButton:@\"Ok\"\n"
    "      alternateButton:nil\n"
    "      otherButton:nil\n"
    "      informativeTextWithFormat:@\"The server answered in an incomprehensible way: '%@'.\", mLastAvailableVersion\n"
    "    ] ;\n"
    "    [alert\n"
    "      beginSheetModalForWindow:nil\n"
    "      modalDelegate:nil\n"
    "      didEndSelector:NULL\n"
    "      contextInfo:NULL\n"
    "    ] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (void) newVersionIsAvailableAlertDidEnd:(NSWindow *) inUnusedWindow\n"
    "         returnCode:(int) inReturnCode\n"
    "         contextInfo:(void  *) inContextInfo {\n"
    "  // NSLog (@\"inReturnCode %d\", inReturnCode) ;\n"
    "  if (inReturnCode == YES) {\n"
    "  //--- Remove temporary dir if it exists\n"
    "    NSFileManager * fm = [NSFileManager defaultManager] ;\n"
    "    if ([fm fileExistsAtPath:self.temporaryDir]) {\n"
    "      [fm removeItemAtPath:self.temporaryDir error:nil] ;\n"
    "    }\n"
    "  //--- Create temporary dir\n"
    "    [fm\n"
    "      createDirectoryAtPath:self.temporaryDir\n"
    "      withIntermediateDirectories:NO\n"
    "      attributes:nil\n"
    "      error:nil\n"
    "    ] ;\n"
    "  //--- Start download Application\n"
    "    [mDownloadTitle setStringValue:[NSString stringWithFormat:@\"Downloading " ;
  result << in_PROJECT_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMApplicationUpdate.m.galgasTemplate", 315)).stringValue () ;
  result << " %@...\", mLastAvailableVersion]] ;\n"
    "    [[mCancelButton window] makeKeyAndOrderFront:nil] ;\n"
    "    mDownloadFile = [[PMDownloadFile alloc] initWithURLString:[self HTTPPathForVersion:mLastAvailableVersion]\n"
    "       destinationFileName:[self temporaryPathForApplicationArchive]\n"
    "       downloadDelegate:self\n"
    "       cancelButton:mCancelButton\n"
    "       subtitle:mDownloadSubTitle\n"
    "       progressIndicator:mDownloadProgressIndicator\n"
    "       userInfo:mLastAvailableVersion\n"
    "    ] ;\n"
    "  }else{\n"
    "    [mCheckNowButton setEnabled:YES] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (void) downloadHasBeenCancelled {\n"
    "  [mCancelButton.window orderOut:nil] ;\n"
    "  [mCheckNowButton setEnabled:YES] ;\n"
    "//--- Remove temporary dir if it exists\n"
    "  NSFileManager * fm = [NSFileManager defaultManager] ;\n"
    "  if ([fm fileExistsAtPath:self.temporaryDir]) {\n"
    "    [fm removeItemAtPath:self.temporaryDir error:nil] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (void) downloadDidFinishOnError: (NSError *) inError {\n"
    "//--- Note : presentError is not available on 10.3.9 and earlier\n"
    " // NSString * domain = [inError domain] ;\n"
    "  NSDictionary * userInfo = [inError userInfo] ;\n"
    "  //NSLog (@\"userInfo %@\", userInfo) ;\n"
    "  NSAlert * alert = [NSAlert\n"
    "    alertWithMessageText:@\"Download error.\"\n"
    "    defaultButton:@\"Ok\"\n"
    "    alternateButton:nil\n"
    "    otherButton:nil\n"
    "    informativeTextWithFormat:@\"The following error occurs: %@.\", [userInfo objectForKey:@\"NSLocalizedDescription\"]\n"
    "  ] ;\n"
    "  [alert\n"
    "     beginSheetModalForWindow:nil\n"
    "     modalDelegate:nil\n"
    "     didEndSelector:NULL\n"
    "     contextInfo:NULL\n"
    "  ] ;\n"
    "  [self downloadHasBeenCancelled] ;\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (int) uncompressArchive: (NSString *) inArchivePath {\n"
    "  NSArray * arguments = [NSArray arrayWithObjects:\n"
    "    @\"-d\",\n"
    "    inArchivePath,\n"
    "    nil\n"
    "  ] ;\n"
    "  NSTask * task = [NSTask new] ;\n"
    "  [task setLaunchPath:@\"/usr/bin/bzip2\"] ;\n"
    "  [task setArguments:arguments] ;\n"
    "  [task launch] ;\n"
    "  [task waitUntilExit] ;\n"
    "  int status = [task terminationStatus] ;\n"
    "  task = nil ;\n"
    "  if (status == 0) {\n"
    "    task = [[NSTask alloc] init] ;\n"
    "    [task setLaunchPath:@\"/usr/bin/tar\"] ;\n"
    "    arguments = [NSArray arrayWithObjects:\n"
    "      @\"-x\",\n"
    "      @\"-C\",\n"
    "      self.temporaryDir,\n"
    "      @\"-f\",\n"
    "      [inArchivePath stringByDeletingPathExtension],\n"
    "      nil\n"
    "    ] ;\n"
    "    [task setArguments:arguments] ;\n"
    "    [task launch] ;\n"
    "    [task waitUntilExit] ;\n"
    "    status = [task terminationStatus] ;\n"
    "    task = nil ;\n"
    "  }\n"
    "  return status ;\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (void) downloadDidEnd: (PMDownloadFile *) inDownloader {\n"
    "  [mCancelButton.window orderOut:nil] ;\n"
    "  if ([inDownloader downloadHasBeenCancelled]) {\n"
    "    [self downloadHasBeenCancelled] ;\n"
    "  }else{\n"
    "    NSError * downloadError = [inDownloader downloadError] ;\n"
    "    if (downloadError != NULL) {\n"
    "      [self downloadDidFinishOnError:downloadError] ;\n"
    "    }else{\n"
    "      [mDownloadTitle setStringValue:[NSString stringWithFormat:@\"Uncompressing archive...\"]] ;\n"
    "      [mDownloadProgressIndicator setIndeterminate:YES] ;\n"
    "      [mDownloadProgressIndicator startAnimation:nil] ;\n"
    "    //--- Uncompressing Archives\n"
    "      [mDownloadSubTitle setStringValue:@\"\"] ;\n"
    "      [mCancelButton.window displayIfNeeded] ;\n"
    "      int status = [self uncompressArchive:self.temporaryPathForApplicationArchive] ;\n"
    "      if (status == 0) {\n"
    "        NSString * filePath = [NSString stringWithFormat:@\"%@/application_path.txt\", self.temporaryDir] ;\n"
    "        NSString * applicationPath = [NSBundle mainBundle].bundlePath ;\n"
    "        status = ! [applicationPath writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:NULL] ;\n"
    "      }\n"
    "      [mCancelButton.window orderOut:nil] ;\n"
    "      if (status == 0) {\n"
    "        NSAlert * alert = [NSAlert\n"
    "          alertWithMessageText:@\"Ready to Install the new version.\"\n"
    "          defaultButton:@\"Install and Launch\"\n"
    "          alternateButton:@\"Cancel\"\n"
    "          otherButton:nil\n"
    "          informativeTextWithFormat:@\"\"\n"
    "        ] ;\n"
    "        [alert\n"
    "          beginSheetModalForWindow:nil\n"
    "          modalDelegate:self\n"
    "          didEndSelector:@selector (performInstallAlertDidEnd:returnCode:contextInfo:)\n"
    "          contextInfo:NULL\n"
    "        ] ;\n"
    "      }else{\n"
    "        NSAlert * alert = [NSAlert\n"
    "          alertWithMessageText:@\"Cannot uncompress archive.\"\n"
    "          defaultButton:@\"Ok\"\n"
    "          alternateButton:nil\n"
    "          otherButton:nil\n"
    "          informativeTextWithFormat:@\"An error occurs during uncompressing (code %d).\", status\n"
    "        ] ;\n"
    "        [alert\n"
    "          beginSheetModalForWindow:nil\n"
    "          modalDelegate:nil\n"
    "          didEndSelector:NULL\n"
    "          contextInfo:NULL\n"
    "        ] ;\n"
    "      }\n"
    "    }  \n"
    "  }\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "- (void) performInstallAlertDidEnd:(NSAlert *) inUnusedAlert\n"
    "         returnCode:(int) inReturnCode\n"
    "         contextInfo:(void  *) inContextInfo {\n"
    "  if (inReturnCode == YES) {\n"
    "    [mCheckNowButton setEnabled:YES] ;\n"
    "  //-------------- Copy\n"
    "    NSString * updaterAppPath = [NSString stringWithFormat:@\"%@/" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".updaterApp.app\", [NSBundle mainBundle].resourcePath] ;\n"
    "    // NSLog (@\"updaterAppPath %@\", updaterAppPath) ;\n"
    "    NSString * updaterAppCopyPath = [NSString stringWithFormat:@\"%@/" ;
  result << in_BUNDLE_5F_BASE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".updaterApp.app\", self.temporaryDir] ;\n"
    "    // NSLog (@\"updaterAppCopyPath %@\", updaterAppCopyPath) ;\n"
    "    NSFileManager * fm = [NSFileManager new] ;\n"
    "    NSError * error = nil ;\n"
    "    BOOL ok = [fm\n"
    "      copyItemAtPath:updaterAppPath\n"
    "      toPath:updaterAppCopyPath\n"
    "      error:& error\n"
    "    ] ;\n"
    "    if (! ok) {\n"
    "      [NSApp presentError:error] ;\n"
    "    }\n"
    "  //-------------- Launch UpdaterApp copy\n"
    "    if (ok) {\n"
    "      error = nil ;\n"
    "      NSRunningApplication * runningApp = [[NSWorkspace sharedWorkspace]\n"
    "        launchApplicationAtURL:[NSURL fileURLWithPath:updaterAppCopyPath]\n"
    "        options:NSWorkspaceLaunchAsync\n"
    "        configuration:nil\n"
    "        error:& error\n"
    "      ] ;\n"
    "      if (nil == runningApp) {\n"
    "        ok = false ;\n"
    "        [NSApp presentError:error] ;\n"
    "      }\n"
    "    }\n"
    "  //-------------- Application self terminates\n"
    "    if (ok) {\n"
    "      [[NSRunLoop currentRunLoop]\n"
    "        performSelector: @selector (terminate:)\n"
    "        target:NSApp\n"
    "        argument:nil\n"
    "        order:NSUIntegerMax\n"
    "        modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]\n"
    "      ] ;\n"
    "    }\n"
    "  }else{\n"
    "    [self downloadHasBeenCancelled] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//--------------------------------------------------------------------------*\n"
    "\n"
    "@end\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'applicationGalgas3UpdateFileWrapper application_update_nib'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_nib (C_Compiler * /* inCompiler */,
                                                                                                       const GALGAS_string & in_PROJECT_5F_NAME
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n"
    "<archive type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"7.10\">\n"
    " <data>\n"
    "  <int key=\"IBDocument.SystemTarget\">1050</int>\n"
    "  <string key=\"IBDocument.SystemVersion\">11E53</string>\n"
    "  <string key=\"IBDocument.InterfaceBuilderVersion\">2182</string>\n"
    "  <string key=\"IBDocument.AppKitVersion\">1138.47</string>\n"
    "  <string key=\"IBDocument.HIToolboxVersion\">569.00</string>\n"
    "  <object class=\"NSMutableDictionary\" key=\"IBDocument.PluginVersions\">\n"
    "   <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "   <object class=\"NSArray\" key=\"dict.sortedKeys\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "    <string>com.apple.WebKitIBPlugin</string>\n"
    "   </object>\n"
    "   <object class=\"NSArray\" key=\"dict.values\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <string>2182</string>\n"
    "    <string>1117</string>\n"
    "   </object>\n"
    "  </object>\n"
    "  <object class=\"NSArray\" key=\"IBDocument.IntegratedClassDependencies\">\n"
    "   <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "   <string>NSObjectController</string>\n"
    "   <string>NSButton</string>\n"
    "   <string>NSTextFieldCell</string>\n"
    "   <string>NSButtonCell</string>\n"
    "   <string>NSImageView</string>\n"
    "   <string>NSBox</string>\n"
    "   <string>NSProgressIndicator</string>\n"
    "   <string>NSImageCell</string>\n"
    "   <string>WebView</string>\n"
    "   <string>NSCustomObject</string>\n"
    "   <string>NSCustomView</string>\n"
    "   <string>NSView</string>\n"
    "   <string>NSWindowTemplate</string>\n"
    "   <string>NSTextField</string>\n"
    "  </object>\n"
    "  <object class=\"NSArray\" key=\"IBDocument.PluginDependencies\">\n"
    "   <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "   <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "   <string>com.apple.WebKitIBPlugin</string>\n"
    "  </object>\n"
    "  <object class=\"NSMutableDictionary\" key=\"IBDocument.Metadata\">\n"
    "   <string key=\"NS.key.0\">PluginDependencyRecalculationVersion</string>\n"
    "   <integer value=\"1\" key=\"NS.object.0\"/>\n"
    "  </object>\n"
    "  <object class=\"NSMutableArray\" key=\"IBDocument.RootObjects\" id=\"685716556\">\n"
    "   <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "   <object class=\"NSCustomObject\" id=\"42341283\">\n"
    "    <string key=\"NSClassName\">PMApplicationUpdate</string>\n"
    "   </object>\n"
    "   <object class=\"NSCustomObject\" id=\"1055328378\">\n"
    "    <string key=\"NSClassName\">FirstResponder</string>\n"
    "   </object>\n"
    "   <object class=\"NSCustomObject\" id=\"382307856\">\n"
    "    <string key=\"NSClassName\">NSApplication</string>\n"
    "   </object>\n"
    "   <object class=\"NSWindowTemplate\" id=\"333224431\">\n"
    "    <int key=\"NSWindowStyleMask\">1</int>\n"
    "    <int key=\"NSWindowBacking\">2</int>\n"
    "    <string key=\"NSWindowRect\">{{409, 459}, {467, 151}}</string>\n"
    "    <int key=\"NSWTFlags\">1886912512</int>\n"
    "    <string key=\"NSWindowTitle\">" ;
  result << in_PROJECT_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMApplicationUpdate.xib.galgasTemplate", 64)).stringValue () ;
  result << " Update</string>\n"
    "    <object class=\"NSMutableString\" key=\"NSWindowClass\">\n"
    "     <characters key=\"NS.bytes\">NSPanel</characters>\n"
    "    </object>\n"
    "    <object class=\"NSMutableString\" key=\"NSViewClass\">\n"
    "     <characters key=\"NS.bytes\">View</characters>\n"
    "    </object>\n"
    "    <nil key=\"NSUserInterfaceItemIdentifier\"/>\n"
    "    <string key=\"NSWindowContentMinSize\">{213, 107}</string>\n"
    "    <object class=\"NSView\" key=\"NSWindowView\" id=\"749559358\">\n"
    "     <nil key=\"NSNextResponder\"/>\n"
    "     <int key=\"NSvFlags\">256</int>\n"
    "     <object class=\"NSMutableArray\" key=\"NSSubviews\">\n"
    "      <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "      <object class=\"NSTextField\" id=\"1034800840\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"749559358\"/>\n"
    "       <int key=\"NSvFlags\">256</int>\n"
    "       <string key=\"NSFrame\">{{105, 113}, {345, 18}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"749559358\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSTextFieldCell\" key=\"NSCell\" id=\"509148504\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">4194304</int>\n"
    "        <string key=\"NSContents\">Title\xE2""\x80""\xA6""</string>\n"
    "        <object class=\"NSFont\" key=\"NSSupport\" id=\"254211308\">\n"
    "         <string key=\"NSName\">LucidaGrande-Bold</string>\n"
    "         <double key=\"NSSize\">13</double>\n"
    "         <int key=\"NSfFlags\">2072</int>\n"
    "        </object>\n"
    "        <reference key=\"NSControlView\" ref=\"1034800840\"/>\n"
    "        <object class=\"NSColor\" key=\"NSBackgroundColor\" id=\"481433827\">\n"
    "         <int key=\"NSColorSpace\">6</int>\n"
    "         <string key=\"NSCatalogName\">System</string>\n"
    "         <string key=\"NSColorName\">controlColor</string>\n"
    "         <object class=\"NSColor\" key=\"NSColor\">\n"
    "          <int key=\"NSColorSpace\">3</int>\n"
    "          <bytes key=\"NSWhite\">MC42NjY2NjY2NjY3AA</bytes>\n"
    "         </object>\n"
    "        </object>\n"
    "        <object class=\"NSColor\" key=\"NSTextColor\" id=\"123369485\">\n"
    "         <int key=\"NSColorSpace\">6</int>\n"
    "         <string key=\"NSCatalogName\">System</string>\n"
    "         <string key=\"NSColorName\">controlTextColor</string>\n"
    "         <object class=\"NSColor\" key=\"NSColor\">\n"
    "          <int key=\"NSColorSpace\">3</int>\n"
    "          <bytes key=\"NSWhite\">MAA</bytes>\n"
    "         </object>\n"
    "        </object>\n"
    "       </object>\n"
    "      </object>\n"
    "      <object class=\"NSTextField\" id=\"490232887\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"749559358\"/>\n"
    "       <int key=\"NSvFlags\">256</int>\n"
    "       <string key=\"NSFrame\">{{105, 63}, {345, 18}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"749559358\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSTextFieldCell\" key=\"NSCell\" id=\"454506579\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">4194304</int>\n"
    "        <string key=\"NSContents\">Subtitle\xE2""\x80""\xA6""</string>\n"
    "        <reference key=\"NSSupport\" ref=\"254211308\"/>\n"
    "        <reference key=\"NSControlView\" ref=\"490232887\"/>\n"
    "        <bool key=\"NSDrawsBackground\">YES</bool>\n"
    "        <reference key=\"NSBackgroundColor\" ref=\"481433827\"/>\n"
    "        <reference key=\"NSTextColor\" ref=\"123369485\"/>\n"
    "       </object>\n"
    "      </object>\n"
    "      <object class=\"NSProgressIndicator\" id=\"204285727\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"749559358\"/>\n"
    "       <int key=\"NSvFlags\">1280</int>\n"
    "       <object class=\"NSPSMatrix\" key=\"NSDrawMatrix\"/>\n"
    "       <string key=\"NSFrame\">{{106, 85}, {343, 20}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"749559358\"/>\n"
    "       <int key=\"NSpiFlags\">16394</int>\n"
    "       <double key=\"NSMaxValue\">100</double>\n"
    "      </object>\n"
    "      <object class=\"NSImageView\" id=\"294367161\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"749559358\"/>\n"
    "       <int key=\"NSvFlags\">256</int>\n"
    "       <object class=\"NSMutableSet\" key=\"NSDragTypes\">\n"
    "        <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "        <object class=\"NSArray\" key=\"set.sortedObjects\">\n"
    "         <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "         <string>Apple PDF pasteboard type</string>\n"
    "         <string>Apple PICT pasteboard type</string>\n"
    "         <string>Apple PNG pasteboard type</string>\n"
    "         <string>NSFilenamesPboardType</string>\n"
    "         <string>NeXT Encapsulated PostScript v1.2 pasteboard type</string>\n"
    "         <string>NeXT TIFF v4.0 pasteboard type</string>\n"
    "        </object>\n"
    "       </object>\n"
    "       <string key=\"NSFrame\">{{20, 66}, {62, 62}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"749559358\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSImageCell\" key=\"NSCell\" id=\"450216261\">\n"
    "        <int key=\"NSCellFlags\">130560</int>\n"
    "        <int key=\"NSCellFlags2\">33554432</int>\n"
    "        <object class=\"NSCustomResource\" key=\"NSContents\" id=\"467314799\">\n"
    "         <string key=\"NSClassName\">NSImage</string>\n"
    "         <string key=\"NSResourceName\">NSApplicationIcon</string>\n"
    "        </object>\n"
    "        <int key=\"NSAlign\">0</int>\n"
    "        <int key=\"NSScale\">0</int>\n"
    "        <int key=\"NSStyle\">0</int>\n"
    "        <bool key=\"NSAnimates\">NO</bool>\n"
    "       </object>\n"
    "       <bool key=\"NSEditable\">YES</bool>\n"
    "      </object>\n"
    "      <object class=\"NSButton\" id=\"828513968\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"749559358\"/>\n"
    "       <int key=\"NSvFlags\">256</int>\n"
    "       <string key=\"NSFrame\">{{371, 15}, {82, 32}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"749559358\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSButtonCell\" key=\"NSCell\" id=\"679983593\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">134217728</int>\n"
    "        <string key=\"NSContents\">Cancel</string>\n"
    "        <object class=\"NSFont\" key=\"NSSupport\" id=\"661924512\">\n"
    "         <string key=\"NSName\">LucidaGrande</string>\n"
    "         <double key=\"NSSize\">13</double>\n"
    "         <int key=\"NSfFlags\">1044</int>\n"
    "        </object>\n"
    "        <reference key=\"NSControlView\" ref=\"828513968\"/>\n"
    "        <int key=\"NSButtonFlags\">-2038284033</int>\n"
    "        <int key=\"NSButtonFlags2\">1</int>\n"
    "        <reference key=\"NSAlternateImage\" ref=\"661924512\"/>\n"
    "        <string key=\"NSAlternateContents\"/>\n"
    "        <object class=\"NSMutableString\" key=\"NSKeyEquivalent\">\n"
    "         <characters key=\"NS.bytes\"/>\n"
    "        </object>\n"
    "        <int key=\"NSPeriodicDelay\">200</int>\n"
    "        <int key=\"NSPeriodicInterval\">25</int>\n"
    "       </object>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string key=\"NSFrameSize\">{467, 151}</string>\n"
    "    </object>\n"
    "    <string key=\"NSScreenRect\">{{0, 0}, {2560, 1418}}</string>\n"
    "    <string key=\"NSMinSize\">{213, 129}</string>\n"
    "    <string key=\"NSMaxSize\">{10000000000000, 10000000000000}</string>\n"
    "    <bool key=\"NSWindowIsRestorable\">YES</bool>\n"
    "   </object>\n"
    "   <object class=\"NSWindowTemplate\" id=\"216006591\">\n"
    "    <int key=\"NSWindowStyleMask\">9</int>\n"
    "    <int key=\"NSWindowBacking\">2</int>\n"
    "    <string key=\"NSWindowRect\">{{214, 371}, {780, 439}}</string>\n"
    "    <int key=\"NSWTFlags\">1886912512</int>\n"
    "    <string key=\"NSWindowTitle\"/>\n"
    "    <object class=\"NSMutableString\" key=\"NSWindowClass\">\n"
    "     <characters key=\"NS.bytes\">NSPanel</characters>\n"
    "    </object>\n"
    "    <object class=\"NSMutableString\" key=\"NSViewClass\">\n"
    "     <characters key=\"NS.bytes\">View</characters>\n"
    "    </object>\n"
    "    <nil key=\"NSUserInterfaceItemIdentifier\"/>\n"
    "    <string key=\"NSWindowContentMinSize\">{213, 107}</string>\n"
    "    <object class=\"NSView\" key=\"NSWindowView\" id=\"5705630\">\n"
    "     <reference key=\"NSNextResponder\"/>\n"
    "     <int key=\"NSvFlags\">256</int>\n"
    "     <object class=\"NSMutableArray\" key=\"NSSubviews\">\n"
    "      <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "      <object class=\"NSBox\" id=\"681154887\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"5705630\"/>\n"
    "       <int key=\"NSvFlags\">274</int>\n"
    "       <object class=\"NSMutableArray\" key=\"NSSubviews\">\n"
    "        <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "        <object class=\"NSView\" id=\"614647701\">\n"
    "         <reference key=\"NSNextResponder\" ref=\"681154887\"/>\n"
    "         <int key=\"NSvFlags\">274</int>\n"
    "         <object class=\"NSMutableArray\" key=\"NSSubviews\">\n"
    "          <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "          <object class=\"WebView\" id=\"1035469751\">\n"
    "           <reference key=\"NSNextResponder\" ref=\"614647701\"/>\n"
    "           <int key=\"NSvFlags\">274</int>\n"
    "           <object class=\"NSMutableSet\" key=\"NSDragTypes\">\n"
    "            <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "            <object class=\"NSArray\" key=\"set.sortedObjects\">\n"
    "             <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "             <string>Apple HTML pasteboard type</string>\n"
    "             <string>Apple PDF pasteboard type</string>\n"
    "             <string>Apple PICT pasteboard type</string>\n"
    "             <string>Apple URL pasteboard type</string>\n"
    "             <string>Apple Web Archive pasteboard type</string>\n"
    "             <string>NSColor pasteboard type</string>\n"
    "             <string>NSFilenamesPboardType</string>\n"
    "             <string>NSStringPboardType</string>\n"
    "             <string>NeXT RTFD pasteboard type</string>\n"
    "             <string>NeXT Rich Text Format v1.0 pasteboard type</string>\n"
    "             <string>NeXT TIFF v4.0 pasteboard type</string>\n"
    "             <string>WebURLsWithTitlesPboardType</string>\n"
    "             <string>public.png</string>\n"
    "             <string>public.url</string>\n"
    "             <string>public.url-name</string>\n"
    "            </object>\n"
    "           </object>\n"
    "           <string key=\"NSFrame\">{{1, 1}, {738, 248}}</string>\n"
    "           <reference key=\"NSSuperview\" ref=\"614647701\"/>\n"
    "           <reference key=\"NSNextKeyView\"/>\n"
    "           <string key=\"FrameName\"/>\n"
    "           <string key=\"GroupName\"/>\n"
    "           <object class=\"WebPreferences\" key=\"Preferences\" id=\"794004680\">\n"
    "            <string key=\"Identifier\"/>\n"
    "            <object class=\"NSMutableDictionary\" key=\"Values\">\n"
    "             <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "             <object class=\"NSArray\" key=\"dict.sortedKeys\">\n"
    "              <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "              <string>WebKitDefaultFixedFontSize</string>\n"
    "              <string>WebKitDefaultFontSize</string>\n"
    "              <string>WebKitMinimumFontSize</string>\n"
    "             </object>\n"
    "             <object class=\"NSArray\" key=\"dict.values\">\n"
    "              <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "              <integer value=\"12\"/>\n"
    "              <integer value=\"12\"/>\n"
    "              <integer value=\"1\"/>\n"
    "             </object>\n"
    "            </object>\n"
    "           </object>\n"
    "           <bool key=\"UseBackForwardList\">NO</bool>\n"
    "           <bool key=\"AllowsUndo\">YES</bool>\n"
    "          </object>\n"
    "         </object>\n"
    "         <string key=\"NSFrame\">{{1, 1}, {740, 250}}</string>\n"
    "         <reference key=\"NSSuperview\" ref=\"681154887\"/>\n"
    "        </object>\n"
    "       </object>\n"
    "       <string key=\"NSFrame\">{{19, 59}, {742, 252}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"5705630\"/>\n"
    "       <string key=\"NSOffsets\">{0, 0}</string>\n"
    "       <object class=\"NSTextFieldCell\" key=\"NSTitleCell\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">0</int>\n"
    "        <string key=\"NSContents\">Box</string>\n"
    "        <object class=\"NSFont\" key=\"NSSupport\" id=\"26\">\n"
    "         <string key=\"NSName\">LucidaGrande</string>\n"
    "         <double key=\"NSSize\">11</double>\n"
    "         <int key=\"NSfFlags\">3100</int>\n"
    "        </object>\n"
    "        <object class=\"NSColor\" key=\"NSBackgroundColor\">\n"
    "         <int key=\"NSColorSpace\">6</int>\n"
    "         <string key=\"NSCatalogName\">System</string>\n"
    "         <string key=\"NSColorName\">textBackgroundColor</string>\n"
    "         <object class=\"NSColor\" key=\"NSColor\">\n"
    "          <int key=\"NSColorSpace\">3</int>\n"
    "          <bytes key=\"NSWhite\">MQA</bytes>\n"
    "         </object>\n"
    "        </object>\n"
    "        <object class=\"NSColor\" key=\"NSTextColor\">\n"
    "         <int key=\"NSColorSpace\">3</int>\n"
    "         <bytes key=\"NSWhite\">MCAwLjgwMDAwMDAxAA</bytes>\n"
    "        </object>\n"
    "       </object>\n"
    "       <reference key=\"NSContentView\" ref=\"614647701\"/>\n"
    "       <int key=\"NSBorderType\">1</int>\n"
    "       <int key=\"NSBoxType\">3</int>\n"
    "       <int key=\"NSTitlePosition\">0</int>\n"
    "       <bool key=\"NSTransparent\">NO</bool>\n"
    "      </object>\n"
    "      <object class=\"NSImageView\" id=\"699157213\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"5705630\"/>\n"
    "       <int key=\"NSvFlags\">268</int>\n"
    "       <object class=\"NSMutableSet\" key=\"NSDragTypes\">\n"
    "        <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "        <object class=\"NSArray\" key=\"set.sortedObjects\">\n"
    "         <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "         <string>Apple PDF pasteboard type</string>\n"
    "         <string>Apple PICT pasteboard type</string>\n"
    "         <string>Apple PNG pasteboard type</string>\n"
    "         <string>NSFilenamesPboardType</string>\n"
    "         <string>NeXT Encapsulated PostScript v1.2 pasteboard type</string>\n"
    "         <string>NeXT TIFF v4.0 pasteboard type</string>\n"
    "        </object>\n"
    "       </object>\n"
    "       <string key=\"NSFrame\">{{20, 329}, {89, 90}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"5705630\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSImageCell\" key=\"NSCell\" id=\"438997373\">\n"
    "        <int key=\"NSCellFlags\">537001472</int>\n"
    "        <int key=\"NSCellFlags2\">33554432</int>\n"
    "        <reference key=\"NSContents\" ref=\"467314799\"/>\n"
    "        <int key=\"NSAlign\">0</int>\n"
    "        <int key=\"NSScale\">1</int>\n"
    "        <int key=\"NSStyle\">0</int>\n"
    "        <bool key=\"NSAnimates\">NO</bool>\n"
    "       </object>\n"
    "       <bool key=\"NSEditable\">YES</bool>\n"
    "      </object>\n"
    "      <object class=\"NSTextField\" id=\"475068467\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"5705630\"/>\n"
    "       <int key=\"NSvFlags\">268</int>\n"
    "       <string key=\"NSFrame\">{{141, 402}, {276, 17}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"5705630\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSTextFieldCell\" key=\"NSCell\" id=\"741497496\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">272629760</int>\n"
    "        <string key=\"NSContents\">A New " ;
  result << in_PROJECT_5F_NAME.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("PMApplicationUpdate.xib.galgasTemplate", 361)).stringValue () ;
  result << " Version is available.</string>\n"
    "        <reference key=\"NSSupport\" ref=\"254211308\"/>\n"
    "        <reference key=\"NSControlView\" ref=\"475068467\"/>\n"
    "        <reference key=\"NSBackgroundColor\" ref=\"481433827\"/>\n"
    "        <reference key=\"NSTextColor\" ref=\"123369485\"/>\n"
    "       </object>\n"
    "      </object>\n"
    "      <object class=\"NSTextField\" id=\"413993104\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"5705630\"/>\n"
    "       <int key=\"NSvFlags\">266</int>\n"
    "       <string key=\"NSFrame\">{{141, 334}, {622, 48}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"5705630\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSTextFieldCell\" key=\"NSCell\" id=\"1010471558\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">272629760</int>\n"
    "        <string key=\"NSContents\">New version text\xE2""\x80""\xA6""</string>\n"
    "        <reference key=\"NSSupport\" ref=\"26\"/>\n"
    "        <reference key=\"NSControlView\" ref=\"413993104\"/>\n"
    "        <reference key=\"NSBackgroundColor\" ref=\"481433827\"/>\n"
    "        <reference key=\"NSTextColor\" ref=\"123369485\"/>\n"
    "       </object>\n"
    "      </object>\n"
    "      <object class=\"NSButton\" id=\"155850099\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"5705630\"/>\n"
    "       <int key=\"NSvFlags\">292</int>\n"
    "       <string key=\"NSFrame\">{{18, 21}, {244, 18}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"5705630\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSButtonCell\" key=\"NSCell\" id=\"400723301\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">0</int>\n"
    "        <string key=\"NSContents\">Check For New Version At Start-Up</string>\n"
    "        <reference key=\"NSSupport\" ref=\"661924512\"/>\n"
    "        <reference key=\"NSControlView\" ref=\"155850099\"/>\n"
    "        <int key=\"NSButtonFlags\">1211912703</int>\n"
    "        <int key=\"NSButtonFlags2\">2</int>\n"
    "        <object class=\"NSCustomResource\" key=\"NSNormalImage\">\n"
    "         <string key=\"NSClassName\">NSImage</string>\n"
    "         <string key=\"NSResourceName\">NSSwitch</string>\n"
    "        </object>\n"
    "        <object class=\"NSButtonImageSource\" key=\"NSAlternateImage\" id=\"170836088\">\n"
    "         <string key=\"NSImageName\">NSSwitch</string>\n"
    "        </object>\n"
    "        <string key=\"NSAlternateContents\"/>\n"
    "        <string key=\"NSKeyEquivalent\"/>\n"
    "        <int key=\"NSPeriodicDelay\">200</int>\n"
    "        <int key=\"NSPeriodicInterval\">25</int>\n"
    "       </object>\n"
    "      </object>\n"
    "      <object class=\"NSButton\" id=\"244651633\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"5705630\"/>\n"
    "       <int key=\"NSvFlags\">292</int>\n"
    "       <string key=\"NSFrame\">{{522, 12}, {244, 32}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"5705630\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSButtonCell\" key=\"NSCell\" id=\"957503088\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">134217728</int>\n"
    "        <string key=\"NSContents\">Install and Launch Version 7.8.9</string>\n"
    "        <reference key=\"NSSupport\" ref=\"661924512\"/>\n"
    "        <reference key=\"NSControlView\" ref=\"244651633\"/>\n"
    "        <int key=\"NSButtonFlags\">-2038284033</int>\n"
    "        <int key=\"NSButtonFlags2\">1</int>\n"
    "        <reference key=\"NSAlternateImage\" ref=\"661924512\"/>\n"
    "        <string key=\"NSAlternateContents\"/>\n"
    "        <object class=\"NSMutableString\" key=\"NSKeyEquivalent\">\n"
    "         <characters key=\"NS.bytes\"/>\n"
    "        </object>\n"
    "        <int key=\"NSPeriodicDelay\">200</int>\n"
    "        <int key=\"NSPeriodicInterval\">25</int>\n"
    "       </object>\n"
    "      </object>\n"
    "      <object class=\"NSButton\" id=\"355971570\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"5705630\"/>\n"
    "       <int key=\"NSvFlags\">256</int>\n"
    "       <string key=\"NSFrame\">{{400, 12}, {82, 32}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"5705630\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSButtonCell\" key=\"NSCell\" id=\"806186831\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">134217728</int>\n"
    "        <string key=\"NSContents\">Cancel</string>\n"
    "        <reference key=\"NSSupport\" ref=\"661924512\"/>\n"
    "        <reference key=\"NSControlView\" ref=\"355971570\"/>\n"
    "        <int key=\"NSButtonFlags\">-2038284033</int>\n"
    "        <int key=\"NSButtonFlags2\">1</int>\n"
    "        <reference key=\"NSAlternateImage\" ref=\"661924512\"/>\n"
    "        <string key=\"NSAlternateContents\"/>\n"
    "        <object class=\"NSMutableString\" key=\"NSKeyEquivalent\">\n"
    "         <characters key=\"NS.bytes\"/>\n"
    "        </object>\n"
    "        <int key=\"NSPeriodicDelay\">200</int>\n"
    "        <int key=\"NSPeriodicInterval\">25</int>\n"
    "       </object>\n"
    "      </object>\n"
    "      <object class=\"NSTextField\" id=\"832757603\">\n"
    "       <reference key=\"NSNextResponder\" ref=\"5705630\"/>\n"
    "       <int key=\"NSvFlags\">268</int>\n"
    "       <string key=\"NSFrame\">{{141, 318}, {112, 14}}</string>\n"
    "       <reference key=\"NSSuperview\" ref=\"5705630\"/>\n"
    "       <bool key=\"NSEnabled\">YES</bool>\n"
    "       <object class=\"NSTextFieldCell\" key=\"NSCell\" id=\"622444291\">\n"
    "        <int key=\"NSCellFlags\">67239424</int>\n"
    "        <int key=\"NSCellFlags2\">272760832</int>\n"
    "        <string key=\"NSContents\">Change Log:</string>\n"
    "        <object class=\"NSFont\" key=\"NSSupport\">\n"
    "         <string key=\"NSName\">LucidaGrande-Bold</string>\n"
    "         <double key=\"NSSize\">11</double>\n"
    "         <int key=\"NSfFlags\">3357</int>\n"
    "        </object>\n"
    "        <reference key=\"NSControlView\" ref=\"832757603\"/>\n"
    "        <reference key=\"NSBackgroundColor\" ref=\"481433827\"/>\n"
    "        <reference key=\"NSTextColor\" ref=\"123369485\"/>\n"
    "       </object>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string key=\"NSFrameSize\">{780, 439}</string>\n"
    "     <reference key=\"NSSuperview\"/>\n"
    "    </object>\n"
    "    <string key=\"NSScreenRect\">{{0, 0}, {2560, 1418}}</string>\n"
    "    <string key=\"NSMinSize\">{213, 129}</string>\n"
    "    <string key=\"NSMaxSize\">{10000000000000, 10000000000000}</string>\n"
    "    <bool key=\"NSWindowIsRestorable\">YES</bool>\n"
    "   </object>\n"
    "   <object class=\"NSCustomView\" id=\"706456476\">\n"
    "    <reference key=\"NSNextResponder\"/>\n"
    "    <int key=\"NSvFlags\">268</int>\n"
    "    <object class=\"NSMutableArray\" key=\"NSSubviews\">\n"
    "     <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "     <object class=\"NSButton\" id=\"119113237\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">268</int>\n"
    "      <string key=\"NSFrame\">{{17, 572}, {233, 18}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"282877588\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSButtonCell\" key=\"NSCell\" id=\"603200122\">\n"
    "       <int key=\"NSCellFlags\">67239424</int>\n"
    "       <int key=\"NSCellFlags2\">0</int>\n"
    "       <string key=\"NSContents\">Check for New Version at Launch</string>\n"
    "       <reference key=\"NSSupport\" ref=\"661924512\"/>\n"
    "       <reference key=\"NSControlView\" ref=\"119113237\"/>\n"
    "       <int key=\"NSButtonFlags\">1211912703</int>\n"
    "       <int key=\"NSButtonFlags2\">2</int>\n"
    "       <reference key=\"NSAlternateImage\" ref=\"170836088\"/>\n"
    "       <string key=\"NSAlternateContents\"/>\n"
    "       <string key=\"NSKeyEquivalent\"/>\n"
    "       <int key=\"NSPeriodicDelay\">200</int>\n"
    "       <int key=\"NSPeriodicInterval\">25</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSButton\" id=\"282877588\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">268</int>\n"
    "      <string key=\"NSFrame\">{{253, 562}, {121, 32}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"108384011\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSButtonCell\" key=\"NSCell\" id=\"175526135\">\n"
    "       <int key=\"NSCellFlags\">67239424</int>\n"
    "       <int key=\"NSCellFlags2\">134217728</int>\n"
    "       <string key=\"NSContents\">Check Now\xE2""\x80""\xA6""</string>\n"
    "       <reference key=\"NSSupport\" ref=\"661924512\"/>\n"
    "       <reference key=\"NSControlView\" ref=\"282877588\"/>\n"
    "       <int key=\"NSButtonFlags\">-2038284033</int>\n"
    "       <int key=\"NSButtonFlags2\">1</int>\n"
    "       <object class=\"NSFont\" key=\"NSAlternateImage\" id=\"828379122\">\n"
    "        <string key=\"NSName\">LucidaGrande</string>\n"
    "        <double key=\"NSSize\">13</double>\n"
    "        <int key=\"NSfFlags\">16</int>\n"
    "       </object>\n"
    "       <string key=\"NSAlternateContents\"/>\n"
    "       <object class=\"NSMutableString\" key=\"NSKeyEquivalent\">\n"
    "        <characters key=\"NS.bytes\"/>\n"
    "       </object>\n"
    "       <int key=\"NSPeriodicDelay\">200</int>\n"
    "       <int key=\"NSPeriodicInterval\">25</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSTextField\" id=\"910425216\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">266</int>\n"
    "      <string key=\"NSFrame\">{{291, 506}, {303, 17}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"1066463798\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSTextFieldCell\" key=\"NSCell\" id=\"820983391\">\n"
    "       <int key=\"NSCellFlags\">68288064</int>\n"
    "       <int key=\"NSCellFlags2\">272630784</int>\n"
    "       <string key=\"NSContents\">Label</string>\n"
    "       <reference key=\"NSSupport\" ref=\"661924512\"/>\n"
    "       <reference key=\"NSControlView\" ref=\"910425216\"/>\n"
    "       <reference key=\"NSBackgroundColor\" ref=\"481433827\"/>\n"
    "       <reference key=\"NSTextColor\" ref=\"123369485\"/>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSProgressIndicator\" id=\"155281057\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">1292</int>\n"
    "      <object class=\"NSPSMatrix\" key=\"NSDrawMatrix\"/>\n"
    "      <string key=\"NSFrame\">{{270, 506}, {16, 16}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"910425216\"/>\n"
    "      <int key=\"NSpiFlags\">20746</int>\n"
    "      <double key=\"NSMaxValue\">100</double>\n"
    "     </object>\n"
    "     <object class=\"NSButton\" id=\"1018478293\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">268</int>\n"
    "      <string key=\"NSFrame\">{{232, 499}, {30, 30}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"155281057\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSButtonCell\" key=\"NSCell\" id=\"333272556\">\n"
    "       <int key=\"NSCellFlags\">-2080244224</int>\n"
    "       <int key=\"NSCellFlags2\">134217728</int>\n"
    "       <string key=\"NSContents\"/>\n"
    "       <object class=\"NSFont\" key=\"NSSupport\" id=\"162662537\">\n"
    "        <string key=\"NSName\">LucidaGrande</string>\n"
    "        <double key=\"NSSize\">18</double>\n"
    "        <int key=\"NSfFlags\">16</int>\n"
    "       </object>\n"
    "       <reference key=\"NSControlView\" ref=\"1018478293\"/>\n"
    "       <int key=\"NSButtonFlags\">-2033958657</int>\n"
    "       <int key=\"NSButtonFlags2\">6</int>\n"
    "       <object class=\"NSCustomResource\" key=\"NSNormalImage\">\n"
    "        <string key=\"NSClassName\">NSImage</string>\n"
    "        <string key=\"NSResourceName\">NSRefreshTemplate</string>\n"
    "       </object>\n"
    "       <string key=\"NSAlternateContents\"/>\n"
    "       <string key=\"NSKeyEquivalent\"/>\n"
    "       <int key=\"NSPeriodicDelay\">400</int>\n"
    "       <int key=\"NSPeriodicInterval\">75</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSButton\" id=\"516363802\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">268</int>\n"
    "      <string key=\"NSFrame\">{{171, 499}, {30, 30}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"1018478293\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSButtonCell\" key=\"NSCell\" id=\"255146468\">\n"
    "       <int key=\"NSCellFlags\">-2080244224</int>\n"
    "       <int key=\"NSCellFlags2\">134217728</int>\n"
    "       <string key=\"NSContents\"/>\n"
    "       <reference key=\"NSSupport\" ref=\"162662537\"/>\n"
    "       <reference key=\"NSControlView\" ref=\"516363802\"/>\n"
    "       <int key=\"NSButtonFlags\">-2033958657</int>\n"
    "       <int key=\"NSButtonFlags2\">6</int>\n"
    "       <object class=\"NSCustomResource\" key=\"NSNormalImage\">\n"
    "        <string key=\"NSClassName\">NSImage</string>\n"
    "        <string key=\"NSResourceName\">NSGoRightTemplate</string>\n"
    "       </object>\n"
    "       <string key=\"NSAlternateContents\"/>\n"
    "       <string key=\"NSKeyEquivalent\"/>\n"
    "       <int key=\"NSPeriodicDelay\">400</int>\n"
    "       <int key=\"NSPeriodicInterval\">75</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSButton\" id=\"643835222\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">268</int>\n"
    "      <string key=\"NSFrame\">{{142, 499}, {30, 30}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"516363802\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSButtonCell\" key=\"NSCell\" id=\"903670050\">\n"
    "       <int key=\"NSCellFlags\">-2080244224</int>\n"
    "       <int key=\"NSCellFlags2\">134217728</int>\n"
    "       <string key=\"NSContents\"/>\n"
    "       <reference key=\"NSSupport\" ref=\"162662537\"/>\n"
    "       <reference key=\"NSControlView\" ref=\"643835222\"/>\n"
    "       <int key=\"NSButtonFlags\">-2033958657</int>\n"
    "       <int key=\"NSButtonFlags2\">6</int>\n"
    "       <object class=\"NSCustomResource\" key=\"NSNormalImage\">\n"
    "        <string key=\"NSClassName\">NSImage</string>\n"
    "        <string key=\"NSResourceName\">NSGoLeftTemplate</string>\n"
    "       </object>\n"
    "       <string key=\"NSAlternateContents\"/>\n"
    "       <string key=\"NSKeyEquivalent\"/>\n"
    "       <int key=\"NSPeriodicDelay\">400</int>\n"
    "       <int key=\"NSPeriodicInterval\">75</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSButton\" id=\"162979538\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">268</int>\n"
    "      <string key=\"NSFrame\">{{49, 499}, {30, 30}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"940738293\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSButtonCell\" key=\"NSCell\" id=\"756937780\">\n"
    "       <int key=\"NSCellFlags\">67239424</int>\n"
    "       <int key=\"NSCellFlags2\">134217728</int>\n"
    "       <string key=\"NSContents\">A</string>\n"
    "       <reference key=\"NSSupport\" ref=\"828379122\"/>\n"
    "       <reference key=\"NSControlView\" ref=\"162979538\"/>\n"
    "       <int key=\"NSButtonFlags\">-2038152961</int>\n"
    "       <int key=\"NSButtonFlags2\">6</int>\n"
    "       <string key=\"NSAlternateContents\"/>\n"
    "       <string key=\"NSKeyEquivalent\"/>\n"
    "       <int key=\"NSPeriodicDelay\">400</int>\n"
    "       <int key=\"NSPeriodicInterval\">75</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSButton\" id=\"940738293\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">268</int>\n"
    "      <string key=\"NSFrame\">{{78, 499}, {30, 30}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"643835222\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSButtonCell\" key=\"NSCell\" id=\"570845283\">\n"
    "       <int key=\"NSCellFlags\">67239424</int>\n"
    "       <int key=\"NSCellFlags2\">134217728</int>\n"
    "       <string key=\"NSContents\">A</string>\n"
    "       <object class=\"NSFont\" key=\"NSSupport\">\n"
    "        <string key=\"NSName\">LucidaGrande</string>\n"
    "        <double key=\"NSSize\">9</double>\n"
    "        <int key=\"NSfFlags\">16</int>\n"
    "       </object>\n"
    "       <reference key=\"NSControlView\" ref=\"940738293\"/>\n"
    "       <int key=\"NSButtonFlags\">-2038152961</int>\n"
    "       <int key=\"NSButtonFlags2\">6</int>\n"
    "       <string key=\"NSAlternateContents\"/>\n"
    "       <string key=\"NSKeyEquivalent\"/>\n"
    "       <int key=\"NSPeriodicDelay\">400</int>\n"
    "       <int key=\"NSPeriodicInterval\">75</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSButton\" id=\"108384011\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">268</int>\n"
    "      <string key=\"NSFrame\">{{20, 499}, {30, 30}}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\" ref=\"162979538\"/>\n"
    "      <bool key=\"NSEnabled\">YES</bool>\n"
    "      <object class=\"NSButtonCell\" key=\"NSCell\" id=\"523984443\">\n"
    "       <int key=\"NSCellFlags\">67239424</int>\n"
    "       <int key=\"NSCellFlags2\">134217728</int>\n"
    "       <string key=\"NSContents\">A</string>\n"
    "       <reference key=\"NSSupport\" ref=\"162662537\"/>\n"
    "       <reference key=\"NSControlView\" ref=\"108384011\"/>\n"
    "       <int key=\"NSButtonFlags\">-2038152961</int>\n"
    "       <int key=\"NSButtonFlags2\">6</int>\n"
    "       <string key=\"NSAlternateContents\"/>\n"
    "       <string key=\"NSKeyEquivalent\"/>\n"
    "       <int key=\"NSPeriodicDelay\">400</int>\n"
    "       <int key=\"NSPeriodicInterval\">75</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"WebView\" id=\"1066463798\">\n"
    "      <reference key=\"NSNextResponder\" ref=\"706456476\"/>\n"
    "      <int key=\"NSvFlags\">274</int>\n"
    "      <object class=\"NSMutableSet\" key=\"NSDragTypes\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <object class=\"NSArray\" key=\"set.sortedObjects\">\n"
    "        <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "        <string>Apple HTML pasteboard type</string>\n"
    "        <string>Apple PDF pasteboard type</string>\n"
    "        <string>Apple PICT pasteboard type</string>\n"
    "        <string>Apple URL pasteboard type</string>\n"
    "        <string>Apple Web Archive pasteboard type</string>\n"
    "        <string>NSColor pasteboard type</string>\n"
    "        <string>NSFilenamesPboardType</string>\n"
    "        <string>NSStringPboardType</string>\n"
    "        <string>NeXT RTFD pasteboard type</string>\n"
    "        <string>NeXT Rich Text Format v1.0 pasteboard type</string>\n"
    "        <string>NeXT TIFF v4.0 pasteboard type</string>\n"
    "        <string>WebURLsWithTitlesPboardType</string>\n"
    "        <string>public.png</string>\n"
    "        <string>public.url</string>\n"
    "        <string>public.url-name</string>\n"
    "       </object>\n"
    "      </object>\n"
    "      <string key=\"NSFrameSize\">{611, 491}</string>\n"
    "      <reference key=\"NSSuperview\" ref=\"706456476\"/>\n"
    "      <reference key=\"NSWindow\"/>\n"
    "      <reference key=\"NSNextKeyView\"/>\n"
    "      <string key=\"FrameName\"/>\n"
    "      <string key=\"GroupName\"/>\n"
    "      <reference key=\"Preferences\" ref=\"794004680\"/>\n"
    "      <bool key=\"UseBackForwardList\">YES</bool>\n"
    "      <bool key=\"AllowsUndo\">YES</bool>\n"
    "     </object>\n"
    "    </object>\n"
    "    <string key=\"NSFrameSize\">{611, 608}</string>\n"
    "    <reference key=\"NSSuperview\"/>\n"
    "    <reference key=\"NSWindow\"/>\n"
    "    <reference key=\"NSNextKeyView\" ref=\"119113237\"/>\n"
    "    <string key=\"NSClassName\">NSView</string>\n"
    "   </object>\n"
    "   <object class=\"NSObjectController\" id=\"886630308\">\n"
    "    <object class=\"NSMutableArray\" key=\"NSDeclaredKeys\">\n"
    "     <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "     <string>canGoBack</string>\n"
    "     <string>canGoForward</string>\n"
    "     <string>canMakeTextLarger</string>\n"
    "     <string>canMakeTextSmaller</string>\n"
    "     <string>canMakeTextStandardSize</string>\n"
    "     <string>isLoading</string>\n"
    "     <string>mainFrameURL</string>\n"
    "    </object>\n"
    "    <bool key=\"NSEditable\">YES</bool>\n"
    "    <object class=\"_NSManagedProxy\" key=\"_NSManagedProxy\"/>\n"
    "   </object>\n"
    "  </object>\n"
    "  <object class=\"IBObjectContainer\" key=\"IBDocument.Objects\">\n"
    "   <object class=\"NSMutableArray\" key=\"connectionRecords\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mCancelButton</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"828513968\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">37</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mDownloadProgressIndicator</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"204285727\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">38</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mDownloadSubTitle</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"490232887\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">39</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mDownloadTitle</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"1034800840\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">40</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mChangeLogWebView</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"1035469751\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">56</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mCheckUpdateAtStartUpCheckBox2</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"155850099\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">57</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mNewVersionTextField</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"413993104\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">58</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mNewAvailableVersionPanel</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"216006591\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">59</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mPerformUpdateButton</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"244651633\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">60</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mViewForChangeLogInPreferencePane</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">111</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mChangeLogInPreferencePaneWebView</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"1066463798\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">113</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBActionConnection\" key=\"connection\">\n"
    "      <string key=\"label\">checkForNewVersion:</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"282877588\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">182</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mCheckUpdateAtStartUpCheckBox</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"119113237\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">186</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBOutletConnection\" key=\"connection\">\n"
    "      <string key=\"label\">mCheckNowButton</string>\n"
    "      <reference key=\"source\" ref=\"42341283\"/>\n"
    "      <reference key=\"destination\" ref=\"282877588\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">187</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBActionConnection\" key=\"connection\">\n"
    "      <string key=\"label\">makeTextLarger:</string>\n"
    "      <reference key=\"source\" ref=\"1066463798\"/>\n"
    "      <reference key=\"destination\" ref=\"108384011\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">120</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBActionConnection\" key=\"connection\">\n"
    "      <string key=\"label\">makeTextSmaller:</string>\n"
    "      <reference key=\"source\" ref=\"1066463798\"/>\n"
    "      <reference key=\"destination\" ref=\"940738293\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">121</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBActionConnection\" key=\"connection\">\n"
    "      <string key=\"label\">makeTextStandardSize:</string>\n"
    "      <reference key=\"source\" ref=\"1066463798\"/>\n"
    "      <reference key=\"destination\" ref=\"162979538\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">125</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBActionConnection\" key=\"connection\">\n"
    "      <string key=\"label\">goBack:</string>\n"
    "      <reference key=\"source\" ref=\"1066463798\"/>\n"
    "      <reference key=\"destination\" ref=\"643835222\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">135</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBActionConnection\" key=\"connection\">\n"
    "      <string key=\"label\">goForward:</string>\n"
    "      <reference key=\"source\" ref=\"1066463798\"/>\n"
    "      <reference key=\"destination\" ref=\"516363802\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">136</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBActionConnection\" key=\"connection\">\n"
    "      <string key=\"label\">reload:</string>\n"
    "      <reference key=\"source\" ref=\"1066463798\"/>\n"
    "      <reference key=\"destination\" ref=\"333272556\"/>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">140</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">enabled: selection.canMakeTextLarger</string>\n"
    "      <reference key=\"source\" ref=\"108384011\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"108384011\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">enabled: selection.canMakeTextLarger</string>\n"
    "       <string key=\"NSBinding\">enabled</string>\n"
    "       <string key=\"NSKeyPath\">selection.canMakeTextLarger</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">152</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">enabled: selection.canMakeTextSmaller</string>\n"
    "      <reference key=\"source\" ref=\"940738293\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"940738293\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">enabled: selection.canMakeTextSmaller</string>\n"
    "       <string key=\"NSBinding\">enabled</string>\n"
    "       <string key=\"NSKeyPath\">selection.canMakeTextSmaller</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">154</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">enabled: selection.canMakeTextStandardSize</string>\n"
    "      <reference key=\"source\" ref=\"162979538\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"162979538\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">enabled: selection.canMakeTextStandardSize</string>\n"
    "       <string key=\"NSBinding\">enabled</string>\n"
    "       <string key=\"NSKeyPath\">selection.canMakeTextStandardSize</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">157</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">enabled: selection.canGoBack</string>\n"
    "      <reference key=\"source\" ref=\"903670050\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"903670050\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">enabled: selection.canGoBack</string>\n"
    "       <string key=\"NSBinding\">enabled</string>\n"
    "       <string key=\"NSKeyPath\">selection.canGoBack</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">149</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">enabled: selection.canGoForward</string>\n"
    "      <reference key=\"source\" ref=\"516363802\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"516363802\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">enabled: selection.canGoForward</string>\n"
    "       <string key=\"NSBinding\">enabled</string>\n"
    "       <string key=\"NSKeyPath\">selection.canGoForward</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">150</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">contentObject: mChangeLogInPreferencePaneWebView</string>\n"
    "      <reference key=\"source\" ref=\"886630308\"/>\n"
    "      <reference key=\"destination\" ref=\"42341283\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"886630308\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"42341283\"/>\n"
    "       <string key=\"NSLabel\">contentObject: mChangeLogInPreferencePaneWebView</string>\n"
    "       <string key=\"NSBinding\">contentObject</string>\n"
    "       <string key=\"NSKeyPath\">mChangeLogInPreferencePaneWebView</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">147</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">animate: selection.isLoading</string>\n"
    "      <reference key=\"source\" ref=\"155281057\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"155281057\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">animate: selection.isLoading</string>\n"
    "       <string key=\"NSBinding\">animate</string>\n"
    "       <string key=\"NSKeyPath\">selection.isLoading</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">160</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">hidden: selection.isLoading</string>\n"
    "      <reference key=\"source\" ref=\"155281057\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"155281057\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">hidden: selection.isLoading</string>\n"
    "       <string key=\"NSBinding\">hidden</string>\n"
    "       <string key=\"NSKeyPath\">selection.isLoading</string>\n"
    "       <object class=\"NSDictionary\" key=\"NSOptions\">\n"
    "        <string key=\"NS.key.0\">NSValueTransformerName</string>\n"
    "        <string key=\"NS.object.0\">NSNegateBoolean</string>\n"
    "       </object>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">163</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">value: selection.mainFrameURL</string>\n"
    "      <reference key=\"source\" ref=\"910425216\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"910425216\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">value: selection.mainFrameURL</string>\n"
    "       <string key=\"NSBinding\">value</string>\n"
    "       <string key=\"NSKeyPath\">selection.mainFrameURL</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">171</int>\n"
    "    </object>\n"
    "    <object class=\"IBConnectionRecord\">\n"
    "     <object class=\"IBBindingConnection\" key=\"connection\">\n"
    "      <string key=\"label\">enabled: selection.mainFrameURL</string>\n"
    "      <reference key=\"source\" ref=\"820983391\"/>\n"
    "      <reference key=\"destination\" ref=\"886630308\"/>\n"
    "      <object class=\"NSNibBindingConnector\" key=\"connector\">\n"
    "       <reference key=\"NSSource\" ref=\"820983391\"/>\n"
    "       <reference key=\"NSDestination\" ref=\"886630308\"/>\n"
    "       <string key=\"NSLabel\">enabled: selection.mainFrameURL</string>\n"
    "       <string key=\"NSBinding\">enabled</string>\n"
    "       <string key=\"NSKeyPath\">selection.mainFrameURL</string>\n"
    "       <int key=\"NSNibBindingConnectorVersion\">2</int>\n"
    "      </object>\n"
    "     </object>\n"
    "     <int key=\"connectionID\">167</int>\n"
    "    </object>\n"
    "   </object>\n"
    "   <object class=\"IBMutableOrderedSet\" key=\"objectRecords\">\n"
    "    <object class=\"NSArray\" key=\"orderedObjects\">\n"
    "     <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">0</int>\n"
    "      <object class=\"NSArray\" key=\"object\" id=\"0\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "      </object>\n"
    "      <reference key=\"children\" ref=\"685716556\"/>\n"
    "      <nil key=\"parent\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">-2</int>\n"
    "      <reference key=\"object\" ref=\"42341283\"/>\n"
    "      <reference key=\"parent\" ref=\"0\"/>\n"
    "      <string key=\"objectName\">File's Owner</string>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">-1</int>\n"
    "      <reference key=\"object\" ref=\"1055328378\"/>\n"
    "      <reference key=\"parent\" ref=\"0\"/>\n"
    "      <string key=\"objectName\">First Responder</string>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">30</int>\n"
    "      <reference key=\"object\" ref=\"333224431\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"749559358\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"0\"/>\n"
    "      <string key=\"objectName\">Panel</string>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">31</int>\n"
    "      <reference key=\"object\" ref=\"749559358\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"204285727\"/>\n"
    "       <reference ref=\"294367161\"/>\n"
    "       <reference ref=\"828513968\"/>\n"
    "       <reference ref=\"1034800840\"/>\n"
    "       <reference ref=\"490232887\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"333224431\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">32</int>\n"
    "      <reference key=\"object\" ref=\"1034800840\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"509148504\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"749559358\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">33</int>\n"
    "      <reference key=\"object\" ref=\"490232887\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"454506579\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"749559358\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">34</int>\n"
    "      <reference key=\"object\" ref=\"204285727\"/>\n"
    "      <reference key=\"parent\" ref=\"749559358\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">35</int>\n"
    "      <reference key=\"object\" ref=\"294367161\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"450216261\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"749559358\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">36</int>\n"
    "      <reference key=\"object\" ref=\"828513968\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"679983593\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"749559358\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">44</int>\n"
    "      <reference key=\"object\" ref=\"216006591\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"5705630\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"0\"/>\n"
    "      <string key=\"objectName\">AppliUpdateDialog</string>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">45</int>\n"
    "      <reference key=\"object\" ref=\"5705630\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"355971570\"/>\n"
    "       <reference ref=\"699157213\"/>\n"
    "       <reference ref=\"475068467\"/>\n"
    "       <reference ref=\"413993104\"/>\n"
    "       <reference ref=\"155850099\"/>\n"
    "       <reference ref=\"244651633\"/>\n"
    "       <reference ref=\"832757603\"/>\n"
    "       <reference ref=\"681154887\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"216006591\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">46</int>\n"
    "      <reference key=\"object\" ref=\"355971570\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"806186831\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"5705630\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">47</int>\n"
    "      <reference key=\"object\" ref=\"699157213\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"438997373\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"5705630\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">48</int>\n"
    "      <reference key=\"object\" ref=\"475068467\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"741497496\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"5705630\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">49</int>\n"
    "      <reference key=\"object\" ref=\"413993104\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"1010471558\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"5705630\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">51</int>\n"
    "      <reference key=\"object\" ref=\"155850099\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"400723301\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"5705630\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">53</int>\n"
    "      <reference key=\"object\" ref=\"244651633\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"957503088\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"5705630\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">61</int>\n"
    "      <reference key=\"object\" ref=\"832757603\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"622444291\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"5705630\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">62</int>\n"
    "      <reference key=\"object\" ref=\"681154887\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"1035469751\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"5705630\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">95</int>\n"
    "      <reference key=\"object\" ref=\"509148504\"/>\n"
    "      <reference key=\"parent\" ref=\"1034800840\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">96</int>\n"
    "      <reference key=\"object\" ref=\"454506579\"/>\n"
    "      <reference key=\"parent\" ref=\"490232887\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">97</int>\n"
    "      <reference key=\"object\" ref=\"450216261\"/>\n"
    "      <reference key=\"parent\" ref=\"294367161\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">98</int>\n"
    "      <reference key=\"object\" ref=\"679983593\"/>\n"
    "      <reference key=\"parent\" ref=\"828513968\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">99</int>\n"
    "      <reference key=\"object\" ref=\"806186831\"/>\n"
    "      <reference key=\"parent\" ref=\"355971570\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">100</int>\n"
    "      <reference key=\"object\" ref=\"438997373\"/>\n"
    "      <reference key=\"parent\" ref=\"699157213\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">101</int>\n"
    "      <reference key=\"object\" ref=\"741497496\"/>\n"
    "      <reference key=\"parent\" ref=\"475068467\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">102</int>\n"
    "      <reference key=\"object\" ref=\"1010471558\"/>\n"
    "      <reference key=\"parent\" ref=\"413993104\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">103</int>\n"
    "      <reference key=\"object\" ref=\"400723301\"/>\n"
    "      <reference key=\"parent\" ref=\"155850099\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">104</int>\n"
    "      <reference key=\"object\" ref=\"957503088\"/>\n"
    "      <reference key=\"parent\" ref=\"244651633\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">105</int>\n"
    "      <reference key=\"object\" ref=\"622444291\"/>\n"
    "      <reference key=\"parent\" ref=\"832757603\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">-3</int>\n"
    "      <reference key=\"object\" ref=\"382307856\"/>\n"
    "      <reference key=\"parent\" ref=\"0\"/>\n"
    "      <string key=\"objectName\">Application</string>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">50</int>\n"
    "      <reference key=\"object\" ref=\"1035469751\"/>\n"
    "      <reference key=\"parent\" ref=\"681154887\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">109</int>\n"
    "      <reference key=\"object\" ref=\"706456476\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"1066463798\"/>\n"
    "       <reference ref=\"282877588\"/>\n"
    "       <reference ref=\"119113237\"/>\n"
    "       <reference ref=\"108384011\"/>\n"
    "       <reference ref=\"940738293\"/>\n"
    "       <reference ref=\"162979538\"/>\n"
    "       <reference ref=\"643835222\"/>\n"
    "       <reference ref=\"516363802\"/>\n"
    "       <reference ref=\"1018478293\"/>\n"
    "       <reference ref=\"155281057\"/>\n"
    "       <reference ref=\"910425216\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"0\"/>\n"
    "      <string key=\"objectName\">View for ChangeLog in Preferences</string>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">110</int>\n"
    "      <reference key=\"object\" ref=\"1066463798\"/>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">116</int>\n"
    "      <reference key=\"object\" ref=\"108384011\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"523984443\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">117</int>\n"
    "      <reference key=\"object\" ref=\"523984443\"/>\n"
    "      <reference key=\"parent\" ref=\"108384011\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">118</int>\n"
    "      <reference key=\"object\" ref=\"940738293\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"570845283\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">119</int>\n"
    "      <reference key=\"object\" ref=\"570845283\"/>\n"
    "      <reference key=\"parent\" ref=\"940738293\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">122</int>\n"
    "      <reference key=\"object\" ref=\"162979538\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"756937780\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">123</int>\n"
    "      <reference key=\"object\" ref=\"756937780\"/>\n"
    "      <reference key=\"parent\" ref=\"162979538\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">129</int>\n"
    "      <reference key=\"object\" ref=\"643835222\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"903670050\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">130</int>\n"
    "      <reference key=\"object\" ref=\"903670050\"/>\n"
    "      <reference key=\"parent\" ref=\"643835222\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">132</int>\n"
    "      <reference key=\"object\" ref=\"516363802\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"255146468\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">133</int>\n"
    "      <reference key=\"object\" ref=\"255146468\"/>\n"
    "      <reference key=\"parent\" ref=\"516363802\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">137</int>\n"
    "      <reference key=\"object\" ref=\"1018478293\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"333272556\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">138</int>\n"
    "      <reference key=\"object\" ref=\"333272556\"/>\n"
    "      <reference key=\"parent\" ref=\"1018478293\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">146</int>\n"
    "      <reference key=\"object\" ref=\"886630308\"/>\n"
    "      <reference key=\"parent\" ref=\"0\"/>\n"
    "      <string key=\"objectName\">Web View Object Controller</string>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">158</int>\n"
    "      <reference key=\"object\" ref=\"155281057\"/>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">164</int>\n"
    "      <reference key=\"object\" ref=\"910425216\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"820983391\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">165</int>\n"
    "      <reference key=\"object\" ref=\"820983391\"/>\n"
    "      <reference key=\"parent\" ref=\"910425216\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">178</int>\n"
    "      <reference key=\"object\" ref=\"282877588\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"175526135\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">179</int>\n"
    "      <reference key=\"object\" ref=\"119113237\"/>\n"
    "      <object class=\"NSMutableArray\" key=\"children\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <reference ref=\"603200122\"/>\n"
    "      </object>\n"
    "      <reference key=\"parent\" ref=\"706456476\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">180</int>\n"
    "      <reference key=\"object\" ref=\"603200122\"/>\n"
    "      <reference key=\"parent\" ref=\"119113237\"/>\n"
    "     </object>\n"
    "     <object class=\"IBObjectRecord\">\n"
    "      <int key=\"objectID\">181</int>\n"
    "      <reference key=\"object\" ref=\"175526135\"/>\n"
    "      <reference key=\"parent\" ref=\"282877588\"/>\n"
    "     </object>\n"
    "    </object>\n"
    "   </object>\n"
    "   <object class=\"NSMutableDictionary\" key=\"flattenedProperties\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <object class=\"NSArray\" key=\"dict.sortedKeys\">\n"
    "     <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "     <string>-1.IBPluginDependency</string>\n"
    "     <string>-2.IBPluginDependency</string>\n"
    "     <string>-3.IBPluginDependency</string>\n"
    "     <string>100.IBPluginDependency</string>\n"
    "     <string>101.IBPluginDependency</string>\n"
    "     <string>102.IBPluginDependency</string>\n"
    "     <string>103.IBPluginDependency</string>\n"
    "     <string>104.IBPluginDependency</string>\n"
    "     <string>105.IBPluginDependency</string>\n"
    "     <string>109.IBPluginDependency</string>\n"
    "     <string>110.IBPluginDependency</string>\n"
    "     <string>116.IBAttributePlaceholdersKey</string>\n"
    "     <string>116.IBPluginDependency</string>\n"
    "     <string>117.IBPluginDependency</string>\n"
    "     <string>118.IBAttributePlaceholdersKey</string>\n"
    "     <string>118.IBPluginDependency</string>\n"
    "     <string>119.IBPluginDependency</string>\n"
    "     <string>122.IBAttributePlaceholdersKey</string>\n"
    "     <string>122.IBPluginDependency</string>\n"
    "     <string>123.IBPluginDependency</string>\n"
    "     <string>129.IBAttributePlaceholdersKey</string>\n"
    "     <string>129.IBPluginDependency</string>\n"
    "     <string>130.IBPluginDependency</string>\n"
    "     <string>132.IBAttributePlaceholdersKey</string>\n"
    "     <string>132.IBPluginDependency</string>\n"
    "     <string>133.IBPluginDependency</string>\n"
    "     <string>137.IBAttributePlaceholdersKey</string>\n"
    "     <string>137.IBPluginDependency</string>\n"
    "     <string>138.IBPluginDependency</string>\n"
    "     <string>146.IBPluginDependency</string>\n"
    "     <string>158.IBPluginDependency</string>\n"
    "     <string>164.IBPluginDependency</string>\n"
    "     <string>165.IBPluginDependency</string>\n"
    "     <string>178.IBPluginDependency</string>\n"
    "     <string>179.IBPluginDependency</string>\n"
    "     <string>180.IBPluginDependency</string>\n"
    "     <string>181.IBPluginDependency</string>\n"
    "     <string>30.IBPluginDependency</string>\n"
    "     <string>30.IBWindowTemplateEditedContentRect</string>\n"
    "     <string>31.IBPluginDependency</string>\n"
    "     <string>32.IBPluginDependency</string>\n"
    "     <string>33.IBPluginDependency</string>\n"
    "     <string>34.IBPluginDependency</string>\n"
    "     <string>35.IBPluginDependency</string>\n"
    "     <string>36.IBPluginDependency</string>\n"
    "     <string>44.IBPluginDependency</string>\n"
    "     <string>44.IBWindowTemplateEditedContentRect</string>\n"
    "     <string>45.IBPluginDependency</string>\n"
    "     <string>46.CustomClassName</string>\n"
    "     <string>46.IBPluginDependency</string>\n"
    "     <string>47.IBPluginDependency</string>\n"
    "     <string>48.IBPluginDependency</string>\n"
    "     <string>49.IBPluginDependency</string>\n"
    "     <string>50.IBPluginDependency</string>\n"
    "     <string>51.IBPluginDependency</string>\n"
    "     <string>53.CustomClassName</string>\n"
    "     <string>53.IBAttributePlaceholdersKey</string>\n"
    "     <string>53.IBPluginDependency</string>\n"
    "     <string>61.IBPluginDependency</string>\n"
    "     <string>62.IBPluginDependency</string>\n"
    "     <string>95.IBPluginDependency</string>\n"
    "     <string>96.IBPluginDependency</string>\n"
    "     <string>97.IBPluginDependency</string>\n"
    "     <string>98.IBPluginDependency</string>\n"
    "     <string>99.IBPluginDependency</string>\n"
    "    </object>\n"
    "    <object class=\"NSArray\" key=\"dict.values\">\n"
    "     <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.WebKitIBPlugin</string>\n"
    "     <object class=\"NSMutableDictionary\">\n"
    "      <string key=\"NS.key.0\">ToolTip</string>\n"
    "      <object class=\"IBToolTipAttribute\" key=\"NS.object.0\">\n"
    "       <string key=\"name\">ToolTip</string>\n"
    "       <reference key=\"object\" ref=\"108384011\"/>\n"
    "       <string key=\"toolTip\">Make text Larger</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <object class=\"NSMutableDictionary\">\n"
    "      <string key=\"NS.key.0\">ToolTip</string>\n"
    "      <object class=\"IBToolTipAttribute\" key=\"NS.object.0\">\n"
    "       <string key=\"name\">ToolTip</string>\n"
    "       <reference key=\"object\" ref=\"940738293\"/>\n"
    "       <string key=\"toolTip\">Make text Smaller</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <object class=\"NSMutableDictionary\">\n"
    "      <string key=\"NS.key.0\">ToolTip</string>\n"
    "      <object class=\"IBToolTipAttribute\" key=\"NS.object.0\">\n"
    "       <string key=\"name\">ToolTip</string>\n"
    "       <reference key=\"object\" ref=\"162979538\"/>\n"
    "       <string key=\"toolTip\">Make text Standard Size</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <object class=\"NSMutableDictionary\">\n"
    "      <string key=\"NS.key.0\">ToolTip</string>\n"
    "      <object class=\"IBToolTipAttribute\" key=\"NS.object.0\">\n"
    "       <string key=\"name\">ToolTip</string>\n"
    "       <reference key=\"object\" ref=\"643835222\"/>\n"
    "       <string key=\"toolTip\">Make text Larger</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <object class=\"NSMutableDictionary\">\n"
    "      <string key=\"NS.key.0\">ToolTip</string>\n"
    "      <object class=\"IBToolTipAttribute\" key=\"NS.object.0\">\n"
    "       <string key=\"name\">ToolTip</string>\n"
    "       <reference key=\"object\" ref=\"516363802\"/>\n"
    "       <string key=\"toolTip\">Make text Larger</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <object class=\"NSMutableDictionary\">\n"
    "      <string key=\"NS.key.0\">ToolTip</string>\n"
    "      <object class=\"IBToolTipAttribute\" key=\"NS.object.0\">\n"
    "       <string key=\"name\">ToolTip</string>\n"
    "       <reference key=\"object\" ref=\"1018478293\"/>\n"
    "       <string key=\"toolTip\">Make text Larger</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>{{21, 960}, {467, 151}}</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>{{42, 649}, {780, 439}}</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>PMCancelButtonForPanel</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.WebKitIBPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>PMOkButtonForPanel</string>\n"
    "     <object class=\"NSMutableDictionary\">\n"
    "      <string key=\"NS.key.0\">ToolTip</string>\n"
    "      <object class=\"IBToolTipAttribute\" key=\"NS.object.0\">\n"
    "       <string key=\"name\">ToolTip</string>\n"
    "       <reference key=\"object\" ref=\"244651633\"/>\n"
    "       <string key=\"toolTip\">Download new version, quit canari, install new version, and launch new version.</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "     <string>com.apple.InterfaceBuilder.CocoaPlugin</string>\n"
    "    </object>\n"
    "   </object>\n"
    "   <object class=\"NSMutableDictionary\" key=\"unlocalizedProperties\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <reference key=\"dict.sortedKeys\" ref=\"0\"/>\n"
    "    <reference key=\"dict.values\" ref=\"0\"/>\n"
    "   </object>\n"
    "   <nil key=\"activeLocalization\"/>\n"
    "   <object class=\"NSMutableDictionary\" key=\"localizations\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <reference key=\"dict.sortedKeys\" ref=\"0\"/>\n"
    "    <reference key=\"dict.values\" ref=\"0\"/>\n"
    "   </object>\n"
    "   <nil key=\"sourceID\"/>\n"
    "   <int key=\"maxID\">187</int>\n"
    "  </object>\n"
    "  <object class=\"IBClassDescriber\" key=\"IBDocument.Classes\">\n"
    "   <object class=\"NSMutableArray\" key=\"referencedPartialClassDescriptions\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <object class=\"IBPartialClassDescription\">\n"
    "     <string key=\"className\">FirstResponder</string>\n"
    "     <object class=\"NSMutableDictionary\" key=\"actions\">\n"
    "      <string key=\"NS.key.0\">:</string>\n"
    "      <string key=\"NS.object.0\">id</string>\n"
    "     </object>\n"
    "     <object class=\"NSMutableDictionary\" key=\"actionInfosByName\">\n"
    "      <string key=\"NS.key.0\">:</string>\n"
    "      <object class=\"IBActionInfo\" key=\"NS.object.0\">\n"
    "       <string key=\"name\">:</string>\n"
    "       <string key=\"candidateClassName\">id</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"IBClassDescriptionSource\" key=\"sourceIdentifier\">\n"
    "      <string key=\"majorKey\">IBUserSource</string>\n"
    "      <string key=\"minorKey\"/>\n"
    "     </object>\n"
    "    </object>\n"
    "    <object class=\"IBPartialClassDescription\">\n"
    "     <string key=\"className\">PMApplicationUpdate</string>\n"
    "     <string key=\"superclassName\">NSObject</string>\n"
    "     <object class=\"NSMutableDictionary\" key=\"actions\">\n"
    "      <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "      <object class=\"NSArray\" key=\"dict.sortedKeys\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <string>checkForNewVersion:</string>\n"
    "       <string>performCLIToolInstallation:</string>\n"
    "       <string>performCLIToolRemove:</string>\n"
    "      </object>\n"
    "      <object class=\"NSArray\" key=\"dict.values\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <string>id</string>\n"
    "       <string>id</string>\n"
    "       <string>id</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSMutableDictionary\" key=\"actionInfosByName\">\n"
    "      <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "      <object class=\"NSArray\" key=\"dict.sortedKeys\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <string>checkForNewVersion:</string>\n"
    "       <string>performCLIToolInstallation:</string>\n"
    "       <string>performCLIToolRemove:</string>\n"
    "      </object>\n"
    "      <object class=\"NSArray\" key=\"dict.values\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <object class=\"IBActionInfo\">\n"
    "        <string key=\"name\">checkForNewVersion:</string>\n"
    "        <string key=\"candidateClassName\">id</string>\n"
    "       </object>\n"
    "       <object class=\"IBActionInfo\">\n"
    "        <string key=\"name\">performCLIToolInstallation:</string>\n"
    "        <string key=\"candidateClassName\">id</string>\n"
    "       </object>\n"
    "       <object class=\"IBActionInfo\">\n"
    "        <string key=\"name\">performCLIToolRemove:</string>\n"
    "        <string key=\"candidateClassName\">id</string>\n"
    "       </object>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSMutableDictionary\" key=\"outlets\">\n"
    "      <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "      <object class=\"NSArray\" key=\"dict.sortedKeys\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <string>mCLIToolInstallationPath</string>\n"
    "       <string>mCancelButton</string>\n"
    "       <string>mChangeLogInPreferencePaneWebView</string>\n"
    "       <string>mChangeLogWebView</string>\n"
    "       <string>mCheckNowButton</string>\n"
    "       <string>mCheckUpdateAtStartUpCheckBox</string>\n"
    "       <string>mCheckUpdateAtStartUpCheckBox2</string>\n"
    "       <string>mDownloadProgressIndicator</string>\n"
    "       <string>mDownloadSubTitle</string>\n"
    "       <string>mDownloadTitle</string>\n"
    "       <string>mNewAvailableVersionPanel</string>\n"
    "       <string>mNewVersionTextField</string>\n"
    "       <string>mPerformUpdateButton</string>\n"
    "       <string>mViewForChangeLogInPreferencePane</string>\n"
    "      </object>\n"
    "      <object class=\"NSArray\" key=\"dict.values\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <string>NSTextField</string>\n"
    "       <string>NSButton</string>\n"
    "       <string>WebView</string>\n"
    "       <string>WebView</string>\n"
    "       <string>NSButton</string>\n"
    "       <string>NSButton</string>\n"
    "       <string>NSButton</string>\n"
    "       <string>NSProgressIndicator</string>\n"
    "       <string>NSTextField</string>\n"
    "       <string>NSTextField</string>\n"
    "       <string>NSPanel</string>\n"
    "       <string>NSTextField</string>\n"
    "       <string>NSButton</string>\n"
    "       <string>NSView</string>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"NSMutableDictionary\" key=\"toOneOutletInfosByName\">\n"
    "      <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "      <object class=\"NSArray\" key=\"dict.sortedKeys\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <string>mCLIToolInstallationPath</string>\n"
    "       <string>mCancelButton</string>\n"
    "       <string>mChangeLogInPreferencePaneWebView</string>\n"
    "       <string>mChangeLogWebView</string>\n"
    "       <string>mCheckNowButton</string>\n"
    "       <string>mCheckUpdateAtStartUpCheckBox</string>\n"
    "       <string>mCheckUpdateAtStartUpCheckBox2</string>\n"
    "       <string>mDownloadProgressIndicator</string>\n"
    "       <string>mDownloadSubTitle</string>\n"
    "       <string>mDownloadTitle</string>\n"
    "       <string>mNewAvailableVersionPanel</string>\n"
    "       <string>mNewVersionTextField</string>\n"
    "       <string>mPerformUpdateButton</string>\n"
    "       <string>mViewForChangeLogInPreferencePane</string>\n"
    "      </object>\n"
    "      <object class=\"NSArray\" key=\"dict.values\">\n"
    "       <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mCLIToolInstallationPath</string>\n"
    "        <string key=\"candidateClassName\">NSTextField</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mCancelButton</string>\n"
    "        <string key=\"candidateClassName\">NSButton</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mChangeLogInPreferencePaneWebView</string>\n"
    "        <string key=\"candidateClassName\">WebView</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mChangeLogWebView</string>\n"
    "        <string key=\"candidateClassName\">WebView</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mCheckNowButton</string>\n"
    "        <string key=\"candidateClassName\">NSButton</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mCheckUpdateAtStartUpCheckBox</string>\n"
    "        <string key=\"candidateClassName\">NSButton</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mCheckUpdateAtStartUpCheckBox2</string>\n"
    "        <string key=\"candidateClassName\">NSButton</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mDownloadProgressIndicator</string>\n"
    "        <string key=\"candidateClassName\">NSProgressIndicator</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mDownloadSubTitle</string>\n"
    "        <string key=\"candidateClassName\">NSTextField</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mDownloadTitle</string>\n"
    "        <string key=\"candidateClassName\">NSTextField</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mNewAvailableVersionPanel</string>\n"
    "        <string key=\"candidateClassName\">NSPanel</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mNewVersionTextField</string>\n"
    "        <string key=\"candidateClassName\">NSTextField</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mPerformUpdateButton</string>\n"
    "        <string key=\"candidateClassName\">NSButton</string>\n"
    "       </object>\n"
    "       <object class=\"IBToOneOutletInfo\">\n"
    "        <string key=\"name\">mViewForChangeLogInPreferencePane</string>\n"
    "        <string key=\"candidateClassName\">NSView</string>\n"
    "       </object>\n"
    "      </object>\n"
    "     </object>\n"
    "     <object class=\"IBClassDescriptionSource\" key=\"sourceIdentifier\">\n"
    "      <string key=\"majorKey\">IBProjectSource</string>\n"
    "      <string key=\"minorKey\">./Classes/PMApplicationUpdate.h</string>\n"
    "     </object>\n"
    "    </object>\n"
    "    <object class=\"IBPartialClassDescription\">\n"
    "     <string key=\"className\">PMCancelButtonForPanel</string>\n"
    "     <string key=\"superclassName\">NSButton</string>\n"
    "     <object class=\"IBClassDescriptionSource\" key=\"sourceIdentifier\">\n"
    "      <string key=\"majorKey\">IBProjectSource</string>\n"
    "      <string key=\"minorKey\">./Classes/PMCancelButtonForPanel.h</string>\n"
    "     </object>\n"
    "    </object>\n"
    "    <object class=\"IBPartialClassDescription\">\n"
    "     <string key=\"className\">PMOkButtonForPanel</string>\n"
    "     <string key=\"superclassName\">NSButton</string>\n"
    "     <object class=\"IBClassDescriptionSource\" key=\"sourceIdentifier\">\n"
    "      <string key=\"majorKey\">IBProjectSource</string>\n"
    "      <string key=\"minorKey\">./Classes/PMOkButtonForPanel.h</string>\n"
    "     </object>\n"
    "    </object>\n"
    "   </object>\n"
    "  </object>\n"
    "  <int key=\"IBDocument.localizationMode\">0</int>\n"
    "  <string key=\"IBDocument.TargetRuntimeIdentifier\">IBCocoaFramework</string>\n"
    "  <object class=\"NSMutableDictionary\" key=\"IBDocument.PluginDeclaredDependencies\">\n"
    "   <string key=\"NS.key.0\">com.apple.InterfaceBuilder.CocoaPlugin.macosx</string>\n"
    "   <integer value=\"1050\" key=\"NS.object.0\"/>\n"
    "  </object>\n"
    "  <object class=\"NSMutableDictionary\" key=\"IBDocument.PluginDeclaredDependencyDefaults\">\n"
    "   <string key=\"NS.key.0\">com.apple.InterfaceBuilder.CocoaPlugin.macosx</string>\n"
    "   <real value=\"1060\" key=\"NS.object.0\"/>\n"
    "  </object>\n"
    "  <object class=\"NSMutableDictionary\" key=\"IBDocument.PluginDeclaredDevelopmentDependencies\">\n"
    "   <string key=\"NS.key.0\">com.apple.InterfaceBuilder.CocoaPlugin.InterfaceBuilder3</string>\n"
    "   <integer value=\"3000\" key=\"NS.object.0\"/>\n"
    "  </object>\n"
    "  <bool key=\"IBDocument.PluginDeclaredDependenciesTrackSystemTargetVersion\">YES</bool>\n"
    "  <int key=\"IBDocument.defaultPropertyAccessControl\">3</int>\n"
    "  <object class=\"NSMutableDictionary\" key=\"IBDocument.LastKnownImageSizes\">\n"
    "   <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "   <object class=\"NSArray\" key=\"dict.sortedKeys\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <string>NSApplicationIcon</string>\n"
    "    <string>NSGoLeftTemplate</string>\n"
    "    <string>NSGoRightTemplate</string>\n"
    "    <string>NSRefreshTemplate</string>\n"
    "    <string>NSSwitch</string>\n"
    "   </object>\n"
    "   <object class=\"NSArray\" key=\"dict.values\">\n"
    "    <bool key=\"EncodedWithXMLCoder\">YES</bool>\n"
    "    <string>{128, 128}</string>\n"
    "    <string>{9, 9}</string>\n"
    "    <string>{9, 9}</string>\n"
    "    <string>{10, 12}</string>\n"
    "    <string>{15, 15}</string>\n"
    "   </object>\n"
    "  </object>\n"
    " </data>\n"
    "</archive>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'applicationGalgas3UpdateFileWrapper download_data_header'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_data_5F_header (C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMDownloadData.h\n"
    "//  canari\n"
    "//\n"
    "//  Created by Pierre Molinaro on 20/08/06.\n"
    "//  Copyright 2006 __MyCompanyName__. All rights reserved.\n"
    "//\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "\n"
    "@interface PMDownloadData : NSObject {\n"
    "  @protected NSURL * mURL ;\n"
    "  @protected __weak id mDelegate ;\n"
    "  @protected SEL mDownloadDidEndSelector ; // - (void) downloadDidEnd: (PMDownloadData *) inDownloader\n"
    "  @protected NSError * mDownloadError ; // nil if no error\n"
    "  @protected NSMutableData * mDownloadedData ;\n"
    "  @protected id mUserInfo ;\n"
    "  @protected NSURLConnection * mDownloadConnection ;\n"
    "}\n"
    "\n"
    "- (id) initDownloadWithURLString: (NSString *) inURLString\n"
    "       delegate: (id) inDelegate\n"
    "       downloadDidEndSelector: (SEL) inDownloadDidEndSelector\n"
    "       userInfo: (id) inUserInfo ;\n"
    "\n"
    "- (NSError *) downloadError ;\n"
    "- (NSData *) downloadedData ;\n"
    "- (id) userInfo ;\n"
    "- (NSString *) urlString ;\n"
    "\n"
    "- (void) cancelDownloader ;\n"
    "@end\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'applicationGalgas3UpdateFileWrapper download_data_implementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_data_5F_implementation (C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMDownloadData.m\n"
    "//  canari\n"
    "//\n"
    "//  Created by Pierre Molinaro on 20/08/06.\n"
    "//  Copyright 2006 __MyCompanyName__. All rights reserved.\n"
    "//\n"
    "\n"
    "#import \"PMDownloadData.h\"\n"
    "\n"
    "\n"
    "@implementation PMDownloadData\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) notifyDelegate {\n"
    "  [[NSRunLoop currentRunLoop]\n"
    "    performSelector:mDownloadDidEndSelector\n"
    "    target:mDelegate\n"
    "    argument:self\n"
    "    order:0\n"
    "    modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]\n"
    "  ] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (id) initDownloadWithURLString: (NSString *) inURLString\n"
    "       delegate: (id) inDelegate\n"
    "       downloadDidEndSelector: (SEL) inDownloadDidEndSelector\n"
    "       userInfo: (id) inUserInfo {\n"
    "  self = [super init] ;\n"
    "  if (self) {\n"
    "    mDownloadDidEndSelector = inDownloadDidEndSelector ;\n"
    "    mURL = [NSURL URLWithString:inURLString] ; // mURL is nil is URL string is malformed\n"
    "    mDelegate = inDelegate ;\n"
    "    mDownloadedData = [NSMutableData new] ;\n"
    "    mUserInfo = inUserInfo ;\n"
    "  //--- Start Download\n"
    "    if (mURL == nil) {\n"
    "      mDownloadError = [NSError \n"
    "        errorWithDomain:@\"PMError\"\n"
    "        code:0\n"
    "        userInfo:[NSDictionary dictionaryWithObject:@\"malformed URL\" forKey:NSLocalizedFailureReasonErrorKey]\n"
    "      ] ;\n"
    "      [self notifyDelegate] ;\n"
    "    }else{\n"
    "      NSURLRequest * request = [NSURLRequest requestWithURL:mURL] ;\n"
    "      mDownloadConnection = [[NSURLConnection alloc] initWithRequest:request delegate:self] ;\n"
    "    }\n"
    "  }\n"
    "  return self ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "//- (void)URL:(NSURL *)sender resourceDataDidBecomeAvailable:(NSData *) inNewBytes {\n"
    "- (void)connection: (NSURLConnection *) connection didReceiveData:(NSData *) inNewBytes {\n"
    "  // NSLog (@\"resourceDataDidBecomeAvailable %u bytes\", [inNewBytes length]) ;\n"
    "  [mDownloadedData appendData:inNewBytes] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void)connection:(NSURLConnection *)connection didFailWithError:(NSError *) inError {\n"
    "//- (void)URL:(NSURL *)sender resourceDidFailLoadingWithReason:(NSString *) inReason {\n"
    "  // NSLog (@\"resourceDidFailLoadingWithReason '%@'\", inReason) ;\n"
    "  mDownloadError = inError ;\n"
    "  [self notifyDelegate] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) cancelDownloader {\n"
    "  [mDownloadConnection cancel] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void)connectionDidFinishLoading:(NSURLConnection *)connection {\n"
    "//- (void) URLResourceDidFinishLoading:(NSURL *)sender {\n"
    "  // NSLog (@\"URLResourceDidFinishLoading\") ;\n"
    "  [self notifyDelegate] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSError *) downloadError {\n"
    "  return mDownloadError ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSData *) downloadedData {\n"
    "  return mDownloadedData ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (id) userInfo {\n"
    "  return mUserInfo ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) urlString {\n"
    "  return [mURL absoluteString] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@end\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'applicationGalgas3UpdateFileWrapper download_file_header'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_file_5F_header (C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMDownloadFile.h\n"
    "//  canari\n"
    "//\n"
    "//  Created by Pierre Molinaro on 19/08/06.\n"
    "//  Copyright 2006 __MyCompanyName__. All rights reserved.\n"
    "//\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "#import \"PMSnowLeopardLionCompatibility.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@class PMDownloadFile ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@protocol PMDownloadDidEndProtocol\n"
    "  - (void) downloadDidEnd: (PMDownloadFile *) inDownloader ;\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@interface PMDownloadFile : NSObject <NSURLDownloadDelegate> {\n"
    "  @protected NSURL * mURL ;\n"
    "  @protected __weak id <PMDownloadDidEndProtocol> mDelegate ;\n"
    "  @protected NSURLDownload  * mDownload ;\n"
    "  @protected NSButton * mCancelButton ;\n"
    "  @protected NSTextField * mSubTitle ;\n"
    "  @protected NSProgressIndicator * mProgressIndicator ;\n"
    "  @protected NSError * mDownloadError ; // nil if no error\n"
    "  @protected long long mExpectedContentLength ;\n"
    "  @protected long long mReceivedLength ;\n"
    "  @protected NSString * mDestinationFileName ;\n"
    "  @protected id mUserInfo ;\n"
    "  @protected BOOL mDownloadHasBeenCancelled ;\n"
    "}\n"
    "\n"
    "- (id) initWithURLString: (NSString *) inURLString\n"
    "       destinationFileName: (NSString *) inDestinationFileName\n"
    "       downloadDelegate: (id <PMDownloadDidEndProtocol>) inDelegate\n"
    "       cancelButton: (NSButton *) inCancelButton\n"
    "       subtitle: (NSTextField *) inSubtitle\n"
    "       progressIndicator: (NSProgressIndicator *) inProgressIndicator\n"
    "       userInfo: (id) inUserInfo ;\n"
    "\n"
    "- (id) initWithURLString: (NSString *) inURLString\n"
    "       postDictionary: (NSDictionary *) inPOSTDictionary\n"
    "       destinationFileName: (NSString *) inDestinationFileName\n"
    "       downloadDelegate: (id <PMDownloadDidEndProtocol>) inDelegate\n"
    "       cancelButton: (NSButton *) inCancelButton\n"
    "       subtitle: (NSTextField *) inSubtitle\n"
    "       progressIndicator: (NSProgressIndicator *) inProgressIndicator\n"
    "       userInfo: (id) inUserInfo ;\n"
    "\n"
    "- (NSError *) downloadError ;\n"
    "\n"
    "- (NSString *) destinationFileName ;\n"
    "\n"
    "- (id) userInfo ;\n"
    "\n"
    "- (BOOL) downloadHasBeenCancelled ;\n"
    "\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'applicationGalgas3UpdateFileWrapper download_file_implementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_file_5F_implementation (C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\n"
    "//  PMDownloadFile.m\n"
    "//  canari\n"
    "//\n"
    "//  Created by Pierre Molinaro on 19/08/06.\n"
    "//  Copyright 2006 __MyCompanyName__. All rights reserved.\n"
    "//\n"
    "\n"
    "#import \"PMDownloadFile.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@implementation PMDownloadFile\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (id) initWithURLString: (NSString *) inURLString\n"
    "       postDictionary: (NSDictionary *) inPOSTDictionary\n"
    "       destinationFileName: (NSString *) inDestinationFileName\n"
    "       downloadDelegate: (id <PMDownloadDidEndProtocol>) inDelegate\n"
    "       cancelButton: (NSButton *) inCancelButton\n"
    "       subtitle: (NSTextField *) inSubtitle\n"
    "       progressIndicator: (NSProgressIndicator *) inProgressIndicator\n"
    "       userInfo: (id) inUserInfo {\n"
    "  self = [super init] ;\n"
    "  if (self) {\n"
    "    mURL = [NSURL URLWithString:inURLString] ;\n"
    "    mDelegate = inDelegate ;\n"
    "    mDestinationFileName = inDestinationFileName ;\n"
    "    mUserInfo = inUserInfo ;\n"
    "  //--- Subtitle\n"
    "    mSubTitle = inSubtitle ;\n"
    "    [mSubTitle setStringValue:@\"\"] ;\n"
    "  //--- Progress Indicator\n"
    "    mProgressIndicator = inProgressIndicator ;\n"
    "    [mProgressIndicator setIndeterminate:YES] ;\n"
    "  //--- Cancel button\n"
    "    mCancelButton = inCancelButton ;\n"
    "    [mCancelButton setTarget:self] ;\n"
    "    [mCancelButton setAction:@selector (cancelAction:)] ;\n"
    "    [mCancelButton setEnabled:YES] ;\n"
    "  //--- Create the request\n"
    "    NSMutableURLRequest * theRequest = [NSMutableURLRequest\n"
    "      requestWithURL:mURL\n"
    "      cachePolicy:NSURLRequestReloadIgnoringCacheData\n"
    "      timeoutInterval:60.0\n"
    "    ] ;\n"
    "  //--- set method POST\n"
    "    [theRequest setHTTPMethod:@\"POST\"] ;\n"
    "  //--- set HTTP body\n"
    "    NSMutableString * body = [NSMutableString new] ;\n"
    "    NSEnumerator * enumerator = [inPOSTDictionary keyEnumerator] ;\n"
    "    NSString * key ;\n"
    "    while ((key = enumerator.nextObject)) {\n"
    "      NSString * parameter = [[inPOSTDictionary objectForKey:key] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding] ;\n"
    "      if ([body length] > 0) {\n"
    "        [body appendString:@\"&\"] ;\n"
    "      }\n"
    "      [body appendFormat:@\"%@=%@\", key, parameter] ;\n"
    "    }\n"
    "    //NSLog (@\"HTTP body: '%@'\", body) ;\n"
    "    [theRequest setHTTPBody:[body dataUsingEncoding:NSASCIIStringEncoding]] ;\n"
    "  //--- Create the connection with the request, and start loading the data\n"
    "    mDownload = [[NSURLDownload alloc] initWithRequest:theRequest delegate:self] ;\n"
    "  //--- Set destination file name\n"
    "    [mDownload setDestination:inDestinationFileName allowOverwrite:YES];\n"
    "  }\n"
    "  return self ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (id) initWithURLString: (NSString *) inURLString\n"
    "       destinationFileName: (NSString *) inDestinationFileName\n"
    "       downloadDelegate: (id <PMDownloadDidEndProtocol>) inDelegate\n"
    "       cancelButton: (NSButton *) inCancelButton\n"
    "       subtitle: (NSTextField *) inSubtitle\n"
    "       progressIndicator: (NSProgressIndicator *) inProgressIndicator\n"
    "       userInfo: (id) inUserInfo {\n"
    "  self = [super init] ;\n"
    "  if (self) {\n"
    "    mURL = [NSURL URLWithString:inURLString] ;\n"
    "    mDelegate = inDelegate ;\n"
    "    mDestinationFileName = inDestinationFileName ;\n"
    "    mUserInfo = inUserInfo ;\n"
    "  //--- Subtitle\n"
    "    mSubTitle = inSubtitle ;\n"
    "    [mSubTitle setStringValue:@\"\"] ;\n"
    "  //--- Progress Indicator\n"
    "    mProgressIndicator = inProgressIndicator ;\n"
    "    [mProgressIndicator setIndeterminate:YES] ;\n"
    "  //--- Cancel button\n"
    "    mCancelButton = inCancelButton ;\n"
    "    [mCancelButton setTarget:self] ;\n"
    "    [mCancelButton setAction:@selector (cancelAction:)] ;\n"
    "    [mCancelButton setEnabled:YES] ;\n"
    "  //--- Create the request\n"
    "    NSURLRequest * theRequest = [NSURLRequest\n"
    "      requestWithURL:mURL\n"
    "      cachePolicy:NSURLRequestReloadIgnoringCacheData\n"
    "      timeoutInterval:60.0\n"
    "    ] ;\n"
    "  //--- Create the connection with the request, and start loading the data\n"
    "    mDownload = [[NSURLDownload alloc] initWithRequest:theRequest delegate:self] ;\n"
    "  //--- Set destination file name\n"
    "    [mDownload setDestination:inDestinationFileName allowOverwrite:YES];\n"
    "  }\n"
    "  return self ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) download:(NSURLDownload *)download didReceiveResponse:(NSURLResponse *)response {\n"
    "  // NSLog (@\"%s\", __PRETTY_FUNCTION__) ;\n"
    "  mReceivedLength = 0 ;\n"
    "  mExpectedContentLength = [response expectedContentLength] ;\n"
    "//--- Update progress Indicator\n"
    "  [mProgressIndicator setMinValue:0.0] ;\n"
    "  [mProgressIndicator setMaxValue: (double) mExpectedContentLength] ;\n"
    "  [mProgressIndicator setDoubleValue:0.0] ;\n"
    "  [mProgressIndicator setIndeterminate:NO] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void)download: (NSURLDownload *) inDownload didReceiveDataOfLength:(NSUInteger) inLength {\n"
    "  // NSLog (@\"%s: received %lu bytes\", __PRETTY_FUNCTION__, inLength) ;\n"
    "  mReceivedLength += inLength ;\n"
    "//--- Update Progress Indicator\n"
    "  [mProgressIndicator setDoubleValue: (double) mReceivedLength] ;\n"
    "//--- Update subtitle\n"
    "  NSString * subtitle = [NSString\n"
    "    stringWithFormat:@\"%lld KB of %lld KB\",\n"
    "    (mReceivedLength >> 10),\n"
    "    (mExpectedContentLength >> 10)\n"
    "  ] ;\n"
    "  [mSubTitle setStringValue:subtitle] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) downloadingProcessDidEnd {\n"
    "  // NSLog (@\"%s\", __PRETTY_FUNCTION__) ;\n"
    "  [mCancelButton setTarget:nil] ;\n"
    "  [mCancelButton setAction:NULL] ;\n"
    "  [mCancelButton setEnabled:NO] ;\n"
    "  [mDelegate downloadDidEnd:self] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) cancelAction: (id) inSender {\n"
    "  [mDownload cancel] ;\n"
    "  mDownloadHasBeenCancelled = YES ;\n"
    "  [self downloadingProcessDidEnd] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) download:(NSURLDownload *)download didFailWithError:(NSError *) inError {\n"
    "  // NSLog (@\"Download failed\") ;\n"
    "  mDownloadError = inError ;\n"
    "  [self downloadingProcessDidEnd] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) downloadDidFinish:(NSURLDownload *)download {\n"
    "  // NSLog (@\"Download completed\") ;\n"
    "  [self downloadingProcessDidEnd] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSError *) downloadError {\n"
    "  return mDownloadError ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) destinationFileName {\n"
    "  return mDestinationFileName ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (id) userInfo {\n"
    "  return mUserInfo ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (BOOL) downloadHasBeenCancelled {\n"
    "  return mDownloadHasBeenCancelled ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@end\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'applicationGalgas3UpdateFileWrapper compatibility_header'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_compatibility_5F_header (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "// #import \"PMSnowLeopardLionCompatibility.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#ifndef  MAC_OS_X_VERSION_10_7\n"
    "  @protocol NSURLDownloadDelegate <NSObject>\n"
    "  @optional\n"
    "    - (void)downloadDidBegin:(NSURLDownload *)download;\n"
    "    - (NSURLRequest *)download:(NSURLDownload *)download willSendRequest:(NSURLRequest *)request redirectResponse:(NSURLResponse *)redirectResponse;\n"
    "    - (BOOL)download:(NSURLDownload *)connection canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)protectionSpace;\n"
    "    - (void)download:(NSURLDownload *)download didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge;\n"
    "    - (void)download:(NSURLDownload *)download didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge;\n"
    "    - (BOOL)downloadShouldUseCredentialStorage:(NSURLDownload *)download;\n"
    "    - (void)download:(NSURLDownload *)download didReceiveResponse:(NSURLResponse *)response;\n"
    "    - (void)download:(NSURLDownload *)download willResumeWithResponse:(NSURLResponse *)response fromByte:(long long)startingByte;\n"
    "    - (void)download:(NSURLDownload *)download didReceiveDataOfLength:(NSUInteger)length;\n"
    "    - (BOOL)download:(NSURLDownload *)download shouldDecodeSourceDataOfMIMEType:(NSString *)encodingType;\n"
    "    - (void)download:(NSURLDownload *)download decideDestinationWithSuggestedFilename:(NSString *)filename;\n"
    "    - (void)download:(NSURLDownload *)download didCreateDestination:(NSString *)path;\n"
    "    - (void)downloadDidFinish:(NSURLDownload *)download;\n"
    "    - (void)download:(NSURLDownload *)download didFailWithError:(NSError *)error;\n"
    "  @end\n"
    "#endif\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Filewrapper 'targetGalgas3GenerationFileWrapper'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--- File 'makefile-msys32-on-windows/build.bat'

const char * gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper = "PATH=C:\\msys\\1.0\\bin;C:\\MinGW\\bin;%PATH%\n"
  "sh -c \"make --warn-undefined-variables\"\n"
  "pause\n" ;

const cRegularFileWrapper gWrapperFile_0_targetGalgas_33_GenerationFileWrapper (
  "build.bat",
  "bat",
  true, // Text file
  87, // Text length
  gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper
) ;

//--- File 'makefile-msys32-on-windows/clean.bat'

const char * gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper = "PATH=C:\\msys\\1.0\\bin;C:\\MinGW\\bin;%PATH%\n"
  "sh -c \"make clean --warn-undefined-variables\"\n"
  "pause\n" ;

const cRegularFileWrapper gWrapperFile_1_targetGalgas_33_GenerationFileWrapper (
  "clean.bat",
  "bat",
  true, // Text file
  93, // Text length
  gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper
) ;

//--- File 'makefile-msys32-on-windows/install.bat'

const char * gWrapperFileContent_2_targetGalgas_33_GenerationFileWrapper = "PATH=C:\\msys\\1.0\\bin;C:\\MinGW\\bin;%PATH%\n"
  "sh -c \"make install --warn-undefined-variables\"\n"
  "pause\n" ;

const cRegularFileWrapper gWrapperFile_2_targetGalgas_33_GenerationFileWrapper (
  "install.bat",
  "bat",
  true, // Text file
  95, // Text length
  gWrapperFileContent_2_targetGalgas_33_GenerationFileWrapper
) ;

//--- All files of 'makefile-msys32-on-windows' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_2 [4] = {
  & gWrapperFile_0_targetGalgas_33_GenerationFileWrapper,
  & gWrapperFile_1_targetGalgas_33_GenerationFileWrapper,
  & gWrapperFile_2_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- All sub-directories of 'makefile-msys32-on-windows' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_2 [1] = {
  NULL
} ;

//--- Directory 'makefile-msys32-on-windows'

const cDirectoryWrapper gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper (
  "makefile-msys32-on-windows",
  3,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_2,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_2
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

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-win32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4 [1] = {
  NULL
} ;

//--- Directory 'makefile-win32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper (
  "makefile-win32-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_4,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4
) ;

//--- All files of 'makefile-x86linux32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-x86linux32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5 [1] = {
  NULL
} ;

//--- Directory 'makefile-x86linux32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper (
  "makefile-x86linux32-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_5,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5
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

const char * gWrapperFileContent_3_targetGalgas_33_GenerationFileWrapper = "{\\rtf1\\ansi\\ansicpg1252\\cocoartf1138\\cocoasubrtf510\n"
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

const cRegularFileWrapper gWrapperFile_3_targetGalgas_33_GenerationFileWrapper (
  "adding-icons-to-your-application.rtf",
  "rtf",
  true, // Text file
  1274, // Text length
  gWrapperFileContent_3_targetGalgas_33_GenerationFileWrapper
) ;

//--- File 'English.lproj/Credits.rtf'

const char * gWrapperFileContent_4_targetGalgas_33_GenerationFileWrapper = "{\\rtf1\\mac\\ansicpg10000\\cocoartf824\\cocoasubrtf380\n"
  "{\\fonttbl\\f0\\fswiss\\fcharset77 Helvetica-Bold;}\n"
  "{\\colortbl;\\red255\\green255\\blue255;}\n"
  "\\vieww9000\\viewh8400\\viewkind0\n"
  "\\pard\\tx560\\tx1120\\tx1680\\tx2240\\tx2800\\tx3360\\tx3920\\tx4480\\tx5040\\tx5600\\tx6160\\tx6720\\ql\\qnatural\n"
  "\n"
  "\\f0\\b\\fs24 \\cf0 GALGAS Cocoa Project\\\n"
  "}\n" ;

const cRegularFileWrapper gWrapperFile_4_targetGalgas_33_GenerationFileWrapper (
  "Credits.rtf",
  "rtf",
  true, // Text file
  310, // Text length
  gWrapperFileContent_4_targetGalgas_33_GenerationFileWrapper
) ;

//--- All files of 'English.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_8 [2] = {
  & gWrapperFile_4_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- All sub-directories of 'English.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_8 [1] = {
  NULL
} ;

//--- Directory 'English.lproj'

const cDirectoryWrapper gWrapperDirectory_8_targetGalgas_33_GenerationFileWrapper (
  "English.lproj",
  1,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_8,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_8
) ;

//--- All files of 'project_xcode' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_7 [2] = {
  & gWrapperFile_3_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- All sub-directories of 'project_xcode' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7 [2] = {
  & gWrapperDirectory_8_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- Directory 'project_xcode'

const cDirectoryWrapper gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper (
  "project_xcode",
  1,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_7,
  1,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0 [8] = {
  & gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_targetGalgas_33_GenerationFileWrapper (
  "",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0,
  7,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'targetGalgas3GenerationFileWrapper build_macosx'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (C_Compiler * /* inCompiler */,
                                                                                         const GALGAS_string & in_PROJECT_5F_NAME
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "buildForMacOSX (dictionary, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_macosx'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_macosx'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_macosx'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'targetGalgas3GenerationFileWrapper install_macosx'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_macosx (C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'targetGalgas3GenerationFileWrapper clean_macosx'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (C_Compiler * /* inCompiler */,
                                                                                         const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'targetGalgas3GenerationFileWrapper clean_unix'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'targetGalgas3GenerationFileWrapper build_unix'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "buildForUnix (dictionary, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_unix'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_unix'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_unix'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'targetGalgas3GenerationFileWrapper install_unix'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux32_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux32_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "buildForLinux32OnMacOSX (dictionary, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux32_on_mac'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux32_on_mac'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux32_on_mac'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux64_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux64_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                                      const GALGAS_string & in_PROJECT_5F_NAME
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "buildForLinux64OnMacOSX (dictionary, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux64_on_mac'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux64_on_mac'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux64_on_mac'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper clean_win32_on_mac'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                           const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper build_win32_on_mac'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */,
                                                                                                           const GALGAS_string & in_PROJECT_5F_NAME
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, json\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "buildForWin32OnMacOSX (dictionary, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\", goal, maxParallelJobs, maxParallelJobs == 1)\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_win32_on_mac'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_win32_on_mac'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_win32_on_mac'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "import sys, os, subprocess, atexit\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup():\n"
    "  if childProcess.poll () == None :\n"
    "    childProcess.kill ()\n"
    "\n"
    "#----------------------------------------------------------------------------------------------------------------------*\n"
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
    "#----------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper codeblocks_project'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    "     <Add option=\"-std=c++98\" />\n"
    "     <Add option=\"-Wshadow\" />\n"
    "     <Add option=\"-Wall\" />\n"
    "     <Add option=\"-W\" />\n"
    "     <Add option=\"-DDO_NOT_GENERATE_CHECKINGS\" />\n" ;
  const enumGalgasBool test_1 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << GALGAS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />").stringValue () ;
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
    "     <Add option=\"-std=c++98\" />\n"
    "     <Add option=\"-Wshadow\" />\n"
    "     <Add option=\"-Wall\" />\n"
    "     <Add option=\"-W\" />\n" ;
  const enumGalgasBool test_3 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << GALGAS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />").stringValue () ;
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
  GALGAS_uint index_2368_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_2368 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY_5F_SET, kEnumeration_up) ;
    while (enumerator_2368.hasCurrentObject ()) {
      result << "  <Add directory=\"" ;
      result << enumerator_2368.current_key (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2368_.increment () ;
      enumerator_2368.gotoNextObject () ;
    }
  }
  result << "  </Compiler>\n"
    "  <Linker>\n" ;
  const enumGalgasBool test_4 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << GALGAS_string ("   <Add library=\"Ws2_32\" />\n"
      "   <Add library=\"Comdlg32\" />").stringValue () ;
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
  GALGAS_uint index_2886_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2886 (in_TOOL_5F_CPP_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2886.hasCurrentObject ()) {
      result << "  <Unit filename=\"../build/output/" ;
      result << enumerator_2886.current_mValue (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2886_.increment () ;
      enumerator_2886.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2975_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2975 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2975.hasCurrentObject ()) {
      result << "  <Unit filename=\"../" ;
      result << enumerator_2975.current_mValue (HERE).stringValue () ;
      result << "\" />\n" ;
      index_2975_.increment () ;
      enumerator_2975.gotoNextObject () ;
    }
  }
  result << "\n"
    "  <Unit filename=\"" ;
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
  result << "/gmp/root-mp_minv_tab.c\" />\" />\" />\n"
    "  <Unit filename=\"" ;
  result << in_LIBPM_5F_PATH.stringValue () ;
  result << "/gmp/root-tal-notreent.c\"\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                                   const GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                                                   const GALGAS_string & in_VERSION_5F_STRING,
                                                                                                   const GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
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
    " <string>10.6</string>\n"
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
  GALGAS_uint index_1073_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1073 (in_HANDLED_5F_EXTENSION_5F_SET, kEnumeration_up) ;
    while (enumerator_1073.hasCurrentObject ()) {
      result << "  <dict>\n"
        "   <key>CFBundleTypeIconFile</key>\n"
        "   <string>" ;
      result << enumerator_1073.current_key (HERE).stringValue () ;
      result << "_icns</string>\n"
        "   <key>CFBundleTypeExtensions</key>\n"
        "   <array>\n"
        "    <string>" ;
      result << enumerator_1073.current_key (HERE).stringValue () ;
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
      index_1073_.increment () ;
      enumerator_1073.gotoNextObject () ;
    }
  }
  result << "\n"
    " </array>\n"
    "</dict>\n"
    "</plist>\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_build_xcode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#!/bin/sh\n"
    "cd `dirname $0` && xcodebuild -alltargets -configuration Default\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist_strings'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (C_Compiler * /* inCompiler */,
                                                                                                              const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "/* Localized versions of Info.plist keys */\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'targetGalgas3GenerationFileWrapper json_file_list'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_uint index_209_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_209 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET, kEnumeration_up) ;
    while (enumerator_209.hasCurrentObject ()) {
      result << ",  \"" ;
      result << enumerator_209.current_key (HERE).stringValue () ;
      result << "\"" ;
      index_209_.increment () ;
      enumerator_209.gotoNextObject () ;
    }
  }
  result << "],\n"
    "    \"SOURCES\"  :  [\n"
    "        \"all-galgas.cpp\",\n"
    "        \"all-libpm.cpp\",\n" ;
  GALGAS_uint index_349_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_349 (in_MAKEFILE_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_349.hasCurrentObject ()) {
      result << "        \"" ;
      result << enumerator_349.current_mValue (HERE).stringValue () ;
      result << "\",\n" ;
      index_349_.increment () ;
      enumerator_349.gotoNextObject () ;
    }
  }
  GALGAS_uint index_427_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_427 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST, kEnumeration_up) ;
    while (enumerator_427.hasCurrentObject ()) {
      result << "        \"" ;
      result << enumerator_427.current_mValue (HERE).stringValue () ;
      result << "\",\n" ;
      index_427_.increment () ;
      enumerator_427.gotoNextObject () ;
    }
  }
  result << "\n"
    "        \"32-mp_bases.c\",\n"
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
  GALGAS_uint index_3545_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3545 (in_TOOL_5F_LINK_5F_LIST, kEnumeration_up) ;
    while (enumerator_3545.hasCurrentObject ()) {
      result << "\n"
        "        \"" ;
      result << enumerator_3545.current_mValue (HERE).stringValue () ;
      result << "\"" ;
      if (enumerator_3545.hasNextObject ()) {
        result << "," ;
      }
      index_3545_.increment () ;
      enumerator_3545.gotoNextObject () ;
    }
  }
  result << "\n"
    "    ]\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'targetGalgas3GenerationFileWrapper project_header'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (C_Compiler * /* inCompiler */,
                                                                                           const GALGAS_string & in_VERSION_5F_STRING
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------*\n"
    "//                                                               *\n"
    "//     Project common header file                                *\n"
    "//                                                               *\n"
    "//---------------------------------------------------------------*\n"
    "\n"
    "#ifndef PROJECT_COMMON_HEADER_DEFINED\n"
    "#define PROJECT_COMMON_HEADER_DEFINED\n"
    "\n"
    "//---------------------------------------------------------------*\n"
    "\n"
    "#define PROJECT_VERSION_STRING \"" ;
  result << in_VERSION_5F_STRING.stringValue () ;
  result << "\"\n"
    "\n"
    "//---------------------------------------------------------------*\n"
    "\n"
    "#endif\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generateGalgasCodeBlocksWindowsTarget'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksWindowsTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                    const GALGAS_string constinArgument_inProjectName,
                                                    const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                    const GALGAS_string constinArgument_inLIBPMpath,
                                                    const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                    const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                    const GALGAS_bool constinArgument_inVerboseOption,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_7759 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 147)) ;
  var_dir_7759.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 148)) ;
  GALGAS_string var_s_7842 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (true), GALGAS_string ("Windows"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 149))) ;
  GALGAS_bool joker_8197 ; // Joker input parameter
  var_s_7842.method_writeToFileWhenDifferentContents (var_dir_7759.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 159)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 159)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 159)), joker_8197, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 159)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateGalgasCodeBlocksMacTarget'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksMacTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                const GALGAS_string constinArgument_inProjectName,
                                                const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                const GALGAS_string constinArgument_inLIBPMpath,
                                                const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                const GALGAS_bool constinArgument_inVerboseOption,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_8644 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-mac"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 173)) ;
  var_dir_8644.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 174)) ;
  GALGAS_string var_s_8723 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Mac"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 175))) ;
  GALGAS_bool joker_9075 ; // Joker input parameter
  var_s_8723.method_writeToFileWhenDifferentContents (var_dir_8644.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 185)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 185)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 185)), joker_9075, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 185)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'generateGalgasCodeBlocksLinuxI686Target'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target (const GALGAS_string constinArgument_inProjectDirectory,
                                                               const GALGAS_string constinArgument_inProjectName,
                                                               const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                               const GALGAS_string constinArgument_inLIBPMpath,
                                                               const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                               const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                               const GALGAS_bool constinArgument_inVerboseOption,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_9529 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 199)) ;
  var_dir_9529.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 200)) ;
  GALGAS_string var_s_9612 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 201))) ;
  GALGAS_bool joker_9965 ; // Joker input parameter
  var_s_9612.method_writeToFileWhenDifferentContents (var_dir_9529.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 211)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 211)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 211)), joker_9965, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 211)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'generateGalgasCodeBlocksLinuxX86_64Target'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target (const GALGAS_string constinArgument_inProjectDirectory,
                                                                       const GALGAS_string constinArgument_inProjectName,
                                                                       const GALGAS_stringlist constinArgument_inToolCppFileList,
                                                                       const GALGAS_string constinArgument_inLIBPMpath,
                                                                       const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                       const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                       const GALGAS_bool constinArgument_inVerboseOption,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_10420 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 225)) ;
  var_dir_10420.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 226)) ;
  GALGAS_string var_s_10503 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, GALGAS_bool (false), GALGAS_string ("Unix"), constinArgument_inVerboseOption COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 227))) ;
  GALGAS_bool joker_10856 ; // Joker input parameter
  var_s_10503.method_writeToFileWhenDifferentContents (var_dir_10420.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 237)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 237)).add_operation (GALGAS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 237)), joker_10856, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 237)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'generateGalgas3MinGWOnMacOSXTarget'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_MinGWOnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                    const GALGAS_string constinArgument_inProjectName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_11114 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 245)) ;
  var_dir_11114.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 246)) ;
  GALGAS_bool joker_11336 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 247))).method_writeToExecutableFileWhenDifferentContents (var_dir_11114.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 247)), joker_11336, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 247)) ;
  GALGAS_bool joker_11488 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 248))).method_writeToExecutableFileWhenDifferentContents (var_dir_11114.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 248)), joker_11488, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 248)) ;
  GALGAS_bool joker_11636 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 249))).method_writeToExecutableFileWhenDifferentContents (var_dir_11114.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 249)), joker_11636, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 249)) ;
  GALGAS_bool joker_11788 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 250))).method_writeToExecutableFileWhenDifferentContents (var_dir_11114.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 250)), joker_11788, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 250)) ;
  GALGAS_bool joker_11947 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 251))).method_writeToExecutableFileWhenDifferentContents (var_dir_11114.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 252)), joker_11947, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 251)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_11114.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 255)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'generateGalgas3MakefileMacOSXTarget'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_MakefileMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                     const GALGAS_string constinArgument_inProjectName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_12259 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 263)) ;
  var_dir_12259.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 264)) ;
  GALGAS_bool joker_12466 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 265))).method_writeToExecutableFileWhenDifferentContents (var_dir_12259.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 265)), joker_12466, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 265)) ;
  GALGAS_bool joker_12612 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 266))).method_writeToExecutableFileWhenDifferentContents (var_dir_12259.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 266)), joker_12612, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 266)) ;
  GALGAS_bool joker_12754 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 267))).method_writeToExecutableFileWhenDifferentContents (var_dir_12259.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 267)), joker_12754, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 267)) ;
  GALGAS_bool joker_12900 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 268))).method_writeToExecutableFileWhenDifferentContents (var_dir_12259.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 268)), joker_12900, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 268)) ;
  GALGAS_bool joker_13034 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 269))).method_writeToExecutableFileWhenDifferentContents (var_dir_12259.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 269)), joker_13034, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 269)) ;
  GALGAS_bool joker_13179 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 270))).method_writeToExecutableFileWhenDifferentContents (var_dir_12259.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 270)), joker_13179, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 270)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_12259.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 271)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateGalgas3MakefileUnixTarget'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_MakefileUnixTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                   const GALGAS_string constinArgument_inProjectName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_13486 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 279)) ;
  var_dir_13486.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 280)) ;
  GALGAS_bool joker_13689 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 281))).method_writeToExecutableFileWhenDifferentContents (var_dir_13486.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 281)), joker_13689, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 281)) ;
  GALGAS_bool joker_13833 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 282))).method_writeToExecutableFileWhenDifferentContents (var_dir_13486.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 282)), joker_13833, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 282)) ;
  GALGAS_bool joker_13973 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 283))).method_writeToExecutableFileWhenDifferentContents (var_dir_13486.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 283)), joker_13973, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 283)) ;
  GALGAS_bool joker_14117 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 284))).method_writeToExecutableFileWhenDifferentContents (var_dir_13486.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 284)), joker_14117, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 284)) ;
  GALGAS_bool joker_14249 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 285))).method_writeToExecutableFileWhenDifferentContents (var_dir_13486.add_operation (GALGAS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 285)), joker_14249, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 285)) ;
  GALGAS_bool joker_14392 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 286))).method_writeToExecutableFileWhenDifferentContents (var_dir_13486.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 286)), joker_14392, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 286)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_13486.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 287)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generateGalgas3Linux32OnMacOSXTarget'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                            const GALGAS_string constinArgument_inProjectName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_14702 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 295)) ;
  var_dir_14702.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 296)) ;
  GALGAS_bool joker_14934 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 297))).method_writeToExecutableFileWhenDifferentContents (var_dir_14702.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 297)), joker_14934, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 297)) ;
  GALGAS_bool joker_15091 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 298))).method_writeToExecutableFileWhenDifferentContents (var_dir_14702.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 298)), joker_15091, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 298)) ;
  GALGAS_bool joker_15244 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 299))).method_writeToExecutableFileWhenDifferentContents (var_dir_14702.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 299)), joker_15244, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 299)) ;
  GALGAS_bool joker_15401 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 300))).method_writeToExecutableFileWhenDifferentContents (var_dir_14702.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 300)), joker_15401, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 300)) ;
  GALGAS_bool joker_15557 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 301))).method_writeToExecutableFileWhenDifferentContents (var_dir_14702.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 301)), joker_15557, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 301)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_14702.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 302)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generateGalgas3Linux64OnMacOSXTarget'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget (const GALGAS_string constinArgument_inProjectDirectory,
                                                            const GALGAS_string constinArgument_inProjectName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_dir_15867 = constinArgument_inProjectDirectory.add_operation (GALGAS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 310)) ;
  var_dir_15867.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 311)) ;
  GALGAS_bool joker_16099 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 312))).method_writeToExecutableFileWhenDifferentContents (var_dir_15867.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 312)), joker_16099, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 312)) ;
  GALGAS_bool joker_16256 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 313))).method_writeToExecutableFileWhenDifferentContents (var_dir_15867.add_operation (GALGAS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 313)), joker_16256, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 313)) ;
  GALGAS_bool joker_16409 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 314))).method_writeToExecutableFileWhenDifferentContents (var_dir_15867.add_operation (GALGAS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 314)), joker_16409, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 314)) ;
  GALGAS_bool joker_16566 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 315))).method_writeToExecutableFileWhenDifferentContents (var_dir_15867.add_operation (GALGAS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 315)), joker_16566, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 315)) ;
  GALGAS_bool joker_16722 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 316))).method_writeToExecutableFileWhenDifferentContents (var_dir_15867.add_operation (GALGAS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 316)), joker_16722, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 316)) ;
  {
  GALGAS_string::class_method_deleteFileIfExists (var_dir_15867.add_operation (GALGAS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 317)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'updateGalgas3Targets'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectDirectory_17670 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 341)) ;
  GALGAS_bool joker_17989 ; // Joker input parameter
  GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 343))).method_writeToFileWhenDifferentContents (constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 344)).add_operation (GALGAS_string ("/build/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 344)), joker_17989, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 343)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 347)) ;
  GALGAS_stringlist var_toolCppFileList_18144 = constinArgument_inToolCppFileList ;
  const enumGalgasBool test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_toolCppFileList_18144.addAssign_operation (GALGAS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 351)) ;
  }else if (kBoolFalse == test_0) {
    var_toolCppFileList_18144.addAssign_operation (GALGAS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 353)) ;
  }
  GALGAS_string var_libpmPath_18409 ;
  const cMapElement_projectQualifiedFeatureMap * objectArray_18430 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("libpmAtPath")) ;
  if (NULL != objectArray_18430) {
      macroValidSharedObject (objectArray_18430, cMapElement_projectQualifiedFeatureMap) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, objectArray_18430->mAttribute_mFeatureValue.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (objectArray_18430->mAttribute_mFeatureValue.getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 359)), GALGAS_string ("the libpm path should not be empty")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 359)) ;
      var_libpmPath_18409.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_libpmPath_18409 = objectArray_18430->mAttribute_mFeatureValue.mAttribute_string ;
    }
  }else{
    {
    routine_updateLIBPMatPath (constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 364)).add_operation (GALGAS_string ("/build/libpm"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 364)) ;
    }
    var_libpmPath_18409 = GALGAS_string ("../build/libpm") ;
  }
  GALGAS_stringset var_guiSourceSet_5F_app_18905 = GALGAS_stringset::constructor_setWithStringList (constinArgument_inAppProductFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 370)) ;
  GALGAS_stringset var_sourceFileSet_18982 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 372)) ;
  GALGAS_stringset var_availableGenerationFeatures_19048 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 374)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 375)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 376)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 377)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 378)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("codeblocks-mac")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 379)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 380)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 381)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 382)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 383)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 384)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("SnowLeopard")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 385)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("Lion")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 386)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("MountainLion")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 387)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("Mavericks")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 388)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("Yosemite")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 389)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("ElCapitanYosemite")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 390)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("ElCapitan")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 391)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("Sierra")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 392)) ;
  var_availableGenerationFeatures_19048.addAssign_operation (GALGAS_string ("LatestMacOS")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 393)) ;
  GALGAS_stringset var_generationFeatures_20073 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 394)) ;
  GALGAS_string var_SDK_20130 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_20210 (constinArgument_inTargetFeatureList, kEnumeration_up) ;
  while (enumerator_20210.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_availableGenerationFeatures_19048.getter_hasKey (enumerator_20210.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 399)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const enumGalgasBool test_3 = var_generationFeatures_20073.getter_hasKey (enumerator_20210.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 400)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 401)), GALGAS_string ("duplicate '").add_operation (enumerator_20210.current_mValue (HERE).getter_string (SOURCE_FILE ("galgas3TargetGeneration.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 401)).add_operation (GALGAS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 401))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 401)) ;
      }
      GALGAS_string var_macOsDuplicateMessage_20432 = GALGAS_string ("the \"SnowLeopard\", \"Lion\", \"MountainLion\", \"Mavericks\", \"Yosemite\", \"ElCapitanYosemite\", \"ElCapitan\", \"Sierra\", \"LatestMacOS\" are exclusive") ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("SnowLeopard"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 408)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 408)) ;
        }
        var_SDK_20130 = GALGAS_string ("macosx10.6") ;
        var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string ("10.6") ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("Lion"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 415)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 415)) ;
          }
          var_SDK_20130 = GALGAS_string ("macosx10.7") ;
          var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string ("10.7") ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("MountainLion"))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_9) {
              inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 422)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 422)) ;
            }
            var_SDK_20130 = GALGAS_string ("macosx10.8") ;
            var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string ("10.8") ;
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("Mavericks"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 429)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 429)) ;
              }
              var_SDK_20130 = GALGAS_string ("macosx10.9") ;
              var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string ("10.9") ;
            }else if (kBoolFalse == test_10) {
              const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("Yosemite"))).boolEnum () ;
              if (kBoolTrue == test_12) {
                const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_13) {
                  inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 436)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 436)) ;
                }
                var_SDK_20130 = GALGAS_string ("macosx10.10") ;
                var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string ("10.10") ;
              }else if (kBoolFalse == test_12) {
                const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ElCapitanYosemite"))).boolEnum () ;
                if (kBoolTrue == test_14) {
                  const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 443)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 443)) ;
                  }
                  var_SDK_20130 = GALGAS_string ("macosx10.11") ;
                  var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string ("10.10") ;
                }else if (kBoolFalse == test_14) {
                  const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("ElCapitan"))).boolEnum () ;
                  if (kBoolTrue == test_16) {
                    const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_17) {
                      inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 450)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 450)) ;
                    }
                    var_SDK_20130 = GALGAS_string ("macosx10.11") ;
                    var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string ("10.11") ;
                  }else if (kBoolFalse == test_16) {
                    const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("Sierra"))).boolEnum () ;
                    if (kBoolTrue == test_18) {
                      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                      if (kBoolTrue == test_19) {
                        inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 457)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 457)) ;
                      }
                      var_SDK_20130 = GALGAS_string ("macosx10.12") ;
                      var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170 = GALGAS_string ("10.12") ;
                    }else if (kBoolFalse == test_18) {
                      const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, enumerator_20210.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("LatestMacOS"))).boolEnum () ;
                      if (kBoolTrue == test_20) {
                        const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                        if (kBoolTrue == test_21) {
                          inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 464)), var_macOsDuplicateMessage_20432  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 464)) ;
                        }
                        var_SDK_20130 = GALGAS_string ("macosx") ;
                      }else if (kBoolFalse == test_20) {
                        var_generationFeatures_20073.addAssign_operation (enumerator_20210.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 468)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_s_22652 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_22704 (var_availableGenerationFeatures_19048, kEnumeration_up) ;
      while (enumerator_22704.hasCurrentObject ()) {
        var_s_22652.plusAssign_operation(GALGAS_string ("\n"
          "  - '").add_operation (enumerator_22704.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 473)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 473)) ;
        enumerator_22704.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (enumerator_20210.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas3TargetGeneration.galgas", 475)), GALGAS_string ("unknown '").add_operation (enumerator_20210.current_mValue (HERE).getter_string (SOURCE_FILE ("galgas3TargetGeneration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 475)).add_operation (GALGAS_string ("' feature; available features are:"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 475)).add_operation (var_s_22652, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 475))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 475)) ;
    }
    enumerator_20210.gotoNextObject () ;
  }
  const enumGalgasBool test_22 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).operator_and (constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GALGAS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 479)).operator_not (SOURCE_FILE ("galgas3TargetGeneration.galgas", 479)) COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 479)).boolEnum () ;
  if (kBoolTrue == test_22) {
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 480)), GALGAS_string ("For a Cocoa project, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 480)) ;
  }
  const enumGalgasBool test_23 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 483)).boolEnum () ;
  if (kBoolTrue == test_23) {
    {
    routine_generateGalgas_33_MakefileMacOSXTarget (var_projectDirectory_17670, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 484)) ;
    }
  }
  const enumGalgasBool test_24 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 486)).boolEnum () ;
  if (kBoolTrue == test_24) {
    {
    routine_generateGalgas_33_MakefileUnixTarget (var_projectDirectory_17670, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 487)) ;
    }
  }
  const enumGalgasBool test_25 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 489)).boolEnum () ;
  if (kBoolTrue == test_25) {
    {
    routine_generateGalgas_33_Linux_33__32_OnMacOSXTarget (var_projectDirectory_17670, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 490)) ;
    }
  }
  const enumGalgasBool test_26 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 492)).boolEnum () ;
  if (kBoolTrue == test_26) {
    {
    routine_generateGalgas_33_Linux_36__34_OnMacOSXTarget (var_projectDirectory_17670, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 493)) ;
    }
  }
  const enumGalgasBool test_27 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 495)).boolEnum () ;
  if (kBoolTrue == test_27) {
    {
    routine_generateGalgas_33_MinGWOnMacOSXTarget (var_projectDirectory_17670, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 496)) ;
    }
  }
  const enumGalgasBool test_28 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 498)).boolEnum () ;
  if (kBoolTrue == test_28) {
    {
    routine_generateGalgasCodeBlocksWindowsTarget (var_projectDirectory_17670, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18409, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 499)) ;
    }
  }
  const enumGalgasBool test_29 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("codeblocks-mac") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 509)).boolEnum () ;
  if (kBoolTrue == test_29) {
    {
    routine_generateGalgasCodeBlocksMacTarget (var_projectDirectory_17670, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18409, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 510)) ;
    }
  }
  const enumGalgasBool test_30 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 520)).boolEnum () ;
  if (kBoolTrue == test_30) {
    {
    routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target (var_projectDirectory_17670, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18409, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 521)) ;
    }
  }
  const enumGalgasBool test_31 = var_generationFeatures_20073.getter_hasKey (GALGAS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 531)).boolEnum () ;
  if (kBoolTrue == test_31) {
    {
    routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target (var_projectDirectory_17670, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_18409, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectorySet, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 532)) ;
    }
  }
  GALGAS_stringlist var_linkOptionForLinkingFrameworkWithTool_25175 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 543)) ;
  const enumGalgasBool test_32 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 544)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_32) {
    const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string ("macosx"))).boolEnum () ;
    if (kBoolTrue == test_33) {
      var_linkOptionForLinkingFrameworkWithTool_25175.addAssign_operation (GALGAS_string ("-isysroot")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 546)) ;
      var_linkOptionForLinkingFrameworkWithTool_25175.addAssign_operation (GALGAS_string ("/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/").add_operation (var_SDK_20130, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 547)).add_operation (GALGAS_string (".sdk"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 547))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 547)) ;
    }
    cEnumerator_stringlist enumerator_25515 (constinArgument_inFrameworkToolFileList, kEnumeration_up) ;
    while (enumerator_25515.hasCurrentObject ()) {
      var_linkOptionForLinkingFrameworkWithTool_25175.addAssign_operation (GALGAS_string ("-framework")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 550)) ;
      var_linkOptionForLinkingFrameworkWithTool_25175.addAssign_operation (enumerator_25515.current_mValue (HERE).getter_stringByDeletingPathExtension (SOURCE_FILE ("galgas3TargetGeneration.galgas", 551))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 551)) ;
      enumerator_25515.gotoNextObject () ;
    }
  }
  GALGAS_stringlist var_handCodedSourceToolFileList_25741 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 555)) ;
  cEnumerator_stringlist enumerator_25792 (constinArgument_inHandCodedSourceToolFileList, kEnumeration_up) ;
  while (enumerator_25792.hasCurrentObject ()) {
    const enumGalgasBool test_34 = GALGAS_bool (kIsNotEqual, enumerator_25792.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgas3TargetGeneration.galgas", 557)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
    if (kBoolTrue == test_34) {
      var_handCodedSourceToolFileList_25741.addAssign_operation (enumerator_25792.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 558))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 558)) ;
    }
    enumerator_25792.gotoNextObject () ;
  }
  GALGAS_string var_jsonFileListContents_25930 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, constinArgument_inHandCodedSourceDirectorySet, var_handCodedSourceToolFileList_25741, var_toolCppFileList_18144, var_linkOptionForLinkingFrameworkWithTool_25175, var_libpmPath_18409 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 561))) ;
  GALGAS_string var_jsonFileListPath_26169 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 568)).add_operation (GALGAS_string ("/build/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 568)) ;
  GALGAS_bool joker_26341 ; // Joker input parameter
  var_jsonFileListContents_25930.method_writeToFileWhenDifferentContents (var_jsonFileListPath_26169, joker_26341, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 569)) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 570)) ;
  const enumGalgasBool test_35 = GALGAS_bool (kIsNotEqual, var_SDK_20130.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_35) {
    GALGAS_string var_dir_26463 = var_projectDirectory_17670.add_operation (GALGAS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 573)) ;
    var_dir_26463.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 574)) ;
    GALGAS_string var_applicationBundleBase_26577 ;
    const cMapElement_projectQualifiedFeatureMap * objectArray_26610 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("applicationBundleBase")) ;
    if (NULL != objectArray_26610) {
        macroValidSharedObject (objectArray_26610, cMapElement_projectQualifiedFeatureMap) ;
      var_applicationBundleBase_26577 = objectArray_26610->mAttribute_mFeatureValue.mAttribute_string ;
    }else{
      var_applicationBundleBase_26577 = GALGAS_string ("fr.irccyn") ;
    }
    GALGAS_string var_InfoPlistContents_26782 = GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_26577, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 582))) ;
    GALGAS_bool joker_27044 ; // Joker input parameter
    var_InfoPlistContents_26782.method_writeToFileWhenDifferentContents (var_dir_26463.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 588)), joker_27044, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 588)) ;
    const enumGalgasBool test_36 = var_dir_26463.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 590)).getter_fileExists (SOURCE_FILE ("galgas3TargetGeneration.galgas", 590)).operator_not (SOURCE_FILE ("galgas3TargetGeneration.galgas", 590)).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 591))).method_writeToExecutableFile (var_dir_26463.add_operation (GALGAS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 591)) ;
    }
    var_dir_26463.add_operation (GALGAS_string ("/English.lproj"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 594)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 594)) ;
    GALGAS_string var_InfoPlist_5F_strings_5F_path_27332 = var_dir_26463.add_operation (GALGAS_string ("/English.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 595)) ;
    GALGAS_bool joker_27529 ; // Joker input parameter
    GALGAS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 596))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_27332, joker_27529, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 596)) ;
    GALGAS_string var_Credits_5F_rtf_5F_path_27564 = var_dir_26463.add_operation (GALGAS_string ("/English.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 597)) ;
    const enumGalgasBool test_37 = var_Credits_5F_rtf_5F_path_27564.getter_fileExists (SOURCE_FILE ("galgas3TargetGeneration.galgas", 598)).operator_not (SOURCE_FILE ("galgas3TargetGeneration.galgas", 598)).boolEnum () ;
    if (kBoolTrue == test_37) {
      GALGAS_string (gWrapperFileContent_4_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_27564, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 599)) ;
    }
    const cMapElement_projectQualifiedFeatureMap * objectArray_27840 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("repositoryURL")) ;
    if (NULL != objectArray_27840) {
        macroValidSharedObject (objectArray_27840, cMapElement_projectQualifiedFeatureMap) ;
      GALGAS_string var_applicationUpdateDir_27915 = var_projectDirectory_17670.add_operation (GALGAS_string ("/xcode-project/cocoa-application-update/application"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 603)) ;
      var_applicationUpdateDir_27915.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 604)) ;
      GALGAS_bool joker_28201 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_header (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 605))).method_writeToFileWhenDifferentContents (var_applicationUpdateDir_27915.add_operation (GALGAS_string ("/PMApplicationUpdate.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 605)), joker_28201, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 605)) ;
      GALGAS_bool joker_28505 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_implementation (inCompiler, constinArgument_inTargetName, objectArray_27840->mAttribute_mFeatureValue.mAttribute_string, var_applicationBundleBase_26577 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 606))).method_writeToFileWhenDifferentContents (var_applicationUpdateDir_27915.add_operation (GALGAS_string ("/PMApplicationUpdate.m"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 611)), joker_28505, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 606)) ;
      GALGAS_bool joker_28708 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_application_5F_update_5F_nib (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 614))).method_writeToFileWhenDifferentContents (var_applicationUpdateDir_27915.add_operation (GALGAS_string ("/English.lproj/PMApplicationUpdate.xib"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 614)), joker_28708, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 614)) ;
      GALGAS_bool joker_28867 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_data_5F_header (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 615))).method_writeToFileWhenDifferentContents (var_applicationUpdateDir_27915.add_operation (GALGAS_string ("/PMDownloadData.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 615)), joker_28867, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 615)) ;
      GALGAS_bool joker_29034 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_data_5F_implementation (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 616))).method_writeToFileWhenDifferentContents (var_applicationUpdateDir_27915.add_operation (GALGAS_string ("/PMDownloadData.m"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 616)), joker_29034, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 616)) ;
      GALGAS_bool joker_29193 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_file_5F_header (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 617))).method_writeToFileWhenDifferentContents (var_applicationUpdateDir_27915.add_operation (GALGAS_string ("/PMDownloadFile.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 617)), joker_29193, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 617)) ;
      GALGAS_bool joker_29360 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_download_5F_file_5F_implementation (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 618))).method_writeToFileWhenDifferentContents (var_applicationUpdateDir_27915.add_operation (GALGAS_string ("/PMDownloadFile.m"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 618)), joker_29360, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 618)) ;
      GALGAS_bool joker_29535 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_applicationGalgas_33_UpdateFileWrapper_compatibility_5F_header (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 619))).method_writeToFileWhenDifferentContents (var_applicationUpdateDir_27915.add_operation (GALGAS_string ("/PMSnowLeopardLionCompatibility.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 619)), joker_29535, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 619)) ;
      GALGAS_string var_codeSignIdentity_29590 ;
      const cMapElement_projectQualifiedFeatureMap * objectArray_29615 = (const cMapElement_projectQualifiedFeatureMap *) constinArgument_inProjectQualifiedFeatureMap.readAccessForWithInstruction (GALGAS_string ("codeSigning")) ;
      if (NULL != objectArray_29615) {
          macroValidSharedObject (objectArray_29615, cMapElement_projectQualifiedFeatureMap) ;
        var_codeSignIdentity_29590 = objectArray_29615->mAttribute_mFeatureValue.mAttribute_string ;
      }else{
        var_codeSignIdentity_29590 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string var_updaterToolDir_29783 = var_projectDirectory_17670.add_operation (GALGAS_string ("/xcode-project/cocoa-application-update/updater-tool"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 627)) ;
      var_updaterToolDir_29783.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 628)) ;
      GALGAS_bool joker_30053 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_protocol (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 629))).method_writeToFileWhenDifferentContents (var_updaterToolDir_29783.add_operation (GALGAS_string ("/PMUpdaterServerProtocol.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 629)), joker_30053, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 629)) ;
      GALGAS_bool joker_30208 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_header (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 630))).method_writeToFileWhenDifferentContents (var_updaterToolDir_29783.add_operation (GALGAS_string ("/PMUpdaterServerObject.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 630)), joker_30208, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 630)) ;
      GALGAS_bool joker_30371 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_implementation (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 631))).method_writeToFileWhenDifferentContents (var_updaterToolDir_29783.add_operation (GALGAS_string ("/PMUpdaterServerObject.m"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 631)), joker_30371, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 631)) ;
      GALGAS_bool joker_30634 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_tool_5F_info_5F_plist (inCompiler, var_applicationBundleBase_26577, constinArgument_inTargetName, var_codeSignIdentity_29590 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 632))).method_writeToFileWhenDifferentContents (var_updaterToolDir_29783.add_operation (GALGAS_string ("/updater-tool-Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 637)), joker_30634, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 632)) ;
      GALGAS_bool joker_30883 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_tool_5F_launchd_5F_plist (inCompiler, var_applicationBundleBase_26577, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 640))).method_writeToFileWhenDifferentContents (var_updaterToolDir_29783.add_operation (GALGAS_string ("/updater-tool-Launchd.plist"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 644)), joker_30883, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 640)) ;
      GALGAS_bool joker_31118 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ToolFileWrapper_updater_5F_object_5F_main (inCompiler, var_applicationBundleBase_26577, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 647))).method_writeToFileWhenDifferentContents (var_updaterToolDir_29783.add_operation (GALGAS_string ("/updater-tool-main.m"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 651)), joker_31118, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 647)) ;
      GALGAS_string var_updaterApplicationDir_31188 = var_projectDirectory_17670.add_operation (GALGAS_string ("/xcode-project/cocoa-application-update/updater-application"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 655)) ;
      var_updaterApplicationDir_31188.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 656)) ;
      GALGAS_bool joker_31480 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_credits (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 657))).method_writeToFileWhenDifferentContents (var_updaterApplicationDir_31188.add_operation (GALGAS_string ("/English.lproj/UpdaterAppCredits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 657)), joker_31480, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 657)) ;
      GALGAS_bool joker_31664 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_info_5F_plist_5F_strings (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 658))).method_writeToFileWhenDifferentContents (var_updaterApplicationDir_31188.add_operation (GALGAS_string ("/English.lproj/UpdaterAppInfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 658)), joker_31664, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 658)) ;
      GALGAS_bool joker_31852 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_main_5F_menu_5F_xib (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 659))).method_writeToFileWhenDifferentContents (var_updaterApplicationDir_31188.add_operation (GALGAS_string ("/English.lproj/UpdaterAppMainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 659)), joker_31852, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 659)) ;
      GALGAS_bool joker_32026 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_application_5F_delegate_5F_header (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 660))).method_writeToFileWhenDifferentContents (var_updaterApplicationDir_31188.add_operation (GALGAS_string ("/PMUpdaterAppDelegate.h"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 660)), joker_32026, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 660)) ;
      GALGAS_bool joker_32278 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_application_5F_delegate_5F_implementation (inCompiler, var_applicationBundleBase_26577, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 661))).method_writeToFileWhenDifferentContents (var_updaterApplicationDir_31188.add_operation (GALGAS_string ("/PMUpdaterAppDelegate.m"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 665)), joker_32278, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 661)) ;
      GALGAS_bool joker_32539 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_info_5F_plist (inCompiler, var_applicationBundleBase_26577, constinArgument_inTargetName, var_codeSignIdentity_29590 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 667))).method_writeToFileWhenDifferentContents (var_updaterApplicationDir_31188.add_operation (GALGAS_string ("/updater-app-Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 672)), joker_32539, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 667)) ;
      GALGAS_bool joker_32693 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_main (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 674))).method_writeToFileWhenDifferentContents (var_updaterApplicationDir_31188.add_operation (GALGAS_string ("/updater-app-main.m"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 674)), joker_32693, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 674)) ;
      GALGAS_bool joker_32846 ; // Joker input parameter
      GALGAS_string (filewrapperTemplate_updaterGalgas_33_ApplicationFileWrapper_prefix (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 675))).method_writeToFileWhenDifferentContents (var_updaterApplicationDir_31188.add_operation (GALGAS_string ("/updater-app-Prefix.pch"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 675)), joker_32846, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 675)) ;
    }
    GALGAS_string var_userResourceDir_32938 = var_projectDirectory_17670.add_operation (GALGAS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 678)) ;
    var_userResourceDir_32938.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 679)) ;
    GALGAS_stringlist var_extensionList_33048 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 680)) ;
    var_extensionList_33048.addAssign_operation (GALGAS_string ("icns")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 681)) ;
    GALGAS_stringlist var_resourceFiles_33127 = var_userResourceDir_32938.getter_regularFilesWithExtensions (GALGAS_bool (false), var_extensionList_33048 COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 682)) ;
    GALGAS_string var_newIntermediateFilePath_33256 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas3TargetGeneration.galgas", 684)).add_operation (GALGAS_string ("/build/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 684)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 685)) ;
    GALGAS_XcodeProjectDescriptor var_xcodeProject_33540 = GALGAS_XcodeProjectDescriptor::constructor_default (SOURCE_FILE ("galgas3TargetGeneration.galgas", 687)) ;
    GALGAS_stringlist temp_38 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 724)) ;
    temp_38.addAssign_operation (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 690)) ;
    temp_38.addAssign_operation (GALGAS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\"")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 691)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 692)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 693)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 694)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 695)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 696)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 697)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 698)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 699)) ;
    temp_38.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 700)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 701)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 702)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 703)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 704)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 705)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 706)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 707)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 708)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 709)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 710)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 711)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_SHADOW = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 712)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 713)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 714)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 715)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 716)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 717)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 718)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 719)) ;
    temp_38.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 720)) ;
    temp_38.addAssign_operation (GALGAS_string ("HEADER_SEARCH_PATHS = (\"../build/output\", \"../build/libpm\", \"../build/user-headers\", \"../hand_coded_sources/**\")")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 721)) ;
    temp_38.addAssign_operation (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_20130, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 722))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 722)) ;
    temp_38.addAssign_operation (GALGAS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 724)) ;
    GALGAS_stringlist var_xcodeSettingList_33642 = temp_38 ;
    const enumGalgasBool test_39 = GALGAS_bool (kIsEqual, var_SDK_20130.objectCompare (GALGAS_string ("macosx10.6"))).boolEnum () ;
    if (kBoolTrue == test_39) {
      var_xcodeSettingList_33642.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = NO")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 726)) ;
      var_xcodeSettingList_33642.addAssign_operation (GALGAS_string ("GCC_ENABLE_OBJC_GC = required")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 727)) ;
    }else if (kBoolFalse == test_39) {
      var_xcodeSettingList_33642.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 729)) ;
    }
    const enumGalgasBool test_40 = GALGAS_bool (kIsNotEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_40) {
      var_xcodeSettingList_33642.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_20170, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 732)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 732))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 732)) ;
    }
    {
    extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_33540, var_xcodeSettingList_33642, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 734)) ;
    }
    GALGAS_stringlist var_m_5F_HandCodedSourceFileRefForAppList_35809 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 736)) ;
    GALGAS_stringlist var_m_5F_HandCodedResourceFileRefForAppList_35867 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 737)) ;
    const enumGalgasBool test_41 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceAppFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 738)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_41) {
      GALGAS_stringlist joker_36138 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 743)) ;
      GALGAS_stringlist joker_36162 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 744)) ;
      GALGAS_stringlist joker_36240 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 746)) ;
      GALGAS_stringlist joker_36270 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 747)) ;
      GALGAS_string var_groupRef_36374 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Hand Coded Sources (App)"), GALGAS_string ("../"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedSourceAppFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 742)), joker_36138, joker_36162, var_m_5F_HandCodedSourceFileRefForAppList_35809, joker_36240, joker_36270, var_m_5F_HandCodedResourceFileRefForAppList_35867, var_groupRef_36374, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 739)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_groupRef_36374, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 751)) ;
      }
    }
    GALGAS_stringlist var_appFrameworksFileRefList_36533 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 754)) ;
    const enumGalgasBool test_42 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedLinkAppFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 755)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_42) {
      GALGAS_stringlist joker_36816 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 760)) ;
      GALGAS_stringlist joker_36840 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 761)) ;
      GALGAS_stringlist joker_36862 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 762)) ;
      GALGAS_stringlist joker_36885 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 763)) ;
      GALGAS_stringlist joker_36967 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 765)) ;
      GALGAS_string var_frameworkGroupRef_37016 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Frameworks (App)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 759)), joker_36816, joker_36840, joker_36862, joker_36885, var_appFrameworksFileRefList_36533, joker_36967, var_frameworkGroupRef_37016, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 756)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_frameworkGroupRef_37016, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 768)) ;
      }
    }
    GALGAS_stringlist var_buildCFileRefListForTool_37167 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 771)) ;
    GALGAS_stringlist var_buildCppFileRefListForTool_37215 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 772)) ;
    GALGAS_stringlist var_m_5F_FileRefList_37250 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 773)) ;
    GALGAS_stringlist var_mm_5F_FileRefList_37286 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 774)) ;
    GALGAS_stringlist var_frameworksFileRefList_37329 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 775)) ;
    GALGAS_stringlist var_resourceFileBuildRefs_37372 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 776)) ;
    const enumGalgasBool test_43 = GALGAS_bool (kIsStrictSup, constinArgument_inHandCodedSourceToolFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 778)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_43) {
      GALGAS_string var_groupRef_37972 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Hand Coded Sources (Tool)"), GALGAS_string ("../"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 782)), var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_37972, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 779)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_groupRef_37972, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 791)) ;
      }
    }
    GALGAS_stringlist var_toolFrameworksFileRefList_38133 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 794)) ;
    const enumGalgasBool test_44 = GALGAS_bool (kIsStrictSup, constinArgument_inFrameworkToolFileList.getter_length (SOURCE_FILE ("galgas3TargetGeneration.galgas", 795)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      GALGAS_stringlist joker_38410 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 800)) ;
      GALGAS_stringlist joker_38434 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 801)) ;
      GALGAS_stringlist joker_38456 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 802)) ;
      GALGAS_stringlist joker_38479 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 803)) ;
      GALGAS_stringlist joker_38562 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 805)) ;
      GALGAS_string var_frameworkGroupRef_38611 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Frameworks (Tool)"), GALGAS_string ("/System/Library/Frameworks"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 799)), joker_38410, joker_38434, joker_38456, joker_38479, var_toolFrameworksFileRefList_38133, joker_38562, var_frameworkGroupRef_38611, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 796)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_frameworkGroupRef_38611, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 808)) ;
      }
    }
    GALGAS_string var_groupRef_39252 ;
    {
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Generated by GALGAS"), GALGAS_string ("../build/output"), GALGAS_stringset::constructor_setWithStringList (constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 814)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 814))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 814)), var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 811)) ;
    }
    {
    extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 823)) ;
    }
    GALGAS_stringlist var_libpmReferenceGroupList_39360 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 824)) ;
    {
    GALGAS_stringset temp_45 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 842)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_RelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 830)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_RelationConfiguration.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 831)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_Relation.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 832)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_Relation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 833)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_RelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 834)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_RelationSingleType.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 835)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_BDD-and-operation.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 836)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_BDD-find-or-add.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 837)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_BDD-node.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 838)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_BDD-single-operand-ops.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 839)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_BDD.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 840)) ;
    temp_45.addAssign_operation (GALGAS_string ("C_BDD.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 842)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Binary Decision Diagrams"), GALGAS_string ("bdd"), temp_45, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 826)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 851)) ;
    {
    GALGAS_stringset temp_46 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 856)) ;
    temp_46.addAssign_operation (GALGAS_string ("TC_prime_cache2.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 856)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Cache"), GALGAS_string ("cache"), temp_46, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 853)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 865)) ;
    {
    GALGAS_stringset temp_47 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 880)) ;
    temp_47.addAssign_operation (GALGAS_string ("main.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 871)) ;
    temp_47.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 872)) ;
    temp_47.addAssign_operation (GALGAS_string ("PMCancelButtonForPanel.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 873)) ;
    temp_47.addAssign_operation (GALGAS_string ("PMDownloadData.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 874)) ;
    temp_47.addAssign_operation (GALGAS_string ("PMDownloadData.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 875)) ;
    temp_47.addAssign_operation (GALGAS_string ("PMDownloadFile.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 876)) ;
    temp_47.addAssign_operation (GALGAS_string ("PMDownloadFile.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 877)) ;
    temp_47.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 878)) ;
    temp_47.addAssign_operation (GALGAS_string ("PMOkButtonForPanel.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 880)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Cocoa Utilities"), GALGAS_string ("cocoa_utilities"), temp_47, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 867)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 889)) ;
    {
    GALGAS_stringset temp_48 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 947)) ;
    temp_48.addAssign_operation (GALGAS_string ("English.lproj/OC_GGS_Document.xib")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 895)) ;
    temp_48.addAssign_operation (GALGAS_string ("English.lproj/PMDebug.xib")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 896)) ;
    temp_48.addAssign_operation (GALGAS_string ("English.lproj/MainMenu.xib")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 897)) ;
    temp_48.addAssign_operation (GALGAS_string ("closeSourceFile.tiff")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 898)) ;
    temp_48.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 899)) ;
    temp_48.addAssign_operation (GALGAS_string ("enterDefaultCommandLineOptions.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 900)) ;
    temp_48.addAssign_operation (GALGAS_string ("F_CocoaWrapperForGalgas.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 901)) ;
    temp_48.addAssign_operation (GALGAS_string ("I_Stop.tiff")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 902)) ;
    temp_48.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 903)) ;
    temp_48.addAssign_operation (GALGAS_string ("NSString+identifierRepresentation.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 904)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 905)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_ApplicationDelegate.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 906)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 907)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_BuildTask.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 908)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 909)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_CommandLineOption.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 910)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_Document.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 911)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_Document.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 912)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 913)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_DocumentData.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 914)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_FileEventStream.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 915)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_FileEventStream.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 916)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 917)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForBuildOutput.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 918)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 919)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_RulerViewForTextView.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 920)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 921)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_Scroller.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 922)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 923)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_TextDisplayDescriptor.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 924)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 925)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_TextSyntaxColoring.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 926)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_TextView.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 927)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_GGS_TextView.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 928)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_Lexique.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 929)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_Lexique.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 930)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_Token.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 931)) ;
    temp_48.addAssign_operation (GALGAS_string ("OC_Token.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 932)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMDebug.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 933)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMDebug.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 934)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMFontButton.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 935)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMFontButton.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 936)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMIssueDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 937)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMIssueDescriptor.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 938)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMIssueInRuler.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 939)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMIssueInRuler.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 940)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 941)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMSearchResultDescriptor.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 942)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMTableViewRefusesFirstResponder.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 943)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMTableViewRefusesFirstResponder.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 944)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMUndoManager.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 945)) ;
    temp_48.addAssign_operation (GALGAS_string ("PMUndoManager.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 947)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Cocoa GALGAS"), GALGAS_string ("cocoa_galgas"), temp_48, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 891)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 956)) ;
    {
    GALGAS_stringset temp_49 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 969)) ;
    temp_49.addAssign_operation (GALGAS_string ("TC_LinkedList.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 962)) ;
    temp_49.addAssign_operation (GALGAS_string ("TC_FIFO.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 963)) ;
    temp_49.addAssign_operation (GALGAS_string ("TC_UniqueSparseArray.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 964)) ;
    temp_49.addAssign_operation (GALGAS_string ("TC_Array.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 965)) ;
    temp_49.addAssign_operation (GALGAS_string ("TC_Array2.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 966)) ;
    temp_49.addAssign_operation (GALGAS_string ("TC_UniqueArray.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 967)) ;
    temp_49.addAssign_operation (GALGAS_string ("TC_UniqueArray2.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 969)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Collections"), GALGAS_string ("collections"), temp_49, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 958)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 978)) ;
    {
    GALGAS_stringset temp_50 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1000)) ;
    temp_50.addAssign_operation (GALGAS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 984)) ;
    temp_50.addAssign_operation (GALGAS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 985)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 986)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_builtin_CLI_Options.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 987)) ;
    temp_50.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 988)) ;
    temp_50.addAssign_operation (GALGAS_string ("F_Analyze_CLI_Options.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 989)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_CommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 990)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_CommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 991)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 992)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 993)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 994)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 995)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 996)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 997)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 998)) ;
    temp_50.addAssign_operation (GALGAS_string ("C_StringListCommandLineOption.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1000)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Command line Interface"), GALGAS_string ("command_line_interface"), temp_50, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 980)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1009)) ;
    {
    GALGAS_stringset temp_51 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1027)) ;
    temp_51.addAssign_operation (GALGAS_string ("C_FileManager.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1015)) ;
    temp_51.addAssign_operation (GALGAS_string ("C_FileManager.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1016)) ;
    temp_51.addAssign_operation (GALGAS_string ("AC_FileHandle.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1017)) ;
    temp_51.addAssign_operation (GALGAS_string ("AC_FileHandle.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1018)) ;
    temp_51.addAssign_operation (GALGAS_string ("AC_FileHandleForWriting.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1019)) ;
    temp_51.addAssign_operation (GALGAS_string ("AC_FileHandleForWriting.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1020)) ;
    temp_51.addAssign_operation (GALGAS_string ("C_BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1021)) ;
    temp_51.addAssign_operation (GALGAS_string ("C_BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1022)) ;
    temp_51.addAssign_operation (GALGAS_string ("C_TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1023)) ;
    temp_51.addAssign_operation (GALGAS_string ("C_TextFileWrite.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1024)) ;
    temp_51.addAssign_operation (GALGAS_string ("C_HTML_FileWrite.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1025)) ;
    temp_51.addAssign_operation (GALGAS_string ("C_HTML_FileWrite.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1027)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("File"), GALGAS_string ("files"), temp_51, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1011)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1036)) ;
    {
    GALGAS_stringset temp_52 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1128)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_class.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1042)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_class.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1043)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1044)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1045)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1046)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_graph.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1047)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_list.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1048)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_list.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1049)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_map.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1050)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_map.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1051)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1052)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1053)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1054)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_sortedlist.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1055)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_uniqueMap.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1056)) ;
    temp_52.addAssign_operation (GALGAS_string ("AC_GALGAS_uniqueMap.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1057)) ;
    temp_52.addAssign_operation (GALGAS_string ("acPtr_class.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1058)) ;
    temp_52.addAssign_operation (GALGAS_string ("acPtr_class.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1059)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_Compiler.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1060)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_Compiler.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1061)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1062)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1063)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1064)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1065)) ;
    GALGAS_string temp_53 ;
    const enumGalgasBool test_54 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (kBoolTrue == test_54) {
      temp_53 = GALGAS_string ("C_galgas_verbose_option.cpp") ;
    }else if (kBoolFalse == test_54) {
      temp_53 = GALGAS_string ("C_galgas_quiet_option.cpp") ;
    }
    temp_52.addAssign_operation (temp_53  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1066)) ;
    GALGAS_string temp_55 ;
    const enumGalgasBool test_56 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (kBoolTrue == test_56) {
      temp_55 = GALGAS_string ("C_galgas_verbose_option.h") ;
    }else if (kBoolFalse == test_56) {
      temp_55 = GALGAS_string ("C_galgas_quiet_option.h") ;
    }
    temp_52.addAssign_operation (temp_55  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1067)) ;
    temp_52.addAssign_operation (GALGAS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1068)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1069)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_function_descriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1070)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_io.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1071)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_io.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1072)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1073)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_galgas_type_descriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1074)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_Lexique.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1075)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_Lexique.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1076)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1077)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_LocationInSource.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1078)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1079)) ;
    temp_52.addAssign_operation (GALGAS_string ("C_SourceTextInString.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1080)) ;
    temp_52.addAssign_operation (GALGAS_string ("capCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1081)) ;
    temp_52.addAssign_operation (GALGAS_string ("capCollectionElement.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1082)) ;
    temp_52.addAssign_operation (GALGAS_string ("capCollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1083)) ;
    temp_52.addAssign_operation (GALGAS_string ("capCollectionElementArray.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1084)) ;
    temp_52.addAssign_operation (GALGAS_string ("capSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1085)) ;
    temp_52.addAssign_operation (GALGAS_string ("capSortedListElement.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1086)) ;
    temp_52.addAssign_operation (GALGAS_string ("cCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1087)) ;
    temp_52.addAssign_operation (GALGAS_string ("cCollectionElement.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1088)) ;
    temp_52.addAssign_operation (GALGAS_string ("cEnumerator_range.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1089)) ;
    temp_52.addAssign_operation (GALGAS_string ("cEnumerator_range.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1090)) ;
    temp_52.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1091)) ;
    temp_52.addAssign_operation (GALGAS_string ("cGenericAbstractEnumerator.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1092)) ;
    temp_52.addAssign_operation (GALGAS_string ("cIndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1093)) ;
    temp_52.addAssign_operation (GALGAS_string ("cIndexingDictionary.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1094)) ;
    temp_52.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1095)) ;
    temp_52.addAssign_operation (GALGAS_string ("cLexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1096)) ;
    temp_52.addAssign_operation (GALGAS_string ("cObjectArray.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1097)) ;
    temp_52.addAssign_operation (GALGAS_string ("cObjectArray.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1098)) ;
    temp_52.addAssign_operation (GALGAS_string ("cProductionNameDescriptor.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1099)) ;
    temp_52.addAssign_operation (GALGAS_string ("cPtr_object.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1100)) ;
    temp_52.addAssign_operation (GALGAS_string ("cPtr_object.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1101)) ;
    temp_52.addAssign_operation (GALGAS_string ("cSortedListElement.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1102)) ;
    temp_52.addAssign_operation (GALGAS_string ("cSortedListElement.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1103)) ;
    temp_52.addAssign_operation (GALGAS_string ("cTemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1104)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_application.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1105)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1106)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_bigint.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1107)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_bool.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1108)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_char.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1109)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_data.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1110)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_double.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1111)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1112)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_function.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1113)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_location.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1114)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_object.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1115)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_sint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1116)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_sint.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1117)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_string.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1118)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_stringset.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1119)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_timer.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1120)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_type.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1121)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_uint_36__34_.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1122)) ;
    temp_52.addAssign_operation (GALGAS_string ("GALGAS_uint.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1123)) ;
    temp_52.addAssign_operation (GALGAS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1124)) ;
    temp_52.addAssign_operation (GALGAS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1125)) ;
    temp_52.addAssign_operation (GALGAS_string ("typeComparisonResult.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1126)) ;
    temp_52.addAssign_operation (GALGAS_string ("typeComparisonResult.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1128)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Galgas 2"), GALGAS_string ("galgas2"), temp_52, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1038)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1137)) ;
    {
    GALGAS_stringset temp_57 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1268)) ;
    temp_57.addAssign_operation (GALGAS_string ("32-mp_bases.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1143)) ;
    temp_57.addAssign_operation (GALGAS_string ("32-mp_bases.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1144)) ;
    temp_57.addAssign_operation (GALGAS_string ("64-mp_bases.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1145)) ;
    temp_57.addAssign_operation (GALGAS_string ("64-mp_bases.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1146)) ;
    temp_57.addAssign_operation (GALGAS_string ("gmp-impl.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1147)) ;
    temp_57.addAssign_operation (GALGAS_string ("gmp.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1148)) ;
    temp_57.addAssign_operation (GALGAS_string ("longlong.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1149)) ;
    temp_57.addAssign_operation (GALGAS_string ("mini-gmp.c.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1150)) ;
    temp_57.addAssign_operation (GALGAS_string ("mini-gmp.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1151)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-add.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1152)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-add_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1153)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-add_n.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1154)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-addmul_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1155)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-bdiv_dbm1c.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1156)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-cmp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1157)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-dcpi1_div_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1158)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-dive_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1159)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-divrem_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1160)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-divrem_2.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1161)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-get_str.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1162)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-invertappr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1163)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-lshift.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1164)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-lshiftc.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1165)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-mu_div_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1166)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1167)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-mul_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1168)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-mul_basecase.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1169)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-mul_fft.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1170)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-mul_n.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1171)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-mulmod_bnm1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1172)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-nussbaumer_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1173)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-pre_divrem_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1174)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-rshift.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1175)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-sbpi1_div_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1176)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-sbpi1_divappr_q.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1177)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-set_str.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1178)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1179)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-sqr_basecase.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1180)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-sqrmod_bnm1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1181)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-sub.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1182)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-sub_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1183)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-sub_n.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1184)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-submul_1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1185)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-tdiv_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1186)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom22_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1187)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom2_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1188)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom32_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1189)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom33_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1190)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom3_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1191)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom42_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1192)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom43_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1193)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom44_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1194)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom4_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1195)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom53_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1196)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom63_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1197)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom6_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1198)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom6h_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1199)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom8_sqr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1200)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom8h_mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1201)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_couple_handling.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1202)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_eval_dgr3_pm1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1203)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_eval_dgr3_pm2.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1204)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm1.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1205)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1206)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2exp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1207)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_eval_pm2rexp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1208)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_12pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1209)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_16pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1210)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_5pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1211)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_6pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1212)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_7pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1213)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpn-toom_interpolate_8pts.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1214)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-abs.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1215)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-add.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1216)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-add_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1217)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-and.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1218)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-aors.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1219)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-aors_ui.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1220)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-cdiv_q_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1221)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-cdiv_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1222)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-cfdiv_q_2exp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1223)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-clear.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1224)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-clrbit.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1225)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-cmp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1226)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-cmp_si.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1227)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-cmp_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1228)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-com.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1229)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-combit.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1230)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-export.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1231)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-fdiv_q_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1232)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-fdiv_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1233)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-fits_s.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1234)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-fits_sint.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1235)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-fits_uint.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1236)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-get_si.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1237)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-get_str.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1238)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-get_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1239)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-init.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1240)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-ior.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1241)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-mul.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1242)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-mul_2exp.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1243)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-mul_i.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1244)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-mul_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1245)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-neg.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1246)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-realloc.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1247)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-set.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1248)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-set_str.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1249)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-set_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1250)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-setbit.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1251)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-sizeinbase.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1252)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-sub.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1253)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-sub_ui.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1254)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-swap.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1255)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-tdiv_qr.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1256)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-tstbit.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1257)) ;
    temp_57.addAssign_operation (GALGAS_string ("mpz-xor.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1258)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-assert.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1259)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-bootstrap.c.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1260)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-errno.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1261)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-memory.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1262)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-mp_bpl.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1263)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-mp_clz_tab.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1264)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-mp_dv_tab.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1265)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-mp_minv_tab.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1266)) ;
    temp_57.addAssign_operation (GALGAS_string ("root-tal-notreent.c")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1268)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("GMP"), GALGAS_string ("gmp"), temp_57, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1139)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1277)) ;
    {
    GALGAS_stringset temp_58 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1293)) ;
    temp_58.addAssign_operation (GALGAS_string ("C_ErrorOut.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1283)) ;
    temp_58.addAssign_operation (GALGAS_string ("C_ErrorOut.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1284)) ;
    temp_58.addAssign_operation (GALGAS_string ("AC_OutputStream.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1285)) ;
    temp_58.addAssign_operation (GALGAS_string ("AC_OutputStream.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1286)) ;
    temp_58.addAssign_operation (GALGAS_string ("C_ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1287)) ;
    temp_58.addAssign_operation (GALGAS_string ("C_ConsoleOut.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1288)) ;
    temp_58.addAssign_operation (GALGAS_string ("C_ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1289)) ;
    temp_58.addAssign_operation (GALGAS_string ("C_ColoredConsole.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1290)) ;
    temp_58.addAssign_operation (GALGAS_string ("C_TCPSocketOut.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1291)) ;
    temp_58.addAssign_operation (GALGAS_string ("C_TCPSocketOut.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1293)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Streams"), GALGAS_string ("streams"), temp_58, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1279)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1302)) ;
    {
    GALGAS_stringset temp_59 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1322)) ;
    temp_59.addAssign_operation (GALGAS_string ("C_HTMLString.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1308)) ;
    temp_59.addAssign_operation (GALGAS_string ("C_HTMLString.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1309)) ;
    temp_59.addAssign_operation (GALGAS_string ("C_String.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1310)) ;
    temp_59.addAssign_operation (GALGAS_string ("C_String.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1311)) ;
    temp_59.addAssign_operation (GALGAS_string ("cUnicodeData.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1312)) ;
    temp_59.addAssign_operation (GALGAS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1313)) ;
    temp_59.addAssign_operation (GALGAS_string ("unicode_character_base.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1314)) ;
    temp_59.addAssign_operation (GALGAS_string ("unicode_character_cpp.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1315)) ;
    temp_59.addAssign_operation (GALGAS_string ("unicode_character_cpp.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1316)) ;
    temp_59.addAssign_operation (GALGAS_string ("unicode_character_implementation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1317)) ;
    temp_59.addAssign_operation (GALGAS_string ("unicode_character_m.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1318)) ;
    temp_59.addAssign_operation (GALGAS_string ("unicode_character_m.m")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1319)) ;
    temp_59.addAssign_operation (GALGAS_string ("unicode_string_routines.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1320)) ;
    temp_59.addAssign_operation (GALGAS_string ("unicode_string_routines.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1322)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Strings"), GALGAS_string ("strings"), temp_59, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1304)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1331)) ;
    {
    GALGAS_stringset temp_60 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1341)) ;
    temp_60.addAssign_operation (GALGAS_string ("C_DateTime.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1337)) ;
    temp_60.addAssign_operation (GALGAS_string ("C_DateTime.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1338)) ;
    temp_60.addAssign_operation (GALGAS_string ("C_Timer.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1339)) ;
    temp_60.addAssign_operation (GALGAS_string ("C_Timer.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1341)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Time"), GALGAS_string ("time"), temp_60, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1333)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1350)) ;
    {
    GALGAS_stringset temp_61 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1389)) ;
    temp_61.addAssign_operation (GALGAS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1356)) ;
    temp_61.addAssign_operation (GALGAS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1357)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_BigInt.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1358)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_BigInt.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1359)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_CRC32.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1360)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_CRC32.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1361)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_Data.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1362)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_Data.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1363)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1364)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_DirectedGraph.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1365)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1366)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1367)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_SharedObject.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1368)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_SharedObject.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1369)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_UIntSet.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1370)) ;
    temp_61.addAssign_operation (GALGAS_string ("C_UIntSet.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1371)) ;
    temp_61.addAssign_operation (GALGAS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1372)) ;
    temp_61.addAssign_operation (GALGAS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1373)) ;
    temp_61.addAssign_operation (GALGAS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1374)) ;
    temp_61.addAssign_operation (GALGAS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1375)) ;
    temp_61.addAssign_operation (GALGAS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1376)) ;
    temp_61.addAssign_operation (GALGAS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1377)) ;
    temp_61.addAssign_operation (GALGAS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1378)) ;
    temp_61.addAssign_operation (GALGAS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1379)) ;
    temp_61.addAssign_operation (GALGAS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1380)) ;
    temp_61.addAssign_operation (GALGAS_string ("md5.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1381)) ;
    temp_61.addAssign_operation (GALGAS_string ("MF_Assert.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1382)) ;
    temp_61.addAssign_operation (GALGAS_string ("MF_Assert.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1383)) ;
    temp_61.addAssign_operation (GALGAS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1384)) ;
    temp_61.addAssign_operation (GALGAS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1385)) ;
    temp_61.addAssign_operation (GALGAS_string ("PMUInt128.cpp")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1386)) ;
    temp_61.addAssign_operation (GALGAS_string ("PMUInt128.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1387)) ;
    temp_61.addAssign_operation (GALGAS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1389)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Utilities"), GALGAS_string ("utilities"), temp_61, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_groupRef_39252, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1352)) ;
    }
    var_libpmReferenceGroupList_39360.addAssign_operation (var_groupRef_39252  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1398)) ;
    GALGAS_string var_libpmGroupRef_57571 ;
    {
    extensionSetter_addGroup (var_xcodeProject_33540, GALGAS_string ("libpm"), GALGAS_string ("../build/libpm"), var_libpmReferenceGroupList_39360, var_libpmGroupRef_57571, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1400)) ;
    }
    {
    extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_libpmGroupRef_57571, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1401)) ;
    }
    GALGAS_string var_resourcesGroupRef_58102 ;
    {
    GALGAS_stringset temp_62 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1408)) ;
    temp_62.addAssign_operation (GALGAS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1408)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Resources"), GALGAS_string ("."), temp_62, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_resourcesGroupRef_58102, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1403)) ;
    }
    {
    extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_resourcesGroupRef_58102, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1417)) ;
    }
    GALGAS_string var_userResourcesGroupRef_58683 ;
    {
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("User Resources"), GALGAS_string ("userResources"), GALGAS_stringset::constructor_setWithStringList (var_resourceFiles_33127  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1422)), var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_userResourcesGroupRef_58683, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1419)) ;
    }
    {
    extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_userResourcesGroupRef_58683, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1431)) ;
    }
    GALGAS_string var_frameworkGroupRef_59304 ;
    {
    GALGAS_stringset temp_63 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1439)) ;
    temp_63.addAssign_operation (GALGAS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1437)) ;
    temp_63.addAssign_operation (GALGAS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1439)) ;
    extensionSetter_addGroupWithFiles (var_xcodeProject_33540, GALGAS_string ("Frameworks for App"), GALGAS_string ("/System/Library/Frameworks"), temp_63, var_buildCFileRefListForTool_37167, var_buildCppFileRefListForTool_37215, var_m_5F_FileRefList_37250, var_mm_5F_FileRefList_37286, var_frameworksFileRefList_37329, var_resourceFileBuildRefs_37372, var_frameworkGroupRef_59304, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1433)) ;
    }
    {
    extensionSetter_placeGroupAsMainGroup (var_xcodeProject_33540, var_frameworkGroupRef_59304, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1448)) ;
    }
    GALGAS_string var_releaseTargetRef_59896 ;
    GALGAS_string var_releaseProductFileRef_59944 ;
    {
    GALGAS_stringlist temp_64 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1459)) ;
    temp_64.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 2")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1456)) ;
    temp_64.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1457)) ;
    temp_64.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1459)) ;
    extensionSetter_addToolTarget (var_xcodeProject_33540, constinArgument_inTargetName.add_operation (GALGAS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1451)), constinArgument_inTargetName, var_buildCFileRefListForTool_37167.add_operation (var_buildCppFileRefListForTool_37215, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1453)).add_operation (var_mm_5F_FileRefList_37286, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1453)), var_toolFrameworksFileRefList_38133, temp_64, var_releaseTargetRef_59896, var_releaseProductFileRef_59944, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1450)) ;
    }
    GALGAS_string var_debugTargetRef_60500 ;
    GALGAS_string var_debugProductFileRef_60546 ;
    {
    GALGAS_stringlist temp_65 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1474)) ;
    temp_65.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1470)) ;
    temp_65.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1471)) ;
    temp_65.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1472)) ;
    temp_65.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1474)) ;
    extensionSetter_addToolTarget (var_xcodeProject_33540, constinArgument_inTargetName.add_operation (GALGAS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1465)), constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1466)), var_buildCFileRefListForTool_37167.add_operation (var_buildCppFileRefListForTool_37215, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1467)).add_operation (var_mm_5F_FileRefList_37286, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1467)), var_toolFrameworksFileRefList_38133, temp_65, var_debugTargetRef_60500, var_debugProductFileRef_60546, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1464)) ;
    }
    {
    GALGAS_stringlist temp_66 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1488)) ;
    temp_66.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1486)) ;
    temp_66.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1488)) ;
    GALGAS_stringlist temp_67 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1489)) ;
    temp_67.addAssign_operation (var_releaseTargetRef_59896  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1489)) ;
    temp_67.addAssign_operation (var_debugTargetRef_60500  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1489)) ;
    GALGAS__32_stringlist temp_68 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1490)) ;
    temp_68.addAssign_operation (var_releaseProductFileRef_59944, constinArgument_inTargetName  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1490)) ;
    temp_68.addAssign_operation (var_debugProductFileRef_60546, constinArgument_inTargetName.add_operation (GALGAS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1490))  COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1490)) ;
    GALGAS_string joker_61286 ; // Joker input parameter
    extensionSetter_addAppTarget (var_xcodeProject_33540, GALGAS_string ("Cocoa ").add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1480)), GALGAS_string ("Cocoa").add_operation (constinArgument_inTargetName.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("galgas3TargetGeneration.galgas", 1481)), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1481)), var_m_5F_FileRefList_37250.add_operation (var_m_5F_HandCodedSourceFileRefForAppList_35809, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1482)), var_frameworksFileRefList_37329.add_operation (var_appFrameworksFileRefList_36533, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1483)), var_resourceFileBuildRefs_37372.add_operation (var_m_5F_HandCodedResourceFileRefForAppList_35867, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1484)), temp_66, temp_67, temp_68, joker_61286, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1479)) ;
    }
    extensionMethod_generateAtPath (var_xcodeProject_33540, var_dir_26463.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1495)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1495)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1495)), var_newIntermediateFilePath_33256, inCompiler COMMA_SOURCE_FILE ("galgas3TargetGeneration.galgas", 1494)) ;
  }
}


